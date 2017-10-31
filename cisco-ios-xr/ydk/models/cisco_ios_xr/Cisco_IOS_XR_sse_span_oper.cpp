
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sse_span_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sse_span_oper {

Ssespan::Ssespan()
    :
    nodes(std::make_shared<Ssespan::Nodes>())
{
    nodes->parent = this;

    yang_name = "ssespan"; yang_parent_name = "Cisco-IOS-XR-sse-span-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Ssespan::~Ssespan()
{
}

bool Ssespan::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Ssespan::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Ssespan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sse-span-oper:ssespan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssespan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ssespan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Ssespan::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssespan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Ssespan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssespan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Ssespan::clone_ptr() const
{
    return std::make_shared<Ssespan>();
}

std::string Ssespan::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ssespan::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ssespan::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ssespan::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ssespan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Ssespan::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "ssespan"; is_top_level_class = false; has_list_ancestor = false;
}

Ssespan::Nodes::~Nodes()
{
}

bool Ssespan::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Ssespan::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssespan::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sse-span-oper:ssespan/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssespan::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssespan::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ssespan::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ssespan::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssespan::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ssespan::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssespan::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssespan::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Ssespan::Nodes::Node::Node()
    :
    node{YType::str, "node"}
    	,
    span_mirr_infos(std::make_shared<Ssespan::Nodes::Node::SpanMirrInfos>())
	,spanudf(std::make_shared<Ssespan::Nodes::Node::Spanudf>())
	,span_sess_infos(std::make_shared<Ssespan::Nodes::Node::SpanSessInfos>())
{
    span_mirr_infos->parent = this;
    spanudf->parent = this;
    span_sess_infos->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Ssespan::Nodes::Node::~Node()
{
}

bool Ssespan::Nodes::Node::has_data() const
{
    return node.is_set
	|| (span_mirr_infos !=  nullptr && span_mirr_infos->has_data())
	|| (spanudf !=  nullptr && spanudf->has_data())
	|| (span_sess_infos !=  nullptr && span_sess_infos->has_data());
}

bool Ssespan::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| (span_mirr_infos !=  nullptr && span_mirr_infos->has_operation())
	|| (spanudf !=  nullptr && spanudf->has_operation())
	|| (span_sess_infos !=  nullptr && span_sess_infos->has_operation());
}

std::string Ssespan::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sse-span-oper:ssespan/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssespan::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node='" <<node <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssespan::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ssespan::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "span-mirr-infos")
    {
        if(span_mirr_infos == nullptr)
        {
            span_mirr_infos = std::make_shared<Ssespan::Nodes::Node::SpanMirrInfos>();
        }
        return span_mirr_infos;
    }

    if(child_yang_name == "spanudf")
    {
        if(spanudf == nullptr)
        {
            spanudf = std::make_shared<Ssespan::Nodes::Node::Spanudf>();
        }
        return spanudf;
    }

    if(child_yang_name == "span-sess-infos")
    {
        if(span_sess_infos == nullptr)
        {
            span_sess_infos = std::make_shared<Ssespan::Nodes::Node::SpanSessInfos>();
        }
        return span_sess_infos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssespan::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(span_mirr_infos != nullptr)
    {
        children["span-mirr-infos"] = span_mirr_infos;
    }

    if(spanudf != nullptr)
    {
        children["spanudf"] = spanudf;
    }

    if(span_sess_infos != nullptr)
    {
        children["span-sess-infos"] = span_sess_infos;
    }

    return children;
}

void Ssespan::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void Ssespan::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool Ssespan::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "span-mirr-infos" || name == "spanudf" || name == "span-sess-infos" || name == "node")
        return true;
    return false;
}

