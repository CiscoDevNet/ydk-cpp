
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_lsd_oper_5.hpp"
#include "Cisco_IOS_XR_mpls_lsd_oper_6.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_lsd_oper {

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::RewriteId_()
    :
    rewrite_id_type{YType::enumeration, "rewrite-id-type"}
        ,
    label_context(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext>())
    , local_label_rewrite(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite>())
{
    label_context->parent = this;
    local_label_rewrite->parent = this;

    yang_name = "rewrite-id"; yang_parent_name = "rewrite-id"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::~RewriteId_()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::has_data() const
{
    if (is_presence_container) return true;
    return rewrite_id_type.is_set
	|| (label_context !=  nullptr && label_context->has_data())
	|| (local_label_rewrite !=  nullptr && local_label_rewrite->has_data());
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rewrite_id_type.yfilter)
	|| (label_context !=  nullptr && label_context->has_operation())
	|| (local_label_rewrite !=  nullptr && local_label_rewrite->has_operation());
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rewrite_id_type.is_set || is_set(rewrite_id_type.yfilter)) leaf_name_data.push_back(rewrite_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-context")
    {
        if(label_context == nullptr)
        {
            label_context = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext>();
        }
        return label_context;
    }

    if(child_yang_name == "local-label-rewrite")
    {
        if(local_label_rewrite == nullptr)
        {
            local_label_rewrite = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite>();
        }
        return local_label_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(label_context != nullptr)
    {
        _children["label-context"] = label_context;
    }

    if(local_label_rewrite != nullptr)
    {
        _children["local-label-rewrite"] = local_label_rewrite;
    }

    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rewrite-id-type")
    {
        rewrite_id_type = value;
        rewrite_id_type.value_namespace = name_space;
        rewrite_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rewrite-id-type")
    {
        rewrite_id_type.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-context" || name == "local-label-rewrite" || name == "rewrite-id-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelContext()
    :
    label_context_type{YType::enumeration, "label-context-type"}
        ,
    ipv4_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4Data>())
    , ipv6_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6Data>())
    , tev4_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data>())
    , ipv4l3vpn_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData>())
    , ipv6l3vpn_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData>())
    , vrf_l3vpn_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3vpnData>())
    , cev4l3vpn_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData>())
    , cev6l3vpn_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData>())
    , pseudowire_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireData>())
    , label_block_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockData>())
    , ip_sub_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::IpSubData>())
    , tev4p2mp_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4p2mpData>())
    , mld_pv4_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::MldPv4Data>())
    , pseudowire_head_end_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData>())
    , tp_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData>())
    , generic_routing_encapsulation(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation>())
    , ipv6_generic_routing_encapsulation(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation>())
    , evpn_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::EvpnData>())
    , ipv4blb_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4blbData>())
    , ipv6blb_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6blbData>())
    , pi_mi_pmsi_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMiPmsiData>())
    , pi_ms_pmsi_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMsPmsiData>())
    , next_hop_set_l3vpn(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn>())
    , sr_prefix_segment(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment>())
    , sr_adj_segment_ipv4(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4>())
    , sr_adj_segment_ipv6(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6>())
    , label_block_srgb_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData>())
    , te_binding(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TeBinding>())
    , label_block_srlb_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData>())
{
    ipv4_data->parent = this;
    ipv6_data->parent = this;
    tev4_data->parent = this;
    ipv4l3vpn_data->parent = this;
    ipv6l3vpn_data->parent = this;
    vrf_l3vpn_data->parent = this;
    cev4l3vpn_data->parent = this;
    cev6l3vpn_data->parent = this;
    pseudowire_data->parent = this;
    label_block_data->parent = this;
    ip_sub_data->parent = this;
    tev4p2mp_data->parent = this;
    mld_pv4_data->parent = this;
    pseudowire_head_end_data->parent = this;
    tp_data->parent = this;
    generic_routing_encapsulation->parent = this;
    ipv6_generic_routing_encapsulation->parent = this;
    evpn_data->parent = this;
    ipv4blb_data->parent = this;
    ipv6blb_data->parent = this;
    pi_mi_pmsi_data->parent = this;
    pi_ms_pmsi_data->parent = this;
    next_hop_set_l3vpn->parent = this;
    sr_prefix_segment->parent = this;
    sr_adj_segment_ipv4->parent = this;
    sr_adj_segment_ipv6->parent = this;
    label_block_srgb_data->parent = this;
    te_binding->parent = this;
    label_block_srlb_data->parent = this;

    yang_name = "label-context"; yang_parent_name = "rewrite-id"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::~LabelContext()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::has_data() const
{
    if (is_presence_container) return true;
    return label_context_type.is_set
	|| (ipv4_data !=  nullptr && ipv4_data->has_data())
	|| (ipv6_data !=  nullptr && ipv6_data->has_data())
	|| (tev4_data !=  nullptr && tev4_data->has_data())
	|| (ipv4l3vpn_data !=  nullptr && ipv4l3vpn_data->has_data())
	|| (ipv6l3vpn_data !=  nullptr && ipv6l3vpn_data->has_data())
	|| (vrf_l3vpn_data !=  nullptr && vrf_l3vpn_data->has_data())
	|| (cev4l3vpn_data !=  nullptr && cev4l3vpn_data->has_data())
	|| (cev6l3vpn_data !=  nullptr && cev6l3vpn_data->has_data())
	|| (pseudowire_data !=  nullptr && pseudowire_data->has_data())
	|| (label_block_data !=  nullptr && label_block_data->has_data())
	|| (ip_sub_data !=  nullptr && ip_sub_data->has_data())
	|| (tev4p2mp_data !=  nullptr && tev4p2mp_data->has_data())
	|| (mld_pv4_data !=  nullptr && mld_pv4_data->has_data())
	|| (pseudowire_head_end_data !=  nullptr && pseudowire_head_end_data->has_data())
	|| (tp_data !=  nullptr && tp_data->has_data())
	|| (generic_routing_encapsulation !=  nullptr && generic_routing_encapsulation->has_data())
	|| (ipv6_generic_routing_encapsulation !=  nullptr && ipv6_generic_routing_encapsulation->has_data())
	|| (evpn_data !=  nullptr && evpn_data->has_data())
	|| (ipv4blb_data !=  nullptr && ipv4blb_data->has_data())
	|| (ipv6blb_data !=  nullptr && ipv6blb_data->has_data())
	|| (pi_mi_pmsi_data !=  nullptr && pi_mi_pmsi_data->has_data())
	|| (pi_ms_pmsi_data !=  nullptr && pi_ms_pmsi_data->has_data())
	|| (next_hop_set_l3vpn !=  nullptr && next_hop_set_l3vpn->has_data())
	|| (sr_prefix_segment !=  nullptr && sr_prefix_segment->has_data())
	|| (sr_adj_segment_ipv4 !=  nullptr && sr_adj_segment_ipv4->has_data())
	|| (sr_adj_segment_ipv6 !=  nullptr && sr_adj_segment_ipv6->has_data())
	|| (label_block_srgb_data !=  nullptr && label_block_srgb_data->has_data())
	|| (te_binding !=  nullptr && te_binding->has_data())
	|| (label_block_srlb_data !=  nullptr && label_block_srlb_data->has_data());
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_context_type.yfilter)
	|| (ipv4_data !=  nullptr && ipv4_data->has_operation())
	|| (ipv6_data !=  nullptr && ipv6_data->has_operation())
	|| (tev4_data !=  nullptr && tev4_data->has_operation())
	|| (ipv4l3vpn_data !=  nullptr && ipv4l3vpn_data->has_operation())
	|| (ipv6l3vpn_data !=  nullptr && ipv6l3vpn_data->has_operation())
	|| (vrf_l3vpn_data !=  nullptr && vrf_l3vpn_data->has_operation())
	|| (cev4l3vpn_data !=  nullptr && cev4l3vpn_data->has_operation())
	|| (cev6l3vpn_data !=  nullptr && cev6l3vpn_data->has_operation())
	|| (pseudowire_data !=  nullptr && pseudowire_data->has_operation())
	|| (label_block_data !=  nullptr && label_block_data->has_operation())
	|| (ip_sub_data !=  nullptr && ip_sub_data->has_operation())
	|| (tev4p2mp_data !=  nullptr && tev4p2mp_data->has_operation())
	|| (mld_pv4_data !=  nullptr && mld_pv4_data->has_operation())
	|| (pseudowire_head_end_data !=  nullptr && pseudowire_head_end_data->has_operation())
	|| (tp_data !=  nullptr && tp_data->has_operation())
	|| (generic_routing_encapsulation !=  nullptr && generic_routing_encapsulation->has_operation())
	|| (ipv6_generic_routing_encapsulation !=  nullptr && ipv6_generic_routing_encapsulation->has_operation())
	|| (evpn_data !=  nullptr && evpn_data->has_operation())
	|| (ipv4blb_data !=  nullptr && ipv4blb_data->has_operation())
	|| (ipv6blb_data !=  nullptr && ipv6blb_data->has_operation())
	|| (pi_mi_pmsi_data !=  nullptr && pi_mi_pmsi_data->has_operation())
	|| (pi_ms_pmsi_data !=  nullptr && pi_ms_pmsi_data->has_operation())
	|| (next_hop_set_l3vpn !=  nullptr && next_hop_set_l3vpn->has_operation())
	|| (sr_prefix_segment !=  nullptr && sr_prefix_segment->has_operation())
	|| (sr_adj_segment_ipv4 !=  nullptr && sr_adj_segment_ipv4->has_operation())
	|| (sr_adj_segment_ipv6 !=  nullptr && sr_adj_segment_ipv6->has_operation())
	|| (label_block_srgb_data !=  nullptr && label_block_srgb_data->has_operation())
	|| (te_binding !=  nullptr && te_binding->has_operation())
	|| (label_block_srlb_data !=  nullptr && label_block_srlb_data->has_operation());
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_context_type.is_set || is_set(label_context_type.yfilter)) leaf_name_data.push_back(label_context_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-data")
    {
        if(ipv4_data == nullptr)
        {
            ipv4_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4Data>();
        }
        return ipv4_data;
    }

    if(child_yang_name == "ipv6-data")
    {
        if(ipv6_data == nullptr)
        {
            ipv6_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6Data>();
        }
        return ipv6_data;
    }

    if(child_yang_name == "tev4-data")
    {
        if(tev4_data == nullptr)
        {
            tev4_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data>();
        }
        return tev4_data;
    }

    if(child_yang_name == "ipv4l3vpn-data")
    {
        if(ipv4l3vpn_data == nullptr)
        {
            ipv4l3vpn_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData>();
        }
        return ipv4l3vpn_data;
    }

    if(child_yang_name == "ipv6l3vpn-data")
    {
        if(ipv6l3vpn_data == nullptr)
        {
            ipv6l3vpn_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData>();
        }
        return ipv6l3vpn_data;
    }

    if(child_yang_name == "vrf-l3vpn-data")
    {
        if(vrf_l3vpn_data == nullptr)
        {
            vrf_l3vpn_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3vpnData>();
        }
        return vrf_l3vpn_data;
    }

    if(child_yang_name == "cev4l3vpn-data")
    {
        if(cev4l3vpn_data == nullptr)
        {
            cev4l3vpn_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData>();
        }
        return cev4l3vpn_data;
    }

    if(child_yang_name == "cev6l3vpn-data")
    {
        if(cev6l3vpn_data == nullptr)
        {
            cev6l3vpn_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData>();
        }
        return cev6l3vpn_data;
    }

    if(child_yang_name == "pseudowire-data")
    {
        if(pseudowire_data == nullptr)
        {
            pseudowire_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireData>();
        }
        return pseudowire_data;
    }

    if(child_yang_name == "label-block-data")
    {
        if(label_block_data == nullptr)
        {
            label_block_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockData>();
        }
        return label_block_data;
    }

    if(child_yang_name == "ip-sub-data")
    {
        if(ip_sub_data == nullptr)
        {
            ip_sub_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::IpSubData>();
        }
        return ip_sub_data;
    }

    if(child_yang_name == "tev4p2mp-data")
    {
        if(tev4p2mp_data == nullptr)
        {
            tev4p2mp_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4p2mpData>();
        }
        return tev4p2mp_data;
    }

    if(child_yang_name == "mld-pv4-data")
    {
        if(mld_pv4_data == nullptr)
        {
            mld_pv4_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::MldPv4Data>();
        }
        return mld_pv4_data;
    }

    if(child_yang_name == "pseudowire-head-end-data")
    {
        if(pseudowire_head_end_data == nullptr)
        {
            pseudowire_head_end_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData>();
        }
        return pseudowire_head_end_data;
    }

    if(child_yang_name == "tp-data")
    {
        if(tp_data == nullptr)
        {
            tp_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData>();
        }
        return tp_data;
    }

    if(child_yang_name == "generic-routing-encapsulation")
    {
        if(generic_routing_encapsulation == nullptr)
        {
            generic_routing_encapsulation = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation>();
        }
        return generic_routing_encapsulation;
    }

    if(child_yang_name == "ipv6-generic-routing-encapsulation")
    {
        if(ipv6_generic_routing_encapsulation == nullptr)
        {
            ipv6_generic_routing_encapsulation = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation>();
        }
        return ipv6_generic_routing_encapsulation;
    }

    if(child_yang_name == "evpn-data")
    {
        if(evpn_data == nullptr)
        {
            evpn_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::EvpnData>();
        }
        return evpn_data;
    }

    if(child_yang_name == "ipv4blb-data")
    {
        if(ipv4blb_data == nullptr)
        {
            ipv4blb_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4blbData>();
        }
        return ipv4blb_data;
    }

    if(child_yang_name == "ipv6blb-data")
    {
        if(ipv6blb_data == nullptr)
        {
            ipv6blb_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6blbData>();
        }
        return ipv6blb_data;
    }

    if(child_yang_name == "pi-mi-pmsi-data")
    {
        if(pi_mi_pmsi_data == nullptr)
        {
            pi_mi_pmsi_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMiPmsiData>();
        }
        return pi_mi_pmsi_data;
    }

    if(child_yang_name == "pi-ms-pmsi-data")
    {
        if(pi_ms_pmsi_data == nullptr)
        {
            pi_ms_pmsi_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMsPmsiData>();
        }
        return pi_ms_pmsi_data;
    }

    if(child_yang_name == "next-hop-set-l3vpn")
    {
        if(next_hop_set_l3vpn == nullptr)
        {
            next_hop_set_l3vpn = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn>();
        }
        return next_hop_set_l3vpn;
    }

    if(child_yang_name == "sr-prefix-segment")
    {
        if(sr_prefix_segment == nullptr)
        {
            sr_prefix_segment = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment>();
        }
        return sr_prefix_segment;
    }

    if(child_yang_name == "sr-adj-segment-ipv4")
    {
        if(sr_adj_segment_ipv4 == nullptr)
        {
            sr_adj_segment_ipv4 = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4>();
        }
        return sr_adj_segment_ipv4;
    }

    if(child_yang_name == "sr-adj-segment-ipv6")
    {
        if(sr_adj_segment_ipv6 == nullptr)
        {
            sr_adj_segment_ipv6 = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6>();
        }
        return sr_adj_segment_ipv6;
    }

    if(child_yang_name == "label-block-srgb-data")
    {
        if(label_block_srgb_data == nullptr)
        {
            label_block_srgb_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData>();
        }
        return label_block_srgb_data;
    }

    if(child_yang_name == "te-binding")
    {
        if(te_binding == nullptr)
        {
            te_binding = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TeBinding>();
        }
        return te_binding;
    }

    if(child_yang_name == "label-block-srlb-data")
    {
        if(label_block_srlb_data == nullptr)
        {
            label_block_srlb_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData>();
        }
        return label_block_srlb_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_data != nullptr)
    {
        _children["ipv4-data"] = ipv4_data;
    }

    if(ipv6_data != nullptr)
    {
        _children["ipv6-data"] = ipv6_data;
    }

    if(tev4_data != nullptr)
    {
        _children["tev4-data"] = tev4_data;
    }

    if(ipv4l3vpn_data != nullptr)
    {
        _children["ipv4l3vpn-data"] = ipv4l3vpn_data;
    }

    if(ipv6l3vpn_data != nullptr)
    {
        _children["ipv6l3vpn-data"] = ipv6l3vpn_data;
    }

    if(vrf_l3vpn_data != nullptr)
    {
        _children["vrf-l3vpn-data"] = vrf_l3vpn_data;
    }

    if(cev4l3vpn_data != nullptr)
    {
        _children["cev4l3vpn-data"] = cev4l3vpn_data;
    }

    if(cev6l3vpn_data != nullptr)
    {
        _children["cev6l3vpn-data"] = cev6l3vpn_data;
    }

    if(pseudowire_data != nullptr)
    {
        _children["pseudowire-data"] = pseudowire_data;
    }

    if(label_block_data != nullptr)
    {
        _children["label-block-data"] = label_block_data;
    }

    if(ip_sub_data != nullptr)
    {
        _children["ip-sub-data"] = ip_sub_data;
    }

    if(tev4p2mp_data != nullptr)
    {
        _children["tev4p2mp-data"] = tev4p2mp_data;
    }

    if(mld_pv4_data != nullptr)
    {
        _children["mld-pv4-data"] = mld_pv4_data;
    }

    if(pseudowire_head_end_data != nullptr)
    {
        _children["pseudowire-head-end-data"] = pseudowire_head_end_data;
    }

    if(tp_data != nullptr)
    {
        _children["tp-data"] = tp_data;
    }

    if(generic_routing_encapsulation != nullptr)
    {
        _children["generic-routing-encapsulation"] = generic_routing_encapsulation;
    }

    if(ipv6_generic_routing_encapsulation != nullptr)
    {
        _children["ipv6-generic-routing-encapsulation"] = ipv6_generic_routing_encapsulation;
    }

    if(evpn_data != nullptr)
    {
        _children["evpn-data"] = evpn_data;
    }

    if(ipv4blb_data != nullptr)
    {
        _children["ipv4blb-data"] = ipv4blb_data;
    }

    if(ipv6blb_data != nullptr)
    {
        _children["ipv6blb-data"] = ipv6blb_data;
    }

    if(pi_mi_pmsi_data != nullptr)
    {
        _children["pi-mi-pmsi-data"] = pi_mi_pmsi_data;
    }

    if(pi_ms_pmsi_data != nullptr)
    {
        _children["pi-ms-pmsi-data"] = pi_ms_pmsi_data;
    }

    if(next_hop_set_l3vpn != nullptr)
    {
        _children["next-hop-set-l3vpn"] = next_hop_set_l3vpn;
    }

    if(sr_prefix_segment != nullptr)
    {
        _children["sr-prefix-segment"] = sr_prefix_segment;
    }

    if(sr_adj_segment_ipv4 != nullptr)
    {
        _children["sr-adj-segment-ipv4"] = sr_adj_segment_ipv4;
    }

    if(sr_adj_segment_ipv6 != nullptr)
    {
        _children["sr-adj-segment-ipv6"] = sr_adj_segment_ipv6;
    }

    if(label_block_srgb_data != nullptr)
    {
        _children["label-block-srgb-data"] = label_block_srgb_data;
    }

    if(te_binding != nullptr)
    {
        _children["te-binding"] = te_binding;
    }

    if(label_block_srlb_data != nullptr)
    {
        _children["label-block-srlb-data"] = label_block_srlb_data;
    }

    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-context-type")
    {
        label_context_type = value;
        label_context_type.value_namespace = name_space;
        label_context_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-context-type")
    {
        label_context_type.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-data" || name == "ipv6-data" || name == "tev4-data" || name == "ipv4l3vpn-data" || name == "ipv6l3vpn-data" || name == "vrf-l3vpn-data" || name == "cev4l3vpn-data" || name == "cev6l3vpn-data" || name == "pseudowire-data" || name == "label-block-data" || name == "ip-sub-data" || name == "tev4p2mp-data" || name == "mld-pv4-data" || name == "pseudowire-head-end-data" || name == "tp-data" || name == "generic-routing-encapsulation" || name == "ipv6-generic-routing-encapsulation" || name == "evpn-data" || name == "ipv4blb-data" || name == "ipv6blb-data" || name == "pi-mi-pmsi-data" || name == "pi-ms-pmsi-data" || name == "next-hop-set-l3vpn" || name == "sr-prefix-segment" || name == "sr-adj-segment-ipv4" || name == "sr-adj-segment-ipv6" || name == "label-block-srgb-data" || name == "te-binding" || name == "label-block-srlb-data" || name == "label-context-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4Data::Ipv4Data()
    :
    table_id{YType::uint32, "table-id"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    security_id{YType::uint32, "security-id"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "ipv4-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4Data::~Ipv4Data()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4Data::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| security_id.is_set
	|| vrf_name.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(security_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
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
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "prefix" || name == "prefix-length" || name == "security-id" || name == "vrf-name")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6Data::Ipv6Data()
    :
    table_id{YType::uint32, "table-id"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    security_id{YType::uint32, "security-id"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "ipv6-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6Data::~Ipv6Data()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6Data::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| security_id.is_set
	|| vrf_name.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(security_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
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
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "prefix" || name == "prefix-length" || name == "security-id" || name == "vrf-name")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data::Tev4Data()
    :
    table_id{YType::uint32, "table-id"},
    tunnel_source{YType::str, "tunnel-source"},
    tunnel_dest{YType::str, "tunnel-dest"},
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_id_extension{YType::uint32, "tunnel-id-extension"},
    tunnel_lsp_id{YType::uint32, "tunnel-lsp-id"},
    is_srte{YType::int32, "is-srte"}
{

    yang_name = "tev4-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data::~Tev4Data()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| tunnel_source.is_set
	|| tunnel_dest.is_set
	|| tunnel_id.is_set
	|| tunnel_id_extension.is_set
	|| tunnel_lsp_id.is_set
	|| is_srte.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(tunnel_source.yfilter)
	|| ydk::is_set(tunnel_dest.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id_extension.yfilter)
	|| ydk::is_set(tunnel_lsp_id.yfilter)
	|| ydk::is_set(is_srte.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tev4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (tunnel_source.is_set || is_set(tunnel_source.yfilter)) leaf_name_data.push_back(tunnel_source.get_name_leafdata());
    if (tunnel_dest.is_set || is_set(tunnel_dest.yfilter)) leaf_name_data.push_back(tunnel_dest.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_id_extension.is_set || is_set(tunnel_id_extension.yfilter)) leaf_name_data.push_back(tunnel_id_extension.get_name_leafdata());
    if (tunnel_lsp_id.is_set || is_set(tunnel_lsp_id.yfilter)) leaf_name_data.push_back(tunnel_lsp_id.get_name_leafdata());
    if (is_srte.is_set || is_set(is_srte.yfilter)) leaf_name_data.push_back(is_srte.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-source")
    {
        tunnel_source = value;
        tunnel_source.value_namespace = name_space;
        tunnel_source.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-srte")
    {
        is_srte = value;
        is_srte.value_namespace = name_space;
        is_srte.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-source")
    {
        tunnel_source.yfilter = yfilter;
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
    if(value_path == "is-srte")
    {
        is_srte.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "tunnel-source" || name == "tunnel-dest" || name == "tunnel-id" || name == "tunnel-id-extension" || name == "tunnel-lsp-id" || name == "is-srte")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::Ipv4l3vpnData()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    route_distinguisher{YType::uint64, "route-distinguisher"}
{

    yang_name = "ipv4l3vpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::~Ipv4l3vpnData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| route_distinguisher.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "route-distinguisher")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::Ipv6l3vpnData()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    route_distinguisher{YType::uint64, "route-distinguisher"}
{

    yang_name = "ipv6l3vpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::~Ipv6l3vpnData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| route_distinguisher.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "route-distinguisher")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::VrfL3vpnData()
    :
    table_id{YType::uint32, "table-id"},
    security_id{YType::uint32, "security-id"}
{

    yang_name = "vrf-l3vpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::~VrfL3vpnData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| security_id.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(security_id.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-id")
    {
        security_id = value;
        security_id.value_namespace = name_space;
        security_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "security-id")
    {
        security_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "security-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::Cev4l3vpnData()
    :
    table_id{YType::uint32, "table-id"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    security_id{YType::uint32, "security-id"}
{

    yang_name = "cev4l3vpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::~Cev4l3vpnData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| ipv4_next_hop.is_set
	|| security_id.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(ipv4_next_hop.yfilter)
	|| ydk::is_set(security_id.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cev4l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.yfilter)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop.yfilter = yfilter;
    }
    if(value_path == "security-id")
    {
        security_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "ipv4-next-hop" || name == "security-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::Cev6l3vpnData()
    :
    table_id{YType::uint32, "table-id"},
    ipv6_next_hop{YType::str, "ipv6-next-hop"},
    security_id{YType::uint32, "security-id"}
{

    yang_name = "cev6l3vpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::~Cev6l3vpnData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| ipv6_next_hop.is_set
	|| security_id.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(ipv6_next_hop.yfilter)
	|| ydk::is_set(security_id.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cev6l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (ipv6_next_hop.is_set || is_set(ipv6_next_hop.yfilter)) leaf_name_data.push_back(ipv6_next_hop.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "ipv6-next-hop")
    {
        ipv6_next_hop.yfilter = yfilter;
    }
    if(value_path == "security-id")
    {
        security_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "ipv6-next-hop" || name == "security-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireData::PseudowireData()
    :
    prefix{YType::str, "prefix"},
    pseudowire_id{YType::uint64, "pseudowire-id"},
    remote_l2_router_id{YType::uint32, "remote-l2-router-id"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "pseudowire-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireData::~PseudowireData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireData::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| pseudowire_id.is_set
	|| remote_l2_router_id.is_set
	|| subinterface.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| ydk::is_set(remote_l2_router_id.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (remote_l2_router_id.is_set || is_set(remote_l2_router_id.yfilter)) leaf_name_data.push_back(remote_l2_router_id.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "pseudowire-id" || name == "remote-l2-router-id" || name == "subinterface")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockData::LabelBlockData()
    :
    service{YType::uint8, "service"},
    vpn_id{YType::uint16, "vpn-id"},
    edge_id{YType::uint16, "edge-id"},
    offset{YType::uint32, "offset"},
    size{YType::uint32, "size"}
{

    yang_name = "label-block-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockData::~LabelBlockData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockData::has_data() const
{
    if (is_presence_container) return true;
    return service.is_set
	|| vpn_id.is_set
	|| edge_id.is_set
	|| offset.is_set
	|| size.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service.yfilter)
	|| ydk::is_set(vpn_id.yfilter)
	|| ydk::is_set(edge_id.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());
    if (edge_id.is_set || is_set(edge_id.yfilter)) leaf_name_data.push_back(edge_id.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service")
    {
        service = value;
        service.value_namespace = name_space;
        service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service")
    {
        service.yfilter = yfilter;
    }
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
    if(value_path == "edge-id")
    {
        edge_id.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service" || name == "vpn-id" || name == "edge-id" || name == "offset" || name == "size")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::IpSubData::IpSubData()
    :
    table_id{YType::uint32, "table-id"},
    parent_interface{YType::str, "parent-interface"}
{

    yang_name = "ip-sub-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::IpSubData::~IpSubData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::IpSubData::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| parent_interface.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::IpSubData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(parent_interface.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::IpSubData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-sub-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::IpSubData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (parent_interface.is_set || is_set(parent_interface.yfilter)) leaf_name_data.push_back(parent_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::IpSubData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::IpSubData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::IpSubData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface")
    {
        parent_interface = value;
        parent_interface.value_namespace = name_space;
        parent_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::IpSubData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "parent-interface")
    {
        parent_interface.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::IpSubData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "parent-interface")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::Tev4p2mpData()
    :
    table_id{YType::uint32, "table-id"},
    tunnel_source{YType::str, "tunnel-source"},
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_id_extension{YType::uint32, "tunnel-id-extension"},
    tunnel_lsp_id{YType::uint32, "tunnel-lsp-id"},
    previous_hop{YType::str, "previous-hop"}
{

    yang_name = "tev4p2mp-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::~Tev4p2mpData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| tunnel_source.is_set
	|| p2mp_id.is_set
	|| tunnel_id.is_set
	|| tunnel_id_extension.is_set
	|| tunnel_lsp_id.is_set
	|| previous_hop.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(tunnel_source.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id_extension.yfilter)
	|| ydk::is_set(tunnel_lsp_id.yfilter)
	|| ydk::is_set(previous_hop.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tev4p2mp-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (tunnel_source.is_set || is_set(tunnel_source.yfilter)) leaf_name_data.push_back(tunnel_source.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_id_extension.is_set || is_set(tunnel_id_extension.yfilter)) leaf_name_data.push_back(tunnel_id_extension.get_name_leafdata());
    if (tunnel_lsp_id.is_set || is_set(tunnel_lsp_id.yfilter)) leaf_name_data.push_back(tunnel_lsp_id.get_name_leafdata());
    if (previous_hop.is_set || is_set(previous_hop.yfilter)) leaf_name_data.push_back(previous_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-source")
    {
        tunnel_source = value;
        tunnel_source.value_namespace = name_space;
        tunnel_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "previous-hop")
    {
        previous_hop = value;
        previous_hop.value_namespace = name_space;
        previous_hop.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-source")
    {
        tunnel_source.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
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
    if(value_path == "previous-hop")
    {
        previous_hop.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "tunnel-source" || name == "p2mp-id" || name == "tunnel-id" || name == "tunnel-id-extension" || name == "tunnel-lsp-id" || name == "previous-hop")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::MldPv4Data::MldPv4Data()
    :
    table_id{YType::uint32, "table-id"},
    type{YType::uint16, "type"},
    lsm_id{YType::uint32, "lsm-id"},
    peer_lsrid{YType::str, "peer-lsrid"},
    peer_label_space_id{YType::uint16, "peer-label-space-id"}
{

    yang_name = "mld-pv4-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::MldPv4Data::~MldPv4Data()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::MldPv4Data::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| type.is_set
	|| lsm_id.is_set
	|| peer_lsrid.is_set
	|| peer_label_space_id.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::MldPv4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(lsm_id.yfilter)
	|| ydk::is_set(peer_lsrid.yfilter)
	|| ydk::is_set(peer_label_space_id.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::MldPv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld-pv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::MldPv4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (lsm_id.is_set || is_set(lsm_id.yfilter)) leaf_name_data.push_back(lsm_id.get_name_leafdata());
    if (peer_lsrid.is_set || is_set(peer_lsrid.yfilter)) leaf_name_data.push_back(peer_lsrid.get_name_leafdata());
    if (peer_label_space_id.is_set || is_set(peer_label_space_id.yfilter)) leaf_name_data.push_back(peer_label_space_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::MldPv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::MldPv4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::MldPv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "lsm-id")
    {
        lsm_id = value;
        lsm_id.value_namespace = name_space;
        lsm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-lsrid")
    {
        peer_lsrid = value;
        peer_lsrid.value_namespace = name_space;
        peer_lsrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-label-space-id")
    {
        peer_label_space_id = value;
        peer_label_space_id.value_namespace = name_space;
        peer_label_space_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::MldPv4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "lsm-id")
    {
        lsm_id.yfilter = yfilter;
    }
    if(value_path == "peer-lsrid")
    {
        peer_lsrid.yfilter = yfilter;
    }
    if(value_path == "peer-label-space-id")
    {
        peer_label_space_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::MldPv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "type" || name == "lsm-id" || name == "peer-lsrid" || name == "peer-label-space-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::PseudowireHeadEndData()
    :
    pwhe_intf{YType::str, "pwhe-intf"}
{

    yang_name = "pseudowire-head-end-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::~PseudowireHeadEndData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::has_data() const
{
    if (is_presence_container) return true;
    return pwhe_intf.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pwhe_intf.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-head-end-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pwhe_intf.is_set || is_set(pwhe_intf.yfilter)) leaf_name_data.push_back(pwhe_intf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pwhe-intf")
    {
        pwhe_intf = value;
        pwhe_intf.value_namespace = name_space;
        pwhe_intf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pwhe-intf")
    {
        pwhe_intf.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pwhe-intf")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData::TpData()
    :
    source_global_id{YType::uint32, "source-global-id"},
    source_node_id{YType::str, "source-node-id"},
    dest_global_id{YType::uint32, "dest-global-id"},
    dest_node_id{YType::str, "dest-node-id"},
    source_tunnel_id{YType::uint16, "source-tunnel-id"},
    dest_tunnel_id{YType::uint16, "dest-tunnel-id"},
    lsp_id{YType::uint16, "lsp-id"}
{

    yang_name = "tp-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData::~TpData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData::has_data() const
{
    if (is_presence_container) return true;
    return source_global_id.is_set
	|| source_node_id.is_set
	|| dest_global_id.is_set
	|| dest_node_id.is_set
	|| source_tunnel_id.is_set
	|| dest_tunnel_id.is_set
	|| lsp_id.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_global_id.yfilter)
	|| ydk::is_set(source_node_id.yfilter)
	|| ydk::is_set(dest_global_id.yfilter)
	|| ydk::is_set(dest_node_id.yfilter)
	|| ydk::is_set(source_tunnel_id.yfilter)
	|| ydk::is_set(dest_tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_global_id.is_set || is_set(source_global_id.yfilter)) leaf_name_data.push_back(source_global_id.get_name_leafdata());
    if (source_node_id.is_set || is_set(source_node_id.yfilter)) leaf_name_data.push_back(source_node_id.get_name_leafdata());
    if (dest_global_id.is_set || is_set(dest_global_id.yfilter)) leaf_name_data.push_back(dest_global_id.get_name_leafdata());
    if (dest_node_id.is_set || is_set(dest_node_id.yfilter)) leaf_name_data.push_back(dest_node_id.get_name_leafdata());
    if (source_tunnel_id.is_set || is_set(source_tunnel_id.yfilter)) leaf_name_data.push_back(source_tunnel_id.get_name_leafdata());
    if (dest_tunnel_id.is_set || is_set(dest_tunnel_id.yfilter)) leaf_name_data.push_back(dest_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id = value;
        source_tunnel_id.value_namespace = name_space;
        source_tunnel_id.value_namespace_prefix = name_space_prefix;
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
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-global-id")
    {
        source_global_id.yfilter = yfilter;
    }
    if(value_path == "source-node-id")
    {
        source_node_id.yfilter = yfilter;
    }
    if(value_path == "dest-global-id")
    {
        dest_global_id.yfilter = yfilter;
    }
    if(value_path == "dest-node-id")
    {
        dest_node_id.yfilter = yfilter;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "dest-tunnel-id")
    {
        dest_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-global-id" || name == "source-node-id" || name == "dest-global-id" || name == "dest-node-id" || name == "source-tunnel-id" || name == "dest-tunnel-id" || name == "lsp-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::GenericRoutingEncapsulation()
    :
    gre_interface{YType::str, "gre-interface"}
{

    yang_name = "generic-routing-encapsulation"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::~GenericRoutingEncapsulation()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::has_data() const
{
    if (is_presence_container) return true;
    return gre_interface.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gre_interface.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-routing-encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gre_interface.is_set || is_set(gre_interface.yfilter)) leaf_name_data.push_back(gre_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gre-interface")
    {
        gre_interface = value;
        gre_interface.value_namespace = name_space;
        gre_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gre-interface")
    {
        gre_interface.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-interface")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::Ipv6GenericRoutingEncapsulation()
    :
    greipv6_interface{YType::str, "greipv6-interface"}
{

    yang_name = "ipv6-generic-routing-encapsulation"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::~Ipv6GenericRoutingEncapsulation()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::has_data() const
{
    if (is_presence_container) return true;
    return greipv6_interface.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(greipv6_interface.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-generic-routing-encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (greipv6_interface.is_set || is_set(greipv6_interface.yfilter)) leaf_name_data.push_back(greipv6_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "greipv6-interface")
    {
        greipv6_interface = value;
        greipv6_interface.value_namespace = name_space;
        greipv6_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "greipv6-interface")
    {
        greipv6_interface.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "greipv6-interface")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::EvpnData::EvpnData()
    :
    evpn_id{YType::uint32, "evpn-id"},
    evpn_tag{YType::uint32, "evpn-tag"},
    ethernet_segment{YType::str, "ethernet-segment"},
    evpn_encap{YType::uint8, "evpn-encap"}
{

    yang_name = "evpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::EvpnData::~EvpnData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::EvpnData::has_data() const
{
    if (is_presence_container) return true;
    return evpn_id.is_set
	|| evpn_tag.is_set
	|| ethernet_segment.is_set
	|| evpn_encap.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::EvpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evpn_id.yfilter)
	|| ydk::is_set(evpn_tag.yfilter)
	|| ydk::is_set(ethernet_segment.yfilter)
	|| ydk::is_set(evpn_encap.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::EvpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::EvpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evpn_id.is_set || is_set(evpn_id.yfilter)) leaf_name_data.push_back(evpn_id.get_name_leafdata());
    if (evpn_tag.is_set || is_set(evpn_tag.yfilter)) leaf_name_data.push_back(evpn_tag.get_name_leafdata());
    if (ethernet_segment.is_set || is_set(ethernet_segment.yfilter)) leaf_name_data.push_back(ethernet_segment.get_name_leafdata());
    if (evpn_encap.is_set || is_set(evpn_encap.yfilter)) leaf_name_data.push_back(evpn_encap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::EvpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::EvpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::EvpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "ethernet-segment")
    {
        ethernet_segment = value;
        ethernet_segment.value_namespace = name_space;
        ethernet_segment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-encap")
    {
        evpn_encap = value;
        evpn_encap.value_namespace = name_space;
        evpn_encap.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::EvpnData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evpn-id")
    {
        evpn_id.yfilter = yfilter;
    }
    if(value_path == "evpn-tag")
    {
        evpn_tag.yfilter = yfilter;
    }
    if(value_path == "ethernet-segment")
    {
        ethernet_segment.yfilter = yfilter;
    }
    if(value_path == "evpn-encap")
    {
        evpn_encap.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::EvpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-id" || name == "evpn-tag" || name == "ethernet-segment" || name == "evpn-encap")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4blbData::Ipv4blbData()
    :
    blb_intf{YType::str, "blb-intf"},
    prefix{YType::str, "prefix"}
{

    yang_name = "ipv4blb-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4blbData::~Ipv4blbData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4blbData::has_data() const
{
    if (is_presence_container) return true;
    return blb_intf.is_set
	|| prefix.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4blbData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(blb_intf.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4blbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4blb-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4blbData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blb_intf.is_set || is_set(blb_intf.yfilter)) leaf_name_data.push_back(blb_intf.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4blbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4blbData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4blbData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4blbData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4blbData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "blb-intf" || name == "prefix")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6blbData::Ipv6blbData()
    :
    blb_intf{YType::str, "blb-intf"},
    prefix{YType::str, "prefix"}
{

    yang_name = "ipv6blb-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6blbData::~Ipv6blbData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6blbData::has_data() const
{
    if (is_presence_container) return true;
    return blb_intf.is_set
	|| prefix.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6blbData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(blb_intf.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6blbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6blb-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6blbData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blb_intf.is_set || is_set(blb_intf.yfilter)) leaf_name_data.push_back(blb_intf.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6blbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6blbData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6blbData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6blbData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6blbData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "blb-intf" || name == "prefix")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::PiMiPmsiData()
    :
    vrf_id{YType::uint32, "vrf-id"},
    head{YType::int32, "head"},
    v6{YType::int32, "v6"}
{

    yang_name = "pi-mi-pmsi-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::~PiMiPmsiData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::has_data() const
{
    if (is_presence_container) return true;
    return vrf_id.is_set
	|| head.is_set
	|| v6.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(head.yfilter)
	|| ydk::is_set(v6.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pi-mi-pmsi-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (head.is_set || is_set(head.yfilter)) leaf_name_data.push_back(head.get_name_leafdata());
    if (v6.is_set || is_set(v6.yfilter)) leaf_name_data.push_back(v6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "head")
    {
        head.yfilter = yfilter;
    }
    if(value_path == "v6")
    {
        v6.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-id" || name == "head" || name == "v6")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::PiMsPmsiData()
    :
    vrf_id{YType::uint32, "vrf-id"},
    source{YType::str, "source"},
    head{YType::int32, "head"},
    v6{YType::int32, "v6"},
    hli{YType::uint32, "hli"},
    seg{YType::int32, "seg"}
{

    yang_name = "pi-ms-pmsi-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::~PiMsPmsiData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::has_data() const
{
    if (is_presence_container) return true;
    return vrf_id.is_set
	|| source.is_set
	|| head.is_set
	|| v6.is_set
	|| hli.is_set
	|| seg.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(head.yfilter)
	|| ydk::is_set(v6.yfilter)
	|| ydk::is_set(hli.yfilter)
	|| ydk::is_set(seg.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pi-ms-pmsi-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (head.is_set || is_set(head.yfilter)) leaf_name_data.push_back(head.get_name_leafdata());
    if (v6.is_set || is_set(v6.yfilter)) leaf_name_data.push_back(v6.get_name_leafdata());
    if (hli.is_set || is_set(hli.yfilter)) leaf_name_data.push_back(hli.get_name_leafdata());
    if (seg.is_set || is_set(seg.yfilter)) leaf_name_data.push_back(seg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "head")
    {
        head.yfilter = yfilter;
    }
    if(value_path == "v6")
    {
        v6.yfilter = yfilter;
    }
    if(value_path == "hli")
    {
        hli.yfilter = yfilter;
    }
    if(value_path == "seg")
    {
        seg.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-id" || name == "source" || name == "head" || name == "v6" || name == "hli" || name == "seg")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::NextHopSetL3vpn()
    :
    table_id{YType::uint32, "table-id"},
    next_hop_set_id{YType::uint32, "next-hop-set-id"}
{

    yang_name = "next-hop-set-l3vpn"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::~NextHopSetL3vpn()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| next_hop_set_id.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(next_hop_set_id.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-set-l3vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (next_hop_set_id.is_set || is_set(next_hop_set_id.yfilter)) leaf_name_data.push_back(next_hop_set_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-set-id")
    {
        next_hop_set_id = value;
        next_hop_set_id.value_namespace = name_space;
        next_hop_set_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-set-id")
    {
        next_hop_set_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "next-hop-set-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::SrPrefixSegment()
    :
    table_id{YType::uint32, "table-id"},
    segment_id{YType::uint32, "segment-id"}
{

    yang_name = "sr-prefix-segment"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::~SrPrefixSegment()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| segment_id.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(segment_id.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-prefix-segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (segment_id.is_set || is_set(segment_id.yfilter)) leaf_name_data.push_back(segment_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id")
    {
        segment_id = value;
        segment_id.value_namespace = name_space;
        segment_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "segment-id")
    {
        segment_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "segment-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::SrAdjSegmentIpv4()
    :
    index_{YType::uint32, "index"},
    type{YType::uint32, "type"},
    intf{YType::str, "intf"},
    addr{YType::str, "addr"}
{

    yang_name = "sr-adj-segment-ipv4"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::~SrAdjSegmentIpv4()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| type.is_set
	|| intf.is_set
	|| addr.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-adj-segment-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intf")
    {
        intf = value;
        intf.value_namespace = name_space;
        intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "intf")
    {
        intf.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "type" || name == "intf" || name == "addr")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::SrAdjSegmentIpv6()
    :
    index_{YType::uint32, "index"},
    type{YType::uint32, "type"},
    intf{YType::str, "intf"},
    addr{YType::str, "addr"}
{

    yang_name = "sr-adj-segment-ipv6"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::~SrAdjSegmentIpv6()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| type.is_set
	|| intf.is_set
	|| addr.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-adj-segment-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intf")
    {
        intf = value;
        intf.value_namespace = name_space;
        intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "intf")
    {
        intf.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "type" || name == "intf" || name == "addr")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::LabelBlockSrgbData()
    :
    start_label{YType::uint32, "start-label"},
    offset{YType::uint32, "offset"},
    size{YType::uint32, "size"}
{

    yang_name = "label-block-srgb-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::~LabelBlockSrgbData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::has_data() const
{
    if (is_presence_container) return true;
    return start_label.is_set
	|| offset.is_set
	|| size.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_label.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block-srgb-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_label.is_set || is_set(start_label.yfilter)) leaf_name_data.push_back(start_label.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-label")
    {
        start_label = value;
        start_label.value_namespace = name_space;
        start_label.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-label")
    {
        start_label.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-label" || name == "offset" || name == "size")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TeBinding::TeBinding()
    :
    te_identifier{YType::uint32, "te-identifier"},
    te_type{YType::enumeration, "te-type"}
{

    yang_name = "te-binding"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TeBinding::~TeBinding()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TeBinding::has_data() const
{
    if (is_presence_container) return true;
    return te_identifier.is_set
	|| te_type.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TeBinding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_identifier.yfilter)
	|| ydk::is_set(te_type.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TeBinding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TeBinding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_identifier.is_set || is_set(te_identifier.yfilter)) leaf_name_data.push_back(te_identifier.get_name_leafdata());
    if (te_type.is_set || is_set(te_type.yfilter)) leaf_name_data.push_back(te_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TeBinding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TeBinding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TeBinding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TeBinding::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TeBinding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-identifier" || name == "te-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::LabelBlockSrlbData()
    :
    start_label{YType::uint32, "start-label"},
    offset{YType::uint32, "offset"},
    size{YType::uint32, "size"}
{

    yang_name = "label-block-srlb-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::~LabelBlockSrlbData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::has_data() const
{
    if (is_presence_container) return true;
    return start_label.is_set
	|| offset.is_set
	|| size.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_label.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block-srlb-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_label.is_set || is_set(start_label.yfilter)) leaf_name_data.push_back(start_label.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-label")
    {
        start_label = value;
        start_label.value_namespace = name_space;
        start_label.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-label")
    {
        start_label.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-label" || name == "offset" || name == "size")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::LocalLabelRewrite()
    :
    label_data(this, {})
{

    yang_name = "local-label-rewrite"; yang_parent_name = "rewrite-id"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::~LocalLabelRewrite()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<label_data.len(); index++)
    {
        if(label_data[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::has_operation() const
{
    for (std::size_t index=0; index<label_data.len(); index++)
    {
        if(label_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-label-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-data")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::LabelData>();
        ent_->parent = this;
        label_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : label_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-data")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::LabelData()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "label-data"; yang_parent_name = "local-label-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::~LabelData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::AssociatedFpi()
    :
    fpi(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi>())
    , application_owner(this, {})
{
    fpi->parent = this;

    yang_name = "associated-fpi"; yang_parent_name = "rewrite-pw"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::~AssociatedFpi()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application_owner.len(); index++)
    {
        if(application_owner[index]->has_data())
            return true;
    }
    return (fpi !=  nullptr && fpi->has_data());
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::has_operation() const
{
    for (std::size_t index=0; index<application_owner.len(); index++)
    {
        if(application_owner[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (fpi !=  nullptr && fpi->has_operation());
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "associated-fpi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpi")
    {
        if(fpi == nullptr)
        {
            fpi = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi>();
        }
        return fpi;
    }

    if(child_yang_name == "application-owner")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::ApplicationOwner>();
        ent_->parent = this;
        application_owner.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fpi != nullptr)
    {
        _children["fpi"] = fpi;
    }

    count_ = 0;
    for (auto ent_ : application_owner.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpi" || name == "application-owner")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Fpi()
    :
    fpi_type{YType::enumeration, "fpi-type"}
        ,
    label_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelData>())
    , te_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::TeData>())
    , ipv4_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv4Data>())
    , ipv6_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv6Data>())
    , pw_list_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::PwListData>())
    , dmtc_ext_intf_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::DmtcExtIntfData>())
    , label_range(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelRange>())
{
    label_data->parent = this;
    te_data->parent = this;
    ipv4_data->parent = this;
    ipv6_data->parent = this;
    pw_list_data->parent = this;
    dmtc_ext_intf_data->parent = this;
    label_range->parent = this;

    yang_name = "fpi"; yang_parent_name = "associated-fpi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::~Fpi()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::has_data() const
{
    if (is_presence_container) return true;
    return fpi_type.is_set
	|| (label_data !=  nullptr && label_data->has_data())
	|| (te_data !=  nullptr && te_data->has_data())
	|| (ipv4_data !=  nullptr && ipv4_data->has_data())
	|| (ipv6_data !=  nullptr && ipv6_data->has_data())
	|| (pw_list_data !=  nullptr && pw_list_data->has_data())
	|| (dmtc_ext_intf_data !=  nullptr && dmtc_ext_intf_data->has_data())
	|| (label_range !=  nullptr && label_range->has_data());
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fpi_type.yfilter)
	|| (label_data !=  nullptr && label_data->has_operation())
	|| (te_data !=  nullptr && te_data->has_operation())
	|| (ipv4_data !=  nullptr && ipv4_data->has_operation())
	|| (ipv6_data !=  nullptr && ipv6_data->has_operation())
	|| (pw_list_data !=  nullptr && pw_list_data->has_operation())
	|| (dmtc_ext_intf_data !=  nullptr && dmtc_ext_intf_data->has_operation())
	|| (label_range !=  nullptr && label_range->has_operation());
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fpi_type.is_set || is_set(fpi_type.yfilter)) leaf_name_data.push_back(fpi_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-data")
    {
        if(label_data == nullptr)
        {
            label_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelData>();
        }
        return label_data;
    }

    if(child_yang_name == "te-data")
    {
        if(te_data == nullptr)
        {
            te_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::TeData>();
        }
        return te_data;
    }

    if(child_yang_name == "ipv4-data")
    {
        if(ipv4_data == nullptr)
        {
            ipv4_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv4Data>();
        }
        return ipv4_data;
    }

    if(child_yang_name == "ipv6-data")
    {
        if(ipv6_data == nullptr)
        {
            ipv6_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv6Data>();
        }
        return ipv6_data;
    }

    if(child_yang_name == "pw-list-data")
    {
        if(pw_list_data == nullptr)
        {
            pw_list_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::PwListData>();
        }
        return pw_list_data;
    }

    if(child_yang_name == "dmtc-ext-intf-data")
    {
        if(dmtc_ext_intf_data == nullptr)
        {
            dmtc_ext_intf_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::DmtcExtIntfData>();
        }
        return dmtc_ext_intf_data;
    }

    if(child_yang_name == "label-range")
    {
        if(label_range == nullptr)
        {
            label_range = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelRange>();
        }
        return label_range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(label_data != nullptr)
    {
        _children["label-data"] = label_data;
    }

    if(te_data != nullptr)
    {
        _children["te-data"] = te_data;
    }

    if(ipv4_data != nullptr)
    {
        _children["ipv4-data"] = ipv4_data;
    }

    if(ipv6_data != nullptr)
    {
        _children["ipv6-data"] = ipv6_data;
    }

    if(pw_list_data != nullptr)
    {
        _children["pw-list-data"] = pw_list_data;
    }

    if(dmtc_ext_intf_data != nullptr)
    {
        _children["dmtc-ext-intf-data"] = dmtc_ext_intf_data;
    }

    if(label_range != nullptr)
    {
        _children["label-range"] = label_range;
    }

    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fpi-type")
    {
        fpi_type = value;
        fpi_type.value_namespace = name_space;
        fpi_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fpi-type")
    {
        fpi_type.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-data" || name == "te-data" || name == "ipv4-data" || name == "ipv6-data" || name == "pw-list-data" || name == "dmtc-ext-intf-data" || name == "label-range" || name == "fpi-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelData::LabelData()
    :
    label{YType::uint32, "label"},
    security_id{YType::uint32, "security-id"},
    elc{YType::int32, "elc"}
{

    yang_name = "label-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelData::~LabelData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelData::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| security_id.is_set
	|| elc.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(security_id.yfilter)
	|| ydk::is_set(elc.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (elc.is_set || is_set(elc.yfilter)) leaf_name_data.push_back(elc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-id")
    {
        security_id = value;
        security_id.value_namespace = name_space;
        security_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "elc")
    {
        elc = value;
        elc.value_namespace = name_space;
        elc.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "security-id")
    {
        security_id.yfilter = yfilter;
    }
    if(value_path == "elc")
    {
        elc.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "security-id" || name == "elc")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::TeData::TeData()
    :
    tunnel_interface{YType::str, "tunnel-interface"},
    local_label{YType::uint32, "local-label"}
{

    yang_name = "te-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::TeData::~TeData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::TeData::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_interface.is_set
	|| local_label.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::TeData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(local_label.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::TeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::TeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::TeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::TeData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::TeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::TeData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::TeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-interface" || name == "local-label")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv4Data::Ipv4Data()
    :
    table_id{YType::uint32, "table-id"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    version{YType::uint32, "version"},
    sr_local_label{YType::uint32, "sr-local-label"}
{

    yang_name = "ipv4-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv4Data::~Ipv4Data()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv4Data::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| version.is_set
	|| sr_local_label.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(sr_local_label.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (sr_local_label.is_set || is_set(sr_local_label.yfilter)) leaf_name_data.push_back(sr_local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-local-label")
    {
        sr_local_label = value;
        sr_local_label.value_namespace = name_space;
        sr_local_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "sr-local-label")
    {
        sr_local_label.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "prefix" || name == "prefix-length" || name == "version" || name == "sr-local-label")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv6Data::Ipv6Data()
    :
    table_id{YType::uint32, "table-id"},
    prefix{YType::str, "prefix"},
    router_flags{YType::uint32, "router-flags"},
    prefix_len{YType::uint8, "prefix-len"},
    version{YType::uint32, "version"}
{

    yang_name = "ipv6-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv6Data::~Ipv6Data()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv6Data::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| prefix.is_set
	|| router_flags.is_set
	|| prefix_len.is_set
	|| version.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv6Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(router_flags.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv6Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (router_flags.is_set || is_set(router_flags.yfilter)) leaf_name_data.push_back(router_flags.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv6Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv6Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-flags")
    {
        router_flags = value;
        router_flags.value_namespace = name_space;
        router_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv6Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "router-flags")
    {
        router_flags.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv6Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "prefix" || name == "router-flags" || name == "prefix-len" || name == "version")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::PwListData::PwListData()
    :
    pwhe_list_id{YType::uint16, "pwhe-list-id"}
{

    yang_name = "pw-list-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::PwListData::~PwListData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::PwListData::has_data() const
{
    if (is_presence_container) return true;
    return pwhe_list_id.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::PwListData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pwhe_list_id.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::PwListData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-list-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::PwListData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pwhe_list_id.is_set || is_set(pwhe_list_id.yfilter)) leaf_name_data.push_back(pwhe_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::PwListData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::PwListData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::PwListData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pwhe-list-id")
    {
        pwhe_list_id = value;
        pwhe_list_id.value_namespace = name_space;
        pwhe_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::PwListData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pwhe-list-id")
    {
        pwhe_list_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::PwListData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pwhe-list-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::DmtcExtIntfData::DmtcExtIntfData()
    :
    dmtc_ext_ifh{YType::str, "dmtc-ext-ifh"}
{

    yang_name = "dmtc-ext-intf-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::DmtcExtIntfData::~DmtcExtIntfData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::DmtcExtIntfData::has_data() const
{
    if (is_presence_container) return true;
    return dmtc_ext_ifh.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::DmtcExtIntfData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dmtc_ext_ifh.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::DmtcExtIntfData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dmtc-ext-intf-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::DmtcExtIntfData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dmtc_ext_ifh.is_set || is_set(dmtc_ext_ifh.yfilter)) leaf_name_data.push_back(dmtc_ext_ifh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::DmtcExtIntfData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::DmtcExtIntfData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::DmtcExtIntfData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dmtc-ext-ifh")
    {
        dmtc_ext_ifh = value;
        dmtc_ext_ifh.value_namespace = name_space;
        dmtc_ext_ifh.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::DmtcExtIntfData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dmtc-ext-ifh")
    {
        dmtc_ext_ifh.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::DmtcExtIntfData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dmtc-ext-ifh")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelRange::LabelRange()
    :
    type{YType::uint8, "type"},
    index_{YType::uint8, "index"}
{

    yang_name = "label-range"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelRange::~LabelRange()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelRange::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| index_.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "index")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::ApplicationOwner::ApplicationOwner()
    :
    application_name{YType::str, "application-name"},
    application_type{YType::enumeration, "application-type"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_instance{YType::str, "application-instance"},
    resource_state{YType::enumeration, "resource-state"}
{

    yang_name = "application-owner"; yang_parent_name = "associated-fpi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::ApplicationOwner::~ApplicationOwner()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::ApplicationOwner::has_data() const
{
    if (is_presence_container) return true;
    return application_name.is_set
	|| application_type.is_set
	|| application_role_primary.is_set
	|| application_instance.is_set
	|| resource_state.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::ApplicationOwner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| ydk::is_set(application_type.yfilter)
	|| ydk::is_set(application_role_primary.yfilter)
	|| ydk::is_set(application_instance.yfilter)
	|| ydk::is_set(resource_state.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::ApplicationOwner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-owner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::ApplicationOwner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (application_role_primary.is_set || is_set(application_role_primary.yfilter)) leaf_name_data.push_back(application_role_primary.get_name_leafdata());
    if (application_instance.is_set || is_set(application_instance.yfilter)) leaf_name_data.push_back(application_instance.get_name_leafdata());
    if (resource_state.is_set || is_set(resource_state.yfilter)) leaf_name_data.push_back(resource_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::ApplicationOwner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::ApplicationOwner::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::ApplicationOwner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-type")
    {
        application_type = value;
        application_type.value_namespace = name_space;
        application_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary = value;
        application_role_primary.value_namespace = name_space;
        application_role_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-instance")
    {
        application_instance = value;
        application_instance.value_namespace = name_space;
        application_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-state")
    {
        resource_state = value;
        resource_state.value_namespace = name_space;
        resource_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::ApplicationOwner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
    if(value_path == "application-type")
    {
        application_type.yfilter = yfilter;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary.yfilter = yfilter;
    }
    if(value_path == "application-instance")
    {
        application_instance.yfilter = yfilter;
    }
    if(value_path == "resource-state")
    {
        resource_state.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::ApplicationOwner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-name" || name == "application-type" || name == "application-role-primary" || name == "application-instance" || name == "resource-state")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::V4Rpf::V4Rpf()
    :
    table_id{YType::uint32, "table-id"},
    v4_rpf_neighbor{YType::str, "v4-rpf-neighbor"}
{

    yang_name = "v4-rpf"; yang_parent_name = "rewrite-pw"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::V4Rpf::~V4Rpf()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::V4Rpf::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| v4_rpf_neighbor.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::V4Rpf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(v4_rpf_neighbor.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::V4Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-rpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::V4Rpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (v4_rpf_neighbor.is_set || is_set(v4_rpf_neighbor.yfilter)) leaf_name_data.push_back(v4_rpf_neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::V4Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::V4Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::V4Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewritePws::RewritePw::V4Rpf::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewritePws::RewritePw::V4Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "v4-rpf-neighbor")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::V6Rpf::V6Rpf()
    :
    table_id{YType::uint32, "table-id"},
    v6_rpf_neighbor{YType::str, "v6-rpf-neighbor"}
{

    yang_name = "v6-rpf"; yang_parent_name = "rewrite-pw"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::V6Rpf::~V6Rpf()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::V6Rpf::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| v6_rpf_neighbor.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::V6Rpf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(v6_rpf_neighbor.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::V6Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v6-rpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::V6Rpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (v6_rpf_neighbor.is_set || is_set(v6_rpf_neighbor.yfilter)) leaf_name_data.push_back(v6_rpf_neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::V6Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::V6Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::V6Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewritePws::RewritePw::V6Rpf::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewritePws::RewritePw::V6Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "v6-rpf-neighbor")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::Mois()
    :
    application_resource(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::ApplicationResource>())
    , moi_array(this, {})
{
    application_resource->parent = this;

    yang_name = "mois"; yang_parent_name = "rewrite-pw"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::~Mois()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<moi_array.len(); index++)
    {
        if(moi_array[index]->has_data())
            return true;
    }
    return (application_resource !=  nullptr && application_resource->has_data());
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::has_operation() const
{
    for (std::size_t index=0; index<moi_array.len(); index++)
    {
        if(moi_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (application_resource !=  nullptr && application_resource->has_operation());
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mois";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-resource")
    {
        if(application_resource == nullptr)
        {
            application_resource = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::ApplicationResource>();
        }
        return application_resource;
    }

    if(child_yang_name == "moi-array")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray>();
        ent_->parent = this;
        moi_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(application_resource != nullptr)
    {
        _children["application-resource"] = application_resource;
    }

    count_ = 0;
    for (auto ent_ : moi_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-resource" || name == "moi-array")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::ApplicationResource::ApplicationResource()
    :
    application_name{YType::str, "application-name"},
    application_type{YType::enumeration, "application-type"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_instance{YType::str, "application-instance"},
    resource_state{YType::enumeration, "resource-state"}
{

    yang_name = "application-resource"; yang_parent_name = "mois"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::ApplicationResource::~ApplicationResource()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::ApplicationResource::has_data() const
{
    if (is_presence_container) return true;
    return application_name.is_set
	|| application_type.is_set
	|| application_role_primary.is_set
	|| application_instance.is_set
	|| resource_state.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::ApplicationResource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| ydk::is_set(application_type.yfilter)
	|| ydk::is_set(application_role_primary.yfilter)
	|| ydk::is_set(application_instance.yfilter)
	|| ydk::is_set(resource_state.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::ApplicationResource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-resource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::ApplicationResource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (application_role_primary.is_set || is_set(application_role_primary.yfilter)) leaf_name_data.push_back(application_role_primary.get_name_leafdata());
    if (application_instance.is_set || is_set(application_instance.yfilter)) leaf_name_data.push_back(application_instance.get_name_leafdata());
    if (resource_state.is_set || is_set(resource_state.yfilter)) leaf_name_data.push_back(resource_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::ApplicationResource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::ApplicationResource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::ApplicationResource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-type")
    {
        application_type = value;
        application_type.value_namespace = name_space;
        application_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary = value;
        application_role_primary.value_namespace = name_space;
        application_role_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-instance")
    {
        application_instance = value;
        application_instance.value_namespace = name_space;
        application_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-state")
    {
        resource_state = value;
        resource_state.value_namespace = name_space;
        resource_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::ApplicationResource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
    if(value_path == "application-type")
    {
        application_type.yfilter = yfilter;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary.yfilter = yfilter;
    }
    if(value_path == "application-instance")
    {
        application_instance.yfilter = yfilter;
    }
    if(value_path == "resource-state")
    {
        resource_state.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::ApplicationResource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-name" || name == "application-type" || name == "application-role-primary" || name == "application-instance" || name == "resource-state")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::MoiArray()
    :
    moi(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi>())
{
    moi->parent = this;

    yang_name = "moi-array"; yang_parent_name = "mois"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::~MoiArray()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::has_data() const
{
    if (is_presence_container) return true;
    return (moi !=  nullptr && moi->has_data());
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::has_operation() const
{
    return is_set(yfilter)
	|| (moi !=  nullptr && moi->has_operation());
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "moi-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "moi")
    {
        if(moi == nullptr)
        {
            moi = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi>();
        }
        return moi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(moi != nullptr)
    {
        _children["moi"] = moi;
    }

    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "moi")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Moi()
    :
    moi_type{YType::enumeration, "moi-type"}
        ,
    pop_and_lookup_ipv4(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv4>())
    , pop_and_lookup_tp(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupTp>())
    , pop_and_lookup_ipv6(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv6>())
    , ipv4_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv4Data>())
    , ipv6_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv6Data>())
    , tev4_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Tev4Data>())
    , pseudowire_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireData>())
    , ip_sub_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::IpSubData>())
    , pseudowire_head_end_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireHeadEndData>())
    , pw_list_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PwListData>())
    , stackv4_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data>())
    , stackv6_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data>())
    , te_head_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::TeHeadData>())
    , dmtc_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::DmtcData>())
    , nnh_stackv4_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data>())
    , nnh_stackv6_data(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data>())
    , label_range(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::LabelRange>())
{
    pop_and_lookup_ipv4->parent = this;
    pop_and_lookup_tp->parent = this;
    pop_and_lookup_ipv6->parent = this;
    ipv4_data->parent = this;
    ipv6_data->parent = this;
    tev4_data->parent = this;
    pseudowire_data->parent = this;
    ip_sub_data->parent = this;
    pseudowire_head_end_data->parent = this;
    pw_list_data->parent = this;
    stackv4_data->parent = this;
    stackv6_data->parent = this;
    te_head_data->parent = this;
    dmtc_data->parent = this;
    nnh_stackv4_data->parent = this;
    nnh_stackv6_data->parent = this;
    label_range->parent = this;

    yang_name = "moi"; yang_parent_name = "moi-array"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::~Moi()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::has_data() const
{
    if (is_presence_container) return true;
    return moi_type.is_set
	|| (pop_and_lookup_ipv4 !=  nullptr && pop_and_lookup_ipv4->has_data())
	|| (pop_and_lookup_tp !=  nullptr && pop_and_lookup_tp->has_data())
	|| (pop_and_lookup_ipv6 !=  nullptr && pop_and_lookup_ipv6->has_data())
	|| (ipv4_data !=  nullptr && ipv4_data->has_data())
	|| (ipv6_data !=  nullptr && ipv6_data->has_data())
	|| (tev4_data !=  nullptr && tev4_data->has_data())
	|| (pseudowire_data !=  nullptr && pseudowire_data->has_data())
	|| (ip_sub_data !=  nullptr && ip_sub_data->has_data())
	|| (pseudowire_head_end_data !=  nullptr && pseudowire_head_end_data->has_data())
	|| (pw_list_data !=  nullptr && pw_list_data->has_data())
	|| (stackv4_data !=  nullptr && stackv4_data->has_data())
	|| (stackv6_data !=  nullptr && stackv6_data->has_data())
	|| (te_head_data !=  nullptr && te_head_data->has_data())
	|| (dmtc_data !=  nullptr && dmtc_data->has_data())
	|| (nnh_stackv4_data !=  nullptr && nnh_stackv4_data->has_data())
	|| (nnh_stackv6_data !=  nullptr && nnh_stackv6_data->has_data())
	|| (label_range !=  nullptr && label_range->has_data());
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(moi_type.yfilter)
	|| (pop_and_lookup_ipv4 !=  nullptr && pop_and_lookup_ipv4->has_operation())
	|| (pop_and_lookup_tp !=  nullptr && pop_and_lookup_tp->has_operation())
	|| (pop_and_lookup_ipv6 !=  nullptr && pop_and_lookup_ipv6->has_operation())
	|| (ipv4_data !=  nullptr && ipv4_data->has_operation())
	|| (ipv6_data !=  nullptr && ipv6_data->has_operation())
	|| (tev4_data !=  nullptr && tev4_data->has_operation())
	|| (pseudowire_data !=  nullptr && pseudowire_data->has_operation())
	|| (ip_sub_data !=  nullptr && ip_sub_data->has_operation())
	|| (pseudowire_head_end_data !=  nullptr && pseudowire_head_end_data->has_operation())
	|| (pw_list_data !=  nullptr && pw_list_data->has_operation())
	|| (stackv4_data !=  nullptr && stackv4_data->has_operation())
	|| (stackv6_data !=  nullptr && stackv6_data->has_operation())
	|| (te_head_data !=  nullptr && te_head_data->has_operation())
	|| (dmtc_data !=  nullptr && dmtc_data->has_operation())
	|| (nnh_stackv4_data !=  nullptr && nnh_stackv4_data->has_operation())
	|| (nnh_stackv6_data !=  nullptr && nnh_stackv6_data->has_operation())
	|| (label_range !=  nullptr && label_range->has_operation());
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "moi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (moi_type.is_set || is_set(moi_type.yfilter)) leaf_name_data.push_back(moi_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pop-and-lookup-ipv4")
    {
        if(pop_and_lookup_ipv4 == nullptr)
        {
            pop_and_lookup_ipv4 = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv4>();
        }
        return pop_and_lookup_ipv4;
    }

    if(child_yang_name == "pop-and-lookup-tp")
    {
        if(pop_and_lookup_tp == nullptr)
        {
            pop_and_lookup_tp = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupTp>();
        }
        return pop_and_lookup_tp;
    }

    if(child_yang_name == "pop-and-lookup-ipv6")
    {
        if(pop_and_lookup_ipv6 == nullptr)
        {
            pop_and_lookup_ipv6 = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv6>();
        }
        return pop_and_lookup_ipv6;
    }

    if(child_yang_name == "ipv4-data")
    {
        if(ipv4_data == nullptr)
        {
            ipv4_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv4Data>();
        }
        return ipv4_data;
    }

    if(child_yang_name == "ipv6-data")
    {
        if(ipv6_data == nullptr)
        {
            ipv6_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv6Data>();
        }
        return ipv6_data;
    }

    if(child_yang_name == "tev4-data")
    {
        if(tev4_data == nullptr)
        {
            tev4_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Tev4Data>();
        }
        return tev4_data;
    }

    if(child_yang_name == "pseudowire-data")
    {
        if(pseudowire_data == nullptr)
        {
            pseudowire_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireData>();
        }
        return pseudowire_data;
    }

    if(child_yang_name == "ip-sub-data")
    {
        if(ip_sub_data == nullptr)
        {
            ip_sub_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::IpSubData>();
        }
        return ip_sub_data;
    }

    if(child_yang_name == "pseudowire-head-end-data")
    {
        if(pseudowire_head_end_data == nullptr)
        {
            pseudowire_head_end_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireHeadEndData>();
        }
        return pseudowire_head_end_data;
    }

    if(child_yang_name == "pw-list-data")
    {
        if(pw_list_data == nullptr)
        {
            pw_list_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PwListData>();
        }
        return pw_list_data;
    }

    if(child_yang_name == "stackv4-data")
    {
        if(stackv4_data == nullptr)
        {
            stackv4_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data>();
        }
        return stackv4_data;
    }

    if(child_yang_name == "stackv6-data")
    {
        if(stackv6_data == nullptr)
        {
            stackv6_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data>();
        }
        return stackv6_data;
    }

    if(child_yang_name == "te-head-data")
    {
        if(te_head_data == nullptr)
        {
            te_head_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::TeHeadData>();
        }
        return te_head_data;
    }

    if(child_yang_name == "dmtc-data")
    {
        if(dmtc_data == nullptr)
        {
            dmtc_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::DmtcData>();
        }
        return dmtc_data;
    }

    if(child_yang_name == "nnh-stackv4-data")
    {
        if(nnh_stackv4_data == nullptr)
        {
            nnh_stackv4_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data>();
        }
        return nnh_stackv4_data;
    }

    if(child_yang_name == "nnh-stackv6-data")
    {
        if(nnh_stackv6_data == nullptr)
        {
            nnh_stackv6_data = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data>();
        }
        return nnh_stackv6_data;
    }

    if(child_yang_name == "label-range")
    {
        if(label_range == nullptr)
        {
            label_range = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::LabelRange>();
        }
        return label_range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pop_and_lookup_ipv4 != nullptr)
    {
        _children["pop-and-lookup-ipv4"] = pop_and_lookup_ipv4;
    }

    if(pop_and_lookup_tp != nullptr)
    {
        _children["pop-and-lookup-tp"] = pop_and_lookup_tp;
    }

    if(pop_and_lookup_ipv6 != nullptr)
    {
        _children["pop-and-lookup-ipv6"] = pop_and_lookup_ipv6;
    }

    if(ipv4_data != nullptr)
    {
        _children["ipv4-data"] = ipv4_data;
    }

    if(ipv6_data != nullptr)
    {
        _children["ipv6-data"] = ipv6_data;
    }

    if(tev4_data != nullptr)
    {
        _children["tev4-data"] = tev4_data;
    }

    if(pseudowire_data != nullptr)
    {
        _children["pseudowire-data"] = pseudowire_data;
    }

    if(ip_sub_data != nullptr)
    {
        _children["ip-sub-data"] = ip_sub_data;
    }

    if(pseudowire_head_end_data != nullptr)
    {
        _children["pseudowire-head-end-data"] = pseudowire_head_end_data;
    }

    if(pw_list_data != nullptr)
    {
        _children["pw-list-data"] = pw_list_data;
    }

    if(stackv4_data != nullptr)
    {
        _children["stackv4-data"] = stackv4_data;
    }

    if(stackv6_data != nullptr)
    {
        _children["stackv6-data"] = stackv6_data;
    }

    if(te_head_data != nullptr)
    {
        _children["te-head-data"] = te_head_data;
    }

    if(dmtc_data != nullptr)
    {
        _children["dmtc-data"] = dmtc_data;
    }

    if(nnh_stackv4_data != nullptr)
    {
        _children["nnh-stackv4-data"] = nnh_stackv4_data;
    }

    if(nnh_stackv6_data != nullptr)
    {
        _children["nnh-stackv6-data"] = nnh_stackv6_data;
    }

    if(label_range != nullptr)
    {
        _children["label-range"] = label_range;
    }

    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "moi-type")
    {
        moi_type = value;
        moi_type.value_namespace = name_space;
        moi_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "moi-type")
    {
        moi_type.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pop-and-lookup-ipv4" || name == "pop-and-lookup-tp" || name == "pop-and-lookup-ipv6" || name == "ipv4-data" || name == "ipv6-data" || name == "tev4-data" || name == "pseudowire-data" || name == "ip-sub-data" || name == "pseudowire-head-end-data" || name == "pw-list-data" || name == "stackv4-data" || name == "stackv6-data" || name == "te-head-data" || name == "dmtc-data" || name == "nnh-stackv4-data" || name == "nnh-stackv6-data" || name == "label-range" || name == "moi-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv4::PopAndLookupIpv4()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"}
{

    yang_name = "pop-and-lookup-ipv4"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv4::~PopAndLookupIpv4()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv4::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop-and-lookup-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupTp::PopAndLookupTp()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    out_label{YType::uint32, "out-label"}
{

    yang_name = "pop-and-lookup-tp"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupTp::~PopAndLookupTp()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupTp::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set
	|| out_label.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupTp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupTp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop-and-lookup-tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupTp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupTp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupTp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupTp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupTp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupTp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-label")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv6::PopAndLookupIpv6()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"}
{

    yang_name = "pop-and-lookup-ipv6"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv6::~PopAndLookupIpv6()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv6::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop-and-lookup-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv4Data::Ipv4Data()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    out_interface{YType::str, "out-interface"},
    out_interface_parent{YType::str, "out-interface-parent"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    path_id{YType::uint8, "path-id"},
    backup_path_id{YType::uint8, "backup-path-id"},
    load_metric{YType::uint32, "load-metric"},
    out_label{YType::uint32, "out-label"},
    out_label_name{YType::str, "out-label-name"},
    tunnel_id{YType::uint16, "tunnel-id"},
    tunnel_type{YType::uint16, "tunnel-type"},
    next_hop_id{YType::uint32, "next-hop-id"},
    local_label{YType::uint32, "local-label"}
{

    yang_name = "ipv4-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv4Data::~Ipv4Data()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv4Data::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set
	|| out_interface.is_set
	|| out_interface_parent.is_set
	|| ipv4_next_hop.is_set
	|| path_id.is_set
	|| backup_path_id.is_set
	|| load_metric.is_set
	|| out_label.is_set
	|| out_label_name.is_set
	|| tunnel_id.is_set
	|| tunnel_type.is_set
	|| next_hop_id.is_set
	|| local_label.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_interface_parent.yfilter)
	|| ydk::is_set(ipv4_next_hop.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(backup_path_id.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_label_name.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_type.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(local_label.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_interface_parent.is_set || is_set(out_interface_parent.yfilter)) leaf_name_data.push_back(out_interface_parent.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.yfilter)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (backup_path_id.is_set || is_set(backup_path_id.yfilter)) leaf_name_data.push_back(backup_path_id.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_name.is_set || is_set(out_label_name.yfilter)) leaf_name_data.push_back(out_label_name.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_type.is_set || is_set(tunnel_type.yfilter)) leaf_name_data.push_back(tunnel_type.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
        out_interface.value_namespace = name_space;
        out_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface-parent")
    {
        out_interface_parent = value;
        out_interface_parent.value_namespace = name_space;
        out_interface_parent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop = value;
        ipv4_next_hop.value_namespace = name_space;
        ipv4_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-path-id")
    {
        backup_path_id = value;
        backup_path_id.value_namespace = name_space;
        backup_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-name")
    {
        out_label_name = value;
        out_label_name.value_namespace = name_space;
        out_label_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type = value;
        tunnel_type.value_namespace = name_space;
        tunnel_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "out-interface-parent")
    {
        out_interface_parent.yfilter = yfilter;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "backup-path-id")
    {
        backup_path_id.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-label-name")
    {
        out_label_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-interface" || name == "out-interface-parent" || name == "ipv4-next-hop" || name == "path-id" || name == "backup-path-id" || name == "load-metric" || name == "out-label" || name == "out-label-name" || name == "tunnel-id" || name == "tunnel-type" || name == "next-hop-id" || name == "local-label")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv6Data::Ipv6Data()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"},
    out_label_name{YType::str, "out-label-name"},
    ipv6_next_hop{YType::str, "ipv6-next-hop"},
    path_id{YType::uint8, "path-id"},
    backup_path_id{YType::uint8, "backup-path-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    tunnel_type{YType::uint16, "tunnel-type"},
    next_hop_id{YType::uint32, "next-hop-id"},
    out_interface_parent{YType::str, "out-interface-parent"}
{

    yang_name = "ipv6-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv6Data::~Ipv6Data()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv6Data::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set
	|| out_interface.is_set
	|| out_label.is_set
	|| out_label_name.is_set
	|| ipv6_next_hop.is_set
	|| path_id.is_set
	|| backup_path_id.is_set
	|| tunnel_id.is_set
	|| tunnel_type.is_set
	|| next_hop_id.is_set
	|| out_interface_parent.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv6Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_label_name.yfilter)
	|| ydk::is_set(ipv6_next_hop.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(backup_path_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_type.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(out_interface_parent.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv6Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_name.is_set || is_set(out_label_name.yfilter)) leaf_name_data.push_back(out_label_name.get_name_leafdata());
    if (ipv6_next_hop.is_set || is_set(ipv6_next_hop.yfilter)) leaf_name_data.push_back(ipv6_next_hop.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (backup_path_id.is_set || is_set(backup_path_id.yfilter)) leaf_name_data.push_back(backup_path_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_type.is_set || is_set(tunnel_type.yfilter)) leaf_name_data.push_back(tunnel_type.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (out_interface_parent.is_set || is_set(out_interface_parent.yfilter)) leaf_name_data.push_back(out_interface_parent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv6Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv6Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
        out_interface.value_namespace = name_space;
        out_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-name")
    {
        out_label_name = value;
        out_label_name.value_namespace = name_space;
        out_label_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-next-hop")
    {
        ipv6_next_hop = value;
        ipv6_next_hop.value_namespace = name_space;
        ipv6_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-path-id")
    {
        backup_path_id = value;
        backup_path_id.value_namespace = name_space;
        backup_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type = value;
        tunnel_type.value_namespace = name_space;
        tunnel_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface-parent")
    {
        out_interface_parent = value;
        out_interface_parent.value_namespace = name_space;
        out_interface_parent.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv6Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-label-name")
    {
        out_label_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-next-hop")
    {
        ipv6_next_hop.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "backup-path-id")
    {
        backup_path_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "out-interface-parent")
    {
        out_interface_parent.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv6Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-interface" || name == "out-label" || name == "out-label-name" || name == "ipv6-next-hop" || name == "path-id" || name == "backup-path-id" || name == "tunnel-id" || name == "tunnel-type" || name == "next-hop-id" || name == "out-interface-parent")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Tev4Data::Tev4Data()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"},
    out_label_name{YType::str, "out-label-name"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    backup_interface{YType::str, "backup-interface"},
    backup_ipv4_next_hop{YType::str, "backup-ipv4-next-hop"},
    merge_point_label{YType::uint32, "merge-point-label"},
    backup_local_label{YType::uint32, "backup-local-label"},
    tunnel_interface{YType::str, "tunnel-interface"},
    tunnel_weight{YType::uint32, "tunnel-weight"},
    data_out_parent_interface{YType::str, "data-out-parent-interface"},
    tunnel_class{YType::uint32, "tunnel-class"},
    ipv4_next_next_hop{YType::str, "ipv4-next-next-hop"}
{

    yang_name = "tev4-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Tev4Data::~Tev4Data()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Tev4Data::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set
	|| out_interface.is_set
	|| out_label.is_set
	|| out_label_name.is_set
	|| ipv4_next_hop.is_set
	|| backup_interface.is_set
	|| backup_ipv4_next_hop.is_set
	|| merge_point_label.is_set
	|| backup_local_label.is_set
	|| tunnel_interface.is_set
	|| tunnel_weight.is_set
	|| data_out_parent_interface.is_set
	|| tunnel_class.is_set
	|| ipv4_next_next_hop.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Tev4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_label_name.yfilter)
	|| ydk::is_set(ipv4_next_hop.yfilter)
	|| ydk::is_set(backup_interface.yfilter)
	|| ydk::is_set(backup_ipv4_next_hop.yfilter)
	|| ydk::is_set(merge_point_label.yfilter)
	|| ydk::is_set(backup_local_label.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(tunnel_weight.yfilter)
	|| ydk::is_set(data_out_parent_interface.yfilter)
	|| ydk::is_set(tunnel_class.yfilter)
	|| ydk::is_set(ipv4_next_next_hop.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Tev4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tev4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Tev4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_name.is_set || is_set(out_label_name.yfilter)) leaf_name_data.push_back(out_label_name.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.yfilter)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_ipv4_next_hop.is_set || is_set(backup_ipv4_next_hop.yfilter)) leaf_name_data.push_back(backup_ipv4_next_hop.get_name_leafdata());
    if (merge_point_label.is_set || is_set(merge_point_label.yfilter)) leaf_name_data.push_back(merge_point_label.get_name_leafdata());
    if (backup_local_label.is_set || is_set(backup_local_label.yfilter)) leaf_name_data.push_back(backup_local_label.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (tunnel_weight.is_set || is_set(tunnel_weight.yfilter)) leaf_name_data.push_back(tunnel_weight.get_name_leafdata());
    if (data_out_parent_interface.is_set || is_set(data_out_parent_interface.yfilter)) leaf_name_data.push_back(data_out_parent_interface.get_name_leafdata());
    if (tunnel_class.is_set || is_set(tunnel_class.yfilter)) leaf_name_data.push_back(tunnel_class.get_name_leafdata());
    if (ipv4_next_next_hop.is_set || is_set(ipv4_next_next_hop.yfilter)) leaf_name_data.push_back(ipv4_next_next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Tev4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Tev4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Tev4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
        out_interface.value_namespace = name_space;
        out_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-name")
    {
        out_label_name = value;
        out_label_name.value_namespace = name_space;
        out_label_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop = value;
        ipv4_next_hop.value_namespace = name_space;
        ipv4_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-ipv4-next-hop")
    {
        backup_ipv4_next_hop = value;
        backup_ipv4_next_hop.value_namespace = name_space;
        backup_ipv4_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merge-point-label")
    {
        merge_point_label = value;
        merge_point_label.value_namespace = name_space;
        merge_point_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-local-label")
    {
        backup_local_label = value;
        backup_local_label.value_namespace = name_space;
        backup_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-weight")
    {
        tunnel_weight = value;
        tunnel_weight.value_namespace = name_space;
        tunnel_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-out-parent-interface")
    {
        data_out_parent_interface = value;
        data_out_parent_interface.value_namespace = name_space;
        data_out_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-class")
    {
        tunnel_class = value;
        tunnel_class.value_namespace = name_space;
        tunnel_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-next-next-hop")
    {
        ipv4_next_next_hop = value;
        ipv4_next_next_hop.value_namespace = name_space;
        ipv4_next_next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Tev4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-label-name")
    {
        out_label_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
    if(value_path == "backup-ipv4-next-hop")
    {
        backup_ipv4_next_hop.yfilter = yfilter;
    }
    if(value_path == "merge-point-label")
    {
        merge_point_label.yfilter = yfilter;
    }
    if(value_path == "backup-local-label")
    {
        backup_local_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "tunnel-weight")
    {
        tunnel_weight.yfilter = yfilter;
    }
    if(value_path == "data-out-parent-interface")
    {
        data_out_parent_interface.yfilter = yfilter;
    }
    if(value_path == "tunnel-class")
    {
        tunnel_class.yfilter = yfilter;
    }
    if(value_path == "ipv4-next-next-hop")
    {
        ipv4_next_next_hop.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Tev4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-interface" || name == "out-label" || name == "out-label-name" || name == "ipv4-next-hop" || name == "backup-interface" || name == "backup-ipv4-next-hop" || name == "merge-point-label" || name == "backup-local-label" || name == "tunnel-interface" || name == "tunnel-weight" || name == "data-out-parent-interface" || name == "tunnel-class" || name == "ipv4-next-next-hop")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireData::PseudowireData()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"},
    cross_connect_id{YType::uint32, "cross-connect-id"},
    pseuodo_wire_connect_id{YType::uint32, "pseuodo-wire-connect-id"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    bridge_id{YType::uint32, "bridge-id"},
    split_horizon_id{YType::uint32, "split-horizon-id"}
{

    yang_name = "pseudowire-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireData::~PseudowireData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireData::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set
	|| out_interface.is_set
	|| out_label.is_set
	|| cross_connect_id.is_set
	|| pseuodo_wire_connect_id.is_set
	|| ipv4_next_hop.is_set
	|| bridge_id.is_set
	|| split_horizon_id.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(cross_connect_id.yfilter)
	|| ydk::is_set(pseuodo_wire_connect_id.yfilter)
	|| ydk::is_set(ipv4_next_hop.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(split_horizon_id.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (cross_connect_id.is_set || is_set(cross_connect_id.yfilter)) leaf_name_data.push_back(cross_connect_id.get_name_leafdata());
    if (pseuodo_wire_connect_id.is_set || is_set(pseuodo_wire_connect_id.yfilter)) leaf_name_data.push_back(pseuodo_wire_connect_id.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.yfilter)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (split_horizon_id.is_set || is_set(split_horizon_id.yfilter)) leaf_name_data.push_back(split_horizon_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
        out_interface.value_namespace = name_space;
        out_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cross-connect-id")
    {
        cross_connect_id = value;
        cross_connect_id.value_namespace = name_space;
        cross_connect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseuodo-wire-connect-id")
    {
        pseuodo_wire_connect_id = value;
        pseuodo_wire_connect_id.value_namespace = name_space;
        pseuodo_wire_connect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop = value;
        ipv4_next_hop.value_namespace = name_space;
        ipv4_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon-id")
    {
        split_horizon_id = value;
        split_horizon_id.value_namespace = name_space;
        split_horizon_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "cross-connect-id")
    {
        cross_connect_id.yfilter = yfilter;
    }
    if(value_path == "pseuodo-wire-connect-id")
    {
        pseuodo_wire_connect_id.yfilter = yfilter;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "split-horizon-id")
    {
        split_horizon_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-interface" || name == "out-label" || name == "cross-connect-id" || name == "pseuodo-wire-connect-id" || name == "ipv4-next-hop" || name == "bridge-id" || name == "split-horizon-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::IpSubData::IpSubData()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    out_interface{YType::str, "out-interface"},
    path_flags_decode{YType::str, "path-flags-decode"}
{

    yang_name = "ip-sub-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::IpSubData::~IpSubData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::IpSubData::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| table_name.is_set
	|| out_interface.is_set
	|| path_flags_decode.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::IpSubData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::IpSubData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-sub-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::IpSubData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::IpSubData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::IpSubData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::IpSubData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
        out_interface.value_namespace = name_space;
        out_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::IpSubData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::IpSubData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "out-interface" || name == "path-flags-decode")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireHeadEndData::PseudowireHeadEndData()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    control_word{YType::int32, "control-word"},
    imposition{YType::int32, "imposition"},
    vctype{YType::uint8, "vctype"},
    pw_list_id{YType::uint16, "pw-list-id"},
    pwhe_interface{YType::str, "pwhe-interface"}
{

    yang_name = "pseudowire-head-end-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireHeadEndData::~PseudowireHeadEndData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireHeadEndData::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set
	|| out_interface.is_set
	|| out_label.is_set
	|| ipv4_next_hop.is_set
	|| control_word.is_set
	|| imposition.is_set
	|| vctype.is_set
	|| pw_list_id.is_set
	|| pwhe_interface.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireHeadEndData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(ipv4_next_hop.yfilter)
	|| ydk::is_set(control_word.yfilter)
	|| ydk::is_set(imposition.yfilter)
	|| ydk::is_set(vctype.yfilter)
	|| ydk::is_set(pw_list_id.yfilter)
	|| ydk::is_set(pwhe_interface.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireHeadEndData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-head-end-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireHeadEndData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.yfilter)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (control_word.is_set || is_set(control_word.yfilter)) leaf_name_data.push_back(control_word.get_name_leafdata());
    if (imposition.is_set || is_set(imposition.yfilter)) leaf_name_data.push_back(imposition.get_name_leafdata());
    if (vctype.is_set || is_set(vctype.yfilter)) leaf_name_data.push_back(vctype.get_name_leafdata());
    if (pw_list_id.is_set || is_set(pw_list_id.yfilter)) leaf_name_data.push_back(pw_list_id.get_name_leafdata());
    if (pwhe_interface.is_set || is_set(pwhe_interface.yfilter)) leaf_name_data.push_back(pwhe_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireHeadEndData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireHeadEndData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireHeadEndData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
        out_interface.value_namespace = name_space;
        out_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop = value;
        ipv4_next_hop.value_namespace = name_space;
        ipv4_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-word")
    {
        control_word = value;
        control_word.value_namespace = name_space;
        control_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imposition")
    {
        imposition = value;
        imposition.value_namespace = name_space;
        imposition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vctype")
    {
        vctype = value;
        vctype.value_namespace = name_space;
        vctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-list-id")
    {
        pw_list_id = value;
        pw_list_id.value_namespace = name_space;
        pw_list_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwhe-interface")
    {
        pwhe_interface = value;
        pwhe_interface.value_namespace = name_space;
        pwhe_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireHeadEndData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop.yfilter = yfilter;
    }
    if(value_path == "control-word")
    {
        control_word.yfilter = yfilter;
    }
    if(value_path == "imposition")
    {
        imposition.yfilter = yfilter;
    }
    if(value_path == "vctype")
    {
        vctype.yfilter = yfilter;
    }
    if(value_path == "pw-list-id")
    {
        pw_list_id.yfilter = yfilter;
    }
    if(value_path == "pwhe-interface")
    {
        pwhe_interface.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireHeadEndData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-interface" || name == "out-label" || name == "ipv4-next-hop" || name == "control-word" || name == "imposition" || name == "vctype" || name == "pw-list-id" || name == "pwhe-interface")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PwListData::PwListData()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    l3_interface{YType::str, "l3-interface"},
    l2_interface{YType::str, "l2-interface"},
    path_flags_decode{YType::str, "path-flags-decode"}
{

    yang_name = "pw-list-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PwListData::~PwListData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PwListData::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| table_name.is_set
	|| l3_interface.is_set
	|| l2_interface.is_set
	|| path_flags_decode.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PwListData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(l3_interface.yfilter)
	|| ydk::is_set(l2_interface.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PwListData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-list-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PwListData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (l3_interface.is_set || is_set(l3_interface.yfilter)) leaf_name_data.push_back(l3_interface.get_name_leafdata());
    if (l2_interface.is_set || is_set(l2_interface.yfilter)) leaf_name_data.push_back(l2_interface.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PwListData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PwListData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PwListData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l3-interface")
    {
        l3_interface = value;
        l3_interface.value_namespace = name_space;
        l3_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2-interface")
    {
        l2_interface = value;
        l2_interface.value_namespace = name_space;
        l2_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PwListData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "l3-interface")
    {
        l3_interface.yfilter = yfilter;
    }
    if(value_path == "l2-interface")
    {
        l2_interface.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PwListData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "l3-interface" || name == "l2-interface" || name == "path-flags-decode")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::Stackv4Data()
    :
    owner_application_type{YType::enumeration, "owner-application-type"}
        ,
    nexthop(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::Nexthop>())
    , inner_stack(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack>())
{
    nexthop->parent = this;
    inner_stack->parent = this;

    yang_name = "stackv4-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::~Stackv4Data()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::has_data() const
{
    if (is_presence_container) return true;
    return owner_application_type.is_set
	|| (nexthop !=  nullptr && nexthop->has_data())
	|| (inner_stack !=  nullptr && inner_stack->has_data());
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner_application_type.yfilter)
	|| (nexthop !=  nullptr && nexthop->has_operation())
	|| (inner_stack !=  nullptr && inner_stack->has_operation());
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stackv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner_application_type.is_set || is_set(owner_application_type.yfilter)) leaf_name_data.push_back(owner_application_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::Nexthop>();
        }
        return nexthop;
    }

    if(child_yang_name == "inner-stack")
    {
        if(inner_stack == nullptr)
        {
            inner_stack = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack>();
        }
        return inner_stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nexthop != nullptr)
    {
        _children["nexthop"] = nexthop;
    }

    if(inner_stack != nullptr)
    {
        _children["inner-stack"] = inner_stack;
    }

    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner-application-type")
    {
        owner_application_type = value;
        owner_application_type.value_namespace = name_space;
        owner_application_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner-application-type")
    {
        owner_application_type.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "inner-stack" || name == "owner-application-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::Nexthop::Nexthop()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    out_interface{YType::str, "out-interface"},
    out_interface_parent{YType::str, "out-interface-parent"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    path_id{YType::uint8, "path-id"},
    backup_path_id{YType::uint8, "backup-path-id"},
    load_metric{YType::uint32, "load-metric"},
    out_label{YType::uint32, "out-label"},
    out_label_name{YType::str, "out-label-name"},
    tunnel_id{YType::uint16, "tunnel-id"},
    tunnel_type{YType::uint16, "tunnel-type"},
    next_hop_id{YType::uint32, "next-hop-id"},
    local_label{YType::uint32, "local-label"}
{

    yang_name = "nexthop"; yang_parent_name = "stackv4-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::Nexthop::~Nexthop()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::Nexthop::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set
	|| out_interface.is_set
	|| out_interface_parent.is_set
	|| ipv4_next_hop.is_set
	|| path_id.is_set
	|| backup_path_id.is_set
	|| load_metric.is_set
	|| out_label.is_set
	|| out_label_name.is_set
	|| tunnel_id.is_set
	|| tunnel_type.is_set
	|| next_hop_id.is_set
	|| local_label.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_interface_parent.yfilter)
	|| ydk::is_set(ipv4_next_hop.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(backup_path_id.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_label_name.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_type.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(local_label.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_interface_parent.is_set || is_set(out_interface_parent.yfilter)) leaf_name_data.push_back(out_interface_parent.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.yfilter)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (backup_path_id.is_set || is_set(backup_path_id.yfilter)) leaf_name_data.push_back(backup_path_id.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_name.is_set || is_set(out_label_name.yfilter)) leaf_name_data.push_back(out_label_name.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_type.is_set || is_set(tunnel_type.yfilter)) leaf_name_data.push_back(tunnel_type.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
        out_interface.value_namespace = name_space;
        out_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface-parent")
    {
        out_interface_parent = value;
        out_interface_parent.value_namespace = name_space;
        out_interface_parent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop = value;
        ipv4_next_hop.value_namespace = name_space;
        ipv4_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-path-id")
    {
        backup_path_id = value;
        backup_path_id.value_namespace = name_space;
        backup_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-name")
    {
        out_label_name = value;
        out_label_name.value_namespace = name_space;
        out_label_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type = value;
        tunnel_type.value_namespace = name_space;
        tunnel_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "out-interface-parent")
    {
        out_interface_parent.yfilter = yfilter;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "backup-path-id")
    {
        backup_path_id.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-label-name")
    {
        out_label_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-interface" || name == "out-interface-parent" || name == "ipv4-next-hop" || name == "path-id" || name == "backup-path-id" || name == "load-metric" || name == "out-label" || name == "out-label-name" || name == "tunnel-id" || name == "tunnel-type" || name == "next-hop-id" || name == "local-label")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::InnerStack()
    :
    num_nexthops{YType::uint8, "num-nexthops"},
    num_lbls{YType::uint8, "num-lbls"}
        ,
    nexthop(this, {})
    , label(this, {})
{

    yang_name = "inner-stack"; yang_parent_name = "stackv4-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::~InnerStack()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nexthop.len(); index++)
    {
        if(nexthop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<label.len(); index++)
    {
        if(label[index]->has_data())
            return true;
    }
    return num_nexthops.is_set
	|| num_lbls.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::has_operation() const
{
    for (std::size_t index=0; index<nexthop.len(); index++)
    {
        if(nexthop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<label.len(); index++)
    {
        if(label[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_nexthops.yfilter)
	|| ydk::is_set(num_lbls.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inner-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_nexthops.is_set || is_set(num_nexthops.yfilter)) leaf_name_data.push_back(num_nexthops.get_name_leafdata());
    if (num_lbls.is_set || is_set(num_lbls.yfilter)) leaf_name_data.push_back(num_lbls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop>();
        ent_->parent = this;
        nexthop.append(ent_);
        return ent_;
    }

    if(child_yang_name == "label")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label>();
        ent_->parent = this;
        label.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nexthop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-nexthops")
    {
        num_nexthops = value;
        num_nexthops.value_namespace = name_space;
        num_nexthops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-lbls")
    {
        num_lbls = value;
        num_lbls.value_namespace = name_space;
        num_lbls.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-nexthops")
    {
        num_nexthops.yfilter = yfilter;
    }
    if(value_path == "num-lbls")
    {
        num_lbls.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "label" || name == "num-nexthops" || name == "num-lbls")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop::Nexthop()
    :
    entry{YType::str, "entry"}
{

    yang_name = "nexthop"; yang_parent_name = "inner-stack"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop::~Nexthop()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::Label()
    :
    outgoing_label{YType::uint32, "outgoing-label"},
    outgoing_label_str{YType::str, "outgoing-label-str"}
{

    yang_name = "label"; yang_parent_name = "inner-stack"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::~Label()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::has_data() const
{
    if (is_presence_container) return true;
    return outgoing_label.is_set
	|| outgoing_label_str.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(outgoing_label_str.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (outgoing_label_str.is_set || is_set(outgoing_label_str.yfilter)) leaf_name_data.push_back(outgoing_label_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label-str")
    {
        outgoing_label_str = value;
        outgoing_label_str.value_namespace = name_space;
        outgoing_label_str.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-label-str")
    {
        outgoing_label_str.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outgoing-label" || name == "outgoing-label-str")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::Stackv6Data()
    :
    nexthop(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::Nexthop>())
    , inner_stack(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack>())
{
    nexthop->parent = this;
    inner_stack->parent = this;

    yang_name = "stackv6-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::~Stackv6Data()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::has_data() const
{
    if (is_presence_container) return true;
    return (nexthop !=  nullptr && nexthop->has_data())
	|| (inner_stack !=  nullptr && inner_stack->has_data());
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::has_operation() const
{
    return is_set(yfilter)
	|| (nexthop !=  nullptr && nexthop->has_operation())
	|| (inner_stack !=  nullptr && inner_stack->has_operation());
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stackv6-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::Nexthop>();
        }
        return nexthop;
    }

    if(child_yang_name == "inner-stack")
    {
        if(inner_stack == nullptr)
        {
            inner_stack = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack>();
        }
        return inner_stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nexthop != nullptr)
    {
        _children["nexthop"] = nexthop;
    }

    if(inner_stack != nullptr)
    {
        _children["inner-stack"] = inner_stack;
    }

    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "inner-stack")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::Nexthop::Nexthop()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"},
    out_label_name{YType::str, "out-label-name"},
    ipv6_next_hop{YType::str, "ipv6-next-hop"},
    path_id{YType::uint8, "path-id"},
    backup_path_id{YType::uint8, "backup-path-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    tunnel_type{YType::uint16, "tunnel-type"},
    next_hop_id{YType::uint32, "next-hop-id"},
    out_interface_parent{YType::str, "out-interface-parent"}
{

    yang_name = "nexthop"; yang_parent_name = "stackv6-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::Nexthop::~Nexthop()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::Nexthop::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set
	|| out_interface.is_set
	|| out_label.is_set
	|| out_label_name.is_set
	|| ipv6_next_hop.is_set
	|| path_id.is_set
	|| backup_path_id.is_set
	|| tunnel_id.is_set
	|| tunnel_type.is_set
	|| next_hop_id.is_set
	|| out_interface_parent.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_label_name.yfilter)
	|| ydk::is_set(ipv6_next_hop.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(backup_path_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_type.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(out_interface_parent.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_name.is_set || is_set(out_label_name.yfilter)) leaf_name_data.push_back(out_label_name.get_name_leafdata());
    if (ipv6_next_hop.is_set || is_set(ipv6_next_hop.yfilter)) leaf_name_data.push_back(ipv6_next_hop.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (backup_path_id.is_set || is_set(backup_path_id.yfilter)) leaf_name_data.push_back(backup_path_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_type.is_set || is_set(tunnel_type.yfilter)) leaf_name_data.push_back(tunnel_type.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (out_interface_parent.is_set || is_set(out_interface_parent.yfilter)) leaf_name_data.push_back(out_interface_parent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
        out_interface.value_namespace = name_space;
        out_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-name")
    {
        out_label_name = value;
        out_label_name.value_namespace = name_space;
        out_label_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-next-hop")
    {
        ipv6_next_hop = value;
        ipv6_next_hop.value_namespace = name_space;
        ipv6_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-path-id")
    {
        backup_path_id = value;
        backup_path_id.value_namespace = name_space;
        backup_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type = value;
        tunnel_type.value_namespace = name_space;
        tunnel_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface-parent")
    {
        out_interface_parent = value;
        out_interface_parent.value_namespace = name_space;
        out_interface_parent.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-label-name")
    {
        out_label_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-next-hop")
    {
        ipv6_next_hop.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "backup-path-id")
    {
        backup_path_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "out-interface-parent")
    {
        out_interface_parent.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-interface" || name == "out-label" || name == "out-label-name" || name == "ipv6-next-hop" || name == "path-id" || name == "backup-path-id" || name == "tunnel-id" || name == "tunnel-type" || name == "next-hop-id" || name == "out-interface-parent")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::InnerStack()
    :
    num_nexthops{YType::uint8, "num-nexthops"},
    num_lbls{YType::uint8, "num-lbls"}
        ,
    nexthop(this, {})
    , label(this, {})
{

    yang_name = "inner-stack"; yang_parent_name = "stackv6-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::~InnerStack()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nexthop.len(); index++)
    {
        if(nexthop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<label.len(); index++)
    {
        if(label[index]->has_data())
            return true;
    }
    return num_nexthops.is_set
	|| num_lbls.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::has_operation() const
{
    for (std::size_t index=0; index<nexthop.len(); index++)
    {
        if(nexthop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<label.len(); index++)
    {
        if(label[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_nexthops.yfilter)
	|| ydk::is_set(num_lbls.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inner-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_nexthops.is_set || is_set(num_nexthops.yfilter)) leaf_name_data.push_back(num_nexthops.get_name_leafdata());
    if (num_lbls.is_set || is_set(num_lbls.yfilter)) leaf_name_data.push_back(num_lbls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop>();
        ent_->parent = this;
        nexthop.append(ent_);
        return ent_;
    }

    if(child_yang_name == "label")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label>();
        ent_->parent = this;
        label.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nexthop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-nexthops")
    {
        num_nexthops = value;
        num_nexthops.value_namespace = name_space;
        num_nexthops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-lbls")
    {
        num_lbls = value;
        num_lbls.value_namespace = name_space;
        num_lbls.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-nexthops")
    {
        num_nexthops.yfilter = yfilter;
    }
    if(value_path == "num-lbls")
    {
        num_lbls.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "label" || name == "num-nexthops" || name == "num-lbls")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop::Nexthop()
    :
    entry{YType::str, "entry"}
{

    yang_name = "nexthop"; yang_parent_name = "inner-stack"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop::~Nexthop()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::Label()
    :
    outgoing_label{YType::uint32, "outgoing-label"},
    outgoing_label_str{YType::str, "outgoing-label-str"}
{

    yang_name = "label"; yang_parent_name = "inner-stack"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::~Label()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::has_data() const
{
    if (is_presence_container) return true;
    return outgoing_label.is_set
	|| outgoing_label_str.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(outgoing_label_str.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (outgoing_label_str.is_set || is_set(outgoing_label_str.yfilter)) leaf_name_data.push_back(outgoing_label_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label-str")
    {
        outgoing_label_str = value;
        outgoing_label_str.value_namespace = name_space;
        outgoing_label_str.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-label-str")
    {
        outgoing_label_str.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outgoing-label" || name == "outgoing-label-str")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::TeHeadData::TeHeadData()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    tunnel_local_label{YType::uint32, "tunnel-local-label"},
    tunnel_local_label_str{YType::str, "tunnel-local-label-str"},
    tunnel_fwd_class{YType::uint8, "tunnel-fwd-class"},
    tunnel_load_metric{YType::uint32, "tunnel-load-metric"},
    flags_decode{YType::str, "flags-decode"}
{

    yang_name = "te-head-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::TeHeadData::~TeHeadData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::TeHeadData::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| table_name.is_set
	|| tunnel_local_label.is_set
	|| tunnel_local_label_str.is_set
	|| tunnel_fwd_class.is_set
	|| tunnel_load_metric.is_set
	|| flags_decode.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::TeHeadData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(tunnel_local_label.yfilter)
	|| ydk::is_set(tunnel_local_label_str.yfilter)
	|| ydk::is_set(tunnel_fwd_class.yfilter)
	|| ydk::is_set(tunnel_load_metric.yfilter)
	|| ydk::is_set(flags_decode.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::TeHeadData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-head-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::TeHeadData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (tunnel_local_label.is_set || is_set(tunnel_local_label.yfilter)) leaf_name_data.push_back(tunnel_local_label.get_name_leafdata());
    if (tunnel_local_label_str.is_set || is_set(tunnel_local_label_str.yfilter)) leaf_name_data.push_back(tunnel_local_label_str.get_name_leafdata());
    if (tunnel_fwd_class.is_set || is_set(tunnel_fwd_class.yfilter)) leaf_name_data.push_back(tunnel_fwd_class.get_name_leafdata());
    if (tunnel_load_metric.is_set || is_set(tunnel_load_metric.yfilter)) leaf_name_data.push_back(tunnel_load_metric.get_name_leafdata());
    if (flags_decode.is_set || is_set(flags_decode.yfilter)) leaf_name_data.push_back(flags_decode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::TeHeadData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::TeHeadData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::TeHeadData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-local-label")
    {
        tunnel_local_label = value;
        tunnel_local_label.value_namespace = name_space;
        tunnel_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-local-label-str")
    {
        tunnel_local_label_str = value;
        tunnel_local_label_str.value_namespace = name_space;
        tunnel_local_label_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-fwd-class")
    {
        tunnel_fwd_class = value;
        tunnel_fwd_class.value_namespace = name_space;
        tunnel_fwd_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-load-metric")
    {
        tunnel_load_metric = value;
        tunnel_load_metric.value_namespace = name_space;
        tunnel_load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags-decode")
    {
        flags_decode = value;
        flags_decode.value_namespace = name_space;
        flags_decode.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::TeHeadData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-local-label")
    {
        tunnel_local_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-local-label-str")
    {
        tunnel_local_label_str.yfilter = yfilter;
    }
    if(value_path == "tunnel-fwd-class")
    {
        tunnel_fwd_class.yfilter = yfilter;
    }
    if(value_path == "tunnel-load-metric")
    {
        tunnel_load_metric.yfilter = yfilter;
    }
    if(value_path == "flags-decode")
    {
        flags_decode.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::TeHeadData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "tunnel-local-label" || name == "tunnel-local-label-str" || name == "tunnel-fwd-class" || name == "tunnel-load-metric" || name == "flags-decode")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::DmtcData::DmtcData()
    :
    dmtc_ext_ifh{YType::str, "dmtc-ext-ifh"}
{

    yang_name = "dmtc-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::DmtcData::~DmtcData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::DmtcData::has_data() const
{
    if (is_presence_container) return true;
    return dmtc_ext_ifh.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::DmtcData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dmtc_ext_ifh.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::DmtcData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dmtc-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::DmtcData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dmtc_ext_ifh.is_set || is_set(dmtc_ext_ifh.yfilter)) leaf_name_data.push_back(dmtc_ext_ifh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::DmtcData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::DmtcData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::DmtcData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dmtc-ext-ifh")
    {
        dmtc_ext_ifh = value;
        dmtc_ext_ifh.value_namespace = name_space;
        dmtc_ext_ifh.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::DmtcData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dmtc-ext-ifh")
    {
        dmtc_ext_ifh.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::DmtcData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dmtc-ext-ifh")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::NnhStackv4Data()
    :
    ipv4_stack(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack>())
    , neighbor_next_hop(this, {})
{
    ipv4_stack->parent = this;

    yang_name = "nnh-stackv4-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::~NnhStackv4Data()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_next_hop.len(); index++)
    {
        if(neighbor_next_hop[index]->has_data())
            return true;
    }
    return (ipv4_stack !=  nullptr && ipv4_stack->has_data());
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::has_operation() const
{
    for (std::size_t index=0; index<neighbor_next_hop.len(); index++)
    {
        if(neighbor_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ipv4_stack !=  nullptr && ipv4_stack->has_operation());
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nnh-stackv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-stack")
    {
        if(ipv4_stack == nullptr)
        {
            ipv4_stack = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack>();
        }
        return ipv4_stack;
    }

    if(child_yang_name == "neighbor-next-hop")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop>();
        ent_->parent = this;
        neighbor_next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_stack != nullptr)
    {
        _children["ipv4-stack"] = ipv4_stack;
    }

    count_ = 0;
    for (auto ent_ : neighbor_next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-stack" || name == "neighbor-next-hop")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Ipv4Stack()
    :
    owner_application_type{YType::enumeration, "owner-application-type"}
        ,
    nexthop(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop>())
    , inner_stack(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack>())
{
    nexthop->parent = this;
    inner_stack->parent = this;

    yang_name = "ipv4-stack"; yang_parent_name = "nnh-stackv4-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::~Ipv4Stack()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::has_data() const
{
    if (is_presence_container) return true;
    return owner_application_type.is_set
	|| (nexthop !=  nullptr && nexthop->has_data())
	|| (inner_stack !=  nullptr && inner_stack->has_data());
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner_application_type.yfilter)
	|| (nexthop !=  nullptr && nexthop->has_operation())
	|| (inner_stack !=  nullptr && inner_stack->has_operation());
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner_application_type.is_set || is_set(owner_application_type.yfilter)) leaf_name_data.push_back(owner_application_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop>();
        }
        return nexthop;
    }

    if(child_yang_name == "inner-stack")
    {
        if(inner_stack == nullptr)
        {
            inner_stack = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack>();
        }
        return inner_stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nexthop != nullptr)
    {
        _children["nexthop"] = nexthop;
    }

    if(inner_stack != nullptr)
    {
        _children["inner-stack"] = inner_stack;
    }

    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner-application-type")
    {
        owner_application_type = value;
        owner_application_type.value_namespace = name_space;
        owner_application_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner-application-type")
    {
        owner_application_type.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "inner-stack" || name == "owner-application-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop::Nexthop()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    out_interface{YType::str, "out-interface"},
    out_interface_parent{YType::str, "out-interface-parent"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    path_id{YType::uint8, "path-id"},
    backup_path_id{YType::uint8, "backup-path-id"},
    load_metric{YType::uint32, "load-metric"},
    out_label{YType::uint32, "out-label"},
    out_label_name{YType::str, "out-label-name"},
    tunnel_id{YType::uint16, "tunnel-id"},
    tunnel_type{YType::uint16, "tunnel-type"},
    next_hop_id{YType::uint32, "next-hop-id"},
    local_label{YType::uint32, "local-label"}
{

    yang_name = "nexthop"; yang_parent_name = "ipv4-stack"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop::~Nexthop()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set
	|| out_interface.is_set
	|| out_interface_parent.is_set
	|| ipv4_next_hop.is_set
	|| path_id.is_set
	|| backup_path_id.is_set
	|| load_metric.is_set
	|| out_label.is_set
	|| out_label_name.is_set
	|| tunnel_id.is_set
	|| tunnel_type.is_set
	|| next_hop_id.is_set
	|| local_label.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_interface_parent.yfilter)
	|| ydk::is_set(ipv4_next_hop.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(backup_path_id.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_label_name.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_type.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(local_label.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_interface_parent.is_set || is_set(out_interface_parent.yfilter)) leaf_name_data.push_back(out_interface_parent.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.yfilter)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (backup_path_id.is_set || is_set(backup_path_id.yfilter)) leaf_name_data.push_back(backup_path_id.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_name.is_set || is_set(out_label_name.yfilter)) leaf_name_data.push_back(out_label_name.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_type.is_set || is_set(tunnel_type.yfilter)) leaf_name_data.push_back(tunnel_type.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
        out_interface.value_namespace = name_space;
        out_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface-parent")
    {
        out_interface_parent = value;
        out_interface_parent.value_namespace = name_space;
        out_interface_parent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop = value;
        ipv4_next_hop.value_namespace = name_space;
        ipv4_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-path-id")
    {
        backup_path_id = value;
        backup_path_id.value_namespace = name_space;
        backup_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-name")
    {
        out_label_name = value;
        out_label_name.value_namespace = name_space;
        out_label_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type = value;
        tunnel_type.value_namespace = name_space;
        tunnel_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "out-interface-parent")
    {
        out_interface_parent.yfilter = yfilter;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "backup-path-id")
    {
        backup_path_id.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-label-name")
    {
        out_label_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-interface" || name == "out-interface-parent" || name == "ipv4-next-hop" || name == "path-id" || name == "backup-path-id" || name == "load-metric" || name == "out-label" || name == "out-label-name" || name == "tunnel-id" || name == "tunnel-type" || name == "next-hop-id" || name == "local-label")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::InnerStack()
    :
    num_nexthops{YType::uint8, "num-nexthops"},
    num_lbls{YType::uint8, "num-lbls"}
        ,
    nexthop(this, {})
    , label(this, {})
{

    yang_name = "inner-stack"; yang_parent_name = "ipv4-stack"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::~InnerStack()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nexthop.len(); index++)
    {
        if(nexthop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<label.len(); index++)
    {
        if(label[index]->has_data())
            return true;
    }
    return num_nexthops.is_set
	|| num_lbls.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::has_operation() const
{
    for (std::size_t index=0; index<nexthop.len(); index++)
    {
        if(nexthop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<label.len(); index++)
    {
        if(label[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_nexthops.yfilter)
	|| ydk::is_set(num_lbls.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inner-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_nexthops.is_set || is_set(num_nexthops.yfilter)) leaf_name_data.push_back(num_nexthops.get_name_leafdata());
    if (num_lbls.is_set || is_set(num_lbls.yfilter)) leaf_name_data.push_back(num_lbls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop>();
        ent_->parent = this;
        nexthop.append(ent_);
        return ent_;
    }

    if(child_yang_name == "label")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label>();
        ent_->parent = this;
        label.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nexthop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-nexthops")
    {
        num_nexthops = value;
        num_nexthops.value_namespace = name_space;
        num_nexthops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-lbls")
    {
        num_lbls = value;
        num_lbls.value_namespace = name_space;
        num_lbls.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-nexthops")
    {
        num_nexthops.yfilter = yfilter;
    }
    if(value_path == "num-lbls")
    {
        num_lbls.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "label" || name == "num-nexthops" || name == "num-lbls")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop::Nexthop()
    :
    entry{YType::str, "entry"}
{

    yang_name = "nexthop"; yang_parent_name = "inner-stack"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop::~Nexthop()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label::Label()
    :
    outgoing_label{YType::uint32, "outgoing-label"},
    outgoing_label_str{YType::str, "outgoing-label-str"}
{

    yang_name = "label"; yang_parent_name = "inner-stack"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label::~Label()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label::has_data() const
{
    if (is_presence_container) return true;
    return outgoing_label.is_set
	|| outgoing_label_str.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(outgoing_label_str.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (outgoing_label_str.is_set || is_set(outgoing_label_str.yfilter)) leaf_name_data.push_back(outgoing_label_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label-str")
    {
        outgoing_label_str = value;
        outgoing_label_str.value_namespace = name_space;
        outgoing_label_str.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-label-str")
    {
        outgoing_label_str.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outgoing-label" || name == "outgoing-label-str")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop::NeighborNextHop()
    :
    nnh_type{YType::enumeration, "nnh-type"},
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "neighbor-next-hop"; yang_parent_name = "nnh-stackv4-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop::~NeighborNextHop()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop::has_data() const
{
    if (is_presence_container) return true;
    return nnh_type.is_set
	|| address.is_set
	|| interface_name.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nnh_type.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nnh_type.is_set || is_set(nnh_type.yfilter)) leaf_name_data.push_back(nnh_type.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nnh-type")
    {
        nnh_type = value;
        nnh_type.value_namespace = name_space;
        nnh_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nnh-type")
    {
        nnh_type.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nnh-type" || name == "address" || name == "interface-name")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::NnhStackv6Data()
    :
    ipv6_stack(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack>())
    , neighbor_next_hop(this, {})
{
    ipv6_stack->parent = this;

    yang_name = "nnh-stackv6-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::~NnhStackv6Data()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_next_hop.len(); index++)
    {
        if(neighbor_next_hop[index]->has_data())
            return true;
    }
    return (ipv6_stack !=  nullptr && ipv6_stack->has_data());
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::has_operation() const
{
    for (std::size_t index=0; index<neighbor_next_hop.len(); index++)
    {
        if(neighbor_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ipv6_stack !=  nullptr && ipv6_stack->has_operation());
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nnh-stackv6-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-stack")
    {
        if(ipv6_stack == nullptr)
        {
            ipv6_stack = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack>();
        }
        return ipv6_stack;
    }

    if(child_yang_name == "neighbor-next-hop")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop>();
        ent_->parent = this;
        neighbor_next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv6_stack != nullptr)
    {
        _children["ipv6-stack"] = ipv6_stack;
    }

    count_ = 0;
    for (auto ent_ : neighbor_next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-stack" || name == "neighbor-next-hop")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Ipv6Stack()
    :
    nexthop(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop>())
    , inner_stack(std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack>())
{
    nexthop->parent = this;
    inner_stack->parent = this;

    yang_name = "ipv6-stack"; yang_parent_name = "nnh-stackv6-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::~Ipv6Stack()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::has_data() const
{
    if (is_presence_container) return true;
    return (nexthop !=  nullptr && nexthop->has_data())
	|| (inner_stack !=  nullptr && inner_stack->has_data());
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::has_operation() const
{
    return is_set(yfilter)
	|| (nexthop !=  nullptr && nexthop->has_operation())
	|| (inner_stack !=  nullptr && inner_stack->has_operation());
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop>();
        }
        return nexthop;
    }

    if(child_yang_name == "inner-stack")
    {
        if(inner_stack == nullptr)
        {
            inner_stack = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack>();
        }
        return inner_stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nexthop != nullptr)
    {
        _children["nexthop"] = nexthop;
    }

    if(inner_stack != nullptr)
    {
        _children["inner-stack"] = inner_stack;
    }

    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "inner-stack")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop::Nexthop()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"},
    out_label_name{YType::str, "out-label-name"},
    ipv6_next_hop{YType::str, "ipv6-next-hop"},
    path_id{YType::uint8, "path-id"},
    backup_path_id{YType::uint8, "backup-path-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    tunnel_type{YType::uint16, "tunnel-type"},
    next_hop_id{YType::uint32, "next-hop-id"},
    out_interface_parent{YType::str, "out-interface-parent"}
{

    yang_name = "nexthop"; yang_parent_name = "ipv6-stack"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop::~Nexthop()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set
	|| out_interface.is_set
	|| out_label.is_set
	|| out_label_name.is_set
	|| ipv6_next_hop.is_set
	|| path_id.is_set
	|| backup_path_id.is_set
	|| tunnel_id.is_set
	|| tunnel_type.is_set
	|| next_hop_id.is_set
	|| out_interface_parent.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_label_name.yfilter)
	|| ydk::is_set(ipv6_next_hop.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(backup_path_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_type.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(out_interface_parent.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_name.is_set || is_set(out_label_name.yfilter)) leaf_name_data.push_back(out_label_name.get_name_leafdata());
    if (ipv6_next_hop.is_set || is_set(ipv6_next_hop.yfilter)) leaf_name_data.push_back(ipv6_next_hop.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (backup_path_id.is_set || is_set(backup_path_id.yfilter)) leaf_name_data.push_back(backup_path_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_type.is_set || is_set(tunnel_type.yfilter)) leaf_name_data.push_back(tunnel_type.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (out_interface_parent.is_set || is_set(out_interface_parent.yfilter)) leaf_name_data.push_back(out_interface_parent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
        out_interface.value_namespace = name_space;
        out_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-name")
    {
        out_label_name = value;
        out_label_name.value_namespace = name_space;
        out_label_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-next-hop")
    {
        ipv6_next_hop = value;
        ipv6_next_hop.value_namespace = name_space;
        ipv6_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-path-id")
    {
        backup_path_id = value;
        backup_path_id.value_namespace = name_space;
        backup_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type = value;
        tunnel_type.value_namespace = name_space;
        tunnel_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface-parent")
    {
        out_interface_parent = value;
        out_interface_parent.value_namespace = name_space;
        out_interface_parent.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-label-name")
    {
        out_label_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-next-hop")
    {
        ipv6_next_hop.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "backup-path-id")
    {
        backup_path_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "out-interface-parent")
    {
        out_interface_parent.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-interface" || name == "out-label" || name == "out-label-name" || name == "ipv6-next-hop" || name == "path-id" || name == "backup-path-id" || name == "tunnel-id" || name == "tunnel-type" || name == "next-hop-id" || name == "out-interface-parent")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::InnerStack()
    :
    num_nexthops{YType::uint8, "num-nexthops"},
    num_lbls{YType::uint8, "num-lbls"}
        ,
    nexthop(this, {})
    , label(this, {})
{

    yang_name = "inner-stack"; yang_parent_name = "ipv6-stack"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::~InnerStack()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nexthop.len(); index++)
    {
        if(nexthop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<label.len(); index++)
    {
        if(label[index]->has_data())
            return true;
    }
    return num_nexthops.is_set
	|| num_lbls.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::has_operation() const
{
    for (std::size_t index=0; index<nexthop.len(); index++)
    {
        if(nexthop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<label.len(); index++)
    {
        if(label[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_nexthops.yfilter)
	|| ydk::is_set(num_lbls.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inner-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_nexthops.is_set || is_set(num_nexthops.yfilter)) leaf_name_data.push_back(num_nexthops.get_name_leafdata());
    if (num_lbls.is_set || is_set(num_lbls.yfilter)) leaf_name_data.push_back(num_lbls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop>();
        ent_->parent = this;
        nexthop.append(ent_);
        return ent_;
    }

    if(child_yang_name == "label")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label>();
        ent_->parent = this;
        label.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nexthop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-nexthops")
    {
        num_nexthops = value;
        num_nexthops.value_namespace = name_space;
        num_nexthops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-lbls")
    {
        num_lbls = value;
        num_lbls.value_namespace = name_space;
        num_lbls.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-nexthops")
    {
        num_nexthops.yfilter = yfilter;
    }
    if(value_path == "num-lbls")
    {
        num_lbls.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "label" || name == "num-nexthops" || name == "num-lbls")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop::Nexthop()
    :
    entry{YType::str, "entry"}
{

    yang_name = "nexthop"; yang_parent_name = "inner-stack"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop::~Nexthop()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label::Label()
    :
    outgoing_label{YType::uint32, "outgoing-label"},
    outgoing_label_str{YType::str, "outgoing-label-str"}
{

    yang_name = "label"; yang_parent_name = "inner-stack"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label::~Label()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label::has_data() const
{
    if (is_presence_container) return true;
    return outgoing_label.is_set
	|| outgoing_label_str.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(outgoing_label_str.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (outgoing_label_str.is_set || is_set(outgoing_label_str.yfilter)) leaf_name_data.push_back(outgoing_label_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label-str")
    {
        outgoing_label_str = value;
        outgoing_label_str.value_namespace = name_space;
        outgoing_label_str.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-label-str")
    {
        outgoing_label_str.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outgoing-label" || name == "outgoing-label-str")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop::NeighborNextHop()
    :
    nnh_type{YType::enumeration, "nnh-type"},
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "neighbor-next-hop"; yang_parent_name = "nnh-stackv6-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop::~NeighborNextHop()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop::has_data() const
{
    if (is_presence_container) return true;
    return nnh_type.is_set
	|| address.is_set
	|| interface_name.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nnh_type.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nnh_type.is_set || is_set(nnh_type.yfilter)) leaf_name_data.push_back(nnh_type.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nnh-type")
    {
        nnh_type = value;
        nnh_type.value_namespace = name_space;
        nnh_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nnh-type")
    {
        nnh_type.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nnh-type" || name == "address" || name == "interface-name")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::LabelRange::LabelRange()
    :
    start_label_active{YType::uint32, "start-label-active"},
    end_label_active{YType::uint32, "end-label-active"}
{

    yang_name = "label-range"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::LabelRange::~LabelRange()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::LabelRange::has_data() const
{
    if (is_presence_container) return true;
    return start_label_active.is_set
	|| end_label_active.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::LabelRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_label_active.yfilter)
	|| ydk::is_set(end_label_active.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::LabelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::LabelRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_label_active.is_set || is_set(start_label_active.yfilter)) leaf_name_data.push_back(start_label_active.get_name_leafdata());
    if (end_label_active.is_set || is_set(end_label_active.yfilter)) leaf_name_data.push_back(end_label_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::LabelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::LabelRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::LabelRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-label-active")
    {
        start_label_active = value;
        start_label_active.value_namespace = name_space;
        start_label_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-label-active")
    {
        end_label_active = value;
        end_label_active.value_namespace = name_space;
        end_label_active.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::LabelRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-label-active")
    {
        start_label_active.yfilter = yfilter;
    }
    if(value_path == "end-label-active")
    {
        end_label_active.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::LabelRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-label-active" || name == "end-label-active")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4s()
    :
    rewrite_ipv4(this, {})
{

    yang_name = "rewrite-ipv4s"; yang_parent_name = "rewrite"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::~RewriteIpv4s()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rewrite_ipv4.len(); index++)
    {
        if(rewrite_ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsd::Rewrite::RewriteIpv4s::has_operation() const
{
    for (std::size_t index=0; index<rewrite_ipv4.len(); index++)
    {
        if(rewrite_ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-ipv4s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rewrite-ipv4")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4>();
        ent_->parent = this;
        rewrite_ipv4.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rewrite_ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewriteIpv4s::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rewrite-ipv4")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteIpv4()
    :
    rsi_table_name{YType::str, "rsi-table-name"},
    rsi_table_id{YType::str, "rsi-table-id"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    rewrite_version{YType::uint64, "rewrite-version"},
    bcdl_priority{YType::uint8, "bcdl-priority"},
    lsd_queue{YType::uint8, "lsd-queue"},
    rw_install_time{YType::uint64, "rw-install-time"},
    rw_install_age{YType::uint64, "rw-install-age"},
    rw_updated{YType::int32, "rw-updated"},
    priority_updated{YType::int32, "priority-updated"},
    rw_redist{YType::int32, "rw-redist"}
        ,
    fpi_key(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey>())
    , rewrite_id(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId>())
    , associated_fpi(this, {})
    , v4_rpf(this, {})
    , v6_rpf(this, {})
    , mois(this, {})
{
    fpi_key->parent = this;
    rewrite_id->parent = this;

    yang_name = "rewrite-ipv4"; yang_parent_name = "rewrite-ipv4s"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::~RewriteIpv4()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<associated_fpi.len(); index++)
    {
        if(associated_fpi[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<v4_rpf.len(); index++)
    {
        if(v4_rpf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<v6_rpf.len(); index++)
    {
        if(v6_rpf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mois.len(); index++)
    {
        if(mois[index]->has_data())
            return true;
    }
    return rsi_table_name.is_set
	|| rsi_table_id.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| rewrite_version.is_set
	|| bcdl_priority.is_set
	|| lsd_queue.is_set
	|| rw_install_time.is_set
	|| rw_install_age.is_set
	|| rw_updated.is_set
	|| priority_updated.is_set
	|| rw_redist.is_set
	|| (fpi_key !=  nullptr && fpi_key->has_data())
	|| (rewrite_id !=  nullptr && rewrite_id->has_data());
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::has_operation() const
{
    for (std::size_t index=0; index<associated_fpi.len(); index++)
    {
        if(associated_fpi[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<v4_rpf.len(); index++)
    {
        if(v4_rpf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<v6_rpf.len(); index++)
    {
        if(v6_rpf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mois.len(); index++)
    {
        if(mois[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rsi_table_name.yfilter)
	|| ydk::is_set(rsi_table_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(rewrite_version.yfilter)
	|| ydk::is_set(bcdl_priority.yfilter)
	|| ydk::is_set(lsd_queue.yfilter)
	|| ydk::is_set(rw_install_time.yfilter)
	|| ydk::is_set(rw_install_age.yfilter)
	|| ydk::is_set(rw_updated.yfilter)
	|| ydk::is_set(priority_updated.yfilter)
	|| ydk::is_set(rw_redist.yfilter)
	|| (fpi_key !=  nullptr && fpi_key->has_operation())
	|| (rewrite_id !=  nullptr && rewrite_id->has_operation());
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsi_table_name.is_set || is_set(rsi_table_name.yfilter)) leaf_name_data.push_back(rsi_table_name.get_name_leafdata());
    if (rsi_table_id.is_set || is_set(rsi_table_id.yfilter)) leaf_name_data.push_back(rsi_table_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (rewrite_version.is_set || is_set(rewrite_version.yfilter)) leaf_name_data.push_back(rewrite_version.get_name_leafdata());
    if (bcdl_priority.is_set || is_set(bcdl_priority.yfilter)) leaf_name_data.push_back(bcdl_priority.get_name_leafdata());
    if (lsd_queue.is_set || is_set(lsd_queue.yfilter)) leaf_name_data.push_back(lsd_queue.get_name_leafdata());
    if (rw_install_time.is_set || is_set(rw_install_time.yfilter)) leaf_name_data.push_back(rw_install_time.get_name_leafdata());
    if (rw_install_age.is_set || is_set(rw_install_age.yfilter)) leaf_name_data.push_back(rw_install_age.get_name_leafdata());
    if (rw_updated.is_set || is_set(rw_updated.yfilter)) leaf_name_data.push_back(rw_updated.get_name_leafdata());
    if (priority_updated.is_set || is_set(priority_updated.yfilter)) leaf_name_data.push_back(priority_updated.get_name_leafdata());
    if (rw_redist.is_set || is_set(rw_redist.yfilter)) leaf_name_data.push_back(rw_redist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpi-key")
    {
        if(fpi_key == nullptr)
        {
            fpi_key = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey>();
        }
        return fpi_key;
    }

    if(child_yang_name == "rewrite-id")
    {
        if(rewrite_id == nullptr)
        {
            rewrite_id = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId>();
        }
        return rewrite_id;
    }

    if(child_yang_name == "associated-fpi")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi>();
        ent_->parent = this;
        associated_fpi.append(ent_);
        return ent_;
    }

    if(child_yang_name == "v4-rpf")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::V4Rpf>();
        ent_->parent = this;
        v4_rpf.append(ent_);
        return ent_;
    }

    if(child_yang_name == "v6-rpf")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::V6Rpf>();
        ent_->parent = this;
        v6_rpf.append(ent_);
        return ent_;
    }

    if(child_yang_name == "mois")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois>();
        ent_->parent = this;
        mois.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fpi_key != nullptr)
    {
        _children["fpi-key"] = fpi_key;
    }

    if(rewrite_id != nullptr)
    {
        _children["rewrite-id"] = rewrite_id;
    }

    count_ = 0;
    for (auto ent_ : associated_fpi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : v4_rpf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : v6_rpf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : mois.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rsi-table-name")
    {
        rsi_table_name = value;
        rsi_table_name.value_namespace = name_space;
        rsi_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsi-table-id")
    {
        rsi_table_id = value;
        rsi_table_id.value_namespace = name_space;
        rsi_table_id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rewrite-version")
    {
        rewrite_version = value;
        rewrite_version.value_namespace = name_space;
        rewrite_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcdl-priority")
    {
        bcdl_priority = value;
        bcdl_priority.value_namespace = name_space;
        bcdl_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-queue")
    {
        lsd_queue = value;
        lsd_queue.value_namespace = name_space;
        lsd_queue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rw-install-time")
    {
        rw_install_time = value;
        rw_install_time.value_namespace = name_space;
        rw_install_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rw-install-age")
    {
        rw_install_age = value;
        rw_install_age.value_namespace = name_space;
        rw_install_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rw-updated")
    {
        rw_updated = value;
        rw_updated.value_namespace = name_space;
        rw_updated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-updated")
    {
        priority_updated = value;
        priority_updated.value_namespace = name_space;
        priority_updated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rw-redist")
    {
        rw_redist = value;
        rw_redist.value_namespace = name_space;
        rw_redist.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rsi-table-name")
    {
        rsi_table_name.yfilter = yfilter;
    }
    if(value_path == "rsi-table-id")
    {
        rsi_table_id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "rewrite-version")
    {
        rewrite_version.yfilter = yfilter;
    }
    if(value_path == "bcdl-priority")
    {
        bcdl_priority.yfilter = yfilter;
    }
    if(value_path == "lsd-queue")
    {
        lsd_queue.yfilter = yfilter;
    }
    if(value_path == "rw-install-time")
    {
        rw_install_time.yfilter = yfilter;
    }
    if(value_path == "rw-install-age")
    {
        rw_install_age.yfilter = yfilter;
    }
    if(value_path == "rw-updated")
    {
        rw_updated.yfilter = yfilter;
    }
    if(value_path == "priority-updated")
    {
        priority_updated.yfilter = yfilter;
    }
    if(value_path == "rw-redist")
    {
        rw_redist.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpi-key" || name == "rewrite-id" || name == "associated-fpi" || name == "v4-rpf" || name == "v6-rpf" || name == "mois" || name == "rsi-table-name" || name == "rsi-table-id" || name == "prefix" || name == "prefix-length" || name == "rewrite-version" || name == "bcdl-priority" || name == "lsd-queue" || name == "rw-install-time" || name == "rw-install-age" || name == "rw-updated" || name == "priority-updated" || name == "rw-redist")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::FpiKey()
    :
    fpi(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi>())
    , application_owner(this, {})
{
    fpi->parent = this;

    yang_name = "fpi-key"; yang_parent_name = "rewrite-ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::~FpiKey()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application_owner.len(); index++)
    {
        if(application_owner[index]->has_data())
            return true;
    }
    return (fpi !=  nullptr && fpi->has_data());
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::has_operation() const
{
    for (std::size_t index=0; index<application_owner.len(); index++)
    {
        if(application_owner[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (fpi !=  nullptr && fpi->has_operation());
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpi-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpi")
    {
        if(fpi == nullptr)
        {
            fpi = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi>();
        }
        return fpi;
    }

    if(child_yang_name == "application-owner")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::ApplicationOwner>();
        ent_->parent = this;
        application_owner.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fpi != nullptr)
    {
        _children["fpi"] = fpi;
    }

    count_ = 0;
    for (auto ent_ : application_owner.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpi" || name == "application-owner")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Fpi()
    :
    fpi_type{YType::enumeration, "fpi-type"}
        ,
    label_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelData>())
    , te_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::TeData>())
    , ipv4_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv4Data>())
    , ipv6_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv6Data>())
    , pw_list_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::PwListData>())
    , dmtc_ext_intf_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::DmtcExtIntfData>())
    , label_range(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelRange>())
{
    label_data->parent = this;
    te_data->parent = this;
    ipv4_data->parent = this;
    ipv6_data->parent = this;
    pw_list_data->parent = this;
    dmtc_ext_intf_data->parent = this;
    label_range->parent = this;

    yang_name = "fpi"; yang_parent_name = "fpi-key"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::~Fpi()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::has_data() const
{
    if (is_presence_container) return true;
    return fpi_type.is_set
	|| (label_data !=  nullptr && label_data->has_data())
	|| (te_data !=  nullptr && te_data->has_data())
	|| (ipv4_data !=  nullptr && ipv4_data->has_data())
	|| (ipv6_data !=  nullptr && ipv6_data->has_data())
	|| (pw_list_data !=  nullptr && pw_list_data->has_data())
	|| (dmtc_ext_intf_data !=  nullptr && dmtc_ext_intf_data->has_data())
	|| (label_range !=  nullptr && label_range->has_data());
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fpi_type.yfilter)
	|| (label_data !=  nullptr && label_data->has_operation())
	|| (te_data !=  nullptr && te_data->has_operation())
	|| (ipv4_data !=  nullptr && ipv4_data->has_operation())
	|| (ipv6_data !=  nullptr && ipv6_data->has_operation())
	|| (pw_list_data !=  nullptr && pw_list_data->has_operation())
	|| (dmtc_ext_intf_data !=  nullptr && dmtc_ext_intf_data->has_operation())
	|| (label_range !=  nullptr && label_range->has_operation());
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/fpi-key/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fpi_type.is_set || is_set(fpi_type.yfilter)) leaf_name_data.push_back(fpi_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-data")
    {
        if(label_data == nullptr)
        {
            label_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelData>();
        }
        return label_data;
    }

    if(child_yang_name == "te-data")
    {
        if(te_data == nullptr)
        {
            te_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::TeData>();
        }
        return te_data;
    }

    if(child_yang_name == "ipv4-data")
    {
        if(ipv4_data == nullptr)
        {
            ipv4_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv4Data>();
        }
        return ipv4_data;
    }

    if(child_yang_name == "ipv6-data")
    {
        if(ipv6_data == nullptr)
        {
            ipv6_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv6Data>();
        }
        return ipv6_data;
    }

    if(child_yang_name == "pw-list-data")
    {
        if(pw_list_data == nullptr)
        {
            pw_list_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::PwListData>();
        }
        return pw_list_data;
    }

    if(child_yang_name == "dmtc-ext-intf-data")
    {
        if(dmtc_ext_intf_data == nullptr)
        {
            dmtc_ext_intf_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::DmtcExtIntfData>();
        }
        return dmtc_ext_intf_data;
    }

    if(child_yang_name == "label-range")
    {
        if(label_range == nullptr)
        {
            label_range = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelRange>();
        }
        return label_range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(label_data != nullptr)
    {
        _children["label-data"] = label_data;
    }

    if(te_data != nullptr)
    {
        _children["te-data"] = te_data;
    }

    if(ipv4_data != nullptr)
    {
        _children["ipv4-data"] = ipv4_data;
    }

    if(ipv6_data != nullptr)
    {
        _children["ipv6-data"] = ipv6_data;
    }

    if(pw_list_data != nullptr)
    {
        _children["pw-list-data"] = pw_list_data;
    }

    if(dmtc_ext_intf_data != nullptr)
    {
        _children["dmtc-ext-intf-data"] = dmtc_ext_intf_data;
    }

    if(label_range != nullptr)
    {
        _children["label-range"] = label_range;
    }

    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fpi-type")
    {
        fpi_type = value;
        fpi_type.value_namespace = name_space;
        fpi_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fpi-type")
    {
        fpi_type.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-data" || name == "te-data" || name == "ipv4-data" || name == "ipv6-data" || name == "pw-list-data" || name == "dmtc-ext-intf-data" || name == "label-range" || name == "fpi-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelData::LabelData()
    :
    label{YType::uint32, "label"},
    security_id{YType::uint32, "security-id"},
    elc{YType::int32, "elc"}
{

    yang_name = "label-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelData::~LabelData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelData::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| security_id.is_set
	|| elc.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(security_id.yfilter)
	|| ydk::is_set(elc.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/fpi-key/fpi/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (elc.is_set || is_set(elc.yfilter)) leaf_name_data.push_back(elc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-id")
    {
        security_id = value;
        security_id.value_namespace = name_space;
        security_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "elc")
    {
        elc = value;
        elc.value_namespace = name_space;
        elc.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "security-id")
    {
        security_id.yfilter = yfilter;
    }
    if(value_path == "elc")
    {
        elc.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "security-id" || name == "elc")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::TeData::TeData()
    :
    tunnel_interface{YType::str, "tunnel-interface"},
    local_label{YType::uint32, "local-label"}
{

    yang_name = "te-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::TeData::~TeData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::TeData::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_interface.is_set
	|| local_label.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::TeData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(local_label.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::TeData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/fpi-key/fpi/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::TeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::TeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::TeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::TeData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::TeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::TeData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::TeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-interface" || name == "local-label")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv4Data::Ipv4Data()
    :
    table_id{YType::uint32, "table-id"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    version{YType::uint32, "version"},
    sr_local_label{YType::uint32, "sr-local-label"}
{

    yang_name = "ipv4-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv4Data::~Ipv4Data()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv4Data::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| version.is_set
	|| sr_local_label.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(sr_local_label.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv4Data::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/fpi-key/fpi/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (sr_local_label.is_set || is_set(sr_local_label.yfilter)) leaf_name_data.push_back(sr_local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-local-label")
    {
        sr_local_label = value;
        sr_local_label.value_namespace = name_space;
        sr_local_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "sr-local-label")
    {
        sr_local_label.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "prefix" || name == "prefix-length" || name == "version" || name == "sr-local-label")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv6Data::Ipv6Data()
    :
    table_id{YType::uint32, "table-id"},
    prefix{YType::str, "prefix"},
    router_flags{YType::uint32, "router-flags"},
    prefix_len{YType::uint8, "prefix-len"},
    version{YType::uint32, "version"}
{

    yang_name = "ipv6-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv6Data::~Ipv6Data()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv6Data::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| prefix.is_set
	|| router_flags.is_set
	|| prefix_len.is_set
	|| version.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv6Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(router_flags.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv6Data::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/fpi-key/fpi/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv6Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (router_flags.is_set || is_set(router_flags.yfilter)) leaf_name_data.push_back(router_flags.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv6Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv6Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-flags")
    {
        router_flags = value;
        router_flags.value_namespace = name_space;
        router_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv6Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "router-flags")
    {
        router_flags.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::Ipv6Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "prefix" || name == "router-flags" || name == "prefix-len" || name == "version")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::PwListData::PwListData()
    :
    pwhe_list_id{YType::uint16, "pwhe-list-id"}
{

    yang_name = "pw-list-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::PwListData::~PwListData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::PwListData::has_data() const
{
    if (is_presence_container) return true;
    return pwhe_list_id.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::PwListData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pwhe_list_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::PwListData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/fpi-key/fpi/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::PwListData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-list-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::PwListData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pwhe_list_id.is_set || is_set(pwhe_list_id.yfilter)) leaf_name_data.push_back(pwhe_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::PwListData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::PwListData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::PwListData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pwhe-list-id")
    {
        pwhe_list_id = value;
        pwhe_list_id.value_namespace = name_space;
        pwhe_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::PwListData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pwhe-list-id")
    {
        pwhe_list_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::PwListData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pwhe-list-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::DmtcExtIntfData::DmtcExtIntfData()
    :
    dmtc_ext_ifh{YType::str, "dmtc-ext-ifh"}
{

    yang_name = "dmtc-ext-intf-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::DmtcExtIntfData::~DmtcExtIntfData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::DmtcExtIntfData::has_data() const
{
    if (is_presence_container) return true;
    return dmtc_ext_ifh.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::DmtcExtIntfData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dmtc_ext_ifh.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::DmtcExtIntfData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/fpi-key/fpi/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::DmtcExtIntfData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dmtc-ext-intf-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::DmtcExtIntfData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dmtc_ext_ifh.is_set || is_set(dmtc_ext_ifh.yfilter)) leaf_name_data.push_back(dmtc_ext_ifh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::DmtcExtIntfData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::DmtcExtIntfData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::DmtcExtIntfData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dmtc-ext-ifh")
    {
        dmtc_ext_ifh = value;
        dmtc_ext_ifh.value_namespace = name_space;
        dmtc_ext_ifh.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::DmtcExtIntfData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dmtc-ext-ifh")
    {
        dmtc_ext_ifh.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::DmtcExtIntfData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dmtc-ext-ifh")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelRange::LabelRange()
    :
    type{YType::uint8, "type"},
    index_{YType::uint8, "index"}
{

    yang_name = "label-range"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelRange::~LabelRange()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelRange::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| index_.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/fpi-key/fpi/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::Fpi::LabelRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "index")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::ApplicationOwner::ApplicationOwner()
    :
    application_name{YType::str, "application-name"},
    application_type{YType::enumeration, "application-type"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_instance{YType::str, "application-instance"},
    resource_state{YType::enumeration, "resource-state"}
{

    yang_name = "application-owner"; yang_parent_name = "fpi-key"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::ApplicationOwner::~ApplicationOwner()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::ApplicationOwner::has_data() const
{
    if (is_presence_container) return true;
    return application_name.is_set
	|| application_type.is_set
	|| application_role_primary.is_set
	|| application_instance.is_set
	|| resource_state.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::ApplicationOwner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| ydk::is_set(application_type.yfilter)
	|| ydk::is_set(application_role_primary.yfilter)
	|| ydk::is_set(application_instance.yfilter)
	|| ydk::is_set(resource_state.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::ApplicationOwner::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/fpi-key/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::ApplicationOwner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-owner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::ApplicationOwner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (application_role_primary.is_set || is_set(application_role_primary.yfilter)) leaf_name_data.push_back(application_role_primary.get_name_leafdata());
    if (application_instance.is_set || is_set(application_instance.yfilter)) leaf_name_data.push_back(application_instance.get_name_leafdata());
    if (resource_state.is_set || is_set(resource_state.yfilter)) leaf_name_data.push_back(resource_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::ApplicationOwner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::ApplicationOwner::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::ApplicationOwner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-type")
    {
        application_type = value;
        application_type.value_namespace = name_space;
        application_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary = value;
        application_role_primary.value_namespace = name_space;
        application_role_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-instance")
    {
        application_instance = value;
        application_instance.value_namespace = name_space;
        application_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-state")
    {
        resource_state = value;
        resource_state.value_namespace = name_space;
        resource_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::ApplicationOwner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
    if(value_path == "application-type")
    {
        application_type.yfilter = yfilter;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary.yfilter = yfilter;
    }
    if(value_path == "application-instance")
    {
        application_instance.yfilter = yfilter;
    }
    if(value_path == "resource-state")
    {
        resource_state.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::FpiKey::ApplicationOwner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-name" || name == "application-type" || name == "application-role-primary" || name == "application-instance" || name == "resource-state")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId()
    :
    rewrite_id(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_>())
{
    rewrite_id->parent = this;

    yang_name = "rewrite-id"; yang_parent_name = "rewrite-ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::~RewriteId()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::has_data() const
{
    if (is_presence_container) return true;
    return (rewrite_id !=  nullptr && rewrite_id->has_data());
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::has_operation() const
{
    return is_set(yfilter)
	|| (rewrite_id !=  nullptr && rewrite_id->has_operation());
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rewrite-id")
    {
        if(rewrite_id == nullptr)
        {
            rewrite_id = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_>();
        }
        return rewrite_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rewrite_id != nullptr)
    {
        _children["rewrite-id"] = rewrite_id;
    }

    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rewrite-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::RewriteId_()
    :
    rewrite_id_type{YType::enumeration, "rewrite-id-type"}
        ,
    label_context(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext>())
    , local_label_rewrite(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite>())
{
    label_context->parent = this;
    local_label_rewrite->parent = this;

    yang_name = "rewrite-id"; yang_parent_name = "rewrite-id"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::~RewriteId_()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::has_data() const
{
    if (is_presence_container) return true;
    return rewrite_id_type.is_set
	|| (label_context !=  nullptr && label_context->has_data())
	|| (local_label_rewrite !=  nullptr && local_label_rewrite->has_data());
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rewrite_id_type.yfilter)
	|| (label_context !=  nullptr && label_context->has_operation())
	|| (local_label_rewrite !=  nullptr && local_label_rewrite->has_operation());
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rewrite_id_type.is_set || is_set(rewrite_id_type.yfilter)) leaf_name_data.push_back(rewrite_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-context")
    {
        if(label_context == nullptr)
        {
            label_context = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext>();
        }
        return label_context;
    }

    if(child_yang_name == "local-label-rewrite")
    {
        if(local_label_rewrite == nullptr)
        {
            local_label_rewrite = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite>();
        }
        return local_label_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(label_context != nullptr)
    {
        _children["label-context"] = label_context;
    }

    if(local_label_rewrite != nullptr)
    {
        _children["local-label-rewrite"] = local_label_rewrite;
    }

    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rewrite-id-type")
    {
        rewrite_id_type = value;
        rewrite_id_type.value_namespace = name_space;
        rewrite_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rewrite-id-type")
    {
        rewrite_id_type.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-context" || name == "local-label-rewrite" || name == "rewrite-id-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelContext()
    :
    label_context_type{YType::enumeration, "label-context-type"}
        ,
    ipv4_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4Data>())
    , ipv6_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6Data>())
    , tev4_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4Data>())
    , ipv4l3vpn_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData>())
    , ipv6l3vpn_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData>())
    , vrf_l3vpn_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::VrfL3vpnData>())
    , cev4l3vpn_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData>())
    , cev6l3vpn_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData>())
    , pseudowire_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireData>())
    , label_block_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockData>())
    , ip_sub_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::IpSubData>())
    , tev4p2mp_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4p2mpData>())
    , mld_pv4_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::MldPv4Data>())
    , pseudowire_head_end_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData>())
    , tp_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TpData>())
    , generic_routing_encapsulation(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation>())
    , ipv6_generic_routing_encapsulation(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation>())
    , evpn_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::EvpnData>())
    , ipv4blb_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4blbData>())
    , ipv6blb_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6blbData>())
    , pi_mi_pmsi_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMiPmsiData>())
    , pi_ms_pmsi_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMsPmsiData>())
    , next_hop_set_l3vpn(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn>())
    , sr_prefix_segment(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrPrefixSegment>())
    , sr_adj_segment_ipv4(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4>())
    , sr_adj_segment_ipv6(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6>())
    , label_block_srgb_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData>())
    , te_binding(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TeBinding>())
    , label_block_srlb_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData>())
{
    ipv4_data->parent = this;
    ipv6_data->parent = this;
    tev4_data->parent = this;
    ipv4l3vpn_data->parent = this;
    ipv6l3vpn_data->parent = this;
    vrf_l3vpn_data->parent = this;
    cev4l3vpn_data->parent = this;
    cev6l3vpn_data->parent = this;
    pseudowire_data->parent = this;
    label_block_data->parent = this;
    ip_sub_data->parent = this;
    tev4p2mp_data->parent = this;
    mld_pv4_data->parent = this;
    pseudowire_head_end_data->parent = this;
    tp_data->parent = this;
    generic_routing_encapsulation->parent = this;
    ipv6_generic_routing_encapsulation->parent = this;
    evpn_data->parent = this;
    ipv4blb_data->parent = this;
    ipv6blb_data->parent = this;
    pi_mi_pmsi_data->parent = this;
    pi_ms_pmsi_data->parent = this;
    next_hop_set_l3vpn->parent = this;
    sr_prefix_segment->parent = this;
    sr_adj_segment_ipv4->parent = this;
    sr_adj_segment_ipv6->parent = this;
    label_block_srgb_data->parent = this;
    te_binding->parent = this;
    label_block_srlb_data->parent = this;

    yang_name = "label-context"; yang_parent_name = "rewrite-id"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::~LabelContext()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::has_data() const
{
    if (is_presence_container) return true;
    return label_context_type.is_set
	|| (ipv4_data !=  nullptr && ipv4_data->has_data())
	|| (ipv6_data !=  nullptr && ipv6_data->has_data())
	|| (tev4_data !=  nullptr && tev4_data->has_data())
	|| (ipv4l3vpn_data !=  nullptr && ipv4l3vpn_data->has_data())
	|| (ipv6l3vpn_data !=  nullptr && ipv6l3vpn_data->has_data())
	|| (vrf_l3vpn_data !=  nullptr && vrf_l3vpn_data->has_data())
	|| (cev4l3vpn_data !=  nullptr && cev4l3vpn_data->has_data())
	|| (cev6l3vpn_data !=  nullptr && cev6l3vpn_data->has_data())
	|| (pseudowire_data !=  nullptr && pseudowire_data->has_data())
	|| (label_block_data !=  nullptr && label_block_data->has_data())
	|| (ip_sub_data !=  nullptr && ip_sub_data->has_data())
	|| (tev4p2mp_data !=  nullptr && tev4p2mp_data->has_data())
	|| (mld_pv4_data !=  nullptr && mld_pv4_data->has_data())
	|| (pseudowire_head_end_data !=  nullptr && pseudowire_head_end_data->has_data())
	|| (tp_data !=  nullptr && tp_data->has_data())
	|| (generic_routing_encapsulation !=  nullptr && generic_routing_encapsulation->has_data())
	|| (ipv6_generic_routing_encapsulation !=  nullptr && ipv6_generic_routing_encapsulation->has_data())
	|| (evpn_data !=  nullptr && evpn_data->has_data())
	|| (ipv4blb_data !=  nullptr && ipv4blb_data->has_data())
	|| (ipv6blb_data !=  nullptr && ipv6blb_data->has_data())
	|| (pi_mi_pmsi_data !=  nullptr && pi_mi_pmsi_data->has_data())
	|| (pi_ms_pmsi_data !=  nullptr && pi_ms_pmsi_data->has_data())
	|| (next_hop_set_l3vpn !=  nullptr && next_hop_set_l3vpn->has_data())
	|| (sr_prefix_segment !=  nullptr && sr_prefix_segment->has_data())
	|| (sr_adj_segment_ipv4 !=  nullptr && sr_adj_segment_ipv4->has_data())
	|| (sr_adj_segment_ipv6 !=  nullptr && sr_adj_segment_ipv6->has_data())
	|| (label_block_srgb_data !=  nullptr && label_block_srgb_data->has_data())
	|| (te_binding !=  nullptr && te_binding->has_data())
	|| (label_block_srlb_data !=  nullptr && label_block_srlb_data->has_data());
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_context_type.yfilter)
	|| (ipv4_data !=  nullptr && ipv4_data->has_operation())
	|| (ipv6_data !=  nullptr && ipv6_data->has_operation())
	|| (tev4_data !=  nullptr && tev4_data->has_operation())
	|| (ipv4l3vpn_data !=  nullptr && ipv4l3vpn_data->has_operation())
	|| (ipv6l3vpn_data !=  nullptr && ipv6l3vpn_data->has_operation())
	|| (vrf_l3vpn_data !=  nullptr && vrf_l3vpn_data->has_operation())
	|| (cev4l3vpn_data !=  nullptr && cev4l3vpn_data->has_operation())
	|| (cev6l3vpn_data !=  nullptr && cev6l3vpn_data->has_operation())
	|| (pseudowire_data !=  nullptr && pseudowire_data->has_operation())
	|| (label_block_data !=  nullptr && label_block_data->has_operation())
	|| (ip_sub_data !=  nullptr && ip_sub_data->has_operation())
	|| (tev4p2mp_data !=  nullptr && tev4p2mp_data->has_operation())
	|| (mld_pv4_data !=  nullptr && mld_pv4_data->has_operation())
	|| (pseudowire_head_end_data !=  nullptr && pseudowire_head_end_data->has_operation())
	|| (tp_data !=  nullptr && tp_data->has_operation())
	|| (generic_routing_encapsulation !=  nullptr && generic_routing_encapsulation->has_operation())
	|| (ipv6_generic_routing_encapsulation !=  nullptr && ipv6_generic_routing_encapsulation->has_operation())
	|| (evpn_data !=  nullptr && evpn_data->has_operation())
	|| (ipv4blb_data !=  nullptr && ipv4blb_data->has_operation())
	|| (ipv6blb_data !=  nullptr && ipv6blb_data->has_operation())
	|| (pi_mi_pmsi_data !=  nullptr && pi_mi_pmsi_data->has_operation())
	|| (pi_ms_pmsi_data !=  nullptr && pi_ms_pmsi_data->has_operation())
	|| (next_hop_set_l3vpn !=  nullptr && next_hop_set_l3vpn->has_operation())
	|| (sr_prefix_segment !=  nullptr && sr_prefix_segment->has_operation())
	|| (sr_adj_segment_ipv4 !=  nullptr && sr_adj_segment_ipv4->has_operation())
	|| (sr_adj_segment_ipv6 !=  nullptr && sr_adj_segment_ipv6->has_operation())
	|| (label_block_srgb_data !=  nullptr && label_block_srgb_data->has_operation())
	|| (te_binding !=  nullptr && te_binding->has_operation())
	|| (label_block_srlb_data !=  nullptr && label_block_srlb_data->has_operation());
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_context_type.is_set || is_set(label_context_type.yfilter)) leaf_name_data.push_back(label_context_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-data")
    {
        if(ipv4_data == nullptr)
        {
            ipv4_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4Data>();
        }
        return ipv4_data;
    }

    if(child_yang_name == "ipv6-data")
    {
        if(ipv6_data == nullptr)
        {
            ipv6_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6Data>();
        }
        return ipv6_data;
    }

    if(child_yang_name == "tev4-data")
    {
        if(tev4_data == nullptr)
        {
            tev4_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4Data>();
        }
        return tev4_data;
    }

    if(child_yang_name == "ipv4l3vpn-data")
    {
        if(ipv4l3vpn_data == nullptr)
        {
            ipv4l3vpn_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData>();
        }
        return ipv4l3vpn_data;
    }

    if(child_yang_name == "ipv6l3vpn-data")
    {
        if(ipv6l3vpn_data == nullptr)
        {
            ipv6l3vpn_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData>();
        }
        return ipv6l3vpn_data;
    }

    if(child_yang_name == "vrf-l3vpn-data")
    {
        if(vrf_l3vpn_data == nullptr)
        {
            vrf_l3vpn_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::VrfL3vpnData>();
        }
        return vrf_l3vpn_data;
    }

    if(child_yang_name == "cev4l3vpn-data")
    {
        if(cev4l3vpn_data == nullptr)
        {
            cev4l3vpn_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData>();
        }
        return cev4l3vpn_data;
    }

    if(child_yang_name == "cev6l3vpn-data")
    {
        if(cev6l3vpn_data == nullptr)
        {
            cev6l3vpn_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData>();
        }
        return cev6l3vpn_data;
    }

    if(child_yang_name == "pseudowire-data")
    {
        if(pseudowire_data == nullptr)
        {
            pseudowire_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireData>();
        }
        return pseudowire_data;
    }

    if(child_yang_name == "label-block-data")
    {
        if(label_block_data == nullptr)
        {
            label_block_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockData>();
        }
        return label_block_data;
    }

    if(child_yang_name == "ip-sub-data")
    {
        if(ip_sub_data == nullptr)
        {
            ip_sub_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::IpSubData>();
        }
        return ip_sub_data;
    }

    if(child_yang_name == "tev4p2mp-data")
    {
        if(tev4p2mp_data == nullptr)
        {
            tev4p2mp_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4p2mpData>();
        }
        return tev4p2mp_data;
    }

    if(child_yang_name == "mld-pv4-data")
    {
        if(mld_pv4_data == nullptr)
        {
            mld_pv4_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::MldPv4Data>();
        }
        return mld_pv4_data;
    }

    if(child_yang_name == "pseudowire-head-end-data")
    {
        if(pseudowire_head_end_data == nullptr)
        {
            pseudowire_head_end_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData>();
        }
        return pseudowire_head_end_data;
    }

    if(child_yang_name == "tp-data")
    {
        if(tp_data == nullptr)
        {
            tp_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TpData>();
        }
        return tp_data;
    }

    if(child_yang_name == "generic-routing-encapsulation")
    {
        if(generic_routing_encapsulation == nullptr)
        {
            generic_routing_encapsulation = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation>();
        }
        return generic_routing_encapsulation;
    }

    if(child_yang_name == "ipv6-generic-routing-encapsulation")
    {
        if(ipv6_generic_routing_encapsulation == nullptr)
        {
            ipv6_generic_routing_encapsulation = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation>();
        }
        return ipv6_generic_routing_encapsulation;
    }

    if(child_yang_name == "evpn-data")
    {
        if(evpn_data == nullptr)
        {
            evpn_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::EvpnData>();
        }
        return evpn_data;
    }

    if(child_yang_name == "ipv4blb-data")
    {
        if(ipv4blb_data == nullptr)
        {
            ipv4blb_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4blbData>();
        }
        return ipv4blb_data;
    }

    if(child_yang_name == "ipv6blb-data")
    {
        if(ipv6blb_data == nullptr)
        {
            ipv6blb_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6blbData>();
        }
        return ipv6blb_data;
    }

    if(child_yang_name == "pi-mi-pmsi-data")
    {
        if(pi_mi_pmsi_data == nullptr)
        {
            pi_mi_pmsi_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMiPmsiData>();
        }
        return pi_mi_pmsi_data;
    }

    if(child_yang_name == "pi-ms-pmsi-data")
    {
        if(pi_ms_pmsi_data == nullptr)
        {
            pi_ms_pmsi_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMsPmsiData>();
        }
        return pi_ms_pmsi_data;
    }

    if(child_yang_name == "next-hop-set-l3vpn")
    {
        if(next_hop_set_l3vpn == nullptr)
        {
            next_hop_set_l3vpn = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn>();
        }
        return next_hop_set_l3vpn;
    }

    if(child_yang_name == "sr-prefix-segment")
    {
        if(sr_prefix_segment == nullptr)
        {
            sr_prefix_segment = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrPrefixSegment>();
        }
        return sr_prefix_segment;
    }

    if(child_yang_name == "sr-adj-segment-ipv4")
    {
        if(sr_adj_segment_ipv4 == nullptr)
        {
            sr_adj_segment_ipv4 = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4>();
        }
        return sr_adj_segment_ipv4;
    }

    if(child_yang_name == "sr-adj-segment-ipv6")
    {
        if(sr_adj_segment_ipv6 == nullptr)
        {
            sr_adj_segment_ipv6 = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6>();
        }
        return sr_adj_segment_ipv6;
    }

    if(child_yang_name == "label-block-srgb-data")
    {
        if(label_block_srgb_data == nullptr)
        {
            label_block_srgb_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData>();
        }
        return label_block_srgb_data;
    }

    if(child_yang_name == "te-binding")
    {
        if(te_binding == nullptr)
        {
            te_binding = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TeBinding>();
        }
        return te_binding;
    }

    if(child_yang_name == "label-block-srlb-data")
    {
        if(label_block_srlb_data == nullptr)
        {
            label_block_srlb_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData>();
        }
        return label_block_srlb_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_data != nullptr)
    {
        _children["ipv4-data"] = ipv4_data;
    }

    if(ipv6_data != nullptr)
    {
        _children["ipv6-data"] = ipv6_data;
    }

    if(tev4_data != nullptr)
    {
        _children["tev4-data"] = tev4_data;
    }

    if(ipv4l3vpn_data != nullptr)
    {
        _children["ipv4l3vpn-data"] = ipv4l3vpn_data;
    }

    if(ipv6l3vpn_data != nullptr)
    {
        _children["ipv6l3vpn-data"] = ipv6l3vpn_data;
    }

    if(vrf_l3vpn_data != nullptr)
    {
        _children["vrf-l3vpn-data"] = vrf_l3vpn_data;
    }

    if(cev4l3vpn_data != nullptr)
    {
        _children["cev4l3vpn-data"] = cev4l3vpn_data;
    }

    if(cev6l3vpn_data != nullptr)
    {
        _children["cev6l3vpn-data"] = cev6l3vpn_data;
    }

    if(pseudowire_data != nullptr)
    {
        _children["pseudowire-data"] = pseudowire_data;
    }

    if(label_block_data != nullptr)
    {
        _children["label-block-data"] = label_block_data;
    }

    if(ip_sub_data != nullptr)
    {
        _children["ip-sub-data"] = ip_sub_data;
    }

    if(tev4p2mp_data != nullptr)
    {
        _children["tev4p2mp-data"] = tev4p2mp_data;
    }

    if(mld_pv4_data != nullptr)
    {
        _children["mld-pv4-data"] = mld_pv4_data;
    }

    if(pseudowire_head_end_data != nullptr)
    {
        _children["pseudowire-head-end-data"] = pseudowire_head_end_data;
    }

    if(tp_data != nullptr)
    {
        _children["tp-data"] = tp_data;
    }

    if(generic_routing_encapsulation != nullptr)
    {
        _children["generic-routing-encapsulation"] = generic_routing_encapsulation;
    }

    if(ipv6_generic_routing_encapsulation != nullptr)
    {
        _children["ipv6-generic-routing-encapsulation"] = ipv6_generic_routing_encapsulation;
    }

    if(evpn_data != nullptr)
    {
        _children["evpn-data"] = evpn_data;
    }

    if(ipv4blb_data != nullptr)
    {
        _children["ipv4blb-data"] = ipv4blb_data;
    }

    if(ipv6blb_data != nullptr)
    {
        _children["ipv6blb-data"] = ipv6blb_data;
    }

    if(pi_mi_pmsi_data != nullptr)
    {
        _children["pi-mi-pmsi-data"] = pi_mi_pmsi_data;
    }

    if(pi_ms_pmsi_data != nullptr)
    {
        _children["pi-ms-pmsi-data"] = pi_ms_pmsi_data;
    }

    if(next_hop_set_l3vpn != nullptr)
    {
        _children["next-hop-set-l3vpn"] = next_hop_set_l3vpn;
    }

    if(sr_prefix_segment != nullptr)
    {
        _children["sr-prefix-segment"] = sr_prefix_segment;
    }

    if(sr_adj_segment_ipv4 != nullptr)
    {
        _children["sr-adj-segment-ipv4"] = sr_adj_segment_ipv4;
    }

    if(sr_adj_segment_ipv6 != nullptr)
    {
        _children["sr-adj-segment-ipv6"] = sr_adj_segment_ipv6;
    }

    if(label_block_srgb_data != nullptr)
    {
        _children["label-block-srgb-data"] = label_block_srgb_data;
    }

    if(te_binding != nullptr)
    {
        _children["te-binding"] = te_binding;
    }

    if(label_block_srlb_data != nullptr)
    {
        _children["label-block-srlb-data"] = label_block_srlb_data;
    }

    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-context-type")
    {
        label_context_type = value;
        label_context_type.value_namespace = name_space;
        label_context_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-context-type")
    {
        label_context_type.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-data" || name == "ipv6-data" || name == "tev4-data" || name == "ipv4l3vpn-data" || name == "ipv6l3vpn-data" || name == "vrf-l3vpn-data" || name == "cev4l3vpn-data" || name == "cev6l3vpn-data" || name == "pseudowire-data" || name == "label-block-data" || name == "ip-sub-data" || name == "tev4p2mp-data" || name == "mld-pv4-data" || name == "pseudowire-head-end-data" || name == "tp-data" || name == "generic-routing-encapsulation" || name == "ipv6-generic-routing-encapsulation" || name == "evpn-data" || name == "ipv4blb-data" || name == "ipv6blb-data" || name == "pi-mi-pmsi-data" || name == "pi-ms-pmsi-data" || name == "next-hop-set-l3vpn" || name == "sr-prefix-segment" || name == "sr-adj-segment-ipv4" || name == "sr-adj-segment-ipv6" || name == "label-block-srgb-data" || name == "te-binding" || name == "label-block-srlb-data" || name == "label-context-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4Data::Ipv4Data()
    :
    table_id{YType::uint32, "table-id"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    security_id{YType::uint32, "security-id"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "ipv4-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4Data::~Ipv4Data()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4Data::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| security_id.is_set
	|| vrf_name.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(security_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4Data::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
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
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "prefix" || name == "prefix-length" || name == "security-id" || name == "vrf-name")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6Data::Ipv6Data()
    :
    table_id{YType::uint32, "table-id"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    security_id{YType::uint32, "security-id"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "ipv6-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6Data::~Ipv6Data()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6Data::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| security_id.is_set
	|| vrf_name.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(security_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6Data::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
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
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "prefix" || name == "prefix-length" || name == "security-id" || name == "vrf-name")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4Data::Tev4Data()
    :
    table_id{YType::uint32, "table-id"},
    tunnel_source{YType::str, "tunnel-source"},
    tunnel_dest{YType::str, "tunnel-dest"},
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_id_extension{YType::uint32, "tunnel-id-extension"},
    tunnel_lsp_id{YType::uint32, "tunnel-lsp-id"},
    is_srte{YType::int32, "is-srte"}
{

    yang_name = "tev4-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4Data::~Tev4Data()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4Data::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| tunnel_source.is_set
	|| tunnel_dest.is_set
	|| tunnel_id.is_set
	|| tunnel_id_extension.is_set
	|| tunnel_lsp_id.is_set
	|| is_srte.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(tunnel_source.yfilter)
	|| ydk::is_set(tunnel_dest.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id_extension.yfilter)
	|| ydk::is_set(tunnel_lsp_id.yfilter)
	|| ydk::is_set(is_srte.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4Data::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tev4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (tunnel_source.is_set || is_set(tunnel_source.yfilter)) leaf_name_data.push_back(tunnel_source.get_name_leafdata());
    if (tunnel_dest.is_set || is_set(tunnel_dest.yfilter)) leaf_name_data.push_back(tunnel_dest.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_id_extension.is_set || is_set(tunnel_id_extension.yfilter)) leaf_name_data.push_back(tunnel_id_extension.get_name_leafdata());
    if (tunnel_lsp_id.is_set || is_set(tunnel_lsp_id.yfilter)) leaf_name_data.push_back(tunnel_lsp_id.get_name_leafdata());
    if (is_srte.is_set || is_set(is_srte.yfilter)) leaf_name_data.push_back(is_srte.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-source")
    {
        tunnel_source = value;
        tunnel_source.value_namespace = name_space;
        tunnel_source.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-srte")
    {
        is_srte = value;
        is_srte.value_namespace = name_space;
        is_srte.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-source")
    {
        tunnel_source.yfilter = yfilter;
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
    if(value_path == "is-srte")
    {
        is_srte.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "tunnel-source" || name == "tunnel-dest" || name == "tunnel-id" || name == "tunnel-id-extension" || name == "tunnel-lsp-id" || name == "is-srte")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::Ipv4l3vpnData()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    route_distinguisher{YType::uint64, "route-distinguisher"}
{

    yang_name = "ipv4l3vpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::~Ipv4l3vpnData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| route_distinguisher.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "route-distinguisher")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::Ipv6l3vpnData()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    route_distinguisher{YType::uint64, "route-distinguisher"}
{

    yang_name = "ipv6l3vpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::~Ipv6l3vpnData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| route_distinguisher.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "route-distinguisher")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::VrfL3vpnData()
    :
    table_id{YType::uint32, "table-id"},
    security_id{YType::uint32, "security-id"}
{

    yang_name = "vrf-l3vpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::~VrfL3vpnData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| security_id.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(security_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-id")
    {
        security_id = value;
        security_id.value_namespace = name_space;
        security_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "security-id")
    {
        security_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "security-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::Cev4l3vpnData()
    :
    table_id{YType::uint32, "table-id"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    security_id{YType::uint32, "security-id"}
{

    yang_name = "cev4l3vpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::~Cev4l3vpnData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| ipv4_next_hop.is_set
	|| security_id.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(ipv4_next_hop.yfilter)
	|| ydk::is_set(security_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cev4l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.yfilter)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop.yfilter = yfilter;
    }
    if(value_path == "security-id")
    {
        security_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "ipv4-next-hop" || name == "security-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::Cev6l3vpnData()
    :
    table_id{YType::uint32, "table-id"},
    ipv6_next_hop{YType::str, "ipv6-next-hop"},
    security_id{YType::uint32, "security-id"}
{

    yang_name = "cev6l3vpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::~Cev6l3vpnData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| ipv6_next_hop.is_set
	|| security_id.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(ipv6_next_hop.yfilter)
	|| ydk::is_set(security_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cev6l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (ipv6_next_hop.is_set || is_set(ipv6_next_hop.yfilter)) leaf_name_data.push_back(ipv6_next_hop.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "ipv6-next-hop")
    {
        ipv6_next_hop.yfilter = yfilter;
    }
    if(value_path == "security-id")
    {
        security_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "ipv6-next-hop" || name == "security-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireData::PseudowireData()
    :
    prefix{YType::str, "prefix"},
    pseudowire_id{YType::uint64, "pseudowire-id"},
    remote_l2_router_id{YType::uint32, "remote-l2-router-id"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "pseudowire-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireData::~PseudowireData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireData::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| pseudowire_id.is_set
	|| remote_l2_router_id.is_set
	|| subinterface.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| ydk::is_set(remote_l2_router_id.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (remote_l2_router_id.is_set || is_set(remote_l2_router_id.yfilter)) leaf_name_data.push_back(remote_l2_router_id.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "pseudowire-id" || name == "remote-l2-router-id" || name == "subinterface")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockData::LabelBlockData()
    :
    service{YType::uint8, "service"},
    vpn_id{YType::uint16, "vpn-id"},
    edge_id{YType::uint16, "edge-id"},
    offset{YType::uint32, "offset"},
    size{YType::uint32, "size"}
{

    yang_name = "label-block-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockData::~LabelBlockData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockData::has_data() const
{
    if (is_presence_container) return true;
    return service.is_set
	|| vpn_id.is_set
	|| edge_id.is_set
	|| offset.is_set
	|| size.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service.yfilter)
	|| ydk::is_set(vpn_id.yfilter)
	|| ydk::is_set(edge_id.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());
    if (edge_id.is_set || is_set(edge_id.yfilter)) leaf_name_data.push_back(edge_id.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service")
    {
        service = value;
        service.value_namespace = name_space;
        service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service")
    {
        service.yfilter = yfilter;
    }
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
    if(value_path == "edge-id")
    {
        edge_id.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service" || name == "vpn-id" || name == "edge-id" || name == "offset" || name == "size")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::IpSubData::IpSubData()
    :
    table_id{YType::uint32, "table-id"},
    parent_interface{YType::str, "parent-interface"}
{

    yang_name = "ip-sub-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::IpSubData::~IpSubData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::IpSubData::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| parent_interface.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::IpSubData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(parent_interface.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::IpSubData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::IpSubData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-sub-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::IpSubData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (parent_interface.is_set || is_set(parent_interface.yfilter)) leaf_name_data.push_back(parent_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::IpSubData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::IpSubData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::IpSubData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface")
    {
        parent_interface = value;
        parent_interface.value_namespace = name_space;
        parent_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::IpSubData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "parent-interface")
    {
        parent_interface.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::IpSubData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "parent-interface")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::Tev4p2mpData()
    :
    table_id{YType::uint32, "table-id"},
    tunnel_source{YType::str, "tunnel-source"},
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_id_extension{YType::uint32, "tunnel-id-extension"},
    tunnel_lsp_id{YType::uint32, "tunnel-lsp-id"},
    previous_hop{YType::str, "previous-hop"}
{

    yang_name = "tev4p2mp-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::~Tev4p2mpData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| tunnel_source.is_set
	|| p2mp_id.is_set
	|| tunnel_id.is_set
	|| tunnel_id_extension.is_set
	|| tunnel_lsp_id.is_set
	|| previous_hop.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(tunnel_source.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id_extension.yfilter)
	|| ydk::is_set(tunnel_lsp_id.yfilter)
	|| ydk::is_set(previous_hop.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tev4p2mp-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (tunnel_source.is_set || is_set(tunnel_source.yfilter)) leaf_name_data.push_back(tunnel_source.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_id_extension.is_set || is_set(tunnel_id_extension.yfilter)) leaf_name_data.push_back(tunnel_id_extension.get_name_leafdata());
    if (tunnel_lsp_id.is_set || is_set(tunnel_lsp_id.yfilter)) leaf_name_data.push_back(tunnel_lsp_id.get_name_leafdata());
    if (previous_hop.is_set || is_set(previous_hop.yfilter)) leaf_name_data.push_back(previous_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-source")
    {
        tunnel_source = value;
        tunnel_source.value_namespace = name_space;
        tunnel_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "previous-hop")
    {
        previous_hop = value;
        previous_hop.value_namespace = name_space;
        previous_hop.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-source")
    {
        tunnel_source.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
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
    if(value_path == "previous-hop")
    {
        previous_hop.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "tunnel-source" || name == "p2mp-id" || name == "tunnel-id" || name == "tunnel-id-extension" || name == "tunnel-lsp-id" || name == "previous-hop")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::MldPv4Data::MldPv4Data()
    :
    table_id{YType::uint32, "table-id"},
    type{YType::uint16, "type"},
    lsm_id{YType::uint32, "lsm-id"},
    peer_lsrid{YType::str, "peer-lsrid"},
    peer_label_space_id{YType::uint16, "peer-label-space-id"}
{

    yang_name = "mld-pv4-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::MldPv4Data::~MldPv4Data()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::MldPv4Data::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| type.is_set
	|| lsm_id.is_set
	|| peer_lsrid.is_set
	|| peer_label_space_id.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::MldPv4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(lsm_id.yfilter)
	|| ydk::is_set(peer_lsrid.yfilter)
	|| ydk::is_set(peer_label_space_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::MldPv4Data::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::MldPv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld-pv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::MldPv4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (lsm_id.is_set || is_set(lsm_id.yfilter)) leaf_name_data.push_back(lsm_id.get_name_leafdata());
    if (peer_lsrid.is_set || is_set(peer_lsrid.yfilter)) leaf_name_data.push_back(peer_lsrid.get_name_leafdata());
    if (peer_label_space_id.is_set || is_set(peer_label_space_id.yfilter)) leaf_name_data.push_back(peer_label_space_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::MldPv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::MldPv4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::MldPv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "lsm-id")
    {
        lsm_id = value;
        lsm_id.value_namespace = name_space;
        lsm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-lsrid")
    {
        peer_lsrid = value;
        peer_lsrid.value_namespace = name_space;
        peer_lsrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-label-space-id")
    {
        peer_label_space_id = value;
        peer_label_space_id.value_namespace = name_space;
        peer_label_space_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::MldPv4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "lsm-id")
    {
        lsm_id.yfilter = yfilter;
    }
    if(value_path == "peer-lsrid")
    {
        peer_lsrid.yfilter = yfilter;
    }
    if(value_path == "peer-label-space-id")
    {
        peer_label_space_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::MldPv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "type" || name == "lsm-id" || name == "peer-lsrid" || name == "peer-label-space-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::PseudowireHeadEndData()
    :
    pwhe_intf{YType::str, "pwhe-intf"}
{

    yang_name = "pseudowire-head-end-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::~PseudowireHeadEndData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::has_data() const
{
    if (is_presence_container) return true;
    return pwhe_intf.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pwhe_intf.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-head-end-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pwhe_intf.is_set || is_set(pwhe_intf.yfilter)) leaf_name_data.push_back(pwhe_intf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pwhe-intf")
    {
        pwhe_intf = value;
        pwhe_intf.value_namespace = name_space;
        pwhe_intf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pwhe-intf")
    {
        pwhe_intf.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pwhe-intf")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TpData::TpData()
    :
    source_global_id{YType::uint32, "source-global-id"},
    source_node_id{YType::str, "source-node-id"},
    dest_global_id{YType::uint32, "dest-global-id"},
    dest_node_id{YType::str, "dest-node-id"},
    source_tunnel_id{YType::uint16, "source-tunnel-id"},
    dest_tunnel_id{YType::uint16, "dest-tunnel-id"},
    lsp_id{YType::uint16, "lsp-id"}
{

    yang_name = "tp-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TpData::~TpData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TpData::has_data() const
{
    if (is_presence_container) return true;
    return source_global_id.is_set
	|| source_node_id.is_set
	|| dest_global_id.is_set
	|| dest_node_id.is_set
	|| source_tunnel_id.is_set
	|| dest_tunnel_id.is_set
	|| lsp_id.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TpData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_global_id.yfilter)
	|| ydk::is_set(source_node_id.yfilter)
	|| ydk::is_set(dest_global_id.yfilter)
	|| ydk::is_set(dest_node_id.yfilter)
	|| ydk::is_set(source_tunnel_id.yfilter)
	|| ydk::is_set(dest_tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TpData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TpData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_global_id.is_set || is_set(source_global_id.yfilter)) leaf_name_data.push_back(source_global_id.get_name_leafdata());
    if (source_node_id.is_set || is_set(source_node_id.yfilter)) leaf_name_data.push_back(source_node_id.get_name_leafdata());
    if (dest_global_id.is_set || is_set(dest_global_id.yfilter)) leaf_name_data.push_back(dest_global_id.get_name_leafdata());
    if (dest_node_id.is_set || is_set(dest_node_id.yfilter)) leaf_name_data.push_back(dest_node_id.get_name_leafdata());
    if (source_tunnel_id.is_set || is_set(source_tunnel_id.yfilter)) leaf_name_data.push_back(source_tunnel_id.get_name_leafdata());
    if (dest_tunnel_id.is_set || is_set(dest_tunnel_id.yfilter)) leaf_name_data.push_back(dest_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TpData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TpData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id = value;
        source_tunnel_id.value_namespace = name_space;
        source_tunnel_id.value_namespace_prefix = name_space_prefix;
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
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TpData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-global-id")
    {
        source_global_id.yfilter = yfilter;
    }
    if(value_path == "source-node-id")
    {
        source_node_id.yfilter = yfilter;
    }
    if(value_path == "dest-global-id")
    {
        dest_global_id.yfilter = yfilter;
    }
    if(value_path == "dest-node-id")
    {
        dest_node_id.yfilter = yfilter;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "dest-tunnel-id")
    {
        dest_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TpData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-global-id" || name == "source-node-id" || name == "dest-global-id" || name == "dest-node-id" || name == "source-tunnel-id" || name == "dest-tunnel-id" || name == "lsp-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::GenericRoutingEncapsulation()
    :
    gre_interface{YType::str, "gre-interface"}
{

    yang_name = "generic-routing-encapsulation"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::~GenericRoutingEncapsulation()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::has_data() const
{
    if (is_presence_container) return true;
    return gre_interface.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gre_interface.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-routing-encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gre_interface.is_set || is_set(gre_interface.yfilter)) leaf_name_data.push_back(gre_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gre-interface")
    {
        gre_interface = value;
        gre_interface.value_namespace = name_space;
        gre_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gre-interface")
    {
        gre_interface.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-interface")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::Ipv6GenericRoutingEncapsulation()
    :
    greipv6_interface{YType::str, "greipv6-interface"}
{

    yang_name = "ipv6-generic-routing-encapsulation"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::~Ipv6GenericRoutingEncapsulation()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::has_data() const
{
    if (is_presence_container) return true;
    return greipv6_interface.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(greipv6_interface.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-generic-routing-encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (greipv6_interface.is_set || is_set(greipv6_interface.yfilter)) leaf_name_data.push_back(greipv6_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "greipv6-interface")
    {
        greipv6_interface = value;
        greipv6_interface.value_namespace = name_space;
        greipv6_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "greipv6-interface")
    {
        greipv6_interface.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "greipv6-interface")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::EvpnData::EvpnData()
    :
    evpn_id{YType::uint32, "evpn-id"},
    evpn_tag{YType::uint32, "evpn-tag"},
    ethernet_segment{YType::str, "ethernet-segment"},
    evpn_encap{YType::uint8, "evpn-encap"}
{

    yang_name = "evpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::EvpnData::~EvpnData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::EvpnData::has_data() const
{
    if (is_presence_container) return true;
    return evpn_id.is_set
	|| evpn_tag.is_set
	|| ethernet_segment.is_set
	|| evpn_encap.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::EvpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evpn_id.yfilter)
	|| ydk::is_set(evpn_tag.yfilter)
	|| ydk::is_set(ethernet_segment.yfilter)
	|| ydk::is_set(evpn_encap.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::EvpnData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::EvpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::EvpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evpn_id.is_set || is_set(evpn_id.yfilter)) leaf_name_data.push_back(evpn_id.get_name_leafdata());
    if (evpn_tag.is_set || is_set(evpn_tag.yfilter)) leaf_name_data.push_back(evpn_tag.get_name_leafdata());
    if (ethernet_segment.is_set || is_set(ethernet_segment.yfilter)) leaf_name_data.push_back(ethernet_segment.get_name_leafdata());
    if (evpn_encap.is_set || is_set(evpn_encap.yfilter)) leaf_name_data.push_back(evpn_encap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::EvpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::EvpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::EvpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "ethernet-segment")
    {
        ethernet_segment = value;
        ethernet_segment.value_namespace = name_space;
        ethernet_segment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-encap")
    {
        evpn_encap = value;
        evpn_encap.value_namespace = name_space;
        evpn_encap.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::EvpnData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evpn-id")
    {
        evpn_id.yfilter = yfilter;
    }
    if(value_path == "evpn-tag")
    {
        evpn_tag.yfilter = yfilter;
    }
    if(value_path == "ethernet-segment")
    {
        ethernet_segment.yfilter = yfilter;
    }
    if(value_path == "evpn-encap")
    {
        evpn_encap.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::EvpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-id" || name == "evpn-tag" || name == "ethernet-segment" || name == "evpn-encap")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4blbData::Ipv4blbData()
    :
    blb_intf{YType::str, "blb-intf"},
    prefix{YType::str, "prefix"}
{

    yang_name = "ipv4blb-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4blbData::~Ipv4blbData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4blbData::has_data() const
{
    if (is_presence_container) return true;
    return blb_intf.is_set
	|| prefix.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4blbData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(blb_intf.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4blbData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4blbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4blb-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4blbData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blb_intf.is_set || is_set(blb_intf.yfilter)) leaf_name_data.push_back(blb_intf.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4blbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4blbData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4blbData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4blbData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4blbData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "blb-intf" || name == "prefix")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6blbData::Ipv6blbData()
    :
    blb_intf{YType::str, "blb-intf"},
    prefix{YType::str, "prefix"}
{

    yang_name = "ipv6blb-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6blbData::~Ipv6blbData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6blbData::has_data() const
{
    if (is_presence_container) return true;
    return blb_intf.is_set
	|| prefix.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6blbData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(blb_intf.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6blbData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6blbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6blb-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6blbData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blb_intf.is_set || is_set(blb_intf.yfilter)) leaf_name_data.push_back(blb_intf.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6blbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6blbData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6blbData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6blbData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6blbData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "blb-intf" || name == "prefix")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::PiMiPmsiData()
    :
    vrf_id{YType::uint32, "vrf-id"},
    head{YType::int32, "head"},
    v6{YType::int32, "v6"}
{

    yang_name = "pi-mi-pmsi-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::~PiMiPmsiData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::has_data() const
{
    if (is_presence_container) return true;
    return vrf_id.is_set
	|| head.is_set
	|| v6.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(head.yfilter)
	|| ydk::is_set(v6.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pi-mi-pmsi-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (head.is_set || is_set(head.yfilter)) leaf_name_data.push_back(head.get_name_leafdata());
    if (v6.is_set || is_set(v6.yfilter)) leaf_name_data.push_back(v6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "head")
    {
        head.yfilter = yfilter;
    }
    if(value_path == "v6")
    {
        v6.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-id" || name == "head" || name == "v6")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::PiMsPmsiData()
    :
    vrf_id{YType::uint32, "vrf-id"},
    source{YType::str, "source"},
    head{YType::int32, "head"},
    v6{YType::int32, "v6"},
    hli{YType::uint32, "hli"},
    seg{YType::int32, "seg"}
{

    yang_name = "pi-ms-pmsi-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::~PiMsPmsiData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::has_data() const
{
    if (is_presence_container) return true;
    return vrf_id.is_set
	|| source.is_set
	|| head.is_set
	|| v6.is_set
	|| hli.is_set
	|| seg.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(head.yfilter)
	|| ydk::is_set(v6.yfilter)
	|| ydk::is_set(hli.yfilter)
	|| ydk::is_set(seg.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pi-ms-pmsi-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (head.is_set || is_set(head.yfilter)) leaf_name_data.push_back(head.get_name_leafdata());
    if (v6.is_set || is_set(v6.yfilter)) leaf_name_data.push_back(v6.get_name_leafdata());
    if (hli.is_set || is_set(hli.yfilter)) leaf_name_data.push_back(hli.get_name_leafdata());
    if (seg.is_set || is_set(seg.yfilter)) leaf_name_data.push_back(seg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "head")
    {
        head.yfilter = yfilter;
    }
    if(value_path == "v6")
    {
        v6.yfilter = yfilter;
    }
    if(value_path == "hli")
    {
        hli.yfilter = yfilter;
    }
    if(value_path == "seg")
    {
        seg.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-id" || name == "source" || name == "head" || name == "v6" || name == "hli" || name == "seg")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::NextHopSetL3vpn()
    :
    table_id{YType::uint32, "table-id"},
    next_hop_set_id{YType::uint32, "next-hop-set-id"}
{

    yang_name = "next-hop-set-l3vpn"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::~NextHopSetL3vpn()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| next_hop_set_id.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(next_hop_set_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-set-l3vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (next_hop_set_id.is_set || is_set(next_hop_set_id.yfilter)) leaf_name_data.push_back(next_hop_set_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-set-id")
    {
        next_hop_set_id = value;
        next_hop_set_id.value_namespace = name_space;
        next_hop_set_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-set-id")
    {
        next_hop_set_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "next-hop-set-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::SrPrefixSegment()
    :
    table_id{YType::uint32, "table-id"},
    segment_id{YType::uint32, "segment-id"}
{

    yang_name = "sr-prefix-segment"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::~SrPrefixSegment()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| segment_id.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(segment_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-prefix-segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (segment_id.is_set || is_set(segment_id.yfilter)) leaf_name_data.push_back(segment_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id")
    {
        segment_id = value;
        segment_id.value_namespace = name_space;
        segment_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "segment-id")
    {
        segment_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "segment-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::SrAdjSegmentIpv4()
    :
    index_{YType::uint32, "index"},
    type{YType::uint32, "type"},
    intf{YType::str, "intf"},
    addr{YType::str, "addr"}
{

    yang_name = "sr-adj-segment-ipv4"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::~SrAdjSegmentIpv4()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| type.is_set
	|| intf.is_set
	|| addr.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-adj-segment-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intf")
    {
        intf = value;
        intf.value_namespace = name_space;
        intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "intf")
    {
        intf.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "type" || name == "intf" || name == "addr")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::SrAdjSegmentIpv6()
    :
    index_{YType::uint32, "index"},
    type{YType::uint32, "type"},
    intf{YType::str, "intf"},
    addr{YType::str, "addr"}
{

    yang_name = "sr-adj-segment-ipv6"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::~SrAdjSegmentIpv6()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| type.is_set
	|| intf.is_set
	|| addr.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-adj-segment-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intf")
    {
        intf = value;
        intf.value_namespace = name_space;
        intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "intf")
    {
        intf.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "type" || name == "intf" || name == "addr")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::LabelBlockSrgbData()
    :
    start_label{YType::uint32, "start-label"},
    offset{YType::uint32, "offset"},
    size{YType::uint32, "size"}
{

    yang_name = "label-block-srgb-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::~LabelBlockSrgbData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::has_data() const
{
    if (is_presence_container) return true;
    return start_label.is_set
	|| offset.is_set
	|| size.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_label.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block-srgb-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_label.is_set || is_set(start_label.yfilter)) leaf_name_data.push_back(start_label.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-label")
    {
        start_label = value;
        start_label.value_namespace = name_space;
        start_label.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-label")
    {
        start_label.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-label" || name == "offset" || name == "size")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TeBinding::TeBinding()
    :
    te_identifier{YType::uint32, "te-identifier"},
    te_type{YType::enumeration, "te-type"}
{

    yang_name = "te-binding"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TeBinding::~TeBinding()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TeBinding::has_data() const
{
    if (is_presence_container) return true;
    return te_identifier.is_set
	|| te_type.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TeBinding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_identifier.yfilter)
	|| ydk::is_set(te_type.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TeBinding::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TeBinding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TeBinding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_identifier.is_set || is_set(te_identifier.yfilter)) leaf_name_data.push_back(te_identifier.get_name_leafdata());
    if (te_type.is_set || is_set(te_type.yfilter)) leaf_name_data.push_back(te_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TeBinding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TeBinding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TeBinding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TeBinding::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TeBinding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-identifier" || name == "te-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::LabelBlockSrlbData()
    :
    start_label{YType::uint32, "start-label"},
    offset{YType::uint32, "offset"},
    size{YType::uint32, "size"}
{

    yang_name = "label-block-srlb-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::~LabelBlockSrlbData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::has_data() const
{
    if (is_presence_container) return true;
    return start_label.is_set
	|| offset.is_set
	|| size.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_label.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/label-context/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block-srlb-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_label.is_set || is_set(start_label.yfilter)) leaf_name_data.push_back(start_label.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-label")
    {
        start_label = value;
        start_label.value_namespace = name_space;
        start_label.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-label")
    {
        start_label.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-label" || name == "offset" || name == "size")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite::LocalLabelRewrite()
    :
    label_data(this, {})
{

    yang_name = "local-label-rewrite"; yang_parent_name = "rewrite-id"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite::~LocalLabelRewrite()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<label_data.len(); index++)
    {
        if(label_data[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite::has_operation() const
{
    for (std::size_t index=0; index<label_data.len(); index++)
    {
        if(label_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-label-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-data")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite::LabelData>();
        ent_->parent = this;
        label_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : label_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-data")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::LabelData()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "label-data"; yang_parent_name = "local-label-rewrite"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::~LabelData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/rewrite-id/rewrite-id/local-label-rewrite/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::AssociatedFpi()
    :
    fpi(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi>())
    , application_owner(this, {})
{
    fpi->parent = this;

    yang_name = "associated-fpi"; yang_parent_name = "rewrite-ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::~AssociatedFpi()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application_owner.len(); index++)
    {
        if(application_owner[index]->has_data())
            return true;
    }
    return (fpi !=  nullptr && fpi->has_data());
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::has_operation() const
{
    for (std::size_t index=0; index<application_owner.len(); index++)
    {
        if(application_owner[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (fpi !=  nullptr && fpi->has_operation());
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "associated-fpi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpi")
    {
        if(fpi == nullptr)
        {
            fpi = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi>();
        }
        return fpi;
    }

    if(child_yang_name == "application-owner")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::ApplicationOwner>();
        ent_->parent = this;
        application_owner.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fpi != nullptr)
    {
        _children["fpi"] = fpi;
    }

    count_ = 0;
    for (auto ent_ : application_owner.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpi" || name == "application-owner")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Fpi()
    :
    fpi_type{YType::enumeration, "fpi-type"}
        ,
    label_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelData>())
    , te_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::TeData>())
    , ipv4_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv4Data>())
    , ipv6_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv6Data>())
    , pw_list_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::PwListData>())
    , dmtc_ext_intf_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::DmtcExtIntfData>())
    , label_range(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelRange>())
{
    label_data->parent = this;
    te_data->parent = this;
    ipv4_data->parent = this;
    ipv6_data->parent = this;
    pw_list_data->parent = this;
    dmtc_ext_intf_data->parent = this;
    label_range->parent = this;

    yang_name = "fpi"; yang_parent_name = "associated-fpi"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::~Fpi()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::has_data() const
{
    if (is_presence_container) return true;
    return fpi_type.is_set
	|| (label_data !=  nullptr && label_data->has_data())
	|| (te_data !=  nullptr && te_data->has_data())
	|| (ipv4_data !=  nullptr && ipv4_data->has_data())
	|| (ipv6_data !=  nullptr && ipv6_data->has_data())
	|| (pw_list_data !=  nullptr && pw_list_data->has_data())
	|| (dmtc_ext_intf_data !=  nullptr && dmtc_ext_intf_data->has_data())
	|| (label_range !=  nullptr && label_range->has_data());
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fpi_type.yfilter)
	|| (label_data !=  nullptr && label_data->has_operation())
	|| (te_data !=  nullptr && te_data->has_operation())
	|| (ipv4_data !=  nullptr && ipv4_data->has_operation())
	|| (ipv6_data !=  nullptr && ipv6_data->has_operation())
	|| (pw_list_data !=  nullptr && pw_list_data->has_operation())
	|| (dmtc_ext_intf_data !=  nullptr && dmtc_ext_intf_data->has_operation())
	|| (label_range !=  nullptr && label_range->has_operation());
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/associated-fpi/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fpi_type.is_set || is_set(fpi_type.yfilter)) leaf_name_data.push_back(fpi_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-data")
    {
        if(label_data == nullptr)
        {
            label_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelData>();
        }
        return label_data;
    }

    if(child_yang_name == "te-data")
    {
        if(te_data == nullptr)
        {
            te_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::TeData>();
        }
        return te_data;
    }

    if(child_yang_name == "ipv4-data")
    {
        if(ipv4_data == nullptr)
        {
            ipv4_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv4Data>();
        }
        return ipv4_data;
    }

    if(child_yang_name == "ipv6-data")
    {
        if(ipv6_data == nullptr)
        {
            ipv6_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv6Data>();
        }
        return ipv6_data;
    }

    if(child_yang_name == "pw-list-data")
    {
        if(pw_list_data == nullptr)
        {
            pw_list_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::PwListData>();
        }
        return pw_list_data;
    }

    if(child_yang_name == "dmtc-ext-intf-data")
    {
        if(dmtc_ext_intf_data == nullptr)
        {
            dmtc_ext_intf_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::DmtcExtIntfData>();
        }
        return dmtc_ext_intf_data;
    }

    if(child_yang_name == "label-range")
    {
        if(label_range == nullptr)
        {
            label_range = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelRange>();
        }
        return label_range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(label_data != nullptr)
    {
        _children["label-data"] = label_data;
    }

    if(te_data != nullptr)
    {
        _children["te-data"] = te_data;
    }

    if(ipv4_data != nullptr)
    {
        _children["ipv4-data"] = ipv4_data;
    }

    if(ipv6_data != nullptr)
    {
        _children["ipv6-data"] = ipv6_data;
    }

    if(pw_list_data != nullptr)
    {
        _children["pw-list-data"] = pw_list_data;
    }

    if(dmtc_ext_intf_data != nullptr)
    {
        _children["dmtc-ext-intf-data"] = dmtc_ext_intf_data;
    }

    if(label_range != nullptr)
    {
        _children["label-range"] = label_range;
    }

    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fpi-type")
    {
        fpi_type = value;
        fpi_type.value_namespace = name_space;
        fpi_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fpi-type")
    {
        fpi_type.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-data" || name == "te-data" || name == "ipv4-data" || name == "ipv6-data" || name == "pw-list-data" || name == "dmtc-ext-intf-data" || name == "label-range" || name == "fpi-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelData::LabelData()
    :
    label{YType::uint32, "label"},
    security_id{YType::uint32, "security-id"},
    elc{YType::int32, "elc"}
{

    yang_name = "label-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelData::~LabelData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelData::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| security_id.is_set
	|| elc.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(security_id.yfilter)
	|| ydk::is_set(elc.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/associated-fpi/fpi/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (elc.is_set || is_set(elc.yfilter)) leaf_name_data.push_back(elc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-id")
    {
        security_id = value;
        security_id.value_namespace = name_space;
        security_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "elc")
    {
        elc = value;
        elc.value_namespace = name_space;
        elc.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "security-id")
    {
        security_id.yfilter = yfilter;
    }
    if(value_path == "elc")
    {
        elc.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "security-id" || name == "elc")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::TeData::TeData()
    :
    tunnel_interface{YType::str, "tunnel-interface"},
    local_label{YType::uint32, "local-label"}
{

    yang_name = "te-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::TeData::~TeData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::TeData::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_interface.is_set
	|| local_label.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::TeData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(local_label.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::TeData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/associated-fpi/fpi/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::TeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::TeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::TeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::TeData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::TeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::TeData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::TeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-interface" || name == "local-label")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv4Data::Ipv4Data()
    :
    table_id{YType::uint32, "table-id"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    version{YType::uint32, "version"},
    sr_local_label{YType::uint32, "sr-local-label"}
{

    yang_name = "ipv4-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv4Data::~Ipv4Data()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv4Data::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| version.is_set
	|| sr_local_label.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(sr_local_label.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv4Data::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/associated-fpi/fpi/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (sr_local_label.is_set || is_set(sr_local_label.yfilter)) leaf_name_data.push_back(sr_local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-local-label")
    {
        sr_local_label = value;
        sr_local_label.value_namespace = name_space;
        sr_local_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "sr-local-label")
    {
        sr_local_label.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "prefix" || name == "prefix-length" || name == "version" || name == "sr-local-label")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv6Data::Ipv6Data()
    :
    table_id{YType::uint32, "table-id"},
    prefix{YType::str, "prefix"},
    router_flags{YType::uint32, "router-flags"},
    prefix_len{YType::uint8, "prefix-len"},
    version{YType::uint32, "version"}
{

    yang_name = "ipv6-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv6Data::~Ipv6Data()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv6Data::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| prefix.is_set
	|| router_flags.is_set
	|| prefix_len.is_set
	|| version.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv6Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(router_flags.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv6Data::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/associated-fpi/fpi/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv6Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (router_flags.is_set || is_set(router_flags.yfilter)) leaf_name_data.push_back(router_flags.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv6Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv6Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-flags")
    {
        router_flags = value;
        router_flags.value_namespace = name_space;
        router_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv6Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "router-flags")
    {
        router_flags.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::Ipv6Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "prefix" || name == "router-flags" || name == "prefix-len" || name == "version")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::PwListData::PwListData()
    :
    pwhe_list_id{YType::uint16, "pwhe-list-id"}
{

    yang_name = "pw-list-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::PwListData::~PwListData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::PwListData::has_data() const
{
    if (is_presence_container) return true;
    return pwhe_list_id.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::PwListData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pwhe_list_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::PwListData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/associated-fpi/fpi/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::PwListData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-list-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::PwListData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pwhe_list_id.is_set || is_set(pwhe_list_id.yfilter)) leaf_name_data.push_back(pwhe_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::PwListData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::PwListData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::PwListData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pwhe-list-id")
    {
        pwhe_list_id = value;
        pwhe_list_id.value_namespace = name_space;
        pwhe_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::PwListData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pwhe-list-id")
    {
        pwhe_list_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::PwListData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pwhe-list-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::DmtcExtIntfData::DmtcExtIntfData()
    :
    dmtc_ext_ifh{YType::str, "dmtc-ext-ifh"}
{

    yang_name = "dmtc-ext-intf-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::DmtcExtIntfData::~DmtcExtIntfData()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::DmtcExtIntfData::has_data() const
{
    if (is_presence_container) return true;
    return dmtc_ext_ifh.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::DmtcExtIntfData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dmtc_ext_ifh.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::DmtcExtIntfData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/associated-fpi/fpi/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::DmtcExtIntfData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dmtc-ext-intf-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::DmtcExtIntfData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dmtc_ext_ifh.is_set || is_set(dmtc_ext_ifh.yfilter)) leaf_name_data.push_back(dmtc_ext_ifh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::DmtcExtIntfData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::DmtcExtIntfData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::DmtcExtIntfData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dmtc-ext-ifh")
    {
        dmtc_ext_ifh = value;
        dmtc_ext_ifh.value_namespace = name_space;
        dmtc_ext_ifh.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::DmtcExtIntfData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dmtc-ext-ifh")
    {
        dmtc_ext_ifh.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::DmtcExtIntfData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dmtc-ext-ifh")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelRange::LabelRange()
    :
    type{YType::uint8, "type"},
    index_{YType::uint8, "index"}
{

    yang_name = "label-range"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelRange::~LabelRange()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelRange::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| index_.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/associated-fpi/fpi/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::Fpi::LabelRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "index")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::ApplicationOwner::ApplicationOwner()
    :
    application_name{YType::str, "application-name"},
    application_type{YType::enumeration, "application-type"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_instance{YType::str, "application-instance"},
    resource_state{YType::enumeration, "resource-state"}
{

    yang_name = "application-owner"; yang_parent_name = "associated-fpi"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::ApplicationOwner::~ApplicationOwner()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::ApplicationOwner::has_data() const
{
    if (is_presence_container) return true;
    return application_name.is_set
	|| application_type.is_set
	|| application_role_primary.is_set
	|| application_instance.is_set
	|| resource_state.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::ApplicationOwner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| ydk::is_set(application_type.yfilter)
	|| ydk::is_set(application_role_primary.yfilter)
	|| ydk::is_set(application_instance.yfilter)
	|| ydk::is_set(resource_state.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::ApplicationOwner::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/associated-fpi/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::ApplicationOwner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-owner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::ApplicationOwner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (application_role_primary.is_set || is_set(application_role_primary.yfilter)) leaf_name_data.push_back(application_role_primary.get_name_leafdata());
    if (application_instance.is_set || is_set(application_instance.yfilter)) leaf_name_data.push_back(application_instance.get_name_leafdata());
    if (resource_state.is_set || is_set(resource_state.yfilter)) leaf_name_data.push_back(resource_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::ApplicationOwner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::ApplicationOwner::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::ApplicationOwner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-type")
    {
        application_type = value;
        application_type.value_namespace = name_space;
        application_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary = value;
        application_role_primary.value_namespace = name_space;
        application_role_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-instance")
    {
        application_instance = value;
        application_instance.value_namespace = name_space;
        application_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-state")
    {
        resource_state = value;
        resource_state.value_namespace = name_space;
        resource_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::ApplicationOwner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
    if(value_path == "application-type")
    {
        application_type.yfilter = yfilter;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary.yfilter = yfilter;
    }
    if(value_path == "application-instance")
    {
        application_instance.yfilter = yfilter;
    }
    if(value_path == "resource-state")
    {
        resource_state.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::AssociatedFpi::ApplicationOwner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-name" || name == "application-type" || name == "application-role-primary" || name == "application-instance" || name == "resource-state")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::V4Rpf::V4Rpf()
    :
    table_id{YType::uint32, "table-id"},
    v4_rpf_neighbor{YType::str, "v4-rpf-neighbor"}
{

    yang_name = "v4-rpf"; yang_parent_name = "rewrite-ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::V4Rpf::~V4Rpf()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::V4Rpf::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| v4_rpf_neighbor.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::V4Rpf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(v4_rpf_neighbor.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::V4Rpf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::V4Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-rpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::V4Rpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (v4_rpf_neighbor.is_set || is_set(v4_rpf_neighbor.yfilter)) leaf_name_data.push_back(v4_rpf_neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::V4Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::V4Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::V4Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::V4Rpf::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::V4Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "v4-rpf-neighbor")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::V6Rpf::V6Rpf()
    :
    table_id{YType::uint32, "table-id"},
    v6_rpf_neighbor{YType::str, "v6-rpf-neighbor"}
{

    yang_name = "v6-rpf"; yang_parent_name = "rewrite-ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::V6Rpf::~V6Rpf()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::V6Rpf::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| v6_rpf_neighbor.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::V6Rpf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(v6_rpf_neighbor.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::V6Rpf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::V6Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v6-rpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::V6Rpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (v6_rpf_neighbor.is_set || is_set(v6_rpf_neighbor.yfilter)) leaf_name_data.push_back(v6_rpf_neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::V6Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::V6Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::V6Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::V6Rpf::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::V6Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "v6-rpf-neighbor")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::Mois()
    :
    application_resource(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::ApplicationResource>())
    , moi_array(this, {})
{
    application_resource->parent = this;

    yang_name = "mois"; yang_parent_name = "rewrite-ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::~Mois()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<moi_array.len(); index++)
    {
        if(moi_array[index]->has_data())
            return true;
    }
    return (application_resource !=  nullptr && application_resource->has_data());
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::has_operation() const
{
    for (std::size_t index=0; index<moi_array.len(); index++)
    {
        if(moi_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (application_resource !=  nullptr && application_resource->has_operation());
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mois";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-resource")
    {
        if(application_resource == nullptr)
        {
            application_resource = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::ApplicationResource>();
        }
        return application_resource;
    }

    if(child_yang_name == "moi-array")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray>();
        ent_->parent = this;
        moi_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(application_resource != nullptr)
    {
        _children["application-resource"] = application_resource;
    }

    count_ = 0;
    for (auto ent_ : moi_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-resource" || name == "moi-array")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::ApplicationResource::ApplicationResource()
    :
    application_name{YType::str, "application-name"},
    application_type{YType::enumeration, "application-type"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_instance{YType::str, "application-instance"},
    resource_state{YType::enumeration, "resource-state"}
{

    yang_name = "application-resource"; yang_parent_name = "mois"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::ApplicationResource::~ApplicationResource()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::ApplicationResource::has_data() const
{
    if (is_presence_container) return true;
    return application_name.is_set
	|| application_type.is_set
	|| application_role_primary.is_set
	|| application_instance.is_set
	|| resource_state.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::ApplicationResource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| ydk::is_set(application_type.yfilter)
	|| ydk::is_set(application_role_primary.yfilter)
	|| ydk::is_set(application_instance.yfilter)
	|| ydk::is_set(resource_state.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::ApplicationResource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/mois/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::ApplicationResource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-resource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::ApplicationResource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (application_role_primary.is_set || is_set(application_role_primary.yfilter)) leaf_name_data.push_back(application_role_primary.get_name_leafdata());
    if (application_instance.is_set || is_set(application_instance.yfilter)) leaf_name_data.push_back(application_instance.get_name_leafdata());
    if (resource_state.is_set || is_set(resource_state.yfilter)) leaf_name_data.push_back(resource_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::ApplicationResource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::ApplicationResource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::ApplicationResource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-type")
    {
        application_type = value;
        application_type.value_namespace = name_space;
        application_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary = value;
        application_role_primary.value_namespace = name_space;
        application_role_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-instance")
    {
        application_instance = value;
        application_instance.value_namespace = name_space;
        application_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-state")
    {
        resource_state = value;
        resource_state.value_namespace = name_space;
        resource_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::ApplicationResource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
    if(value_path == "application-type")
    {
        application_type.yfilter = yfilter;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary.yfilter = yfilter;
    }
    if(value_path == "application-instance")
    {
        application_instance.yfilter = yfilter;
    }
    if(value_path == "resource-state")
    {
        resource_state.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::ApplicationResource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-name" || name == "application-type" || name == "application-role-primary" || name == "application-instance" || name == "resource-state")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::MoiArray()
    :
    moi(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi>())
{
    moi->parent = this;

    yang_name = "moi-array"; yang_parent_name = "mois"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::~MoiArray()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::has_data() const
{
    if (is_presence_container) return true;
    return (moi !=  nullptr && moi->has_data());
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::has_operation() const
{
    return is_set(yfilter)
	|| (moi !=  nullptr && moi->has_operation());
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/mois/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "moi-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "moi")
    {
        if(moi == nullptr)
        {
            moi = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi>();
        }
        return moi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(moi != nullptr)
    {
        _children["moi"] = moi;
    }

    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "moi")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::Moi()
    :
    moi_type{YType::enumeration, "moi-type"}
        ,
    pop_and_lookup_ipv4(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv4>())
    , pop_and_lookup_tp(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupTp>())
    , pop_and_lookup_ipv6(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv6>())
    , ipv4_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::Ipv4Data>())
    , ipv6_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::Ipv6Data>())
    , tev4_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::Tev4Data>())
    , pseudowire_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PseudowireData>())
    , ip_sub_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::IpSubData>())
    , pseudowire_head_end_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PseudowireHeadEndData>())
    , pw_list_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PwListData>())
    , stackv4_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data>())
    , stackv6_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data>())
    , te_head_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::TeHeadData>())
    , dmtc_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::DmtcData>())
    , nnh_stackv4_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::NnhStackv4Data>())
    , nnh_stackv6_data(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::NnhStackv6Data>())
    , label_range(std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::LabelRange>())
{
    pop_and_lookup_ipv4->parent = this;
    pop_and_lookup_tp->parent = this;
    pop_and_lookup_ipv6->parent = this;
    ipv4_data->parent = this;
    ipv6_data->parent = this;
    tev4_data->parent = this;
    pseudowire_data->parent = this;
    ip_sub_data->parent = this;
    pseudowire_head_end_data->parent = this;
    pw_list_data->parent = this;
    stackv4_data->parent = this;
    stackv6_data->parent = this;
    te_head_data->parent = this;
    dmtc_data->parent = this;
    nnh_stackv4_data->parent = this;
    nnh_stackv6_data->parent = this;
    label_range->parent = this;

    yang_name = "moi"; yang_parent_name = "moi-array"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::~Moi()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::has_data() const
{
    if (is_presence_container) return true;
    return moi_type.is_set
	|| (pop_and_lookup_ipv4 !=  nullptr && pop_and_lookup_ipv4->has_data())
	|| (pop_and_lookup_tp !=  nullptr && pop_and_lookup_tp->has_data())
	|| (pop_and_lookup_ipv6 !=  nullptr && pop_and_lookup_ipv6->has_data())
	|| (ipv4_data !=  nullptr && ipv4_data->has_data())
	|| (ipv6_data !=  nullptr && ipv6_data->has_data())
	|| (tev4_data !=  nullptr && tev4_data->has_data())
	|| (pseudowire_data !=  nullptr && pseudowire_data->has_data())
	|| (ip_sub_data !=  nullptr && ip_sub_data->has_data())
	|| (pseudowire_head_end_data !=  nullptr && pseudowire_head_end_data->has_data())
	|| (pw_list_data !=  nullptr && pw_list_data->has_data())
	|| (stackv4_data !=  nullptr && stackv4_data->has_data())
	|| (stackv6_data !=  nullptr && stackv6_data->has_data())
	|| (te_head_data !=  nullptr && te_head_data->has_data())
	|| (dmtc_data !=  nullptr && dmtc_data->has_data())
	|| (nnh_stackv4_data !=  nullptr && nnh_stackv4_data->has_data())
	|| (nnh_stackv6_data !=  nullptr && nnh_stackv6_data->has_data())
	|| (label_range !=  nullptr && label_range->has_data());
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(moi_type.yfilter)
	|| (pop_and_lookup_ipv4 !=  nullptr && pop_and_lookup_ipv4->has_operation())
	|| (pop_and_lookup_tp !=  nullptr && pop_and_lookup_tp->has_operation())
	|| (pop_and_lookup_ipv6 !=  nullptr && pop_and_lookup_ipv6->has_operation())
	|| (ipv4_data !=  nullptr && ipv4_data->has_operation())
	|| (ipv6_data !=  nullptr && ipv6_data->has_operation())
	|| (tev4_data !=  nullptr && tev4_data->has_operation())
	|| (pseudowire_data !=  nullptr && pseudowire_data->has_operation())
	|| (ip_sub_data !=  nullptr && ip_sub_data->has_operation())
	|| (pseudowire_head_end_data !=  nullptr && pseudowire_head_end_data->has_operation())
	|| (pw_list_data !=  nullptr && pw_list_data->has_operation())
	|| (stackv4_data !=  nullptr && stackv4_data->has_operation())
	|| (stackv6_data !=  nullptr && stackv6_data->has_operation())
	|| (te_head_data !=  nullptr && te_head_data->has_operation())
	|| (dmtc_data !=  nullptr && dmtc_data->has_operation())
	|| (nnh_stackv4_data !=  nullptr && nnh_stackv4_data->has_operation())
	|| (nnh_stackv6_data !=  nullptr && nnh_stackv6_data->has_operation())
	|| (label_range !=  nullptr && label_range->has_operation());
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/mois/moi-array/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "moi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (moi_type.is_set || is_set(moi_type.yfilter)) leaf_name_data.push_back(moi_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pop-and-lookup-ipv4")
    {
        if(pop_and_lookup_ipv4 == nullptr)
        {
            pop_and_lookup_ipv4 = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv4>();
        }
        return pop_and_lookup_ipv4;
    }

    if(child_yang_name == "pop-and-lookup-tp")
    {
        if(pop_and_lookup_tp == nullptr)
        {
            pop_and_lookup_tp = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupTp>();
        }
        return pop_and_lookup_tp;
    }

    if(child_yang_name == "pop-and-lookup-ipv6")
    {
        if(pop_and_lookup_ipv6 == nullptr)
        {
            pop_and_lookup_ipv6 = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv6>();
        }
        return pop_and_lookup_ipv6;
    }

    if(child_yang_name == "ipv4-data")
    {
        if(ipv4_data == nullptr)
        {
            ipv4_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::Ipv4Data>();
        }
        return ipv4_data;
    }

    if(child_yang_name == "ipv6-data")
    {
        if(ipv6_data == nullptr)
        {
            ipv6_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::Ipv6Data>();
        }
        return ipv6_data;
    }

    if(child_yang_name == "tev4-data")
    {
        if(tev4_data == nullptr)
        {
            tev4_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::Tev4Data>();
        }
        return tev4_data;
    }

    if(child_yang_name == "pseudowire-data")
    {
        if(pseudowire_data == nullptr)
        {
            pseudowire_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PseudowireData>();
        }
        return pseudowire_data;
    }

    if(child_yang_name == "ip-sub-data")
    {
        if(ip_sub_data == nullptr)
        {
            ip_sub_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::IpSubData>();
        }
        return ip_sub_data;
    }

    if(child_yang_name == "pseudowire-head-end-data")
    {
        if(pseudowire_head_end_data == nullptr)
        {
            pseudowire_head_end_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PseudowireHeadEndData>();
        }
        return pseudowire_head_end_data;
    }

    if(child_yang_name == "pw-list-data")
    {
        if(pw_list_data == nullptr)
        {
            pw_list_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PwListData>();
        }
        return pw_list_data;
    }

    if(child_yang_name == "stackv4-data")
    {
        if(stackv4_data == nullptr)
        {
            stackv4_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data>();
        }
        return stackv4_data;
    }

    if(child_yang_name == "stackv6-data")
    {
        if(stackv6_data == nullptr)
        {
            stackv6_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data>();
        }
        return stackv6_data;
    }

    if(child_yang_name == "te-head-data")
    {
        if(te_head_data == nullptr)
        {
            te_head_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::TeHeadData>();
        }
        return te_head_data;
    }

    if(child_yang_name == "dmtc-data")
    {
        if(dmtc_data == nullptr)
        {
            dmtc_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::DmtcData>();
        }
        return dmtc_data;
    }

    if(child_yang_name == "nnh-stackv4-data")
    {
        if(nnh_stackv4_data == nullptr)
        {
            nnh_stackv4_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::NnhStackv4Data>();
        }
        return nnh_stackv4_data;
    }

    if(child_yang_name == "nnh-stackv6-data")
    {
        if(nnh_stackv6_data == nullptr)
        {
            nnh_stackv6_data = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::NnhStackv6Data>();
        }
        return nnh_stackv6_data;
    }

    if(child_yang_name == "label-range")
    {
        if(label_range == nullptr)
        {
            label_range = std::make_shared<MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::LabelRange>();
        }
        return label_range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pop_and_lookup_ipv4 != nullptr)
    {
        _children["pop-and-lookup-ipv4"] = pop_and_lookup_ipv4;
    }

    if(pop_and_lookup_tp != nullptr)
    {
        _children["pop-and-lookup-tp"] = pop_and_lookup_tp;
    }

    if(pop_and_lookup_ipv6 != nullptr)
    {
        _children["pop-and-lookup-ipv6"] = pop_and_lookup_ipv6;
    }

    if(ipv4_data != nullptr)
    {
        _children["ipv4-data"] = ipv4_data;
    }

    if(ipv6_data != nullptr)
    {
        _children["ipv6-data"] = ipv6_data;
    }

    if(tev4_data != nullptr)
    {
        _children["tev4-data"] = tev4_data;
    }

    if(pseudowire_data != nullptr)
    {
        _children["pseudowire-data"] = pseudowire_data;
    }

    if(ip_sub_data != nullptr)
    {
        _children["ip-sub-data"] = ip_sub_data;
    }

    if(pseudowire_head_end_data != nullptr)
    {
        _children["pseudowire-head-end-data"] = pseudowire_head_end_data;
    }

    if(pw_list_data != nullptr)
    {
        _children["pw-list-data"] = pw_list_data;
    }

    if(stackv4_data != nullptr)
    {
        _children["stackv4-data"] = stackv4_data;
    }

    if(stackv6_data != nullptr)
    {
        _children["stackv6-data"] = stackv6_data;
    }

    if(te_head_data != nullptr)
    {
        _children["te-head-data"] = te_head_data;
    }

    if(dmtc_data != nullptr)
    {
        _children["dmtc-data"] = dmtc_data;
    }

    if(nnh_stackv4_data != nullptr)
    {
        _children["nnh-stackv4-data"] = nnh_stackv4_data;
    }

    if(nnh_stackv6_data != nullptr)
    {
        _children["nnh-stackv6-data"] = nnh_stackv6_data;
    }

    if(label_range != nullptr)
    {
        _children["label-range"] = label_range;
    }

    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "moi-type")
    {
        moi_type = value;
        moi_type.value_namespace = name_space;
        moi_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "moi-type")
    {
        moi_type.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pop-and-lookup-ipv4" || name == "pop-and-lookup-tp" || name == "pop-and-lookup-ipv6" || name == "ipv4-data" || name == "ipv6-data" || name == "tev4-data" || name == "pseudowire-data" || name == "ip-sub-data" || name == "pseudowire-head-end-data" || name == "pw-list-data" || name == "stackv4-data" || name == "stackv6-data" || name == "te-head-data" || name == "dmtc-data" || name == "nnh-stackv4-data" || name == "nnh-stackv6-data" || name == "label-range" || name == "moi-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv4::PopAndLookupIpv4()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"}
{

    yang_name = "pop-and-lookup-ipv4"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv4::~PopAndLookupIpv4()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv4::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/mois/moi-array/moi/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop-and-lookup-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupTp::PopAndLookupTp()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    out_label{YType::uint32, "out-label"}
{

    yang_name = "pop-and-lookup-tp"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupTp::~PopAndLookupTp()
{
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupTp::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set
	|| out_label.is_set;
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupTp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupTp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-ipv4s/rewrite-ipv4/mois/moi-array/moi/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupTp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop-and-lookup-tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupTp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupTp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupTp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupTp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupTp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteIpv4s::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupTp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-label")
        return true;
    return false;
}


}
}