Ssespan::Nodes::Node::SpanMirrInfos::SpanMirrInfos()
{

    yang_name = "span-mirr-infos"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Ssespan::Nodes::Node::SpanMirrInfos::~SpanMirrInfos()
{
}

bool Ssespan::Nodes::Node::SpanMirrInfos::has_data() const
{
    for (std::size_t index=0; index<span_mirr_info.size(); index++)
    {
        if(span_mirr_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssespan::Nodes::Node::SpanMirrInfos::has_operation() const
{
    for (std::size_t index=0; index<span_mirr_info.size(); index++)
    {
        if(span_mirr_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssespan::Nodes::Node::SpanMirrInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "span-mirr-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssespan::Nodes::Node::SpanMirrInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ssespan::Nodes::Node::SpanMirrInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "span-mirr-info")
    {
        for(auto const & c : span_mirr_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ssespan::Nodes::Node::SpanMirrInfos::SpanMirrInfo>();
        c->parent = this;
        span_mirr_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssespan::Nodes::Node::SpanMirrInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : span_mirr_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ssespan::Nodes::Node::SpanMirrInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssespan::Nodes::Node::SpanMirrInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssespan::Nodes::Node::SpanMirrInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "span-mirr-info")
        return true;
    return false;
}

Ssespan::Nodes::Node::SpanMirrInfos::SpanMirrInfo::SpanMirrInfo()
    :
    intf_name{YType::str, "intf-name"},
    src_ifh{YType::uint32, "src-ifh"},
    intf_name_xr{YType::str, "intf-name-xr"},
    v4_acl_flag{YType::uint32, "v4-acl-flag"},
    v6_acl_flag{YType::uint32, "v6-acl-flag"},
    gre_acl_flag{YType::uint32, "gre-acl-flag"},
    v4state{YType::uint32, "v4state"},
    v6state{YType::uint32, "v6state"},
    gre_state{YType::uint32, "gre-state"},
    v4sessid{YType::uint32, "v4sessid"},
    v6sessid{YType::uint32, "v6sessid"},
    gre_sessid{YType::uint32, "gre-sessid"},
    v4dst_type{YType::uint32, "v4dst-type"},
    v6dst_type{YType::uint32, "v6dst-type"},
    gredst_type{YType::uint32, "gredst-type"},
    v4statsptr{YType::uint32, "v4statsptr"},
    v6statsptr{YType::uint32, "v6statsptr"},
    grev4statsptr{YType::uint32, "grev4statsptr"},
    grev6statsptr{YType::uint32, "grev6statsptr"},
    mplsv4stats{YType::uint32, "mplsv4stats"},
    mplsv6pkts{YType::uint32, "mplsv6pkts"},
    np_umask{YType::uint32, "np-umask"},
    uidb{YType::uint32, "uidb"},
    sft_hw_data{YType::uint32, "sft-hw-data"}
{

    yang_name = "span-mirr-info"; yang_parent_name = "span-mirr-infos"; is_top_level_class = false; has_list_ancestor = true;
}

Ssespan::Nodes::Node::SpanMirrInfos::SpanMirrInfo::~SpanMirrInfo()
{
}

bool Ssespan::Nodes::Node::SpanMirrInfos::SpanMirrInfo::has_data() const
{
    for (auto const & leaf : uidb.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sft_hw_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return intf_name.is_set
	|| src_ifh.is_set
	|| intf_name_xr.is_set
	|| v4_acl_flag.is_set
	|| v6_acl_flag.is_set
	|| gre_acl_flag.is_set
	|| v4state.is_set
	|| v6state.is_set
	|| gre_state.is_set
	|| v4sessid.is_set
	|| v6sessid.is_set
	|| gre_sessid.is_set
	|| v4dst_type.is_set
	|| v6dst_type.is_set
	|| gredst_type.is_set
	|| v4statsptr.is_set
	|| v6statsptr.is_set
	|| grev4statsptr.is_set
	|| grev6statsptr.is_set
	|| mplsv4stats.is_set
	|| mplsv6pkts.is_set
	|| np_umask.is_set;
}

bool Ssespan::Nodes::Node::SpanMirrInfos::SpanMirrInfo::has_operation() const
{
    for (auto const & leaf : uidb.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sft_hw_data.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(intf_name.yfilter)
	|| ydk::is_set(src_ifh.yfilter)
	|| ydk::is_set(intf_name_xr.yfilter)
	|| ydk::is_set(v4_acl_flag.yfilter)
	|| ydk::is_set(v6_acl_flag.yfilter)
	|| ydk::is_set(gre_acl_flag.yfilter)
	|| ydk::is_set(v4state.yfilter)
	|| ydk::is_set(v6state.yfilter)
	|| ydk::is_set(gre_state.yfilter)
	|| ydk::is_set(v4sessid.yfilter)
	|| ydk::is_set(v6sessid.yfilter)
	|| ydk::is_set(gre_sessid.yfilter)
	|| ydk::is_set(v4dst_type.yfilter)
	|| ydk::is_set(v6dst_type.yfilter)
	|| ydk::is_set(gredst_type.yfilter)
	|| ydk::is_set(v4statsptr.yfilter)
	|| ydk::is_set(v6statsptr.yfilter)
	|| ydk::is_set(grev4statsptr.yfilter)
	|| ydk::is_set(grev6statsptr.yfilter)
	|| ydk::is_set(mplsv4stats.yfilter)
	|| ydk::is_set(mplsv6pkts.yfilter)
	|| ydk::is_set(np_umask.yfilter)
	|| ydk::is_set(uidb.yfilter)
	|| ydk::is_set(sft_hw_data.yfilter);
}

std::string Ssespan::Nodes::Node::SpanMirrInfos::SpanMirrInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "span-mirr-info" <<"[intf-name='" <<intf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssespan::Nodes::Node::SpanMirrInfos::SpanMirrInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intf_name.is_set || is_set(intf_name.yfilter)) leaf_name_data.push_back(intf_name.get_name_leafdata());
    if (src_ifh.is_set || is_set(src_ifh.yfilter)) leaf_name_data.push_back(src_ifh.get_name_leafdata());
    if (intf_name_xr.is_set || is_set(intf_name_xr.yfilter)) leaf_name_data.push_back(intf_name_xr.get_name_leafdata());
    if (v4_acl_flag.is_set || is_set(v4_acl_flag.yfilter)) leaf_name_data.push_back(v4_acl_flag.get_name_leafdata());
    if (v6_acl_flag.is_set || is_set(v6_acl_flag.yfilter)) leaf_name_data.push_back(v6_acl_flag.get_name_leafdata());
    if (gre_acl_flag.is_set || is_set(gre_acl_flag.yfilter)) leaf_name_data.push_back(gre_acl_flag.get_name_leafdata());
    if (v4state.is_set || is_set(v4state.yfilter)) leaf_name_data.push_back(v4state.get_name_leafdata());
    if (v6state.is_set || is_set(v6state.yfilter)) leaf_name_data.push_back(v6state.get_name_leafdata());
    if (gre_state.is_set || is_set(gre_state.yfilter)) leaf_name_data.push_back(gre_state.get_name_leafdata());
    if (v4sessid.is_set || is_set(v4sessid.yfilter)) leaf_name_data.push_back(v4sessid.get_name_leafdata());
    if (v6sessid.is_set || is_set(v6sessid.yfilter)) leaf_name_data.push_back(v6sessid.get_name_leafdata());
    if (gre_sessid.is_set || is_set(gre_sessid.yfilter)) leaf_name_data.push_back(gre_sessid.get_name_leafdata());
    if (v4dst_type.is_set || is_set(v4dst_type.yfilter)) leaf_name_data.push_back(v4dst_type.get_name_leafdata());
    if (v6dst_type.is_set || is_set(v6dst_type.yfilter)) leaf_name_data.push_back(v6dst_type.get_name_leafdata());
    if (gredst_type.is_set || is_set(gredst_type.yfilter)) leaf_name_data.push_back(gredst_type.get_name_leafdata());
    if (v4statsptr.is_set || is_set(v4statsptr.yfilter)) leaf_name_data.push_back(v4statsptr.get_name_leafdata());
    if (v6statsptr.is_set || is_set(v6statsptr.yfilter)) leaf_name_data.push_back(v6statsptr.get_name_leafdata());
    if (grev4statsptr.is_set || is_set(grev4statsptr.yfilter)) leaf_name_data.push_back(grev4statsptr.get_name_leafdata());
    if (grev6statsptr.is_set || is_set(grev6statsptr.yfilter)) leaf_name_data.push_back(grev6statsptr.get_name_leafdata());
    if (mplsv4stats.is_set || is_set(mplsv4stats.yfilter)) leaf_name_data.push_back(mplsv4stats.get_name_leafdata());
    if (mplsv6pkts.is_set || is_set(mplsv6pkts.yfilter)) leaf_name_data.push_back(mplsv6pkts.get_name_leafdata());
    if (np_umask.is_set || is_set(np_umask.yfilter)) leaf_name_data.push_back(np_umask.get_name_leafdata());

    auto uidb_name_datas = uidb.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uidb_name_datas.begin(), uidb_name_datas.end());
    auto sft_hw_data_name_datas = sft_hw_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sft_hw_data_name_datas.begin(), sft_hw_data_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Ssespan::Nodes::Node::SpanMirrInfos::SpanMirrInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssespan::Nodes::Node::SpanMirrInfos::SpanMirrInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ssespan::Nodes::Node::SpanMirrInfos::SpanMirrInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intf-name")
    {
        intf_name = value;
        intf_name.value_namespace = name_space;
        intf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-ifh")
    {
        src_ifh = value;
        src_ifh.value_namespace = name_space;
        src_ifh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intf-name-xr")
    {
        intf_name_xr = value;
        intf_name_xr.value_namespace = name_space;
        intf_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4-acl-flag")
    {
        v4_acl_flag = value;
        v4_acl_flag.value_namespace = name_space;
        v4_acl_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-acl-flag")
    {
        v6_acl_flag = value;
        v6_acl_flag.value_namespace = name_space;
        v6_acl_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gre-acl-flag")
    {
        gre_acl_flag = value;
        gre_acl_flag.value_namespace = name_space;
        gre_acl_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4state")
    {
        v4state = value;
        v4state.value_namespace = name_space;
        v4state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6state")
    {
        v6state = value;
        v6state.value_namespace = name_space;
        v6state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gre-state")
    {
        gre_state = value;
        gre_state.value_namespace = name_space;
        gre_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4sessid")
    {
        v4sessid = value;
        v4sessid.value_namespace = name_space;
        v4sessid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6sessid")
    {
        v6sessid = value;
        v6sessid.value_namespace = name_space;
        v6sessid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gre-sessid")
    {
        gre_sessid = value;
        gre_sessid.value_namespace = name_space;
        gre_sessid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4dst-type")
    {
        v4dst_type = value;
        v4dst_type.value_namespace = name_space;
        v4dst_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6dst-type")
    {
        v6dst_type = value;
        v6dst_type.value_namespace = name_space;
        v6dst_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gredst-type")
    {
        gredst_type = value;
        gredst_type.value_namespace = name_space;
        gredst_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4statsptr")
    {
        v4statsptr = value;
        v4statsptr.value_namespace = name_space;
        v4statsptr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6statsptr")
    {
        v6statsptr = value;
        v6statsptr.value_namespace = name_space;
        v6statsptr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grev4statsptr")
    {
        grev4statsptr = value;
        grev4statsptr.value_namespace = name_space;
        grev4statsptr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grev6statsptr")
    {
        grev6statsptr = value;
        grev6statsptr.value_namespace = name_space;
        grev6statsptr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsv4stats")
    {
        mplsv4stats = value;
        mplsv4stats.value_namespace = name_space;
        mplsv4stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsv6pkts")
    {
        mplsv6pkts = value;
        mplsv6pkts.value_namespace = name_space;
        mplsv6pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "np-umask")
    {
        np_umask = value;
        np_umask.value_namespace = name_space;
        np_umask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uidb")
    {
        uidb.append(value);
    }
    if(value_path == "sft-hw-data")
    {
        sft_hw_data.append(value);
    }
}

void Ssespan::Nodes::Node::SpanMirrInfos::SpanMirrInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intf-name")
    {
        intf_name.yfilter = yfilter;
    }
    if(value_path == "src-ifh")
    {
        src_ifh.yfilter = yfilter;
    }
    if(value_path == "intf-name-xr")
    {
        intf_name_xr.yfilter = yfilter;
    }
    if(value_path == "v4-acl-flag")
    {
        v4_acl_flag.yfilter = yfilter;
    }
    if(value_path == "v6-acl-flag")
    {
        v6_acl_flag.yfilter = yfilter;
    }
    if(value_path == "gre-acl-flag")
    {
        gre_acl_flag.yfilter = yfilter;
    }
    if(value_path == "v4state")
    {
        v4state.yfilter = yfilter;
    }
    if(value_path == "v6state")
    {
        v6state.yfilter = yfilter;
    }
    if(value_path == "gre-state")
    {
        gre_state.yfilter = yfilter;
    }
    if(value_path == "v4sessid")
    {
        v4sessid.yfilter = yfilter;
    }
    if(value_path == "v6sessid")
    {
        v6sessid.yfilter = yfilter;
    }
    if(value_path == "gre-sessid")
    {
        gre_sessid.yfilter = yfilter;
    }
    if(value_path == "v4dst-type")
    {
        v4dst_type.yfilter = yfilter;
    }
    if(value_path == "v6dst-type")
    {
        v6dst_type.yfilter = yfilter;
    }
    if(value_path == "gredst-type")
    {
        gredst_type.yfilter = yfilter;
    }
    if(value_path == "v4statsptr")
    {
        v4statsptr.yfilter = yfilter;
    }
    if(value_path == "v6statsptr")
    {
        v6statsptr.yfilter = yfilter;
    }
    if(value_path == "grev4statsptr")
    {
        grev4statsptr.yfilter = yfilter;
    }
    if(value_path == "grev6statsptr")
    {
        grev6statsptr.yfilter = yfilter;
    }
    if(value_path == "mplsv4stats")
    {
        mplsv4stats.yfilter = yfilter;
    }
    if(value_path == "mplsv6pkts")
    {
        mplsv6pkts.yfilter = yfilter;
    }
    if(value_path == "np-umask")
    {
        np_umask.yfilter = yfilter;
    }
    if(value_path == "uidb")
    {
        uidb.yfilter = yfilter;
    }
    if(value_path == "sft-hw-data")
    {
        sft_hw_data.yfilter = yfilter;
    }
}

bool Ssespan::Nodes::Node::SpanMirrInfos::SpanMirrInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-name" || name == "src-ifh" || name == "intf-name-xr" || name == "v4-acl-flag" || name == "v6-acl-flag" || name == "gre-acl-flag" || name == "v4state" || name == "v6state" || name == "gre-state" || name == "v4sessid" || name == "v6sessid" || name == "gre-sessid" || name == "v4dst-type" || name == "v6dst-type" || name == "gredst-type" || name == "v4statsptr" || name == "v6statsptr" || name == "grev4statsptr" || name == "grev6statsptr" || name == "mplsv4stats" || name == "mplsv6pkts" || name == "np-umask" || name == "uidb" || name == "sft-hw-data")
        return true;
    return false;
}

Ssespan::Nodes::Node::Spanudf::Spanudf()
    :
    udf_hdr{YType::uint32, "udf-hdr"},
    udf_type{YType::uint32, "udf-type"},
    udf_len{YType::uint32, "udf-len"},
    udf_value{YType::uint32, "udf-value"},
    udf_hw_data{YType::uint32, "udf-hw-data"}
{

    yang_name = "spanudf"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Ssespan::Nodes::Node::Spanudf::~Spanudf()
{
}

bool Ssespan::Nodes::Node::Spanudf::has_data() const
{
    for (auto const & leaf : udf_hdr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : udf_type.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : udf_len.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : udf_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : udf_hw_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ssespan::Nodes::Node::Spanudf::has_operation() const
{
    for (auto const & leaf : udf_hdr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : udf_type.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : udf_len.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : udf_value.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : udf_hw_data.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(udf_hdr.yfilter)
	|| ydk::is_set(udf_type.yfilter)
	|| ydk::is_set(udf_len.yfilter)
	|| ydk::is_set(udf_value.yfilter)
	|| ydk::is_set(udf_hw_data.yfilter);
}

std::string Ssespan::Nodes::Node::Spanudf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanudf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssespan::Nodes::Node::Spanudf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto udf_hdr_name_datas = udf_hdr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), udf_hdr_name_datas.begin(), udf_hdr_name_datas.end());
    auto udf_type_name_datas = udf_type.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), udf_type_name_datas.begin(), udf_type_name_datas.end());
    auto udf_len_name_datas = udf_len.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), udf_len_name_datas.begin(), udf_len_name_datas.end());
    auto udf_value_name_datas = udf_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), udf_value_name_datas.begin(), udf_value_name_datas.end());
    auto udf_hw_data_name_datas = udf_hw_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), udf_hw_data_name_datas.begin(), udf_hw_data_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Ssespan::Nodes::Node::Spanudf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssespan::Nodes::Node::Spanudf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ssespan::Nodes::Node::Spanudf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "udf-hdr")
    {
        udf_hdr.append(value);
    }
    if(value_path == "udf-type")
    {
        udf_type.append(value);
    }
    if(value_path == "udf-len")
    {
        udf_len.append(value);
    }
    if(value_path == "udf-value")
    {
        udf_value.append(value);
    }
    if(value_path == "udf-hw-data")
    {
        udf_hw_data.append(value);
    }
}

void Ssespan::Nodes::Node::Spanudf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "udf-hdr")
    {
        udf_hdr.yfilter = yfilter;
    }
    if(value_path == "udf-type")
    {
        udf_type.yfilter = yfilter;
    }
    if(value_path == "udf-len")
    {
        udf_len.yfilter = yfilter;
    }
    if(value_path == "udf-value")
    {
        udf_value.yfilter = yfilter;
    }
    if(value_path == "udf-hw-data")
    {
        udf_hw_data.yfilter = yfilter;
    }
}

bool Ssespan::Nodes::Node::Spanudf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udf-hdr" || name == "udf-type" || name == "udf-len" || name == "udf-value" || name == "udf-hw-data")
        return true;
    return false;
}

Ssespan::Nodes::Node::SpanSessInfos::SpanSessInfos()
{

    yang_name = "span-sess-infos"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Ssespan::Nodes::Node::SpanSessInfos::~SpanSessInfos()
{
}

bool Ssespan::Nodes::Node::SpanSessInfos::has_data() const
{
    for (std::size_t index=0; index<span_sess_info.size(); index++)
    {
        if(span_sess_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssespan::Nodes::Node::SpanSessInfos::has_operation() const
{
    for (std::size_t index=0; index<span_sess_info.size(); index++)
    {
        if(span_sess_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssespan::Nodes::Node::SpanSessInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "span-sess-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssespan::Nodes::Node::SpanSessInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ssespan::Nodes::Node::SpanSessInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "span-sess-info")
    {
        for(auto const & c : span_sess_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ssespan::Nodes::Node::SpanSessInfos::SpanSessInfo>();
        c->parent = this;
        span_sess_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssespan::Nodes::Node::SpanSessInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : span_sess_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ssespan::Nodes::Node::SpanSessInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssespan::Nodes::Node::SpanSessInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssespan::Nodes::Node::SpanSessInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "span-sess-info")
        return true;
    return false;
}

Ssespan::Nodes::Node::SpanSessInfos::SpanSessInfo::SpanSessInfo()
    :
    session_id{YType::int32, "session-id"},
    session_class{YType::int32, "session-class"},
    valid{YType::uint8, "valid"},
    id{YType::uint32, "id"},
    state{YType::uint32, "state"},
    class_{YType::uint32, "class"},
    ifhandle{YType::uint32, "ifhandle"},
    mode{YType::uint32, "mode"},
    ip_type{YType::uint32, "ip-type"},
    vrf_id{YType::uint32, "vrf-id"},
    tos_bit{YType::uint32, "tos-bit"},
    tos_bit_copied{YType::uint32, "tos-bit-copied"},
    ttl{YType::uint32, "ttl"},
    dfbit{YType::uint32, "dfbit"},
    src_ip{YType::uint32, "src-ip"},
    dst_ip{YType::uint32, "dst-ip"},
    sdt_hw_data{YType::uint32, "sdt-hw-data"}
{

    yang_name = "span-sess-info"; yang_parent_name = "span-sess-infos"; is_top_level_class = false; has_list_ancestor = true;
}

Ssespan::Nodes::Node::SpanSessInfos::SpanSessInfo::~SpanSessInfo()
{
}

bool Ssespan::Nodes::Node::SpanSessInfos::SpanSessInfo::has_data() const
{
    for (auto const & leaf : src_ip.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dst_ip.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sdt_hw_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return session_id.is_set
	|| session_class.is_set
	|| valid.is_set
	|| id.is_set
	|| state.is_set
	|| class_.is_set
	|| ifhandle.is_set
	|| mode.is_set
	|| ip_type.is_set
	|| vrf_id.is_set
	|| tos_bit.is_set
	|| tos_bit_copied.is_set
	|| ttl.is_set
	|| dfbit.is_set;
}

bool Ssespan::Nodes::Node::SpanSessInfos::SpanSessInfo::has_operation() const
{
    for (auto const & leaf : src_ip.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : dst_ip.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sdt_hw_data.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(session_class.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(ifhandle.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(ip_type.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(tos_bit.yfilter)
	|| ydk::is_set(tos_bit_copied.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(dfbit.yfilter)
	|| ydk::is_set(src_ip.yfilter)
	|| ydk::is_set(dst_ip.yfilter)
	|| ydk::is_set(sdt_hw_data.yfilter);
}

std::string Ssespan::Nodes::Node::SpanSessInfos::SpanSessInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "span-sess-info" <<"[session-id='" <<session_id <<"']" <<"[session-class='" <<session_class <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssespan::Nodes::Node::SpanSessInfos::SpanSessInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (session_class.is_set || is_set(session_class.yfilter)) leaf_name_data.push_back(session_class.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (ifhandle.is_set || is_set(ifhandle.yfilter)) leaf_name_data.push_back(ifhandle.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (ip_type.is_set || is_set(ip_type.yfilter)) leaf_name_data.push_back(ip_type.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (tos_bit.is_set || is_set(tos_bit.yfilter)) leaf_name_data.push_back(tos_bit.get_name_leafdata());
    if (tos_bit_copied.is_set || is_set(tos_bit_copied.yfilter)) leaf_name_data.push_back(tos_bit_copied.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (dfbit.is_set || is_set(dfbit.yfilter)) leaf_name_data.push_back(dfbit.get_name_leafdata());

    auto src_ip_name_datas = src_ip.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), src_ip_name_datas.begin(), src_ip_name_datas.end());
    auto dst_ip_name_datas = dst_ip.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dst_ip_name_datas.begin(), dst_ip_name_datas.end());
    auto sdt_hw_data_name_datas = sdt_hw_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sdt_hw_data_name_datas.begin(), sdt_hw_data_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Ssespan::Nodes::Node::SpanSessInfos::SpanSessInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssespan::Nodes::Node::SpanSessInfos::SpanSessInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ssespan::Nodes::Node::SpanSessInfos::SpanSessInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-class")
    {
        session_class = value;
        session_class.value_namespace = name_space;
        session_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifhandle")
    {
        ifhandle = value;
        ifhandle.value_namespace = name_space;
        ifhandle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-type")
    {
        ip_type = value;
        ip_type.value_namespace = name_space;
        ip_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-bit")
    {
        tos_bit = value;
        tos_bit.value_namespace = name_space;
        tos_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-bit-copied")
    {
        tos_bit_copied = value;
        tos_bit_copied.value_namespace = name_space;
        tos_bit_copied.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfbit")
    {
        dfbit = value;
        dfbit.value_namespace = name_space;
        dfbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-ip")
    {
        src_ip.append(value);
    }
    if(value_path == "dst-ip")
    {
        dst_ip.append(value);
    }
    if(value_path == "sdt-hw-data")
    {
        sdt_hw_data.append(value);
    }
}

void Ssespan::Nodes::Node::SpanSessInfos::SpanSessInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "session-class")
    {
        session_class.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "ifhandle")
    {
        ifhandle.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "ip-type")
    {
        ip_type.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "tos-bit")
    {
        tos_bit.yfilter = yfilter;
    }
    if(value_path == "tos-bit-copied")
    {
        tos_bit_copied.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "dfbit")
    {
        dfbit.yfilter = yfilter;
    }
    if(value_path == "src-ip")
    {
        src_ip.yfilter = yfilter;
    }
    if(value_path == "dst-ip")
    {
        dst_ip.yfilter = yfilter;
    }
    if(value_path == "sdt-hw-data")
    {
        sdt_hw_data.yfilter = yfilter;
    }
}

bool Ssespan::Nodes::Node::SpanSessInfos::SpanSessInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "session-class" || name == "valid" || name == "id" || name == "state" || name == "class" || name == "ifhandle" || name == "mode" || name == "ip-type" || name == "vrf-id" || name == "tos-bit" || name == "tos-bit-copied" || name == "ttl" || name == "dfbit" || name == "src-ip" || name == "dst-ip" || name == "sdt-hw-data")
        return true;
    return false;
}


}
}

