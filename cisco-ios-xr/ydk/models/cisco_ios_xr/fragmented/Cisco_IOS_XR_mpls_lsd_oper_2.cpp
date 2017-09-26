
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_lsd_oper_2.hpp"
#include "Cisco_IOS_XR_mpls_lsd_oper_3.hpp"
#include "Cisco_IOS_XR_mpls_lsd_oper_5.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_lsd_oper {

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::SrPrefixSegment()
    :
    segment_id{YType::uint32, "segment-id"},
    table_id{YType::uint32, "table-id"}
{

    yang_name = "sr-prefix-segment"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::~SrPrefixSegment()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::has_data() const
{
    return segment_id.is_set
	|| table_id.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment_id.yfilter)
	|| ydk::is_set(table_id.yfilter);
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

    if (segment_id.is_set || is_set(segment_id.yfilter)) leaf_name_data.push_back(segment_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-id" || name == "table-id")
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

std::shared_ptr<Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TeBinding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TeBinding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data::Tev4Data()
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

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data::~Tev4Data()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data::has_data() const
{
    return is_srte.is_set
	|| table_id.is_set
	|| tunnel_dest.is_set
	|| tunnel_id.is_set
	|| tunnel_id_extension.is_set
	|| tunnel_lsp_id.is_set
	|| tunnel_source.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data::has_operation() const
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

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tev4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-srte" || name == "table-id" || name == "tunnel-dest" || name == "tunnel-id" || name == "tunnel-id-extension" || name == "tunnel-lsp-id" || name == "tunnel-source")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::Tev4P2MpData()
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

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::~Tev4P2MpData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::has_data() const
{
    return p2mp_id.is_set
	|| previous_hop.is_set
	|| table_id.is_set
	|| tunnel_id.is_set
	|| tunnel_id_extension.is_set
	|| tunnel_lsp_id.is_set
	|| tunnel_source.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::has_operation() const
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

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tev4p2mp-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-id" || name == "previous-hop" || name == "table-id" || name == "tunnel-id" || name == "tunnel-id-extension" || name == "tunnel-lsp-id" || name == "tunnel-source")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData::TpData()
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

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData::~TpData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData::has_data() const
{
    return dest_global_id.is_set
	|| dest_node_id.is_set
	|| dest_tunnel_id.is_set
	|| lsp_id.is_set
	|| source_global_id.is_set
	|| source_node_id.is_set
	|| source_tunnel_id.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData::has_operation() const
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

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-global-id" || name == "dest-node-id" || name == "dest-tunnel-id" || name == "lsp-id" || name == "source-global-id" || name == "source-node-id" || name == "source-tunnel-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::VrfL3VpnData()
    :
    security_id{YType::uint32, "security-id"},
    table_id{YType::uint32, "table-id"}
{

    yang_name = "vrf-l3vpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::~VrfL3VpnData()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::has_data() const
{
    return security_id.is_set
	|| table_id.is_set;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(security_id.yfilter)
	|| ydk::is_set(table_id.yfilter);
}

std::string MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security-id" || name == "table-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::LocalLabelRewrite()
    :
    label_data{YType::uint32, "label-data"}
{

    yang_name = "local-label-rewrite"; yang_parent_name = "rewrite-id"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::~LocalLabelRewrite()
{
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::has_data() const
{
    for (auto const & leaf : label_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::has_operation() const
{
    for (auto const & leaf : label_data.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_data.yfilter);
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


    auto label_data_name_datas = label_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_data_name_datas.begin(), label_data_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-data")
    {
        label_data.append(value);
    }
}

void MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-data")
    {
        label_data.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-data")
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

std::shared_ptr<Entity> MplsLsd::Rewrite::RewritePws::RewritePw::V4Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::V4Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> MplsLsd::Rewrite::RewritePws::RewritePw::V6Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewritePws::RewritePw::V6Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

MplsLsd::Rewrite::RewriteTes::RewriteTes()
{

    yang_name = "rewrite-tes"; yang_parent_name = "rewrite"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLsd::Rewrite::RewriteTes::~RewriteTes()
{
}

bool MplsLsd::Rewrite::RewriteTes::has_data() const
{
    for (std::size_t index=0; index<rewrite_te.size(); index++)
    {
        if(rewrite_te[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsd::Rewrite::RewriteTes::has_operation() const
{
    for (std::size_t index=0; index<rewrite_te.size(); index++)
    {
        if(rewrite_te[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteTes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-tes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rewrite-te")
    {
        for(auto const & c : rewrite_te)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe>();
        c->parent = this;
        rewrite_te.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rewrite_te)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsd::Rewrite::RewriteTes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewriteTes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewriteTes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rewrite-te")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteTe()
    :
    interface_name{YType::str, "interface-name"},
    bcdl_priority{YType::uint8, "bcdl-priority"},
    lsd_queue{YType::uint8, "lsd-queue"},
    priority_updated{YType::int32, "priority-updated"},
    rewrite_version{YType::uint64, "rewrite-version"},
    rw_install_age{YType::uint64, "rw-install-age"},
    rw_install_time{YType::uint64, "rw-install-time"},
    rw_updated{YType::int32, "rw-updated"}
    	,
    fpi_key(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey>())
	,rewrite_id(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId>())
{
    fpi_key->parent = this;
    rewrite_id->parent = this;

    yang_name = "rewrite-te"; yang_parent_name = "rewrite-tes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::~RewriteTe()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::has_data() const
{
    for (std::size_t index=0; index<associated_fpi.size(); index++)
    {
        if(associated_fpi[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mois.size(); index++)
    {
        if(mois[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<v4_rpf.size(); index++)
    {
        if(v4_rpf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<v6_rpf.size(); index++)
    {
        if(v6_rpf[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| bcdl_priority.is_set
	|| lsd_queue.is_set
	|| priority_updated.is_set
	|| rewrite_version.is_set
	|| rw_install_age.is_set
	|| rw_install_time.is_set
	|| rw_updated.is_set
	|| (fpi_key !=  nullptr && fpi_key->has_data())
	|| (rewrite_id !=  nullptr && rewrite_id->has_data());
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::has_operation() const
{
    for (std::size_t index=0; index<associated_fpi.size(); index++)
    {
        if(associated_fpi[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mois.size(); index++)
    {
        if(mois[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<v4_rpf.size(); index++)
    {
        if(v4_rpf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<v6_rpf.size(); index++)
    {
        if(v6_rpf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bcdl_priority.yfilter)
	|| ydk::is_set(lsd_queue.yfilter)
	|| ydk::is_set(priority_updated.yfilter)
	|| ydk::is_set(rewrite_version.yfilter)
	|| ydk::is_set(rw_install_age.yfilter)
	|| ydk::is_set(rw_install_time.yfilter)
	|| ydk::is_set(rw_updated.yfilter)
	|| (fpi_key !=  nullptr && fpi_key->has_operation())
	|| (rewrite_id !=  nullptr && rewrite_id->has_operation());
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite/rewrite-tes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-te" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bcdl_priority.is_set || is_set(bcdl_priority.yfilter)) leaf_name_data.push_back(bcdl_priority.get_name_leafdata());
    if (lsd_queue.is_set || is_set(lsd_queue.yfilter)) leaf_name_data.push_back(lsd_queue.get_name_leafdata());
    if (priority_updated.is_set || is_set(priority_updated.yfilter)) leaf_name_data.push_back(priority_updated.get_name_leafdata());
    if (rewrite_version.is_set || is_set(rewrite_version.yfilter)) leaf_name_data.push_back(rewrite_version.get_name_leafdata());
    if (rw_install_age.is_set || is_set(rw_install_age.yfilter)) leaf_name_data.push_back(rw_install_age.get_name_leafdata());
    if (rw_install_time.is_set || is_set(rw_install_time.yfilter)) leaf_name_data.push_back(rw_install_time.get_name_leafdata());
    if (rw_updated.is_set || is_set(rw_updated.yfilter)) leaf_name_data.push_back(rw_updated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "associated-fpi")
    {
        for(auto const & c : associated_fpi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi>();
        c->parent = this;
        associated_fpi.push_back(c);
        return c;
    }

    if(child_yang_name == "fpi-key")
    {
        if(fpi_key == nullptr)
        {
            fpi_key = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey>();
        }
        return fpi_key;
    }

    if(child_yang_name == "mois")
    {
        for(auto const & c : mois)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois>();
        c->parent = this;
        mois.push_back(c);
        return c;
    }

    if(child_yang_name == "rewrite-id")
    {
        if(rewrite_id == nullptr)
        {
            rewrite_id = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId>();
        }
        return rewrite_id;
    }

    if(child_yang_name == "v4-rpf")
    {
        for(auto const & c : v4_rpf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::V4Rpf>();
        c->parent = this;
        v4_rpf.push_back(c);
        return c;
    }

    if(child_yang_name == "v6-rpf")
    {
        for(auto const & c : v6_rpf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::V6Rpf>();
        c->parent = this;
        v6_rpf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : associated_fpi)
    {
        children[c->get_segment_path()] = c;
    }

    if(fpi_key != nullptr)
    {
        children["fpi-key"] = fpi_key;
    }

    for (auto const & c : mois)
    {
        children[c->get_segment_path()] = c;
    }

    if(rewrite_id != nullptr)
    {
        children["rewrite-id"] = rewrite_id;
    }

    for (auto const & c : v4_rpf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : v6_rpf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "priority-updated")
    {
        priority_updated = value;
        priority_updated.value_namespace = name_space;
        priority_updated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rewrite-version")
    {
        rewrite_version = value;
        rewrite_version.value_namespace = name_space;
        rewrite_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rw-install-age")
    {
        rw_install_age = value;
        rw_install_age.value_namespace = name_space;
        rw_install_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rw-install-time")
    {
        rw_install_time = value;
        rw_install_time.value_namespace = name_space;
        rw_install_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rw-updated")
    {
        rw_updated = value;
        rw_updated.value_namespace = name_space;
        rw_updated.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bcdl-priority")
    {
        bcdl_priority.yfilter = yfilter;
    }
    if(value_path == "lsd-queue")
    {
        lsd_queue.yfilter = yfilter;
    }
    if(value_path == "priority-updated")
    {
        priority_updated.yfilter = yfilter;
    }
    if(value_path == "rewrite-version")
    {
        rewrite_version.yfilter = yfilter;
    }
    if(value_path == "rw-install-age")
    {
        rw_install_age.yfilter = yfilter;
    }
    if(value_path == "rw-install-time")
    {
        rw_install_time.yfilter = yfilter;
    }
    if(value_path == "rw-updated")
    {
        rw_updated.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "associated-fpi" || name == "fpi-key" || name == "mois" || name == "rewrite-id" || name == "v4-rpf" || name == "v6-rpf" || name == "interface-name" || name == "bcdl-priority" || name == "lsd-queue" || name == "priority-updated" || name == "rewrite-version" || name == "rw-install-age" || name == "rw-install-time" || name == "rw-updated")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::AssociatedFpi()
    :
    fpi(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi>())
{
    fpi->parent = this;

    yang_name = "associated-fpi"; yang_parent_name = "rewrite-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::~AssociatedFpi()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::has_data() const
{
    for (std::size_t index=0; index<application_owner.size(); index++)
    {
        if(application_owner[index]->has_data())
            return true;
    }
    return (fpi !=  nullptr && fpi->has_data());
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::has_operation() const
{
    for (std::size_t index=0; index<application_owner.size(); index++)
    {
        if(application_owner[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (fpi !=  nullptr && fpi->has_operation());
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "associated-fpi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-owner")
    {
        for(auto const & c : application_owner)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner>();
        c->parent = this;
        application_owner.push_back(c);
        return c;
    }

    if(child_yang_name == "fpi")
    {
        if(fpi == nullptr)
        {
            fpi = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi>();
        }
        return fpi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : application_owner)
    {
        children[c->get_segment_path()] = c;
    }

    if(fpi != nullptr)
    {
        children["fpi"] = fpi;
    }

    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-owner" || name == "fpi")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner::ApplicationOwner()
    :
    application_instance{YType::str, "application-instance"},
    application_name{YType::str, "application-name"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_type{YType::enumeration, "application-type"},
    resource_state{YType::enumeration, "resource-state"}
{

    yang_name = "application-owner"; yang_parent_name = "associated-fpi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner::~ApplicationOwner()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner::has_data() const
{
    return application_instance.is_set
	|| application_name.is_set
	|| application_role_primary.is_set
	|| application_type.is_set
	|| resource_state.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_instance.yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| ydk::is_set(application_role_primary.yfilter)
	|| ydk::is_set(application_type.yfilter)
	|| ydk::is_set(resource_state.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-owner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_instance.is_set || is_set(application_instance.yfilter)) leaf_name_data.push_back(application_instance.get_name_leafdata());
    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (application_role_primary.is_set || is_set(application_role_primary.yfilter)) leaf_name_data.push_back(application_role_primary.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (resource_state.is_set || is_set(resource_state.yfilter)) leaf_name_data.push_back(resource_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-instance")
    {
        application_instance = value;
        application_instance.value_namespace = name_space;
        application_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary = value;
        application_role_primary.value_namespace = name_space;
        application_role_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-type")
    {
        application_type = value;
        application_type.value_namespace = name_space;
        application_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-state")
    {
        resource_state = value;
        resource_state.value_namespace = name_space;
        resource_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-instance")
    {
        application_instance.yfilter = yfilter;
    }
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary.yfilter = yfilter;
    }
    if(value_path == "application-type")
    {
        application_type.yfilter = yfilter;
    }
    if(value_path == "resource-state")
    {
        resource_state.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-instance" || name == "application-name" || name == "application-role-primary" || name == "application-type" || name == "resource-state")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Fpi()
    :
    fpi_type{YType::enumeration, "fpi-type"}
    	,
    dmtc_ext_intf_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData>())
	,ipv4_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data>())
	,ipv6_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data>())
	,label_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData>())
	,pw_list_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData>())
	,te_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData>())
{
    dmtc_ext_intf_data->parent = this;
    ipv4_data->parent = this;
    ipv6_data->parent = this;
    label_data->parent = this;
    pw_list_data->parent = this;
    te_data->parent = this;

    yang_name = "fpi"; yang_parent_name = "associated-fpi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::~Fpi()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::has_data() const
{
    return fpi_type.is_set
	|| (dmtc_ext_intf_data !=  nullptr && dmtc_ext_intf_data->has_data())
	|| (ipv4_data !=  nullptr && ipv4_data->has_data())
	|| (ipv6_data !=  nullptr && ipv6_data->has_data())
	|| (label_data !=  nullptr && label_data->has_data())
	|| (pw_list_data !=  nullptr && pw_list_data->has_data())
	|| (te_data !=  nullptr && te_data->has_data());
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fpi_type.yfilter)
	|| (dmtc_ext_intf_data !=  nullptr && dmtc_ext_intf_data->has_operation())
	|| (ipv4_data !=  nullptr && ipv4_data->has_operation())
	|| (ipv6_data !=  nullptr && ipv6_data->has_operation())
	|| (label_data !=  nullptr && label_data->has_operation())
	|| (pw_list_data !=  nullptr && pw_list_data->has_operation())
	|| (te_data !=  nullptr && te_data->has_operation());
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fpi_type.is_set || is_set(fpi_type.yfilter)) leaf_name_data.push_back(fpi_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dmtc-ext-intf-data")
    {
        if(dmtc_ext_intf_data == nullptr)
        {
            dmtc_ext_intf_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData>();
        }
        return dmtc_ext_intf_data;
    }

    if(child_yang_name == "ipv4-data")
    {
        if(ipv4_data == nullptr)
        {
            ipv4_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data>();
        }
        return ipv4_data;
    }

    if(child_yang_name == "ipv6-data")
    {
        if(ipv6_data == nullptr)
        {
            ipv6_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data>();
        }
        return ipv6_data;
    }

    if(child_yang_name == "label-data")
    {
        if(label_data == nullptr)
        {
            label_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData>();
        }
        return label_data;
    }

    if(child_yang_name == "pw-list-data")
    {
        if(pw_list_data == nullptr)
        {
            pw_list_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData>();
        }
        return pw_list_data;
    }

    if(child_yang_name == "te-data")
    {
        if(te_data == nullptr)
        {
            te_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData>();
        }
        return te_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dmtc_ext_intf_data != nullptr)
    {
        children["dmtc-ext-intf-data"] = dmtc_ext_intf_data;
    }

    if(ipv4_data != nullptr)
    {
        children["ipv4-data"] = ipv4_data;
    }

    if(ipv6_data != nullptr)
    {
        children["ipv6-data"] = ipv6_data;
    }

    if(label_data != nullptr)
    {
        children["label-data"] = label_data;
    }

    if(pw_list_data != nullptr)
    {
        children["pw-list-data"] = pw_list_data;
    }

    if(te_data != nullptr)
    {
        children["te-data"] = te_data;
    }

    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fpi-type")
    {
        fpi_type = value;
        fpi_type.value_namespace = name_space;
        fpi_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fpi-type")
    {
        fpi_type.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dmtc-ext-intf-data" || name == "ipv4-data" || name == "ipv6-data" || name == "label-data" || name == "pw-list-data" || name == "te-data" || name == "fpi-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData::DmtcExtIntfData()
    :
    dmtc_ext_ifh{YType::str, "dmtc-ext-ifh"}
{

    yang_name = "dmtc-ext-intf-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData::~DmtcExtIntfData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData::has_data() const
{
    return dmtc_ext_ifh.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dmtc_ext_ifh.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dmtc-ext-intf-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dmtc_ext_ifh.is_set || is_set(dmtc_ext_ifh.yfilter)) leaf_name_data.push_back(dmtc_ext_ifh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dmtc-ext-ifh")
    {
        dmtc_ext_ifh = value;
        dmtc_ext_ifh.value_namespace = name_space;
        dmtc_ext_ifh.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dmtc-ext-ifh")
    {
        dmtc_ext_ifh.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dmtc-ext-ifh")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data::Ipv4Data()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    sr_local_label{YType::uint32, "sr-local-label"},
    table_id{YType::uint32, "table-id"},
    version{YType::uint32, "version"}
{

    yang_name = "ipv4-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data::~Ipv4Data()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| sr_local_label.is_set
	|| table_id.is_set
	|| version.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(sr_local_label.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (sr_local_label.is_set || is_set(sr_local_label.yfilter)) leaf_name_data.push_back(sr_local_label.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "sr-local-label")
    {
        sr_local_label = value;
        sr_local_label.value_namespace = name_space;
        sr_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "sr-local-label")
    {
        sr_local_label.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "sr-local-label" || name == "table-id" || name == "version")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data::Ipv6Data()
    :
    prefix{YType::str, "prefix"},
    prefix_len{YType::uint8, "prefix-len"},
    router_flags{YType::uint32, "router-flags"},
    table_id{YType::uint32, "table-id"},
    version{YType::uint32, "version"}
{

    yang_name = "ipv6-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data::~Ipv6Data()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data::has_data() const
{
    return prefix.is_set
	|| prefix_len.is_set
	|| router_flags.is_set
	|| table_id.is_set
	|| version.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(router_flags.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (router_flags.is_set || is_set(router_flags.yfilter)) leaf_name_data.push_back(router_flags.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-flags")
    {
        router_flags = value;
        router_flags.value_namespace = name_space;
        router_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "router-flags")
    {
        router_flags.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-len" || name == "router-flags" || name == "table-id" || name == "version")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData::LabelData()
    :
    elc{YType::int32, "elc"},
    label{YType::uint32, "label"},
    security_id{YType::uint32, "security-id"}
{

    yang_name = "label-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData::~LabelData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData::has_data() const
{
    return elc.is_set
	|| label.is_set
	|| security_id.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(elc.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(security_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (elc.is_set || is_set(elc.yfilter)) leaf_name_data.push_back(elc.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "elc")
    {
        elc = value;
        elc.value_namespace = name_space;
        elc.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "elc")
    {
        elc.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "security-id")
    {
        security_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "elc" || name == "label" || name == "security-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData::PwListData()
    :
    pwhe_list_id{YType::uint16, "pwhe-list-id"}
{

    yang_name = "pw-list-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData::~PwListData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData::has_data() const
{
    return pwhe_list_id.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pwhe_list_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-list-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pwhe_list_id.is_set || is_set(pwhe_list_id.yfilter)) leaf_name_data.push_back(pwhe_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pwhe-list-id")
    {
        pwhe_list_id = value;
        pwhe_list_id.value_namespace = name_space;
        pwhe_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pwhe-list-id")
    {
        pwhe_list_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pwhe-list-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData::TeData()
    :
    local_label{YType::uint32, "local-label"},
    tunnel_interface{YType::str, "tunnel-interface"}
{

    yang_name = "te-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData::~TeData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData::has_data() const
{
    return local_label.is_set
	|| tunnel_interface.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-label" || name == "tunnel-interface")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::FpiKey()
    :
    fpi(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi>())
{
    fpi->parent = this;

    yang_name = "fpi-key"; yang_parent_name = "rewrite-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::~FpiKey()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::has_data() const
{
    for (std::size_t index=0; index<application_owner.size(); index++)
    {
        if(application_owner[index]->has_data())
            return true;
    }
    return (fpi !=  nullptr && fpi->has_data());
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::has_operation() const
{
    for (std::size_t index=0; index<application_owner.size(); index++)
    {
        if(application_owner[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (fpi !=  nullptr && fpi->has_operation());
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpi-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-owner")
    {
        for(auto const & c : application_owner)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner>();
        c->parent = this;
        application_owner.push_back(c);
        return c;
    }

    if(child_yang_name == "fpi")
    {
        if(fpi == nullptr)
        {
            fpi = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi>();
        }
        return fpi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : application_owner)
    {
        children[c->get_segment_path()] = c;
    }

    if(fpi != nullptr)
    {
        children["fpi"] = fpi;
    }

    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-owner" || name == "fpi")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner::ApplicationOwner()
    :
    application_instance{YType::str, "application-instance"},
    application_name{YType::str, "application-name"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_type{YType::enumeration, "application-type"},
    resource_state{YType::enumeration, "resource-state"}
{

    yang_name = "application-owner"; yang_parent_name = "fpi-key"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner::~ApplicationOwner()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner::has_data() const
{
    return application_instance.is_set
	|| application_name.is_set
	|| application_role_primary.is_set
	|| application_type.is_set
	|| resource_state.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_instance.yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| ydk::is_set(application_role_primary.yfilter)
	|| ydk::is_set(application_type.yfilter)
	|| ydk::is_set(resource_state.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-owner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_instance.is_set || is_set(application_instance.yfilter)) leaf_name_data.push_back(application_instance.get_name_leafdata());
    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (application_role_primary.is_set || is_set(application_role_primary.yfilter)) leaf_name_data.push_back(application_role_primary.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (resource_state.is_set || is_set(resource_state.yfilter)) leaf_name_data.push_back(resource_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-instance")
    {
        application_instance = value;
        application_instance.value_namespace = name_space;
        application_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary = value;
        application_role_primary.value_namespace = name_space;
        application_role_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-type")
    {
        application_type = value;
        application_type.value_namespace = name_space;
        application_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-state")
    {
        resource_state = value;
        resource_state.value_namespace = name_space;
        resource_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-instance")
    {
        application_instance.yfilter = yfilter;
    }
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary.yfilter = yfilter;
    }
    if(value_path == "application-type")
    {
        application_type.yfilter = yfilter;
    }
    if(value_path == "resource-state")
    {
        resource_state.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-instance" || name == "application-name" || name == "application-role-primary" || name == "application-type" || name == "resource-state")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Fpi()
    :
    fpi_type{YType::enumeration, "fpi-type"}
    	,
    dmtc_ext_intf_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData>())
	,ipv4_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data>())
	,ipv6_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data>())
	,label_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData>())
	,pw_list_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData>())
	,te_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData>())
{
    dmtc_ext_intf_data->parent = this;
    ipv4_data->parent = this;
    ipv6_data->parent = this;
    label_data->parent = this;
    pw_list_data->parent = this;
    te_data->parent = this;

    yang_name = "fpi"; yang_parent_name = "fpi-key"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::~Fpi()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::has_data() const
{
    return fpi_type.is_set
	|| (dmtc_ext_intf_data !=  nullptr && dmtc_ext_intf_data->has_data())
	|| (ipv4_data !=  nullptr && ipv4_data->has_data())
	|| (ipv6_data !=  nullptr && ipv6_data->has_data())
	|| (label_data !=  nullptr && label_data->has_data())
	|| (pw_list_data !=  nullptr && pw_list_data->has_data())
	|| (te_data !=  nullptr && te_data->has_data());
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fpi_type.yfilter)
	|| (dmtc_ext_intf_data !=  nullptr && dmtc_ext_intf_data->has_operation())
	|| (ipv4_data !=  nullptr && ipv4_data->has_operation())
	|| (ipv6_data !=  nullptr && ipv6_data->has_operation())
	|| (label_data !=  nullptr && label_data->has_operation())
	|| (pw_list_data !=  nullptr && pw_list_data->has_operation())
	|| (te_data !=  nullptr && te_data->has_operation());
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fpi_type.is_set || is_set(fpi_type.yfilter)) leaf_name_data.push_back(fpi_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dmtc-ext-intf-data")
    {
        if(dmtc_ext_intf_data == nullptr)
        {
            dmtc_ext_intf_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData>();
        }
        return dmtc_ext_intf_data;
    }

    if(child_yang_name == "ipv4-data")
    {
        if(ipv4_data == nullptr)
        {
            ipv4_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data>();
        }
        return ipv4_data;
    }

    if(child_yang_name == "ipv6-data")
    {
        if(ipv6_data == nullptr)
        {
            ipv6_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data>();
        }
        return ipv6_data;
    }

    if(child_yang_name == "label-data")
    {
        if(label_data == nullptr)
        {
            label_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData>();
        }
        return label_data;
    }

    if(child_yang_name == "pw-list-data")
    {
        if(pw_list_data == nullptr)
        {
            pw_list_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData>();
        }
        return pw_list_data;
    }

    if(child_yang_name == "te-data")
    {
        if(te_data == nullptr)
        {
            te_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData>();
        }
        return te_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dmtc_ext_intf_data != nullptr)
    {
        children["dmtc-ext-intf-data"] = dmtc_ext_intf_data;
    }

    if(ipv4_data != nullptr)
    {
        children["ipv4-data"] = ipv4_data;
    }

    if(ipv6_data != nullptr)
    {
        children["ipv6-data"] = ipv6_data;
    }

    if(label_data != nullptr)
    {
        children["label-data"] = label_data;
    }

    if(pw_list_data != nullptr)
    {
        children["pw-list-data"] = pw_list_data;
    }

    if(te_data != nullptr)
    {
        children["te-data"] = te_data;
    }

    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fpi-type")
    {
        fpi_type = value;
        fpi_type.value_namespace = name_space;
        fpi_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fpi-type")
    {
        fpi_type.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dmtc-ext-intf-data" || name == "ipv4-data" || name == "ipv6-data" || name == "label-data" || name == "pw-list-data" || name == "te-data" || name == "fpi-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData::DmtcExtIntfData()
    :
    dmtc_ext_ifh{YType::str, "dmtc-ext-ifh"}
{

    yang_name = "dmtc-ext-intf-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData::~DmtcExtIntfData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData::has_data() const
{
    return dmtc_ext_ifh.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dmtc_ext_ifh.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dmtc-ext-intf-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dmtc_ext_ifh.is_set || is_set(dmtc_ext_ifh.yfilter)) leaf_name_data.push_back(dmtc_ext_ifh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dmtc-ext-ifh")
    {
        dmtc_ext_ifh = value;
        dmtc_ext_ifh.value_namespace = name_space;
        dmtc_ext_ifh.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dmtc-ext-ifh")
    {
        dmtc_ext_ifh.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dmtc-ext-ifh")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data::Ipv4Data()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    sr_local_label{YType::uint32, "sr-local-label"},
    table_id{YType::uint32, "table-id"},
    version{YType::uint32, "version"}
{

    yang_name = "ipv4-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data::~Ipv4Data()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| sr_local_label.is_set
	|| table_id.is_set
	|| version.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(sr_local_label.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (sr_local_label.is_set || is_set(sr_local_label.yfilter)) leaf_name_data.push_back(sr_local_label.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "sr-local-label")
    {
        sr_local_label = value;
        sr_local_label.value_namespace = name_space;
        sr_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "sr-local-label")
    {
        sr_local_label.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "sr-local-label" || name == "table-id" || name == "version")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data::Ipv6Data()
    :
    prefix{YType::str, "prefix"},
    prefix_len{YType::uint8, "prefix-len"},
    router_flags{YType::uint32, "router-flags"},
    table_id{YType::uint32, "table-id"},
    version{YType::uint32, "version"}
{

    yang_name = "ipv6-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data::~Ipv6Data()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data::has_data() const
{
    return prefix.is_set
	|| prefix_len.is_set
	|| router_flags.is_set
	|| table_id.is_set
	|| version.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(router_flags.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (router_flags.is_set || is_set(router_flags.yfilter)) leaf_name_data.push_back(router_flags.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-flags")
    {
        router_flags = value;
        router_flags.value_namespace = name_space;
        router_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "router-flags")
    {
        router_flags.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-len" || name == "router-flags" || name == "table-id" || name == "version")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData::LabelData()
    :
    elc{YType::int32, "elc"},
    label{YType::uint32, "label"},
    security_id{YType::uint32, "security-id"}
{

    yang_name = "label-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData::~LabelData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData::has_data() const
{
    return elc.is_set
	|| label.is_set
	|| security_id.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(elc.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(security_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (elc.is_set || is_set(elc.yfilter)) leaf_name_data.push_back(elc.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "elc")
    {
        elc = value;
        elc.value_namespace = name_space;
        elc.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "elc")
    {
        elc.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "security-id")
    {
        security_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "elc" || name == "label" || name == "security-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData::PwListData()
    :
    pwhe_list_id{YType::uint16, "pwhe-list-id"}
{

    yang_name = "pw-list-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData::~PwListData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData::has_data() const
{
    return pwhe_list_id.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pwhe_list_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-list-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pwhe_list_id.is_set || is_set(pwhe_list_id.yfilter)) leaf_name_data.push_back(pwhe_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pwhe-list-id")
    {
        pwhe_list_id = value;
        pwhe_list_id.value_namespace = name_space;
        pwhe_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pwhe-list-id")
    {
        pwhe_list_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pwhe-list-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData::TeData()
    :
    local_label{YType::uint32, "local-label"},
    tunnel_interface{YType::str, "tunnel-interface"}
{

    yang_name = "te-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData::~TeData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData::has_data() const
{
    return local_label.is_set
	|| tunnel_interface.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-label" || name == "tunnel-interface")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::Mois()
    :
    application_resource(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource>())
{
    application_resource->parent = this;

    yang_name = "mois"; yang_parent_name = "rewrite-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::~Mois()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::has_data() const
{
    for (std::size_t index=0; index<moi_array.size(); index++)
    {
        if(moi_array[index]->has_data())
            return true;
    }
    return (application_resource !=  nullptr && application_resource->has_data());
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::has_operation() const
{
    for (std::size_t index=0; index<moi_array.size(); index++)
    {
        if(moi_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (application_resource !=  nullptr && application_resource->has_operation());
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mois";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-resource")
    {
        if(application_resource == nullptr)
        {
            application_resource = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource>();
        }
        return application_resource;
    }

    if(child_yang_name == "moi-array")
    {
        for(auto const & c : moi_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray>();
        c->parent = this;
        moi_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application_resource != nullptr)
    {
        children["application-resource"] = application_resource;
    }

    for (auto const & c : moi_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-resource" || name == "moi-array")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource::ApplicationResource()
    :
    application_instance{YType::str, "application-instance"},
    application_name{YType::str, "application-name"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_type{YType::enumeration, "application-type"},
    resource_state{YType::enumeration, "resource-state"}
{

    yang_name = "application-resource"; yang_parent_name = "mois"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource::~ApplicationResource()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource::has_data() const
{
    return application_instance.is_set
	|| application_name.is_set
	|| application_role_primary.is_set
	|| application_type.is_set
	|| resource_state.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_instance.yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| ydk::is_set(application_role_primary.yfilter)
	|| ydk::is_set(application_type.yfilter)
	|| ydk::is_set(resource_state.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-resource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_instance.is_set || is_set(application_instance.yfilter)) leaf_name_data.push_back(application_instance.get_name_leafdata());
    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (application_role_primary.is_set || is_set(application_role_primary.yfilter)) leaf_name_data.push_back(application_role_primary.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (resource_state.is_set || is_set(resource_state.yfilter)) leaf_name_data.push_back(resource_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-instance")
    {
        application_instance = value;
        application_instance.value_namespace = name_space;
        application_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary = value;
        application_role_primary.value_namespace = name_space;
        application_role_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-type")
    {
        application_type = value;
        application_type.value_namespace = name_space;
        application_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-state")
    {
        resource_state = value;
        resource_state.value_namespace = name_space;
        resource_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-instance")
    {
        application_instance.yfilter = yfilter;
    }
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary.yfilter = yfilter;
    }
    if(value_path == "application-type")
    {
        application_type.yfilter = yfilter;
    }
    if(value_path == "resource-state")
    {
        resource_state.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-instance" || name == "application-name" || name == "application-role-primary" || name == "application-type" || name == "resource-state")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::MoiArray()
    :
    moi(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi>())
{
    moi->parent = this;

    yang_name = "moi-array"; yang_parent_name = "mois"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::~MoiArray()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::has_data() const
{
    return (moi !=  nullptr && moi->has_data());
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::has_operation() const
{
    return is_set(yfilter)
	|| (moi !=  nullptr && moi->has_operation());
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "moi-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "moi")
    {
        if(moi == nullptr)
        {
            moi = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi>();
        }
        return moi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(moi != nullptr)
    {
        children["moi"] = moi;
    }

    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "moi")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Moi()
    :
    moi_type{YType::enumeration, "moi-type"}
    	,
    dmtc_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData>())
	,ip_sub_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData>())
	,ipv4_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data>())
	,ipv6_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data>())
	,pop_and_lookup_ipv4(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4>())
	,pop_and_lookup_ipv6(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6>())
	,pop_and_lookup_tp(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp>())
	,pseudowire_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData>())
	,pseudowire_head_end_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData>())
	,pw_list_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData>())
	,stackv4_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data>())
	,stackv6_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data>())
	,te_head_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData>())
	,tev4_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data>())
{
    dmtc_data->parent = this;
    ip_sub_data->parent = this;
    ipv4_data->parent = this;
    ipv6_data->parent = this;
    pop_and_lookup_ipv4->parent = this;
    pop_and_lookup_ipv6->parent = this;
    pop_and_lookup_tp->parent = this;
    pseudowire_data->parent = this;
    pseudowire_head_end_data->parent = this;
    pw_list_data->parent = this;
    stackv4_data->parent = this;
    stackv6_data->parent = this;
    te_head_data->parent = this;
    tev4_data->parent = this;

    yang_name = "moi"; yang_parent_name = "moi-array"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::~Moi()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::has_data() const
{
    return moi_type.is_set
	|| (dmtc_data !=  nullptr && dmtc_data->has_data())
	|| (ip_sub_data !=  nullptr && ip_sub_data->has_data())
	|| (ipv4_data !=  nullptr && ipv4_data->has_data())
	|| (ipv6_data !=  nullptr && ipv6_data->has_data())
	|| (pop_and_lookup_ipv4 !=  nullptr && pop_and_lookup_ipv4->has_data())
	|| (pop_and_lookup_ipv6 !=  nullptr && pop_and_lookup_ipv6->has_data())
	|| (pop_and_lookup_tp !=  nullptr && pop_and_lookup_tp->has_data())
	|| (pseudowire_data !=  nullptr && pseudowire_data->has_data())
	|| (pseudowire_head_end_data !=  nullptr && pseudowire_head_end_data->has_data())
	|| (pw_list_data !=  nullptr && pw_list_data->has_data())
	|| (stackv4_data !=  nullptr && stackv4_data->has_data())
	|| (stackv6_data !=  nullptr && stackv6_data->has_data())
	|| (te_head_data !=  nullptr && te_head_data->has_data())
	|| (tev4_data !=  nullptr && tev4_data->has_data());
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(moi_type.yfilter)
	|| (dmtc_data !=  nullptr && dmtc_data->has_operation())
	|| (ip_sub_data !=  nullptr && ip_sub_data->has_operation())
	|| (ipv4_data !=  nullptr && ipv4_data->has_operation())
	|| (ipv6_data !=  nullptr && ipv6_data->has_operation())
	|| (pop_and_lookup_ipv4 !=  nullptr && pop_and_lookup_ipv4->has_operation())
	|| (pop_and_lookup_ipv6 !=  nullptr && pop_and_lookup_ipv6->has_operation())
	|| (pop_and_lookup_tp !=  nullptr && pop_and_lookup_tp->has_operation())
	|| (pseudowire_data !=  nullptr && pseudowire_data->has_operation())
	|| (pseudowire_head_end_data !=  nullptr && pseudowire_head_end_data->has_operation())
	|| (pw_list_data !=  nullptr && pw_list_data->has_operation())
	|| (stackv4_data !=  nullptr && stackv4_data->has_operation())
	|| (stackv6_data !=  nullptr && stackv6_data->has_operation())
	|| (te_head_data !=  nullptr && te_head_data->has_operation())
	|| (tev4_data !=  nullptr && tev4_data->has_operation());
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "moi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (moi_type.is_set || is_set(moi_type.yfilter)) leaf_name_data.push_back(moi_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dmtc-data")
    {
        if(dmtc_data == nullptr)
        {
            dmtc_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData>();
        }
        return dmtc_data;
    }

    if(child_yang_name == "ip-sub-data")
    {
        if(ip_sub_data == nullptr)
        {
            ip_sub_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData>();
        }
        return ip_sub_data;
    }

    if(child_yang_name == "ipv4-data")
    {
        if(ipv4_data == nullptr)
        {
            ipv4_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data>();
        }
        return ipv4_data;
    }

    if(child_yang_name == "ipv6-data")
    {
        if(ipv6_data == nullptr)
        {
            ipv6_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data>();
        }
        return ipv6_data;
    }

    if(child_yang_name == "pop-and-lookup-ipv4")
    {
        if(pop_and_lookup_ipv4 == nullptr)
        {
            pop_and_lookup_ipv4 = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4>();
        }
        return pop_and_lookup_ipv4;
    }

    if(child_yang_name == "pop-and-lookup-ipv6")
    {
        if(pop_and_lookup_ipv6 == nullptr)
        {
            pop_and_lookup_ipv6 = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6>();
        }
        return pop_and_lookup_ipv6;
    }

    if(child_yang_name == "pop-and-lookup-tp")
    {
        if(pop_and_lookup_tp == nullptr)
        {
            pop_and_lookup_tp = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp>();
        }
        return pop_and_lookup_tp;
    }

    if(child_yang_name == "pseudowire-data")
    {
        if(pseudowire_data == nullptr)
        {
            pseudowire_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData>();
        }
        return pseudowire_data;
    }

    if(child_yang_name == "pseudowire-head-end-data")
    {
        if(pseudowire_head_end_data == nullptr)
        {
            pseudowire_head_end_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData>();
        }
        return pseudowire_head_end_data;
    }

    if(child_yang_name == "pw-list-data")
    {
        if(pw_list_data == nullptr)
        {
            pw_list_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData>();
        }
        return pw_list_data;
    }

    if(child_yang_name == "stackv4-data")
    {
        if(stackv4_data == nullptr)
        {
            stackv4_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data>();
        }
        return stackv4_data;
    }

    if(child_yang_name == "stackv6-data")
    {
        if(stackv6_data == nullptr)
        {
            stackv6_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data>();
        }
        return stackv6_data;
    }

    if(child_yang_name == "te-head-data")
    {
        if(te_head_data == nullptr)
        {
            te_head_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData>();
        }
        return te_head_data;
    }

    if(child_yang_name == "tev4-data")
    {
        if(tev4_data == nullptr)
        {
            tev4_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data>();
        }
        return tev4_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dmtc_data != nullptr)
    {
        children["dmtc-data"] = dmtc_data;
    }

    if(ip_sub_data != nullptr)
    {
        children["ip-sub-data"] = ip_sub_data;
    }

    if(ipv4_data != nullptr)
    {
        children["ipv4-data"] = ipv4_data;
    }

    if(ipv6_data != nullptr)
    {
        children["ipv6-data"] = ipv6_data;
    }

    if(pop_and_lookup_ipv4 != nullptr)
    {
        children["pop-and-lookup-ipv4"] = pop_and_lookup_ipv4;
    }

    if(pop_and_lookup_ipv6 != nullptr)
    {
        children["pop-and-lookup-ipv6"] = pop_and_lookup_ipv6;
    }

    if(pop_and_lookup_tp != nullptr)
    {
        children["pop-and-lookup-tp"] = pop_and_lookup_tp;
    }

    if(pseudowire_data != nullptr)
    {
        children["pseudowire-data"] = pseudowire_data;
    }

    if(pseudowire_head_end_data != nullptr)
    {
        children["pseudowire-head-end-data"] = pseudowire_head_end_data;
    }

    if(pw_list_data != nullptr)
    {
        children["pw-list-data"] = pw_list_data;
    }

    if(stackv4_data != nullptr)
    {
        children["stackv4-data"] = stackv4_data;
    }

    if(stackv6_data != nullptr)
    {
        children["stackv6-data"] = stackv6_data;
    }

    if(te_head_data != nullptr)
    {
        children["te-head-data"] = te_head_data;
    }

    if(tev4_data != nullptr)
    {
        children["tev4-data"] = tev4_data;
    }

    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "moi-type")
    {
        moi_type = value;
        moi_type.value_namespace = name_space;
        moi_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "moi-type")
    {
        moi_type.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dmtc-data" || name == "ip-sub-data" || name == "ipv4-data" || name == "ipv6-data" || name == "pop-and-lookup-ipv4" || name == "pop-and-lookup-ipv6" || name == "pop-and-lookup-tp" || name == "pseudowire-data" || name == "pseudowire-head-end-data" || name == "pw-list-data" || name == "stackv4-data" || name == "stackv6-data" || name == "te-head-data" || name == "tev4-data" || name == "moi-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData::DmtcData()
    :
    dmtc_ext_ifh{YType::str, "dmtc-ext-ifh"}
{

    yang_name = "dmtc-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData::~DmtcData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData::has_data() const
{
    return dmtc_ext_ifh.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dmtc_ext_ifh.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dmtc-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dmtc_ext_ifh.is_set || is_set(dmtc_ext_ifh.yfilter)) leaf_name_data.push_back(dmtc_ext_ifh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dmtc-ext-ifh")
    {
        dmtc_ext_ifh = value;
        dmtc_ext_ifh.value_namespace = name_space;
        dmtc_ext_ifh.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dmtc-ext-ifh")
    {
        dmtc_ext_ifh.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dmtc-ext-ifh")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData::IpSubData()
    :
    out_interface{YType::str, "out-interface"},
    path_flags_decode{YType::str, "path-flags-decode"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"}
{

    yang_name = "ip-sub-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData::~IpSubData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData::has_data() const
{
    return out_interface.is_set
	|| path_flags_decode.is_set
	|| table_id.is_set
	|| table_name.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-sub-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-interface" || name == "path-flags-decode" || name == "table-id" || name == "table-name")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data::Ipv4Data()
    :
    backup_path_id{YType::uint8, "backup-path-id"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    load_metric{YType::uint32, "load-metric"},
    local_label{YType::uint32, "local-label"},
    next_hop_id{YType::uint32, "next-hop-id"},
    out_interface{YType::str, "out-interface"},
    out_interface_parent{YType::str, "out-interface-parent"},
    out_label{YType::uint32, "out-label"},
    out_label_name{YType::str, "out-label-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    path_id{YType::uint8, "path-id"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data::~Ipv4Data()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data::has_data() const
{
    return backup_path_id.is_set
	|| ipv4_next_hop.is_set
	|| load_metric.is_set
	|| local_label.is_set
	|| next_hop_id.is_set
	|| out_interface.is_set
	|| out_interface_parent.is_set
	|| out_label.is_set
	|| out_label_name.is_set
	|| path_flags_decode.is_set
	|| path_id.is_set
	|| table_id.is_set
	|| table_name.is_set
	|| tunnel_id.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup_path_id.yfilter)
	|| ydk::is_set(ipv4_next_hop.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_interface_parent.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_label_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_path_id.is_set || is_set(backup_path_id.yfilter)) leaf_name_data.push_back(backup_path_id.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.yfilter)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_interface_parent.is_set || is_set(out_interface_parent.yfilter)) leaf_name_data.push_back(out_interface_parent.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_name.is_set || is_set(out_label_name.yfilter)) leaf_name_data.push_back(out_label_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-path-id")
    {
        backup_path_id = value;
        backup_path_id.value_namespace = name_space;
        backup_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop = value;
        ipv4_next_hop.value_namespace = name_space;
        ipv4_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-path-id")
    {
        backup_path_id.yfilter = yfilter;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "out-interface-parent")
    {
        out_interface_parent.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-label-name")
    {
        out_label_name.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-path-id" || name == "ipv4-next-hop" || name == "load-metric" || name == "local-label" || name == "next-hop-id" || name == "out-interface" || name == "out-interface-parent" || name == "out-label" || name == "out-label-name" || name == "path-flags-decode" || name == "path-id" || name == "table-id" || name == "table-name" || name == "tunnel-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data::Ipv6Data()
    :
    backup_path_id{YType::uint8, "backup-path-id"},
    ipv6_next_hop{YType::str, "ipv6-next-hop"},
    next_hop_id{YType::uint32, "next-hop-id"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"},
    out_label_name{YType::str, "out-label-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    path_id{YType::uint8, "path-id"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"}
{

    yang_name = "ipv6-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data::~Ipv6Data()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data::has_data() const
{
    return backup_path_id.is_set
	|| ipv6_next_hop.is_set
	|| next_hop_id.is_set
	|| out_interface.is_set
	|| out_label.is_set
	|| out_label_name.is_set
	|| path_flags_decode.is_set
	|| path_id.is_set
	|| table_id.is_set
	|| table_name.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup_path_id.yfilter)
	|| ydk::is_set(ipv6_next_hop.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_label_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_path_id.is_set || is_set(backup_path_id.yfilter)) leaf_name_data.push_back(backup_path_id.get_name_leafdata());
    if (ipv6_next_hop.is_set || is_set(ipv6_next_hop.yfilter)) leaf_name_data.push_back(ipv6_next_hop.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_name.is_set || is_set(out_label_name.yfilter)) leaf_name_data.push_back(out_label_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-path-id")
    {
        backup_path_id = value;
        backup_path_id.value_namespace = name_space;
        backup_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-next-hop")
    {
        ipv6_next_hop = value;
        ipv6_next_hop.value_namespace = name_space;
        ipv6_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-path-id")
    {
        backup_path_id.yfilter = yfilter;
    }
    if(value_path == "ipv6-next-hop")
    {
        ipv6_next_hop.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
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
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-path-id" || name == "ipv6-next-hop" || name == "next-hop-id" || name == "out-interface" || name == "out-label" || name == "out-label-name" || name == "path-flags-decode" || name == "path-id" || name == "table-id" || name == "table-name")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4::PopAndLookupIpv4()
    :
    path_flags_decode{YType::str, "path-flags-decode"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"}
{

    yang_name = "pop-and-lookup-ipv4"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4::~PopAndLookupIpv4()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4::has_data() const
{
    return path_flags_decode.is_set
	|| table_id.is_set
	|| table_name.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop-and-lookup-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-flags-decode" || name == "table-id" || name == "table-name")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6::PopAndLookupIpv6()
    :
    path_flags_decode{YType::str, "path-flags-decode"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"}
{

    yang_name = "pop-and-lookup-ipv6"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6::~PopAndLookupIpv6()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6::has_data() const
{
    return path_flags_decode.is_set
	|| table_id.is_set
	|| table_name.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop-and-lookup-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-flags-decode" || name == "table-id" || name == "table-name")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp::PopAndLookupTp()
    :
    out_label{YType::uint32, "out-label"},
    path_flags_decode{YType::str, "path-flags-decode"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"}
{

    yang_name = "pop-and-lookup-tp"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp::~PopAndLookupTp()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp::has_data() const
{
    return out_label.is_set
	|| path_flags_decode.is_set
	|| table_id.is_set
	|| table_name.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop-and-lookup-tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-label" || name == "path-flags-decode" || name == "table-id" || name == "table-name")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData::PseudowireData()
    :
    bridge_id{YType::uint32, "bridge-id"},
    cross_connect_id{YType::uint32, "cross-connect-id"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"},
    path_flags_decode{YType::str, "path-flags-decode"},
    pseuodo_wire_connect_id{YType::uint32, "pseuodo-wire-connect-id"},
    split_horizon_id{YType::uint32, "split-horizon-id"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"}
{

    yang_name = "pseudowire-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData::~PseudowireData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData::has_data() const
{
    return bridge_id.is_set
	|| cross_connect_id.is_set
	|| ipv4_next_hop.is_set
	|| out_interface.is_set
	|| out_label.is_set
	|| path_flags_decode.is_set
	|| pseuodo_wire_connect_id.is_set
	|| split_horizon_id.is_set
	|| table_id.is_set
	|| table_name.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(cross_connect_id.yfilter)
	|| ydk::is_set(ipv4_next_hop.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(pseuodo_wire_connect_id.yfilter)
	|| ydk::is_set(split_horizon_id.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (cross_connect_id.is_set || is_set(cross_connect_id.yfilter)) leaf_name_data.push_back(cross_connect_id.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.yfilter)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (pseuodo_wire_connect_id.is_set || is_set(pseuodo_wire_connect_id.yfilter)) leaf_name_data.push_back(pseuodo_wire_connect_id.get_name_leafdata());
    if (split_horizon_id.is_set || is_set(split_horizon_id.yfilter)) leaf_name_data.push_back(split_horizon_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cross-connect-id")
    {
        cross_connect_id = value;
        cross_connect_id.value_namespace = name_space;
        cross_connect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop = value;
        ipv4_next_hop.value_namespace = name_space;
        ipv4_next_hop.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseuodo-wire-connect-id")
    {
        pseuodo_wire_connect_id = value;
        pseuodo_wire_connect_id.value_namespace = name_space;
        pseuodo_wire_connect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon-id")
    {
        split_horizon_id = value;
        split_horizon_id.value_namespace = name_space;
        split_horizon_id.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "cross-connect-id")
    {
        cross_connect_id.yfilter = yfilter;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "pseuodo-wire-connect-id")
    {
        pseuodo_wire_connect_id.yfilter = yfilter;
    }
    if(value_path == "split-horizon-id")
    {
        split_horizon_id.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-id" || name == "cross-connect-id" || name == "ipv4-next-hop" || name == "out-interface" || name == "out-label" || name == "path-flags-decode" || name == "pseuodo-wire-connect-id" || name == "split-horizon-id" || name == "table-id" || name == "table-name")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData::PseudowireHeadEndData()
    :
    control_word{YType::int32, "control-word"},
    imposition{YType::int32, "imposition"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"},
    path_flags_decode{YType::str, "path-flags-decode"},
    pw_list_id{YType::uint16, "pw-list-id"},
    pwhe_interface{YType::str, "pwhe-interface"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    vctype{YType::uint8, "vctype"}
{

    yang_name = "pseudowire-head-end-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData::~PseudowireHeadEndData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData::has_data() const
{
    return control_word.is_set
	|| imposition.is_set
	|| ipv4_next_hop.is_set
	|| out_interface.is_set
	|| out_label.is_set
	|| path_flags_decode.is_set
	|| pw_list_id.is_set
	|| pwhe_interface.is_set
	|| table_id.is_set
	|| table_name.is_set
	|| vctype.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(control_word.yfilter)
	|| ydk::is_set(imposition.yfilter)
	|| ydk::is_set(ipv4_next_hop.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(pw_list_id.yfilter)
	|| ydk::is_set(pwhe_interface.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(vctype.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-head-end-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control_word.is_set || is_set(control_word.yfilter)) leaf_name_data.push_back(control_word.get_name_leafdata());
    if (imposition.is_set || is_set(imposition.yfilter)) leaf_name_data.push_back(imposition.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.yfilter)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (pw_list_id.is_set || is_set(pw_list_id.yfilter)) leaf_name_data.push_back(pw_list_id.get_name_leafdata());
    if (pwhe_interface.is_set || is_set(pwhe_interface.yfilter)) leaf_name_data.push_back(pwhe_interface.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (vctype.is_set || is_set(vctype.yfilter)) leaf_name_data.push_back(vctype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop = value;
        ipv4_next_hop.value_namespace = name_space;
        ipv4_next_hop.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vctype")
    {
        vctype = value;
        vctype.value_namespace = name_space;
        vctype.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "control-word")
    {
        control_word.yfilter = yfilter;
    }
    if(value_path == "imposition")
    {
        imposition.yfilter = yfilter;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "pw-list-id")
    {
        pw_list_id.yfilter = yfilter;
    }
    if(value_path == "pwhe-interface")
    {
        pwhe_interface.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "vctype")
    {
        vctype.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "control-word" || name == "imposition" || name == "ipv4-next-hop" || name == "out-interface" || name == "out-label" || name == "path-flags-decode" || name == "pw-list-id" || name == "pwhe-interface" || name == "table-id" || name == "table-name" || name == "vctype")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData::PwListData()
    :
    l2_interface{YType::str, "l2-interface"},
    l3_interface{YType::str, "l3-interface"},
    path_flags_decode{YType::str, "path-flags-decode"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"}
{

    yang_name = "pw-list-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData::~PwListData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData::has_data() const
{
    return l2_interface.is_set
	|| l3_interface.is_set
	|| path_flags_decode.is_set
	|| table_id.is_set
	|| table_name.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2_interface.yfilter)
	|| ydk::is_set(l3_interface.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-list-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2_interface.is_set || is_set(l2_interface.yfilter)) leaf_name_data.push_back(l2_interface.get_name_leafdata());
    if (l3_interface.is_set || is_set(l3_interface.yfilter)) leaf_name_data.push_back(l3_interface.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2-interface")
    {
        l2_interface = value;
        l2_interface.value_namespace = name_space;
        l2_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l3-interface")
    {
        l3_interface = value;
        l3_interface.value_namespace = name_space;
        l3_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2-interface")
    {
        l2_interface.yfilter = yfilter;
    }
    if(value_path == "l3-interface")
    {
        l3_interface.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2-interface" || name == "l3-interface" || name == "path-flags-decode" || name == "table-id" || name == "table-name")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Stackv4Data()
    :
    owner_application_type{YType::enumeration, "owner-application-type"}
    	,
    inner_stack(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack>())
	,nexthop(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop>())
{
    inner_stack->parent = this;
    nexthop->parent = this;

    yang_name = "stackv4-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::~Stackv4Data()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::has_data() const
{
    return owner_application_type.is_set
	|| (inner_stack !=  nullptr && inner_stack->has_data())
	|| (nexthop !=  nullptr && nexthop->has_data());
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner_application_type.yfilter)
	|| (inner_stack !=  nullptr && inner_stack->has_operation())
	|| (nexthop !=  nullptr && nexthop->has_operation());
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stackv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner_application_type.is_set || is_set(owner_application_type.yfilter)) leaf_name_data.push_back(owner_application_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inner-stack")
    {
        if(inner_stack == nullptr)
        {
            inner_stack = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack>();
        }
        return inner_stack;
    }

    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop>();
        }
        return nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inner_stack != nullptr)
    {
        children["inner-stack"] = inner_stack;
    }

    if(nexthop != nullptr)
    {
        children["nexthop"] = nexthop;
    }

    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner-application-type")
    {
        owner_application_type = value;
        owner_application_type.value_namespace = name_space;
        owner_application_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner-application-type")
    {
        owner_application_type.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inner-stack" || name == "nexthop" || name == "owner-application-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::InnerStack()
    :
    nexthop{YType::str, "nexthop"},
    num_lbls{YType::uint8, "num-lbls"},
    num_nexthops{YType::uint8, "num-nexthops"}
{

    yang_name = "inner-stack"; yang_parent_name = "stackv4-data"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::~InnerStack()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::has_data() const
{
    for (std::size_t index=0; index<label.size(); index++)
    {
        if(label[index]->has_data())
            return true;
    }
    for (auto const & leaf : nexthop.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return num_lbls.is_set
	|| num_nexthops.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::has_operation() const
{
    for (std::size_t index=0; index<label.size(); index++)
    {
        if(label[index]->has_operation())
            return true;
    }
    for (auto const & leaf : nexthop.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nexthop.yfilter)
	|| ydk::is_set(num_lbls.yfilter)
	|| ydk::is_set(num_nexthops.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inner-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_lbls.is_set || is_set(num_lbls.yfilter)) leaf_name_data.push_back(num_lbls.get_name_leafdata());
    if (num_nexthops.is_set || is_set(num_nexthops.yfilter)) leaf_name_data.push_back(num_nexthops.get_name_leafdata());

    auto nexthop_name_datas = nexthop.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nexthop_name_datas.begin(), nexthop_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label")
    {
        for(auto const & c : label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label>();
        c->parent = this;
        label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nexthop")
    {
        nexthop.append(value);
    }
    if(value_path == "num-lbls")
    {
        num_lbls = value;
        num_lbls.value_namespace = name_space;
        num_lbls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-nexthops")
    {
        num_nexthops = value;
        num_nexthops.value_namespace = name_space;
        num_nexthops.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nexthop")
    {
        nexthop.yfilter = yfilter;
    }
    if(value_path == "num-lbls")
    {
        num_lbls.yfilter = yfilter;
    }
    if(value_path == "num-nexthops")
    {
        num_nexthops.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "nexthop" || name == "num-lbls" || name == "num-nexthops")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::Label()
    :
    outgoing_label{YType::uint32, "outgoing-label"},
    outgoing_label_str{YType::str, "outgoing-label-str"}
{

    yang_name = "label"; yang_parent_name = "inner-stack"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::~Label()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::has_data() const
{
    return outgoing_label.is_set
	|| outgoing_label_str.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(outgoing_label_str.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (outgoing_label_str.is_set || is_set(outgoing_label_str.yfilter)) leaf_name_data.push_back(outgoing_label_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outgoing-label" || name == "outgoing-label-str")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop::Nexthop()
    :
    backup_path_id{YType::uint8, "backup-path-id"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    load_metric{YType::uint32, "load-metric"},
    local_label{YType::uint32, "local-label"},
    next_hop_id{YType::uint32, "next-hop-id"},
    out_interface{YType::str, "out-interface"},
    out_interface_parent{YType::str, "out-interface-parent"},
    out_label{YType::uint32, "out-label"},
    out_label_name{YType::str, "out-label-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    path_id{YType::uint8, "path-id"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "nexthop"; yang_parent_name = "stackv4-data"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop::~Nexthop()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop::has_data() const
{
    return backup_path_id.is_set
	|| ipv4_next_hop.is_set
	|| load_metric.is_set
	|| local_label.is_set
	|| next_hop_id.is_set
	|| out_interface.is_set
	|| out_interface_parent.is_set
	|| out_label.is_set
	|| out_label_name.is_set
	|| path_flags_decode.is_set
	|| path_id.is_set
	|| table_id.is_set
	|| table_name.is_set
	|| tunnel_id.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup_path_id.yfilter)
	|| ydk::is_set(ipv4_next_hop.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_interface_parent.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_label_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_path_id.is_set || is_set(backup_path_id.yfilter)) leaf_name_data.push_back(backup_path_id.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.yfilter)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_interface_parent.is_set || is_set(out_interface_parent.yfilter)) leaf_name_data.push_back(out_interface_parent.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_name.is_set || is_set(out_label_name.yfilter)) leaf_name_data.push_back(out_label_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-path-id")
    {
        backup_path_id = value;
        backup_path_id.value_namespace = name_space;
        backup_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop = value;
        ipv4_next_hop.value_namespace = name_space;
        ipv4_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-path-id")
    {
        backup_path_id.yfilter = yfilter;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "out-interface-parent")
    {
        out_interface_parent.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-label-name")
    {
        out_label_name.yfilter = yfilter;
    }
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-path-id" || name == "ipv4-next-hop" || name == "load-metric" || name == "local-label" || name == "next-hop-id" || name == "out-interface" || name == "out-interface-parent" || name == "out-label" || name == "out-label-name" || name == "path-flags-decode" || name == "path-id" || name == "table-id" || name == "table-name" || name == "tunnel-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Stackv6Data()
    :
    inner_stack(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack>())
	,nexthop(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop>())
{
    inner_stack->parent = this;
    nexthop->parent = this;

    yang_name = "stackv6-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::~Stackv6Data()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::has_data() const
{
    return (inner_stack !=  nullptr && inner_stack->has_data())
	|| (nexthop !=  nullptr && nexthop->has_data());
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::has_operation() const
{
    return is_set(yfilter)
	|| (inner_stack !=  nullptr && inner_stack->has_operation())
	|| (nexthop !=  nullptr && nexthop->has_operation());
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stackv6-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inner-stack")
    {
        if(inner_stack == nullptr)
        {
            inner_stack = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack>();
        }
        return inner_stack;
    }

    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop>();
        }
        return nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inner_stack != nullptr)
    {
        children["inner-stack"] = inner_stack;
    }

    if(nexthop != nullptr)
    {
        children["nexthop"] = nexthop;
    }

    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inner-stack" || name == "nexthop")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::InnerStack()
    :
    nexthop{YType::str, "nexthop"},
    num_lbls{YType::uint8, "num-lbls"},
    num_nexthops{YType::uint8, "num-nexthops"}
{

    yang_name = "inner-stack"; yang_parent_name = "stackv6-data"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::~InnerStack()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::has_data() const
{
    for (std::size_t index=0; index<label.size(); index++)
    {
        if(label[index]->has_data())
            return true;
    }
    for (auto const & leaf : nexthop.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return num_lbls.is_set
	|| num_nexthops.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::has_operation() const
{
    for (std::size_t index=0; index<label.size(); index++)
    {
        if(label[index]->has_operation())
            return true;
    }
    for (auto const & leaf : nexthop.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nexthop.yfilter)
	|| ydk::is_set(num_lbls.yfilter)
	|| ydk::is_set(num_nexthops.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inner-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_lbls.is_set || is_set(num_lbls.yfilter)) leaf_name_data.push_back(num_lbls.get_name_leafdata());
    if (num_nexthops.is_set || is_set(num_nexthops.yfilter)) leaf_name_data.push_back(num_nexthops.get_name_leafdata());

    auto nexthop_name_datas = nexthop.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nexthop_name_datas.begin(), nexthop_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label")
    {
        for(auto const & c : label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label>();
        c->parent = this;
        label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nexthop")
    {
        nexthop.append(value);
    }
    if(value_path == "num-lbls")
    {
        num_lbls = value;
        num_lbls.value_namespace = name_space;
        num_lbls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-nexthops")
    {
        num_nexthops = value;
        num_nexthops.value_namespace = name_space;
        num_nexthops.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nexthop")
    {
        nexthop.yfilter = yfilter;
    }
    if(value_path == "num-lbls")
    {
        num_lbls.yfilter = yfilter;
    }
    if(value_path == "num-nexthops")
    {
        num_nexthops.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "nexthop" || name == "num-lbls" || name == "num-nexthops")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::Label()
    :
    outgoing_label{YType::uint32, "outgoing-label"},
    outgoing_label_str{YType::str, "outgoing-label-str"}
{

    yang_name = "label"; yang_parent_name = "inner-stack"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::~Label()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::has_data() const
{
    return outgoing_label.is_set
	|| outgoing_label_str.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(outgoing_label_str.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (outgoing_label_str.is_set || is_set(outgoing_label_str.yfilter)) leaf_name_data.push_back(outgoing_label_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outgoing-label" || name == "outgoing-label-str")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop::Nexthop()
    :
    backup_path_id{YType::uint8, "backup-path-id"},
    ipv6_next_hop{YType::str, "ipv6-next-hop"},
    next_hop_id{YType::uint32, "next-hop-id"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"},
    out_label_name{YType::str, "out-label-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    path_id{YType::uint8, "path-id"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"}
{

    yang_name = "nexthop"; yang_parent_name = "stackv6-data"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop::~Nexthop()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop::has_data() const
{
    return backup_path_id.is_set
	|| ipv6_next_hop.is_set
	|| next_hop_id.is_set
	|| out_interface.is_set
	|| out_label.is_set
	|| out_label_name.is_set
	|| path_flags_decode.is_set
	|| path_id.is_set
	|| table_id.is_set
	|| table_name.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup_path_id.yfilter)
	|| ydk::is_set(ipv6_next_hop.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_label_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_path_id.is_set || is_set(backup_path_id.yfilter)) leaf_name_data.push_back(backup_path_id.get_name_leafdata());
    if (ipv6_next_hop.is_set || is_set(ipv6_next_hop.yfilter)) leaf_name_data.push_back(ipv6_next_hop.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_name.is_set || is_set(out_label_name.yfilter)) leaf_name_data.push_back(out_label_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-path-id")
    {
        backup_path_id = value;
        backup_path_id.value_namespace = name_space;
        backup_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-next-hop")
    {
        ipv6_next_hop = value;
        ipv6_next_hop.value_namespace = name_space;
        ipv6_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-path-id")
    {
        backup_path_id.yfilter = yfilter;
    }
    if(value_path == "ipv6-next-hop")
    {
        ipv6_next_hop.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
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
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-path-id" || name == "ipv6-next-hop" || name == "next-hop-id" || name == "out-interface" || name == "out-label" || name == "out-label-name" || name == "path-flags-decode" || name == "path-id" || name == "table-id" || name == "table-name")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData::TeHeadData()
    :
    flags_decode{YType::str, "flags-decode"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    tunnel_fwd_class{YType::uint8, "tunnel-fwd-class"},
    tunnel_load_metric{YType::uint32, "tunnel-load-metric"},
    tunnel_local_label{YType::uint32, "tunnel-local-label"},
    tunnel_local_label_str{YType::str, "tunnel-local-label-str"}
{

    yang_name = "te-head-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData::~TeHeadData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData::has_data() const
{
    return flags_decode.is_set
	|| table_id.is_set
	|| table_name.is_set
	|| tunnel_fwd_class.is_set
	|| tunnel_load_metric.is_set
	|| tunnel_local_label.is_set
	|| tunnel_local_label_str.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags_decode.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(tunnel_fwd_class.yfilter)
	|| ydk::is_set(tunnel_load_metric.yfilter)
	|| ydk::is_set(tunnel_local_label.yfilter)
	|| ydk::is_set(tunnel_local_label_str.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-head-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags_decode.is_set || is_set(flags_decode.yfilter)) leaf_name_data.push_back(flags_decode.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (tunnel_fwd_class.is_set || is_set(tunnel_fwd_class.yfilter)) leaf_name_data.push_back(tunnel_fwd_class.get_name_leafdata());
    if (tunnel_load_metric.is_set || is_set(tunnel_load_metric.yfilter)) leaf_name_data.push_back(tunnel_load_metric.get_name_leafdata());
    if (tunnel_local_label.is_set || is_set(tunnel_local_label.yfilter)) leaf_name_data.push_back(tunnel_local_label.get_name_leafdata());
    if (tunnel_local_label_str.is_set || is_set(tunnel_local_label_str.yfilter)) leaf_name_data.push_back(tunnel_local_label_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags-decode")
    {
        flags_decode = value;
        flags_decode.value_namespace = name_space;
        flags_decode.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags-decode")
    {
        flags_decode.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-fwd-class")
    {
        tunnel_fwd_class.yfilter = yfilter;
    }
    if(value_path == "tunnel-load-metric")
    {
        tunnel_load_metric.yfilter = yfilter;
    }
    if(value_path == "tunnel-local-label")
    {
        tunnel_local_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-local-label-str")
    {
        tunnel_local_label_str.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags-decode" || name == "table-id" || name == "table-name" || name == "tunnel-fwd-class" || name == "tunnel-load-metric" || name == "tunnel-local-label" || name == "tunnel-local-label-str")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data::Tev4Data()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_ipv4_next_hop{YType::str, "backup-ipv4-next-hop"},
    backup_local_label{YType::uint32, "backup-local-label"},
    data_out_parent_interface{YType::str, "data-out-parent-interface"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    merge_point_label{YType::uint32, "merge-point-label"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"},
    out_label_name{YType::str, "out-label-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    tunnel_class{YType::uint32, "tunnel-class"},
    tunnel_interface{YType::str, "tunnel-interface"},
    tunnel_weight{YType::uint32, "tunnel-weight"}
{

    yang_name = "tev4-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data::~Tev4Data()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data::has_data() const
{
    return backup_interface.is_set
	|| backup_ipv4_next_hop.is_set
	|| backup_local_label.is_set
	|| data_out_parent_interface.is_set
	|| ipv4_next_hop.is_set
	|| merge_point_label.is_set
	|| out_interface.is_set
	|| out_label.is_set
	|| out_label_name.is_set
	|| path_flags_decode.is_set
	|| table_id.is_set
	|| table_name.is_set
	|| tunnel_class.is_set
	|| tunnel_interface.is_set
	|| tunnel_weight.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup_interface.yfilter)
	|| ydk::is_set(backup_ipv4_next_hop.yfilter)
	|| ydk::is_set(backup_local_label.yfilter)
	|| ydk::is_set(data_out_parent_interface.yfilter)
	|| ydk::is_set(ipv4_next_hop.yfilter)
	|| ydk::is_set(merge_point_label.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_label_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(tunnel_class.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(tunnel_weight.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tev4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_ipv4_next_hop.is_set || is_set(backup_ipv4_next_hop.yfilter)) leaf_name_data.push_back(backup_ipv4_next_hop.get_name_leafdata());
    if (backup_local_label.is_set || is_set(backup_local_label.yfilter)) leaf_name_data.push_back(backup_local_label.get_name_leafdata());
    if (data_out_parent_interface.is_set || is_set(data_out_parent_interface.yfilter)) leaf_name_data.push_back(data_out_parent_interface.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.yfilter)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (merge_point_label.is_set || is_set(merge_point_label.yfilter)) leaf_name_data.push_back(merge_point_label.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_name.is_set || is_set(out_label_name.yfilter)) leaf_name_data.push_back(out_label_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (tunnel_class.is_set || is_set(tunnel_class.yfilter)) leaf_name_data.push_back(tunnel_class.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (tunnel_weight.is_set || is_set(tunnel_weight.yfilter)) leaf_name_data.push_back(tunnel_weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "backup-local-label")
    {
        backup_local_label = value;
        backup_local_label.value_namespace = name_space;
        backup_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-out-parent-interface")
    {
        data_out_parent_interface = value;
        data_out_parent_interface.value_namespace = name_space;
        data_out_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop = value;
        ipv4_next_hop.value_namespace = name_space;
        ipv4_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merge-point-label")
    {
        merge_point_label = value;
        merge_point_label.value_namespace = name_space;
        merge_point_label.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "path-flags-decode")
    {
        path_flags_decode = value;
        path_flags_decode.value_namespace = name_space;
        path_flags_decode.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "tunnel-class")
    {
        tunnel_class = value;
        tunnel_class.value_namespace = name_space;
        tunnel_class.value_namespace_prefix = name_space_prefix;
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
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
    if(value_path == "backup-ipv4-next-hop")
    {
        backup_ipv4_next_hop.yfilter = yfilter;
    }
    if(value_path == "backup-local-label")
    {
        backup_local_label.yfilter = yfilter;
    }
    if(value_path == "data-out-parent-interface")
    {
        data_out_parent_interface.yfilter = yfilter;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop.yfilter = yfilter;
    }
    if(value_path == "merge-point-label")
    {
        merge_point_label.yfilter = yfilter;
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
    if(value_path == "path-flags-decode")
    {
        path_flags_decode.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-class")
    {
        tunnel_class.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "tunnel-weight")
    {
        tunnel_weight.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-interface" || name == "backup-ipv4-next-hop" || name == "backup-local-label" || name == "data-out-parent-interface" || name == "ipv4-next-hop" || name == "merge-point-label" || name == "out-interface" || name == "out-label" || name == "out-label-name" || name == "path-flags-decode" || name == "table-id" || name == "table-name" || name == "tunnel-class" || name == "tunnel-interface" || name == "tunnel-weight")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId()
    :
    rewrite_id(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_>())
{
    rewrite_id->parent = this;

    yang_name = "rewrite-id"; yang_parent_name = "rewrite-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::~RewriteId()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::has_data() const
{
    return (rewrite_id !=  nullptr && rewrite_id->has_data());
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::has_operation() const
{
    return is_set(yfilter)
	|| (rewrite_id !=  nullptr && rewrite_id->has_operation());
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rewrite-id")
    {
        if(rewrite_id == nullptr)
        {
            rewrite_id = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_>();
        }
        return rewrite_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rewrite_id != nullptr)
    {
        children["rewrite-id"] = rewrite_id;
    }

    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rewrite-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::RewriteId_()
    :
    rewrite_id_type{YType::enumeration, "rewrite-id-type"}
    	,
    label_context(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext>())
	,local_label_rewrite(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite>())
{
    label_context->parent = this;
    local_label_rewrite->parent = this;

    yang_name = "rewrite-id"; yang_parent_name = "rewrite-id"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::~RewriteId_()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::has_data() const
{
    return rewrite_id_type.is_set
	|| (label_context !=  nullptr && label_context->has_data())
	|| (local_label_rewrite !=  nullptr && local_label_rewrite->has_data());
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rewrite_id_type.yfilter)
	|| (label_context !=  nullptr && label_context->has_operation())
	|| (local_label_rewrite !=  nullptr && local_label_rewrite->has_operation());
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rewrite_id_type.is_set || is_set(rewrite_id_type.yfilter)) leaf_name_data.push_back(rewrite_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-context")
    {
        if(label_context == nullptr)
        {
            label_context = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext>();
        }
        return label_context;
    }

    if(child_yang_name == "local-label-rewrite")
    {
        if(local_label_rewrite == nullptr)
        {
            local_label_rewrite = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite>();
        }
        return local_label_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::get_children() const
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rewrite-id-type")
    {
        rewrite_id_type = value;
        rewrite_id_type.value_namespace = name_space;
        rewrite_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rewrite-id-type")
    {
        rewrite_id_type.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-context" || name == "local-label-rewrite" || name == "rewrite-id-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelContext()
    :
    label_context_type{YType::enumeration, "label-context-type"}
    	,
    cev4l3vpn_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData>())
	,cev6l3vpn_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData>())
	,evpn_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData>())
	,generic_routing_encapsulation(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation>())
	,ip_sub_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData>())
	,ipv4_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data>())
	,ipv4blb_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData>())
	,ipv4l3vpn_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData>())
	,ipv6_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data>())
	,ipv6_generic_routing_encapsulation(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation>())
	,ipv6blb_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData>())
	,ipv6l3vpn_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData>())
	,label_block_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData>())
	,label_block_srgb_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData>())
	,label_block_srlb_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData>())
	,mld_pv4_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data>())
	,next_hop_set_l3vpn(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn>())
	,pi_mi_pmsi_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData>())
	,pi_ms_pmsi_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData>())
	,pseudowire_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData>())
	,pseudowire_head_end_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData>())
	,sr_adj_segment_ipv4(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4>())
	,sr_adj_segment_ipv6(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6>())
	,sr_prefix_segment(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment>())
	,te_binding(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding>())
	,tev4_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data>())
	,tev4p2mp_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData>())
	,tp_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData>())
	,vrf_l3vpn_data(std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData>())
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

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::~LabelContext()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::has_data() const
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::has_operation() const
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

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_context_type.is_set || is_set(label_context_type.yfilter)) leaf_name_data.push_back(label_context_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cev4l3vpn-data")
    {
        if(cev4l3vpn_data == nullptr)
        {
            cev4l3vpn_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData>();
        }
        return cev4l3vpn_data;
    }

    if(child_yang_name == "cev6l3vpn-data")
    {
        if(cev6l3vpn_data == nullptr)
        {
            cev6l3vpn_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData>();
        }
        return cev6l3vpn_data;
    }

    if(child_yang_name == "evpn-data")
    {
        if(evpn_data == nullptr)
        {
            evpn_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData>();
        }
        return evpn_data;
    }

    if(child_yang_name == "generic-routing-encapsulation")
    {
        if(generic_routing_encapsulation == nullptr)
        {
            generic_routing_encapsulation = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation>();
        }
        return generic_routing_encapsulation;
    }

    if(child_yang_name == "ip-sub-data")
    {
        if(ip_sub_data == nullptr)
        {
            ip_sub_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData>();
        }
        return ip_sub_data;
    }

    if(child_yang_name == "ipv4-data")
    {
        if(ipv4_data == nullptr)
        {
            ipv4_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data>();
        }
        return ipv4_data;
    }

    if(child_yang_name == "ipv4blb-data")
    {
        if(ipv4blb_data == nullptr)
        {
            ipv4blb_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData>();
        }
        return ipv4blb_data;
    }

    if(child_yang_name == "ipv4l3vpn-data")
    {
        if(ipv4l3vpn_data == nullptr)
        {
            ipv4l3vpn_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData>();
        }
        return ipv4l3vpn_data;
    }

    if(child_yang_name == "ipv6-data")
    {
        if(ipv6_data == nullptr)
        {
            ipv6_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data>();
        }
        return ipv6_data;
    }

    if(child_yang_name == "ipv6-generic-routing-encapsulation")
    {
        if(ipv6_generic_routing_encapsulation == nullptr)
        {
            ipv6_generic_routing_encapsulation = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation>();
        }
        return ipv6_generic_routing_encapsulation;
    }

    if(child_yang_name == "ipv6blb-data")
    {
        if(ipv6blb_data == nullptr)
        {
            ipv6blb_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData>();
        }
        return ipv6blb_data;
    }

    if(child_yang_name == "ipv6l3vpn-data")
    {
        if(ipv6l3vpn_data == nullptr)
        {
            ipv6l3vpn_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData>();
        }
        return ipv6l3vpn_data;
    }

    if(child_yang_name == "label-block-data")
    {
        if(label_block_data == nullptr)
        {
            label_block_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData>();
        }
        return label_block_data;
    }

    if(child_yang_name == "label-block-srgb-data")
    {
        if(label_block_srgb_data == nullptr)
        {
            label_block_srgb_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData>();
        }
        return label_block_srgb_data;
    }

    if(child_yang_name == "label-block-srlb-data")
    {
        if(label_block_srlb_data == nullptr)
        {
            label_block_srlb_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData>();
        }
        return label_block_srlb_data;
    }

    if(child_yang_name == "mld-pv4-data")
    {
        if(mld_pv4_data == nullptr)
        {
            mld_pv4_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data>();
        }
        return mld_pv4_data;
    }

    if(child_yang_name == "next-hop-set-l3vpn")
    {
        if(next_hop_set_l3vpn == nullptr)
        {
            next_hop_set_l3vpn = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn>();
        }
        return next_hop_set_l3vpn;
    }

    if(child_yang_name == "pi-mi-pmsi-data")
    {
        if(pi_mi_pmsi_data == nullptr)
        {
            pi_mi_pmsi_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData>();
        }
        return pi_mi_pmsi_data;
    }

    if(child_yang_name == "pi-ms-pmsi-data")
    {
        if(pi_ms_pmsi_data == nullptr)
        {
            pi_ms_pmsi_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData>();
        }
        return pi_ms_pmsi_data;
    }

    if(child_yang_name == "pseudowire-data")
    {
        if(pseudowire_data == nullptr)
        {
            pseudowire_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData>();
        }
        return pseudowire_data;
    }

    if(child_yang_name == "pseudowire-head-end-data")
    {
        if(pseudowire_head_end_data == nullptr)
        {
            pseudowire_head_end_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData>();
        }
        return pseudowire_head_end_data;
    }

    if(child_yang_name == "sr-adj-segment-ipv4")
    {
        if(sr_adj_segment_ipv4 == nullptr)
        {
            sr_adj_segment_ipv4 = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4>();
        }
        return sr_adj_segment_ipv4;
    }

    if(child_yang_name == "sr-adj-segment-ipv6")
    {
        if(sr_adj_segment_ipv6 == nullptr)
        {
            sr_adj_segment_ipv6 = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6>();
        }
        return sr_adj_segment_ipv6;
    }

    if(child_yang_name == "sr-prefix-segment")
    {
        if(sr_prefix_segment == nullptr)
        {
            sr_prefix_segment = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment>();
        }
        return sr_prefix_segment;
    }

    if(child_yang_name == "te-binding")
    {
        if(te_binding == nullptr)
        {
            te_binding = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding>();
        }
        return te_binding;
    }

    if(child_yang_name == "tev4-data")
    {
        if(tev4_data == nullptr)
        {
            tev4_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data>();
        }
        return tev4_data;
    }

    if(child_yang_name == "tev4p2mp-data")
    {
        if(tev4p2mp_data == nullptr)
        {
            tev4p2mp_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData>();
        }
        return tev4p2mp_data;
    }

    if(child_yang_name == "tp-data")
    {
        if(tp_data == nullptr)
        {
            tp_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData>();
        }
        return tp_data;
    }

    if(child_yang_name == "vrf-l3vpn-data")
    {
        if(vrf_l3vpn_data == nullptr)
        {
            vrf_l3vpn_data = std::make_shared<MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData>();
        }
        return vrf_l3vpn_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::get_children() const
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-context-type")
    {
        label_context_type = value;
        label_context_type.value_namespace = name_space;
        label_context_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-context-type")
    {
        label_context_type.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cev4l3vpn-data" || name == "cev6l3vpn-data" || name == "evpn-data" || name == "generic-routing-encapsulation" || name == "ip-sub-data" || name == "ipv4-data" || name == "ipv4blb-data" || name == "ipv4l3vpn-data" || name == "ipv6-data" || name == "ipv6-generic-routing-encapsulation" || name == "ipv6blb-data" || name == "ipv6l3vpn-data" || name == "label-block-data" || name == "label-block-srgb-data" || name == "label-block-srlb-data" || name == "mld-pv4-data" || name == "next-hop-set-l3vpn" || name == "pi-mi-pmsi-data" || name == "pi-ms-pmsi-data" || name == "pseudowire-data" || name == "pseudowire-head-end-data" || name == "sr-adj-segment-ipv4" || name == "sr-adj-segment-ipv6" || name == "sr-prefix-segment" || name == "te-binding" || name == "tev4-data" || name == "tev4p2mp-data" || name == "tp-data" || name == "vrf-l3vpn-data" || name == "label-context-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::Cev4L3VpnData()
    :
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    security_id{YType::uint32, "security-id"},
    table_id{YType::uint32, "table-id"}
{

    yang_name = "cev4l3vpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::~Cev4L3VpnData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::has_data() const
{
    return ipv4_next_hop.is_set
	|| security_id.is_set
	|| table_id.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_next_hop.yfilter)
	|| ydk::is_set(security_id.yfilter)
	|| ydk::is_set(table_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cev4l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.yfilter)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-next-hop" || name == "security-id" || name == "table-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::Cev6L3VpnData()
    :
    ipv6_next_hop{YType::str, "ipv6-next-hop"},
    security_id{YType::uint32, "security-id"},
    table_id{YType::uint32, "table-id"}
{

    yang_name = "cev6l3vpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::~Cev6L3VpnData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::has_data() const
{
    return ipv6_next_hop.is_set
	|| security_id.is_set
	|| table_id.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_next_hop.yfilter)
	|| ydk::is_set(security_id.yfilter)
	|| ydk::is_set(table_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cev6l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_next_hop.is_set || is_set(ipv6_next_hop.yfilter)) leaf_name_data.push_back(ipv6_next_hop.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-next-hop" || name == "security-id" || name == "table-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData::EvpnData()
    :
    ethernet_segment{YType::str, "ethernet-segment"},
    evpn_id{YType::uint32, "evpn-id"},
    evpn_tag{YType::uint32, "evpn-tag"}
{

    yang_name = "evpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData::~EvpnData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData::has_data() const
{
    return ethernet_segment.is_set
	|| evpn_id.is_set
	|| evpn_tag.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet_segment.yfilter)
	|| ydk::is_set(evpn_id.yfilter)
	|| ydk::is_set(evpn_tag.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_segment.is_set || is_set(ethernet_segment.yfilter)) leaf_name_data.push_back(ethernet_segment.get_name_leafdata());
    if (evpn_id.is_set || is_set(evpn_id.yfilter)) leaf_name_data.push_back(evpn_id.get_name_leafdata());
    if (evpn_tag.is_set || is_set(evpn_tag.yfilter)) leaf_name_data.push_back(evpn_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-segment" || name == "evpn-id" || name == "evpn-tag")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::GenericRoutingEncapsulation()
    :
    gre_interface{YType::str, "gre-interface"}
{

    yang_name = "generic-routing-encapsulation"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::~GenericRoutingEncapsulation()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::has_data() const
{
    return gre_interface.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gre_interface.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-routing-encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gre_interface.is_set || is_set(gre_interface.yfilter)) leaf_name_data.push_back(gre_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gre-interface")
    {
        gre_interface = value;
        gre_interface.value_namespace = name_space;
        gre_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gre-interface")
    {
        gre_interface.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-interface")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData::IpSubData()
    :
    parent_interface{YType::str, "parent-interface"},
    table_id{YType::uint32, "table-id"}
{

    yang_name = "ip-sub-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData::~IpSubData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData::has_data() const
{
    return parent_interface.is_set
	|| table_id.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(parent_interface.yfilter)
	|| ydk::is_set(table_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-sub-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (parent_interface.is_set || is_set(parent_interface.yfilter)) leaf_name_data.push_back(parent_interface.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parent-interface" || name == "table-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::Ipv4BlbData()
    :
    blb_intf{YType::str, "blb-intf"},
    prefix{YType::str, "prefix"}
{

    yang_name = "ipv4blb-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::~Ipv4BlbData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::has_data() const
{
    return blb_intf.is_set
	|| prefix.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(blb_intf.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4blb-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blb_intf.is_set || is_set(blb_intf.yfilter)) leaf_name_data.push_back(blb_intf.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "blb-intf" || name == "prefix")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data::Ipv4Data()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    security_id{YType::uint32, "security-id"},
    table_id{YType::uint32, "table-id"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "ipv4-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data::~Ipv4Data()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| security_id.is_set
	|| table_id.is_set
	|| vrf_name.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(security_id.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "security-id" || name == "table-id" || name == "vrf-name")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::Ipv4L3VpnData()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    route_distinguisher{YType::uint64, "route-distinguisher"}
{

    yang_name = "ipv4l3vpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::~Ipv4L3VpnData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| route_distinguisher.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "route-distinguisher")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::Ipv6BlbData()
    :
    blb_intf{YType::str, "blb-intf"},
    prefix{YType::str, "prefix"}
{

    yang_name = "ipv6blb-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::~Ipv6BlbData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::has_data() const
{
    return blb_intf.is_set
	|| prefix.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(blb_intf.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6blb-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blb_intf.is_set || is_set(blb_intf.yfilter)) leaf_name_data.push_back(blb_intf.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "blb-intf" || name == "prefix")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data::Ipv6Data()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    security_id{YType::uint32, "security-id"},
    table_id{YType::uint32, "table-id"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "ipv6-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data::~Ipv6Data()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| security_id.is_set
	|| table_id.is_set
	|| vrf_name.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(security_id.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "security-id" || name == "table-id" || name == "vrf-name")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::Ipv6GenericRoutingEncapsulation()
    :
    greipv6_interface{YType::str, "greipv6-interface"}
{

    yang_name = "ipv6-generic-routing-encapsulation"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::~Ipv6GenericRoutingEncapsulation()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::has_data() const
{
    return greipv6_interface.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(greipv6_interface.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-generic-routing-encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (greipv6_interface.is_set || is_set(greipv6_interface.yfilter)) leaf_name_data.push_back(greipv6_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "greipv6-interface")
    {
        greipv6_interface = value;
        greipv6_interface.value_namespace = name_space;
        greipv6_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "greipv6-interface")
    {
        greipv6_interface.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "greipv6-interface")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::Ipv6L3VpnData()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    route_distinguisher{YType::uint64, "route-distinguisher"}
{

    yang_name = "ipv6l3vpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::~Ipv6L3VpnData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| route_distinguisher.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "route-distinguisher")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData::LabelBlockData()
    :
    edge_id{YType::uint16, "edge-id"},
    offset{YType::uint32, "offset"},
    service{YType::uint8, "service"},
    size{YType::uint32, "size"},
    vpn_id{YType::uint16, "vpn-id"}
{

    yang_name = "label-block-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData::~LabelBlockData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData::has_data() const
{
    return edge_id.is_set
	|| offset.is_set
	|| service.is_set
	|| size.is_set
	|| vpn_id.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(edge_id.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(service.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(vpn_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (edge_id.is_set || is_set(edge_id.yfilter)) leaf_name_data.push_back(edge_id.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "edge-id" || name == "offset" || name == "service" || name == "size" || name == "vpn-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::LabelBlockSrgbData()
    :
    offset{YType::uint32, "offset"},
    size{YType::uint32, "size"},
    start_label{YType::uint32, "start-label"}
{

    yang_name = "label-block-srgb-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::~LabelBlockSrgbData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::has_data() const
{
    return offset.is_set
	|| size.is_set
	|| start_label.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(start_label.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block-srgb-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (start_label.is_set || is_set(start_label.yfilter)) leaf_name_data.push_back(start_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "offset" || name == "size" || name == "start-label")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::LabelBlockSrlbData()
    :
    offset{YType::uint32, "offset"},
    size{YType::uint32, "size"},
    start_label{YType::uint32, "start-label"}
{

    yang_name = "label-block-srlb-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::~LabelBlockSrlbData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::has_data() const
{
    return offset.is_set
	|| size.is_set
	|| start_label.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(start_label.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block-srlb-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (start_label.is_set || is_set(start_label.yfilter)) leaf_name_data.push_back(start_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "offset" || name == "size" || name == "start-label")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data::MldPv4Data()
    :
    lsm_id{YType::uint32, "lsm-id"},
    peer_label_space_id{YType::uint16, "peer-label-space-id"},
    peer_lsrid{YType::str, "peer-lsrid"},
    table_id{YType::uint32, "table-id"},
    type{YType::uint16, "type"}
{

    yang_name = "mld-pv4-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data::~MldPv4Data()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data::has_data() const
{
    return lsm_id.is_set
	|| peer_label_space_id.is_set
	|| peer_lsrid.is_set
	|| table_id.is_set
	|| type.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsm_id.yfilter)
	|| ydk::is_set(peer_label_space_id.yfilter)
	|| ydk::is_set(peer_lsrid.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld-pv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsm_id.is_set || is_set(lsm_id.yfilter)) leaf_name_data.push_back(lsm_id.get_name_leafdata());
    if (peer_label_space_id.is_set || is_set(peer_label_space_id.yfilter)) leaf_name_data.push_back(peer_label_space_id.get_name_leafdata());
    if (peer_lsrid.is_set || is_set(peer_lsrid.yfilter)) leaf_name_data.push_back(peer_lsrid.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsm-id" || name == "peer-label-space-id" || name == "peer-lsrid" || name == "table-id" || name == "type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::NextHopSetL3Vpn()
    :
    next_hop_set_id{YType::uint32, "next-hop-set-id"},
    table_id{YType::uint32, "table-id"}
{

    yang_name = "next-hop-set-l3vpn"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::~NextHopSetL3Vpn()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::has_data() const
{
    return next_hop_set_id.is_set
	|| table_id.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_set_id.yfilter)
	|| ydk::is_set(table_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-set-l3vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_set_id.is_set || is_set(next_hop_set_id.yfilter)) leaf_name_data.push_back(next_hop_set_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-set-id" || name == "table-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::PiMiPmsiData()
    :
    head{YType::int32, "head"},
    v6{YType::int32, "v6"},
    vrf_id{YType::uint32, "vrf-id"}
{

    yang_name = "pi-mi-pmsi-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::~PiMiPmsiData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::has_data() const
{
    return head.is_set
	|| v6.is_set
	|| vrf_id.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(head.yfilter)
	|| ydk::is_set(v6.yfilter)
	|| ydk::is_set(vrf_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pi-mi-pmsi-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (head.is_set || is_set(head.yfilter)) leaf_name_data.push_back(head.get_name_leafdata());
    if (v6.is_set || is_set(v6.yfilter)) leaf_name_data.push_back(v6.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head" || name == "v6" || name == "vrf-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::PiMsPmsiData()
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

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::~PiMsPmsiData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::has_data() const
{
    return head.is_set
	|| hli.is_set
	|| seg.is_set
	|| source.is_set
	|| v6.is_set
	|| vrf_id.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(head.yfilter)
	|| ydk::is_set(hli.yfilter)
	|| ydk::is_set(seg.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(v6.yfilter)
	|| ydk::is_set(vrf_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pi-ms-pmsi-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head" || name == "hli" || name == "seg" || name == "source" || name == "v6" || name == "vrf-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData::PseudowireData()
    :
    prefix{YType::str, "prefix"},
    pseudowire_id{YType::uint64, "pseudowire-id"},
    remote_l2_router_id{YType::uint32, "remote-l2-router-id"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "pseudowire-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData::~PseudowireData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData::has_data() const
{
    return prefix.is_set
	|| pseudowire_id.is_set
	|| remote_l2_router_id.is_set
	|| subinterface.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| ydk::is_set(remote_l2_router_id.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (remote_l2_router_id.is_set || is_set(remote_l2_router_id.yfilter)) leaf_name_data.push_back(remote_l2_router_id.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "pseudowire-id" || name == "remote-l2-router-id" || name == "subinterface")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::PseudowireHeadEndData()
    :
    pwhe_intf{YType::str, "pwhe-intf"}
{

    yang_name = "pseudowire-head-end-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::~PseudowireHeadEndData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::has_data() const
{
    return pwhe_intf.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pwhe_intf.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-head-end-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pwhe_intf.is_set || is_set(pwhe_intf.yfilter)) leaf_name_data.push_back(pwhe_intf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pwhe-intf")
    {
        pwhe_intf = value;
        pwhe_intf.value_namespace = name_space;
        pwhe_intf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pwhe-intf")
    {
        pwhe_intf.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pwhe-intf")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::SrAdjSegmentIpv4()
    :
    addr{YType::str, "addr"},
    index_{YType::uint32, "index"},
    intf{YType::str, "intf"},
    type{YType::uint32, "type"}
{

    yang_name = "sr-adj-segment-ipv4"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::~SrAdjSegmentIpv4()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::has_data() const
{
    return addr.is_set
	|| index_.is_set
	|| intf.is_set
	|| type.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-adj-segment-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "index" || name == "intf" || name == "type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::SrAdjSegmentIpv6()
    :
    addr{YType::str, "addr"},
    index_{YType::uint32, "index"},
    intf{YType::str, "intf"},
    type{YType::uint32, "type"}
{

    yang_name = "sr-adj-segment-ipv6"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::~SrAdjSegmentIpv6()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::has_data() const
{
    return addr.is_set
	|| index_.is_set
	|| intf.is_set
	|| type.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-adj-segment-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "index" || name == "intf" || name == "type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::SrPrefixSegment()
    :
    segment_id{YType::uint32, "segment-id"},
    table_id{YType::uint32, "table-id"}
{

    yang_name = "sr-prefix-segment"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::~SrPrefixSegment()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::has_data() const
{
    return segment_id.is_set
	|| table_id.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment_id.yfilter)
	|| ydk::is_set(table_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-prefix-segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_id.is_set || is_set(segment_id.yfilter)) leaf_name_data.push_back(segment_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-id" || name == "table-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding::TeBinding()
    :
    te_identifier{YType::uint32, "te-identifier"},
    te_type{YType::enumeration, "te-type"}
{

    yang_name = "te-binding"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding::~TeBinding()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding::has_data() const
{
    return te_identifier.is_set
	|| te_type.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_identifier.yfilter)
	|| ydk::is_set(te_type.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_identifier.is_set || is_set(te_identifier.yfilter)) leaf_name_data.push_back(te_identifier.get_name_leafdata());
    if (te_type.is_set || is_set(te_type.yfilter)) leaf_name_data.push_back(te_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-identifier" || name == "te-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data::Tev4Data()
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

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data::~Tev4Data()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data::has_data() const
{
    return is_srte.is_set
	|| table_id.is_set
	|| tunnel_dest.is_set
	|| tunnel_id.is_set
	|| tunnel_id_extension.is_set
	|| tunnel_lsp_id.is_set
	|| tunnel_source.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data::has_operation() const
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

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tev4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-srte" || name == "table-id" || name == "tunnel-dest" || name == "tunnel-id" || name == "tunnel-id-extension" || name == "tunnel-lsp-id" || name == "tunnel-source")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::Tev4P2MpData()
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

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::~Tev4P2MpData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::has_data() const
{
    return p2mp_id.is_set
	|| previous_hop.is_set
	|| table_id.is_set
	|| tunnel_id.is_set
	|| tunnel_id_extension.is_set
	|| tunnel_lsp_id.is_set
	|| tunnel_source.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::has_operation() const
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

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tev4p2mp-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-id" || name == "previous-hop" || name == "table-id" || name == "tunnel-id" || name == "tunnel-id-extension" || name == "tunnel-lsp-id" || name == "tunnel-source")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData::TpData()
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

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData::~TpData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData::has_data() const
{
    return dest_global_id.is_set
	|| dest_node_id.is_set
	|| dest_tunnel_id.is_set
	|| lsp_id.is_set
	|| source_global_id.is_set
	|| source_node_id.is_set
	|| source_tunnel_id.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData::has_operation() const
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

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-global-id" || name == "dest-node-id" || name == "dest-tunnel-id" || name == "lsp-id" || name == "source-global-id" || name == "source-node-id" || name == "source-tunnel-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::VrfL3VpnData()
    :
    security_id{YType::uint32, "security-id"},
    table_id{YType::uint32, "table-id"}
{

    yang_name = "vrf-l3vpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::~VrfL3VpnData()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::has_data() const
{
    return security_id.is_set
	|| table_id.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(security_id.yfilter)
	|| ydk::is_set(table_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security-id" || name == "table-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite::LocalLabelRewrite()
    :
    label_data{YType::uint32, "label-data"}
{

    yang_name = "local-label-rewrite"; yang_parent_name = "rewrite-id"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite::~LocalLabelRewrite()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite::has_data() const
{
    for (auto const & leaf : label_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite::has_operation() const
{
    for (auto const & leaf : label_data.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_data.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-label-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_data_name_datas = label_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_data_name_datas.begin(), label_data_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-data")
    {
        label_data.append(value);
    }
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-data")
    {
        label_data.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-data")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::V4Rpf::V4Rpf()
    :
    table_id{YType::uint32, "table-id"},
    v4_rpf_neighbor{YType::str, "v4-rpf-neighbor"}
{

    yang_name = "v4-rpf"; yang_parent_name = "rewrite-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::V4Rpf::~V4Rpf()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::V4Rpf::has_data() const
{
    return table_id.is_set
	|| v4_rpf_neighbor.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::V4Rpf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(v4_rpf_neighbor.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::V4Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-rpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::V4Rpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (v4_rpf_neighbor.is_set || is_set(v4_rpf_neighbor.yfilter)) leaf_name_data.push_back(v4_rpf_neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::V4Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::V4Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::V4Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::V4Rpf::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::V4Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "v4-rpf-neighbor")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::V6Rpf::V6Rpf()
    :
    table_id{YType::uint32, "table-id"},
    v6_rpf_neighbor{YType::str, "v6-rpf-neighbor"}
{

    yang_name = "v6-rpf"; yang_parent_name = "rewrite-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::Rewrite::RewriteTes::RewriteTe::V6Rpf::~V6Rpf()
{
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::V6Rpf::has_data() const
{
    return table_id.is_set
	|| v6_rpf_neighbor.is_set;
}

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::V6Rpf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(v6_rpf_neighbor.yfilter);
}

std::string MplsLsd::Rewrite::RewriteTes::RewriteTe::V6Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v6-rpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteTes::RewriteTe::V6Rpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (v6_rpf_neighbor.is_set || is_set(v6_rpf_neighbor.yfilter)) leaf_name_data.push_back(v6_rpf_neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Rewrite::RewriteTes::RewriteTe::V6Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Rewrite::RewriteTes::RewriteTe::V6Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::Rewrite::RewriteTes::RewriteTe::V6Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteTes::RewriteTe::V6Rpf::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteTes::RewriteTe::V6Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "v6-rpf-neighbor")
        return true;
    return false;
}

MplsLsd::RewriteSummary::RewriteSummary()
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
    ipv4_paths(std::make_shared<MplsLsd::RewriteSummary::Ipv4Paths>())
	,ipv6_paths(std::make_shared<MplsLsd::RewriteSummary::Ipv6Paths>())
{
    ipv4_paths->parent = this;
    ipv6_paths->parent = this;

    yang_name = "rewrite-summary"; yang_parent_name = "mpls-lsd"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLsd::RewriteSummary::~RewriteSummary()
{
}

bool MplsLsd::RewriteSummary::has_data() const
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

bool MplsLsd::RewriteSummary::has_operation() const
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

std::string MplsLsd::RewriteSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::RewriteSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::RewriteSummary::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsLsd::RewriteSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-paths")
    {
        if(ipv4_paths == nullptr)
        {
            ipv4_paths = std::make_shared<MplsLsd::RewriteSummary::Ipv4Paths>();
        }
        return ipv4_paths;
    }

    if(child_yang_name == "ipv6-paths")
    {
        if(ipv6_paths == nullptr)
        {
            ipv6_paths = std::make_shared<MplsLsd::RewriteSummary::Ipv6Paths>();
        }
        return ipv6_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::RewriteSummary::get_children() const
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

void MplsLsd::RewriteSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::RewriteSummary::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::RewriteSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-paths" || name == "ipv6-paths" || name == "num-dmtctefpi" || name == "num-ipv4fpi" || name == "num-ipv6fpi" || name == "num-label-fpi" || name == "num-pw-list-tefpi" || name == "num-rewrite" || name == "num-rewrite-rpf-neighbors" || name == "num-tefpi" || name == "total-dmtc-intf" || name == "total-forwad-update-message" || name == "total-forward-update" || name == "total-ip-sub-paths" || name == "total-ipv4rpf-neighbors" || name == "total-ipv6rpf-neighbors" || name == "total-paths" || name == "total-pw-paths" || name == "total-t-ev4-paths" || name == "total-te-head-paths" || name == "vrf-name-xr")
        return true;
    return false;
}

MplsLsd::RewriteSummary::Ipv4Paths::Ipv4Paths()
    :
    total_backup_paths{YType::uint32, "total-backup-paths"},
    total_paths{YType::uint32, "total-paths"},
    total_pop_lkup_paths{YType::uint32, "total-pop-lkup-paths"},
    total_protected_paths{YType::uint32, "total-protected-paths"},
    total_remote_backup_paths{YType::uint32, "total-remote-backup-paths"}
{

    yang_name = "ipv4-paths"; yang_parent_name = "rewrite-summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLsd::RewriteSummary::Ipv4Paths::~Ipv4Paths()
{
}

bool MplsLsd::RewriteSummary::Ipv4Paths::has_data() const
{
    return total_backup_paths.is_set
	|| total_paths.is_set
	|| total_pop_lkup_paths.is_set
	|| total_protected_paths.is_set
	|| total_remote_backup_paths.is_set;
}

bool MplsLsd::RewriteSummary::Ipv4Paths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_backup_paths.yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_pop_lkup_paths.yfilter)
	|| ydk::is_set(total_protected_paths.yfilter)
	|| ydk::is_set(total_remote_backup_paths.yfilter);
}

std::string MplsLsd::RewriteSummary::Ipv4Paths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::RewriteSummary::Ipv4Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::RewriteSummary::Ipv4Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_backup_paths.is_set || is_set(total_backup_paths.yfilter)) leaf_name_data.push_back(total_backup_paths.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_pop_lkup_paths.is_set || is_set(total_pop_lkup_paths.yfilter)) leaf_name_data.push_back(total_pop_lkup_paths.get_name_leafdata());
    if (total_protected_paths.is_set || is_set(total_protected_paths.yfilter)) leaf_name_data.push_back(total_protected_paths.get_name_leafdata());
    if (total_remote_backup_paths.is_set || is_set(total_remote_backup_paths.yfilter)) leaf_name_data.push_back(total_remote_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::RewriteSummary::Ipv4Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::RewriteSummary::Ipv4Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::RewriteSummary::Ipv4Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::RewriteSummary::Ipv4Paths::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::RewriteSummary::Ipv4Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-backup-paths" || name == "total-paths" || name == "total-pop-lkup-paths" || name == "total-protected-paths" || name == "total-remote-backup-paths")
        return true;
    return false;
}

MplsLsd::RewriteSummary::Ipv6Paths::Ipv6Paths()
    :
    total_backup_paths{YType::uint32, "total-backup-paths"},
    total_paths{YType::uint32, "total-paths"},
    total_pop_lkup_paths{YType::uint32, "total-pop-lkup-paths"},
    total_protected_paths{YType::uint32, "total-protected-paths"},
    total_remote_backup_paths{YType::uint32, "total-remote-backup-paths"}
{

    yang_name = "ipv6-paths"; yang_parent_name = "rewrite-summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLsd::RewriteSummary::Ipv6Paths::~Ipv6Paths()
{
}

bool MplsLsd::RewriteSummary::Ipv6Paths::has_data() const
{
    return total_backup_paths.is_set
	|| total_paths.is_set
	|| total_pop_lkup_paths.is_set
	|| total_protected_paths.is_set
	|| total_remote_backup_paths.is_set;
}

bool MplsLsd::RewriteSummary::Ipv6Paths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_backup_paths.yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_pop_lkup_paths.yfilter)
	|| ydk::is_set(total_protected_paths.yfilter)
	|| ydk::is_set(total_remote_backup_paths.yfilter);
}

std::string MplsLsd::RewriteSummary::Ipv6Paths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::RewriteSummary::Ipv6Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::RewriteSummary::Ipv6Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_backup_paths.is_set || is_set(total_backup_paths.yfilter)) leaf_name_data.push_back(total_backup_paths.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_pop_lkup_paths.is_set || is_set(total_pop_lkup_paths.yfilter)) leaf_name_data.push_back(total_pop_lkup_paths.get_name_leafdata());
    if (total_protected_paths.is_set || is_set(total_protected_paths.yfilter)) leaf_name_data.push_back(total_protected_paths.get_name_leafdata());
    if (total_remote_backup_paths.is_set || is_set(total_remote_backup_paths.yfilter)) leaf_name_data.push_back(total_remote_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::RewriteSummary::Ipv6Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::RewriteSummary::Ipv6Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::RewriteSummary::Ipv6Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::RewriteSummary::Ipv6Paths::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::RewriteSummary::Ipv6Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-backup-paths" || name == "total-paths" || name == "total-pop-lkup-paths" || name == "total-protected-paths" || name == "total-remote-backup-paths")
        return true;
    return false;
}

MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrfs()
{

    yang_name = "rewrite-summary-vrfs"; yang_parent_name = "mpls-lsd"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLsd::RewriteSummaryVrfs::~RewriteSummaryVrfs()
{
}

bool MplsLsd::RewriteSummaryVrfs::has_data() const
{
    for (std::size_t index=0; index<rewrite_summary_vrf.size(); index++)
    {
        if(rewrite_summary_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsd::RewriteSummaryVrfs::has_operation() const
{
    for (std::size_t index=0; index<rewrite_summary_vrf.size(); index++)
    {
        if(rewrite_summary_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsd::RewriteSummaryVrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::RewriteSummaryVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-summary-vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::RewriteSummaryVrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::RewriteSummaryVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf>();
        c->parent = this;
        rewrite_summary_vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::RewriteSummaryVrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rewrite_summary_vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsd::RewriteSummaryVrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::RewriteSummaryVrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::RewriteSummaryVrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rewrite-summary-vrf")
        return true;
    return false;
}

MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::RewriteSummaryVrf()
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
    ipv4_paths(std::make_shared<MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths>())
	,ipv6_paths(std::make_shared<MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths>())
{
    ipv4_paths->parent = this;
    ipv6_paths->parent = this;

    yang_name = "rewrite-summary-vrf"; yang_parent_name = "rewrite-summary-vrfs"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::~RewriteSummaryVrf()
{
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::has_data() const
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

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::has_operation() const
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

std::string MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/rewrite-summary-vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-summary-vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-paths")
    {
        if(ipv4_paths == nullptr)
        {
            ipv4_paths = std::make_shared<MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths>();
        }
        return ipv4_paths;
    }

    if(child_yang_name == "ipv6-paths")
    {
        if(ipv6_paths == nullptr)
        {
            ipv6_paths = std::make_shared<MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths>();
        }
        return ipv6_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::get_children() const
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

void MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-paths" || name == "ipv6-paths" || name == "vrf-name" || name == "num-dmtctefpi" || name == "num-ipv4fpi" || name == "num-ipv6fpi" || name == "num-label-fpi" || name == "num-pw-list-tefpi" || name == "num-rewrite" || name == "num-rewrite-rpf-neighbors" || name == "num-tefpi" || name == "total-dmtc-intf" || name == "total-forwad-update-message" || name == "total-forward-update" || name == "total-ip-sub-paths" || name == "total-ipv4rpf-neighbors" || name == "total-ipv6rpf-neighbors" || name == "total-paths" || name == "total-pw-paths" || name == "total-t-ev4-paths" || name == "total-te-head-paths" || name == "vrf-name-xr")
        return true;
    return false;
}

MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::Ipv4Paths()
    :
    total_backup_paths{YType::uint32, "total-backup-paths"},
    total_paths{YType::uint32, "total-paths"},
    total_pop_lkup_paths{YType::uint32, "total-pop-lkup-paths"},
    total_protected_paths{YType::uint32, "total-protected-paths"},
    total_remote_backup_paths{YType::uint32, "total-remote-backup-paths"}
{

    yang_name = "ipv4-paths"; yang_parent_name = "rewrite-summary-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::~Ipv4Paths()
{
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::has_data() const
{
    return total_backup_paths.is_set
	|| total_paths.is_set
	|| total_pop_lkup_paths.is_set
	|| total_protected_paths.is_set
	|| total_remote_backup_paths.is_set;
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_backup_paths.yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_pop_lkup_paths.yfilter)
	|| ydk::is_set(total_protected_paths.yfilter)
	|| ydk::is_set(total_remote_backup_paths.yfilter);
}

std::string MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_backup_paths.is_set || is_set(total_backup_paths.yfilter)) leaf_name_data.push_back(total_backup_paths.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_pop_lkup_paths.is_set || is_set(total_pop_lkup_paths.yfilter)) leaf_name_data.push_back(total_pop_lkup_paths.get_name_leafdata());
    if (total_protected_paths.is_set || is_set(total_protected_paths.yfilter)) leaf_name_data.push_back(total_protected_paths.get_name_leafdata());
    if (total_remote_backup_paths.is_set || is_set(total_remote_backup_paths.yfilter)) leaf_name_data.push_back(total_remote_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-backup-paths" || name == "total-paths" || name == "total-pop-lkup-paths" || name == "total-protected-paths" || name == "total-remote-backup-paths")
        return true;
    return false;
}

MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::Ipv6Paths()
    :
    total_backup_paths{YType::uint32, "total-backup-paths"},
    total_paths{YType::uint32, "total-paths"},
    total_pop_lkup_paths{YType::uint32, "total-pop-lkup-paths"},
    total_protected_paths{YType::uint32, "total-protected-paths"},
    total_remote_backup_paths{YType::uint32, "total-remote-backup-paths"}
{

    yang_name = "ipv6-paths"; yang_parent_name = "rewrite-summary-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::~Ipv6Paths()
{
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::has_data() const
{
    return total_backup_paths.is_set
	|| total_paths.is_set
	|| total_pop_lkup_paths.is_set
	|| total_protected_paths.is_set
	|| total_remote_backup_paths.is_set;
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_backup_paths.yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_pop_lkup_paths.yfilter)
	|| ydk::is_set(total_protected_paths.yfilter)
	|| ydk::is_set(total_remote_backup_paths.yfilter);
}

std::string MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_backup_paths.is_set || is_set(total_backup_paths.yfilter)) leaf_name_data.push_back(total_backup_paths.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_pop_lkup_paths.is_set || is_set(total_pop_lkup_paths.yfilter)) leaf_name_data.push_back(total_pop_lkup_paths.get_name_leafdata());
    if (total_protected_paths.is_set || is_set(total_protected_paths.yfilter)) leaf_name_data.push_back(total_protected_paths.get_name_leafdata());
    if (total_remote_backup_paths.is_set || is_set(total_remote_backup_paths.yfilter)) leaf_name_data.push_back(total_remote_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-backup-paths" || name == "total-paths" || name == "total-pop-lkup-paths" || name == "total-protected-paths" || name == "total-remote-backup-paths")
        return true;
    return false;
}

MplsLsd::SrlbInconsistency::SrlbInconsistency()
    :
    end_srlb_range{YType::uint32, "end-srlb-range"},
    start_srlb_range{YType::uint32, "start-srlb-range"}
{

    yang_name = "srlb-inconsistency"; yang_parent_name = "mpls-lsd"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLsd::SrlbInconsistency::~SrlbInconsistency()
{
}

bool MplsLsd::SrlbInconsistency::has_data() const
{
    return end_srlb_range.is_set
	|| start_srlb_range.is_set;
}

bool MplsLsd::SrlbInconsistency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_srlb_range.yfilter)
	|| ydk::is_set(start_srlb_range.yfilter);
}

std::string MplsLsd::SrlbInconsistency::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::SrlbInconsistency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlb-inconsistency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::SrlbInconsistency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_srlb_range.is_set || is_set(end_srlb_range.yfilter)) leaf_name_data.push_back(end_srlb_range.get_name_leafdata());
    if (start_srlb_range.is_set || is_set(start_srlb_range.yfilter)) leaf_name_data.push_back(start_srlb_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::SrlbInconsistency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::SrlbInconsistency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsd::SrlbInconsistency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::SrlbInconsistency::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::SrlbInconsistency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-srlb-range" || name == "start-srlb-range")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNodes()
{

    yang_name = "mpls-lsd-nodes"; yang_parent_name = "Cisco-IOS-XR-mpls-lsd-oper"; is_top_level_class = true; has_list_ancestor = false;
}

MplsLsdNodes::~MplsLsdNodes()
{
}

bool MplsLsdNodes::has_data() const
{
    for (std::size_t index=0; index<mpls_lsd_node.size(); index++)
    {
        if(mpls_lsd_node[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsdNodes::has_operation() const
{
    for (std::size_t index=0; index<mpls_lsd_node.size(); index++)
    {
        if(mpls_lsd_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsdNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd-nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-lsd-node")
    {
        for(auto const & c : mpls_lsd_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsdNodes::MplsLsdNode>();
        c->parent = this;
        mpls_lsd_node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mpls_lsd_node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsdNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsdNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MplsLsdNodes::clone_ptr() const
{
    return std::make_shared<MplsLsdNodes>();
}

std::string MplsLsdNodes::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsLsdNodes::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsLsdNodes::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsLsdNodes::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MplsLsdNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-lsd-node")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::MplsLsdNode()
    :
    node_name{YType::str, "node-name"}
    	,
    applications(std::make_shared<MplsLsdNodes::MplsLsdNode::Applications>())
	,clients(std::make_shared<MplsLsdNodes::MplsLsdNode::Clients>())
	,frr_database(std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase>())
	,interfaces(std::make_shared<MplsLsdNodes::MplsLsdNode::Interfaces>())
	,label_range(std::make_shared<MplsLsdNodes::MplsLsdNode::LabelRange>())
	,label_summary(std::make_shared<MplsLsdNodes::MplsLsdNode::LabelSummary>())
	,label_summary_vrfs(std::make_shared<MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs>())
	,labels(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels>())
	,rewrite(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite>())
	,rewrite_summary(std::make_shared<MplsLsdNodes::MplsLsdNode::RewriteSummary>())
	,rewrite_summary_vrfs(std::make_shared<MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs>())
	,srlb_inconsistency(std::make_shared<MplsLsdNodes::MplsLsdNode::SrlbInconsistency>())
{
    applications->parent = this;
    clients->parent = this;
    frr_database->parent = this;
    interfaces->parent = this;
    label_range->parent = this;
    label_summary->parent = this;
    label_summary_vrfs->parent = this;
    labels->parent = this;
    rewrite->parent = this;
    rewrite_summary->parent = this;
    rewrite_summary_vrfs->parent = this;
    srlb_inconsistency->parent = this;

    yang_name = "mpls-lsd-node"; yang_parent_name = "mpls-lsd-nodes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLsdNodes::MplsLsdNode::~MplsLsdNode()
{
}

bool MplsLsdNodes::MplsLsdNode::has_data() const
{
    return node_name.is_set
	|| (applications !=  nullptr && applications->has_data())
	|| (clients !=  nullptr && clients->has_data())
	|| (frr_database !=  nullptr && frr_database->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (label_range !=  nullptr && label_range->has_data())
	|| (label_summary !=  nullptr && label_summary->has_data())
	|| (label_summary_vrfs !=  nullptr && label_summary_vrfs->has_data())
	|| (labels !=  nullptr && labels->has_data())
	|| (rewrite !=  nullptr && rewrite->has_data())
	|| (rewrite_summary !=  nullptr && rewrite_summary->has_data())
	|| (rewrite_summary_vrfs !=  nullptr && rewrite_summary_vrfs->has_data())
	|| (srlb_inconsistency !=  nullptr && srlb_inconsistency->has_data());
}

bool MplsLsdNodes::MplsLsdNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (applications !=  nullptr && applications->has_operation())
	|| (clients !=  nullptr && clients->has_operation())
	|| (frr_database !=  nullptr && frr_database->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (label_range !=  nullptr && label_range->has_operation())
	|| (label_summary !=  nullptr && label_summary->has_operation())
	|| (label_summary_vrfs !=  nullptr && label_summary_vrfs->has_operation())
	|| (labels !=  nullptr && labels->has_operation())
	|| (rewrite !=  nullptr && rewrite->has_operation())
	|| (rewrite_summary !=  nullptr && rewrite_summary->has_operation())
	|| (rewrite_summary_vrfs !=  nullptr && rewrite_summary_vrfs->has_operation())
	|| (srlb_inconsistency !=  nullptr && srlb_inconsistency->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd-nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsdNodes::MplsLsdNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-lsd-node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "applications")
    {
        if(applications == nullptr)
        {
            applications = std::make_shared<MplsLsdNodes::MplsLsdNode::Applications>();
        }
        return applications;
    }

    if(child_yang_name == "clients")
    {
        if(clients == nullptr)
        {
            clients = std::make_shared<MplsLsdNodes::MplsLsdNode::Clients>();
        }
        return clients;
    }

    if(child_yang_name == "frr-database")
    {
        if(frr_database == nullptr)
        {
            frr_database = std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase>();
        }
        return frr_database;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<MplsLsdNodes::MplsLsdNode::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "label-range")
    {
        if(label_range == nullptr)
        {
            label_range = std::make_shared<MplsLsdNodes::MplsLsdNode::LabelRange>();
        }
        return label_range;
    }

    if(child_yang_name == "label-summary")
    {
        if(label_summary == nullptr)
        {
            label_summary = std::make_shared<MplsLsdNodes::MplsLsdNode::LabelSummary>();
        }
        return label_summary;
    }

    if(child_yang_name == "label-summary-vrfs")
    {
        if(label_summary_vrfs == nullptr)
        {
            label_summary_vrfs = std::make_shared<MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs>();
        }
        return label_summary_vrfs;
    }

    if(child_yang_name == "labels")
    {
        if(labels == nullptr)
        {
            labels = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels>();
        }
        return labels;
    }

    if(child_yang_name == "rewrite")
    {
        if(rewrite == nullptr)
        {
            rewrite = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite>();
        }
        return rewrite;
    }

    if(child_yang_name == "rewrite-summary")
    {
        if(rewrite_summary == nullptr)
        {
            rewrite_summary = std::make_shared<MplsLsdNodes::MplsLsdNode::RewriteSummary>();
        }
        return rewrite_summary;
    }

    if(child_yang_name == "rewrite-summary-vrfs")
    {
        if(rewrite_summary_vrfs == nullptr)
        {
            rewrite_summary_vrfs = std::make_shared<MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs>();
        }
        return rewrite_summary_vrfs;
    }

    if(child_yang_name == "srlb-inconsistency")
    {
        if(srlb_inconsistency == nullptr)
        {
            srlb_inconsistency = std::make_shared<MplsLsdNodes::MplsLsdNode::SrlbInconsistency>();
        }
        return srlb_inconsistency;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(applications != nullptr)
    {
        children["applications"] = applications;
    }

    if(clients != nullptr)
    {
        children["clients"] = clients;
    }

    if(frr_database != nullptr)
    {
        children["frr-database"] = frr_database;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(label_range != nullptr)
    {
        children["label-range"] = label_range;
    }

    if(label_summary != nullptr)
    {
        children["label-summary"] = label_summary;
    }

    if(label_summary_vrfs != nullptr)
    {
        children["label-summary-vrfs"] = label_summary_vrfs;
    }

    if(labels != nullptr)
    {
        children["labels"] = labels;
    }

    if(rewrite != nullptr)
    {
        children["rewrite"] = rewrite;
    }

    if(rewrite_summary != nullptr)
    {
        children["rewrite-summary"] = rewrite_summary;
    }

    if(rewrite_summary_vrfs != nullptr)
    {
        children["rewrite-summary-vrfs"] = rewrite_summary_vrfs;
    }

    if(srlb_inconsistency != nullptr)
    {
        children["srlb-inconsistency"] = srlb_inconsistency;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "applications" || name == "clients" || name == "frr-database" || name == "interfaces" || name == "label-range" || name == "label-summary" || name == "label-summary-vrfs" || name == "labels" || name == "rewrite" || name == "rewrite-summary" || name == "rewrite-summary-vrfs" || name == "srlb-inconsistency" || name == "node-name")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Applications::Applications()
{

    yang_name = "applications"; yang_parent_name = "mpls-lsd-node"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Applications::~Applications()
{
}

bool MplsLsdNodes::MplsLsdNode::Applications::has_data() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsdNodes::MplsLsdNode::Applications::has_operation() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Applications::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "applications";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Applications::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Applications::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        for(auto const & c : application)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsdNodes::MplsLsdNode::Applications::Application>();
        c->parent = this;
        application.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Applications::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : application)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Applications::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsdNodes::MplsLsdNode::Applications::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsdNodes::MplsLsdNode::Applications::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Applications::Application::Application()
    :
    application_name{YType::str, "application-name"},
    app_disconnect_time{YType::uint64, "app-disconnect-time"},
    app_flow_controlled{YType::int32, "app-flow-controlled"},
    app_reg_time{YType::uint64, "app-reg-time"},
    application_instance{YType::str, "application-instance"},
    application_name_xr{YType::str, "application-name-xr"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_state{YType::enumeration, "application-state"},
    application_type{YType::enumeration, "application-type"},
    flow_ctrl_clr_time{YType::uint64, "flow-ctrl-clr-time"},
    flow_ctrl_time{YType::uint64, "flow-ctrl-time"},
    go_act_ts{YType::uint64, "go-act-ts"},
    node_id{YType::str, "node-id"},
    recovery_time_elapsed_seconds{YType::uint32, "recovery-time-elapsed-seconds"},
    recovery_time_register_seconds{YType::uint32, "recovery-time-register-seconds"},
    recovery_time_remaining_seconds{YType::uint32, "recovery-time-remaining-seconds"}
    	,
    application_statistics(std::make_shared<MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics>())
{
    application_statistics->parent = this;

    yang_name = "application"; yang_parent_name = "applications"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Applications::Application::~Application()
{
}

bool MplsLsdNodes::MplsLsdNode::Applications::Application::has_data() const
{
    return application_name.is_set
	|| app_disconnect_time.is_set
	|| app_flow_controlled.is_set
	|| app_reg_time.is_set
	|| application_instance.is_set
	|| application_name_xr.is_set
	|| application_role_primary.is_set
	|| application_state.is_set
	|| application_type.is_set
	|| flow_ctrl_clr_time.is_set
	|| flow_ctrl_time.is_set
	|| go_act_ts.is_set
	|| node_id.is_set
	|| recovery_time_elapsed_seconds.is_set
	|| recovery_time_register_seconds.is_set
	|| recovery_time_remaining_seconds.is_set
	|| (application_statistics !=  nullptr && application_statistics->has_data());
}

bool MplsLsdNodes::MplsLsdNode::Applications::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| ydk::is_set(app_disconnect_time.yfilter)
	|| ydk::is_set(app_flow_controlled.yfilter)
	|| ydk::is_set(app_reg_time.yfilter)
	|| ydk::is_set(application_instance.yfilter)
	|| ydk::is_set(application_name_xr.yfilter)
	|| ydk::is_set(application_role_primary.yfilter)
	|| ydk::is_set(application_state.yfilter)
	|| ydk::is_set(application_type.yfilter)
	|| ydk::is_set(flow_ctrl_clr_time.yfilter)
	|| ydk::is_set(flow_ctrl_time.yfilter)
	|| ydk::is_set(go_act_ts.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(recovery_time_elapsed_seconds.yfilter)
	|| ydk::is_set(recovery_time_register_seconds.yfilter)
	|| ydk::is_set(recovery_time_remaining_seconds.yfilter)
	|| (application_statistics !=  nullptr && application_statistics->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::Applications::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application" <<"[application-name='" <<application_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Applications::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (app_disconnect_time.is_set || is_set(app_disconnect_time.yfilter)) leaf_name_data.push_back(app_disconnect_time.get_name_leafdata());
    if (app_flow_controlled.is_set || is_set(app_flow_controlled.yfilter)) leaf_name_data.push_back(app_flow_controlled.get_name_leafdata());
    if (app_reg_time.is_set || is_set(app_reg_time.yfilter)) leaf_name_data.push_back(app_reg_time.get_name_leafdata());
    if (application_instance.is_set || is_set(application_instance.yfilter)) leaf_name_data.push_back(application_instance.get_name_leafdata());
    if (application_name_xr.is_set || is_set(application_name_xr.yfilter)) leaf_name_data.push_back(application_name_xr.get_name_leafdata());
    if (application_role_primary.is_set || is_set(application_role_primary.yfilter)) leaf_name_data.push_back(application_role_primary.get_name_leafdata());
    if (application_state.is_set || is_set(application_state.yfilter)) leaf_name_data.push_back(application_state.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (flow_ctrl_clr_time.is_set || is_set(flow_ctrl_clr_time.yfilter)) leaf_name_data.push_back(flow_ctrl_clr_time.get_name_leafdata());
    if (flow_ctrl_time.is_set || is_set(flow_ctrl_time.yfilter)) leaf_name_data.push_back(flow_ctrl_time.get_name_leafdata());
    if (go_act_ts.is_set || is_set(go_act_ts.yfilter)) leaf_name_data.push_back(go_act_ts.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (recovery_time_elapsed_seconds.is_set || is_set(recovery_time_elapsed_seconds.yfilter)) leaf_name_data.push_back(recovery_time_elapsed_seconds.get_name_leafdata());
    if (recovery_time_register_seconds.is_set || is_set(recovery_time_register_seconds.yfilter)) leaf_name_data.push_back(recovery_time_register_seconds.get_name_leafdata());
    if (recovery_time_remaining_seconds.is_set || is_set(recovery_time_remaining_seconds.yfilter)) leaf_name_data.push_back(recovery_time_remaining_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Applications::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-statistics")
    {
        if(application_statistics == nullptr)
        {
            application_statistics = std::make_shared<MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics>();
        }
        return application_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Applications::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application_statistics != nullptr)
    {
        children["application-statistics"] = application_statistics;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Applications::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "app-disconnect-time")
    {
        app_disconnect_time = value;
        app_disconnect_time.value_namespace = name_space;
        app_disconnect_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "app-flow-controlled")
    {
        app_flow_controlled = value;
        app_flow_controlled.value_namespace = name_space;
        app_flow_controlled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "app-reg-time")
    {
        app_reg_time = value;
        app_reg_time.value_namespace = name_space;
        app_reg_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-instance")
    {
        application_instance = value;
        application_instance.value_namespace = name_space;
        application_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-name-xr")
    {
        application_name_xr = value;
        application_name_xr.value_namespace = name_space;
        application_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary = value;
        application_role_primary.value_namespace = name_space;
        application_role_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-state")
    {
        application_state = value;
        application_state.value_namespace = name_space;
        application_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-type")
    {
        application_type = value;
        application_type.value_namespace = name_space;
        application_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-ctrl-clr-time")
    {
        flow_ctrl_clr_time = value;
        flow_ctrl_clr_time.value_namespace = name_space;
        flow_ctrl_clr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-ctrl-time")
    {
        flow_ctrl_time = value;
        flow_ctrl_time.value_namespace = name_space;
        flow_ctrl_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "go-act-ts")
    {
        go_act_ts = value;
        go_act_ts.value_namespace = name_space;
        go_act_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-time-elapsed-seconds")
    {
        recovery_time_elapsed_seconds = value;
        recovery_time_elapsed_seconds.value_namespace = name_space;
        recovery_time_elapsed_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-time-register-seconds")
    {
        recovery_time_register_seconds = value;
        recovery_time_register_seconds.value_namespace = name_space;
        recovery_time_register_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-time-remaining-seconds")
    {
        recovery_time_remaining_seconds = value;
        recovery_time_remaining_seconds.value_namespace = name_space;
        recovery_time_remaining_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Applications::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
    if(value_path == "app-disconnect-time")
    {
        app_disconnect_time.yfilter = yfilter;
    }
    if(value_path == "app-flow-controlled")
    {
        app_flow_controlled.yfilter = yfilter;
    }
    if(value_path == "app-reg-time")
    {
        app_reg_time.yfilter = yfilter;
    }
    if(value_path == "application-instance")
    {
        application_instance.yfilter = yfilter;
    }
    if(value_path == "application-name-xr")
    {
        application_name_xr.yfilter = yfilter;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary.yfilter = yfilter;
    }
    if(value_path == "application-state")
    {
        application_state.yfilter = yfilter;
    }
    if(value_path == "application-type")
    {
        application_type.yfilter = yfilter;
    }
    if(value_path == "flow-ctrl-clr-time")
    {
        flow_ctrl_clr_time.yfilter = yfilter;
    }
    if(value_path == "flow-ctrl-time")
    {
        flow_ctrl_time.yfilter = yfilter;
    }
    if(value_path == "go-act-ts")
    {
        go_act_ts.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "recovery-time-elapsed-seconds")
    {
        recovery_time_elapsed_seconds.yfilter = yfilter;
    }
    if(value_path == "recovery-time-register-seconds")
    {
        recovery_time_register_seconds.yfilter = yfilter;
    }
    if(value_path == "recovery-time-remaining-seconds")
    {
        recovery_time_remaining_seconds.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Applications::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-statistics" || name == "application-name" || name == "app-disconnect-time" || name == "app-flow-controlled" || name == "app-reg-time" || name == "application-instance" || name == "application-name-xr" || name == "application-role-primary" || name == "application-state" || name == "application-type" || name == "flow-ctrl-clr-time" || name == "flow-ctrl-time" || name == "go-act-ts" || name == "node-id" || name == "recovery-time-elapsed-seconds" || name == "recovery-time-register-seconds" || name == "recovery-time-remaining-seconds")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::ApplicationStatistics()
    :
    connect_count{YType::uint32, "connect-count"},
    interface_enable{YType::uint32, "interface-enable"},
    interface_enable_pending{YType::uint32, "interface-enable-pending"},
    label_context_count{YType::uint32, "label-context-count"},
    label_context_pending_count{YType::uint32, "label-context-pending-count"}
    	,
    connected(std::make_shared<MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected>())
{
    connected->parent = this;

    yang_name = "application-statistics"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::~ApplicationStatistics()
{
}

bool MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::has_data() const
{
    for (auto const & leaf : label_context_count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : label_context_pending_count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return connect_count.is_set
	|| interface_enable.is_set
	|| interface_enable_pending.is_set
	|| (connected !=  nullptr && connected->has_data());
}

bool MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::has_operation() const
{
    for (auto const & leaf : label_context_count.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : label_context_pending_count.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(connect_count.yfilter)
	|| ydk::is_set(interface_enable.yfilter)
	|| ydk::is_set(interface_enable_pending.yfilter)
	|| ydk::is_set(label_context_count.yfilter)
	|| ydk::is_set(label_context_pending_count.yfilter)
	|| (connected !=  nullptr && connected->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_count.is_set || is_set(connect_count.yfilter)) leaf_name_data.push_back(connect_count.get_name_leafdata());
    if (interface_enable.is_set || is_set(interface_enable.yfilter)) leaf_name_data.push_back(interface_enable.get_name_leafdata());
    if (interface_enable_pending.is_set || is_set(interface_enable_pending.yfilter)) leaf_name_data.push_back(interface_enable_pending.get_name_leafdata());

    auto label_context_count_name_datas = label_context_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_context_count_name_datas.begin(), label_context_count_name_datas.end());
    auto label_context_pending_count_name_datas = label_context_pending_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_context_pending_count_name_datas.begin(), label_context_pending_count_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected>();
        }
        return connected;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connect-count")
    {
        connect_count = value;
        connect_count.value_namespace = name_space;
        connect_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-enable")
    {
        interface_enable = value;
        interface_enable.value_namespace = name_space;
        interface_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-enable-pending")
    {
        interface_enable_pending = value;
        interface_enable_pending.value_namespace = name_space;
        interface_enable_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-context-count")
    {
        label_context_count.append(value);
    }
    if(value_path == "label-context-pending-count")
    {
        label_context_pending_count.append(value);
    }
}

void MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connect-count")
    {
        connect_count.yfilter = yfilter;
    }
    if(value_path == "interface-enable")
    {
        interface_enable.yfilter = yfilter;
    }
    if(value_path == "interface-enable-pending")
    {
        interface_enable_pending.yfilter = yfilter;
    }
    if(value_path == "label-context-count")
    {
        label_context_count.yfilter = yfilter;
    }
    if(value_path == "label-context-pending-count")
    {
        label_context_pending_count.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected" || name == "connect-count" || name == "interface-enable" || name == "interface-enable-pending" || name == "label-context-count" || name == "label-context-pending-count")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected::Connected()
    :
    error_msg_count{YType::uint32, "error-msg-count"},
    oor_label_count{YType::uint32, "oor-label-count"},
    operation_msg_count{YType::uint32, "operation-msg-count"},
    rt_set_msg_count{YType::uint32, "rt-set-msg-count"}
{

    yang_name = "connected"; yang_parent_name = "application-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected::~Connected()
{
}

bool MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected::has_data() const
{
    return error_msg_count.is_set
	|| oor_label_count.is_set
	|| operation_msg_count.is_set
	|| rt_set_msg_count.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_msg_count.yfilter)
	|| ydk::is_set(oor_label_count.yfilter)
	|| ydk::is_set(operation_msg_count.yfilter)
	|| ydk::is_set(rt_set_msg_count.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_msg_count.is_set || is_set(error_msg_count.yfilter)) leaf_name_data.push_back(error_msg_count.get_name_leafdata());
    if (oor_label_count.is_set || is_set(oor_label_count.yfilter)) leaf_name_data.push_back(oor_label_count.get_name_leafdata());
    if (operation_msg_count.is_set || is_set(operation_msg_count.yfilter)) leaf_name_data.push_back(operation_msg_count.get_name_leafdata());
    if (rt_set_msg_count.is_set || is_set(rt_set_msg_count.yfilter)) leaf_name_data.push_back(rt_set_msg_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-msg-count")
    {
        error_msg_count = value;
        error_msg_count.value_namespace = name_space;
        error_msg_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-label-count")
    {
        oor_label_count = value;
        oor_label_count.value_namespace = name_space;
        oor_label_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-msg-count")
    {
        operation_msg_count = value;
        operation_msg_count.value_namespace = name_space;
        operation_msg_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-set-msg-count")
    {
        rt_set_msg_count = value;
        rt_set_msg_count.value_namespace = name_space;
        rt_set_msg_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-msg-count")
    {
        error_msg_count.yfilter = yfilter;
    }
    if(value_path == "oor-label-count")
    {
        oor_label_count.yfilter = yfilter;
    }
    if(value_path == "operation-msg-count")
    {
        operation_msg_count.yfilter = yfilter;
    }
    if(value_path == "rt-set-msg-count")
    {
        rt_set_msg_count.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-msg-count" || name == "oor-label-count" || name == "operation-msg-count" || name == "rt-set-msg-count")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Clients::Clients()
{

    yang_name = "clients"; yang_parent_name = "mpls-lsd-node"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Clients::~Clients()
{
}

bool MplsLsdNodes::MplsLsdNode::Clients::has_data() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsdNodes::MplsLsdNode::Clients::has_operation() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Clients::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        for(auto const & c : client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsdNodes::MplsLsdNode::Clients::Client>();
        c->parent = this;
        client.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Clients::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Clients::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsdNodes::MplsLsdNode::Clients::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsdNodes::MplsLsdNode::Clients::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Clients::Client::Client()
    :
    client_name{YType::str, "client-name"},
    client_index{YType::uint32, "client-index"},
    node_id{YType::str, "node-id"}
    	,
    client_union(std::make_shared<MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion>())
{
    client_union->parent = this;

    yang_name = "client"; yang_parent_name = "clients"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Clients::Client::~Client()
{
}

bool MplsLsdNodes::MplsLsdNode::Clients::Client::has_data() const
{
    return client_name.is_set
	|| client_index.is_set
	|| node_id.is_set
	|| (client_union !=  nullptr && client_union->has_data());
}

bool MplsLsdNodes::MplsLsdNode::Clients::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_name.yfilter)
	|| ydk::is_set(client_index.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (client_union !=  nullptr && client_union->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::Clients::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client" <<"[client-name='" <<client_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Clients::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (client_index.is_set || is_set(client_index.yfilter)) leaf_name_data.push_back(client_index.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Clients::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-union")
    {
        if(client_union == nullptr)
        {
            client_union = std::make_shared<MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion>();
        }
        return client_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Clients::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_union != nullptr)
    {
        children["client-union"] = client_union;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Clients::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-name")
    {
        client_name = value;
        client_name.value_namespace = name_space;
        client_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-index")
    {
        client_index = value;
        client_index.value_namespace = name_space;
        client_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Clients::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-name")
    {
        client_name.yfilter = yfilter;
    }
    if(value_path == "client-index")
    {
        client_index.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Clients::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-union" || name == "client-name" || name == "client-index" || name == "node-id")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::ClientUnion()
    :
    lsd_client_type{YType::enumeration, "lsd-client-type"}
    	,
    application(std::make_shared<MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::Application>())
	,bcdl_agent(std::make_shared<MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::BcdlAgent>())
{
    application->parent = this;
    bcdl_agent->parent = this;

    yang_name = "client-union"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::~ClientUnion()
{
}

bool MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::has_data() const
{
    return lsd_client_type.is_set
	|| (application !=  nullptr && application->has_data())
	|| (bcdl_agent !=  nullptr && bcdl_agent->has_data());
}

bool MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsd_client_type.yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (bcdl_agent !=  nullptr && bcdl_agent->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsd_client_type.is_set || is_set(lsd_client_type.yfilter)) leaf_name_data.push_back(lsd_client_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::Application>();
        }
        return application;
    }

    if(child_yang_name == "bcdl-agent")
    {
        if(bcdl_agent == nullptr)
        {
            bcdl_agent = std::make_shared<MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::BcdlAgent>();
        }
        return bcdl_agent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(bcdl_agent != nullptr)
    {
        children["bcdl-agent"] = bcdl_agent;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsd-client-type")
    {
        lsd_client_type = value;
        lsd_client_type.value_namespace = name_space;
        lsd_client_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsd-client-type")
    {
        lsd_client_type.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bcdl-agent" || name == "lsd-client-type")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::Application::Application()
    :
    application_instance{YType::str, "application-instance"},
    application_name{YType::str, "application-name"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_type{YType::enumeration, "application-type"}
{

    yang_name = "application"; yang_parent_name = "client-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::Application::~Application()
{
}

bool MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::Application::has_data() const
{
    return application_instance.is_set
	|| application_name.is_set
	|| application_role_primary.is_set
	|| application_type.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_instance.yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| ydk::is_set(application_role_primary.yfilter)
	|| ydk::is_set(application_type.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_instance.is_set || is_set(application_instance.yfilter)) leaf_name_data.push_back(application_instance.get_name_leafdata());
    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (application_role_primary.is_set || is_set(application_role_primary.yfilter)) leaf_name_data.push_back(application_role_primary.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-instance")
    {
        application_instance = value;
        application_instance.value_namespace = name_space;
        application_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary = value;
        application_role_primary.value_namespace = name_space;
        application_role_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-type")
    {
        application_type = value;
        application_type.value_namespace = name_space;
        application_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-instance")
    {
        application_instance.yfilter = yfilter;
    }
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary.yfilter = yfilter;
    }
    if(value_path == "application-type")
    {
        application_type.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-instance" || name == "application-name" || name == "application-role-primary" || name == "application-type")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::BcdlAgent::BcdlAgent()
    :
    client_conn_index{YType::int32, "client-conn-index"},
    parent_client_conn_index{YType::int32, "parent-client-conn-index"}
{

    yang_name = "bcdl-agent"; yang_parent_name = "client-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::BcdlAgent::~BcdlAgent()
{
}

bool MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::BcdlAgent::has_data() const
{
    return client_conn_index.is_set
	|| parent_client_conn_index.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::BcdlAgent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_conn_index.yfilter)
	|| ydk::is_set(parent_client_conn_index.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::BcdlAgent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bcdl-agent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::BcdlAgent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_conn_index.is_set || is_set(client_conn_index.yfilter)) leaf_name_data.push_back(client_conn_index.get_name_leafdata());
    if (parent_client_conn_index.is_set || is_set(parent_client_conn_index.yfilter)) leaf_name_data.push_back(parent_client_conn_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::BcdlAgent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::BcdlAgent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::BcdlAgent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-conn-index")
    {
        client_conn_index = value;
        client_conn_index.value_namespace = name_space;
        client_conn_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-client-conn-index")
    {
        parent_client_conn_index = value;
        parent_client_conn_index.value_namespace = name_space;
        parent_client_conn_index.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::BcdlAgent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-conn-index")
    {
        client_conn_index.yfilter = yfilter;
    }
    if(value_path == "parent-client-conn-index")
    {
        parent_client_conn_index.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::BcdlAgent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-conn-index" || name == "parent-client-conn-index")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::FrrDatabase()
    :
    summary_protected_interfaces(std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces>())
	,tunnel_head_summary(std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeadSummary>())
	,tunnel_heads(std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads>())
	,tunnel_midpoint_summary(std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpointSummary>())
	,tunnel_midpoints(std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints>())
	,tunnel_summary(std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelSummary>())
{
    summary_protected_interfaces->parent = this;
    tunnel_head_summary->parent = this;
    tunnel_heads->parent = this;
    tunnel_midpoint_summary->parent = this;
    tunnel_midpoints->parent = this;
    tunnel_summary->parent = this;

    yang_name = "frr-database"; yang_parent_name = "mpls-lsd-node"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::~FrrDatabase()
{
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::has_data() const
{
    return (summary_protected_interfaces !=  nullptr && summary_protected_interfaces->has_data())
	|| (tunnel_head_summary !=  nullptr && tunnel_head_summary->has_data())
	|| (tunnel_heads !=  nullptr && tunnel_heads->has_data())
	|| (tunnel_midpoint_summary !=  nullptr && tunnel_midpoint_summary->has_data())
	|| (tunnel_midpoints !=  nullptr && tunnel_midpoints->has_data())
	|| (tunnel_summary !=  nullptr && tunnel_summary->has_data());
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::has_operation() const
{
    return is_set(yfilter)
	|| (summary_protected_interfaces !=  nullptr && summary_protected_interfaces->has_operation())
	|| (tunnel_head_summary !=  nullptr && tunnel_head_summary->has_operation())
	|| (tunnel_heads !=  nullptr && tunnel_heads->has_operation())
	|| (tunnel_midpoint_summary !=  nullptr && tunnel_midpoint_summary->has_operation())
	|| (tunnel_midpoints !=  nullptr && tunnel_midpoints->has_operation())
	|| (tunnel_summary !=  nullptr && tunnel_summary->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::FrrDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::FrrDatabase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::FrrDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-protected-interfaces")
    {
        if(summary_protected_interfaces == nullptr)
        {
            summary_protected_interfaces = std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces>();
        }
        return summary_protected_interfaces;
    }

    if(child_yang_name == "tunnel-head-summary")
    {
        if(tunnel_head_summary == nullptr)
        {
            tunnel_head_summary = std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeadSummary>();
        }
        return tunnel_head_summary;
    }

    if(child_yang_name == "tunnel-heads")
    {
        if(tunnel_heads == nullptr)
        {
            tunnel_heads = std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads>();
        }
        return tunnel_heads;
    }

    if(child_yang_name == "tunnel-midpoint-summary")
    {
        if(tunnel_midpoint_summary == nullptr)
        {
            tunnel_midpoint_summary = std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpointSummary>();
        }
        return tunnel_midpoint_summary;
    }

    if(child_yang_name == "tunnel-midpoints")
    {
        if(tunnel_midpoints == nullptr)
        {
            tunnel_midpoints = std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints>();
        }
        return tunnel_midpoints;
    }

    if(child_yang_name == "tunnel-summary")
    {
        if(tunnel_summary == nullptr)
        {
            tunnel_summary = std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelSummary>();
        }
        return tunnel_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::FrrDatabase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(summary_protected_interfaces != nullptr)
    {
        children["summary-protected-interfaces"] = summary_protected_interfaces;
    }

    if(tunnel_head_summary != nullptr)
    {
        children["tunnel-head-summary"] = tunnel_head_summary;
    }

    if(tunnel_heads != nullptr)
    {
        children["tunnel-heads"] = tunnel_heads;
    }

    if(tunnel_midpoint_summary != nullptr)
    {
        children["tunnel-midpoint-summary"] = tunnel_midpoint_summary;
    }

    if(tunnel_midpoints != nullptr)
    {
        children["tunnel-midpoints"] = tunnel_midpoints;
    }

    if(tunnel_summary != nullptr)
    {
        children["tunnel-summary"] = tunnel_summary;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-protected-interfaces" || name == "tunnel-head-summary" || name == "tunnel-heads" || name == "tunnel-midpoint-summary" || name == "tunnel-midpoints" || name == "tunnel-summary")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterfaces()
{

    yang_name = "summary-protected-interfaces"; yang_parent_name = "frr-database"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::~SummaryProtectedInterfaces()
{
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::has_data() const
{
    for (std::size_t index=0; index<summary_protected_interface.size(); index++)
    {
        if(summary_protected_interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::has_operation() const
{
    for (std::size_t index=0; index<summary_protected_interface.size(); index++)
    {
        if(summary_protected_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-protected-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-protected-interface")
    {
        for(auto const & c : summary_protected_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface>();
        c->parent = this;
        summary_protected_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : summary_protected_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-protected-interface")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface::SummaryProtectedInterface()
    :
    interface_name{YType::str, "interface-name"},
    active{YType::uint32, "active"},
    igp{YType::uint32, "igp"},
    partial{YType::uint32, "partial"},
    ready{YType::uint32, "ready"}
{

    yang_name = "summary-protected-interface"; yang_parent_name = "summary-protected-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface::~SummaryProtectedInterface()
{
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface::has_data() const
{
    return interface_name.is_set
	|| active.is_set
	|| igp.is_set
	|| partial.is_set
	|| ready.is_set;
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(igp.yfilter)
	|| ydk::is_set(partial.yfilter)
	|| ydk::is_set(ready.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-protected-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (igp.is_set || is_set(igp.yfilter)) leaf_name_data.push_back(igp.get_name_leafdata());
    if (partial.is_set || is_set(partial.yfilter)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp")
    {
        igp = value;
        igp.value_namespace = name_space;
        igp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial")
    {
        partial = value;
        partial.value_namespace = name_space;
        partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "igp")
    {
        igp.yfilter = yfilter;
    }
    if(value_path == "partial")
    {
        partial.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "active" || name == "igp" || name == "partial" || name == "ready")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeadSummary::TunnelHeadSummary()
    :
    active{YType::uint32, "active"},
    igp{YType::uint32, "igp"},
    partial{YType::uint32, "partial"},
    ready{YType::uint32, "ready"}
{

    yang_name = "tunnel-head-summary"; yang_parent_name = "frr-database"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeadSummary::~TunnelHeadSummary()
{
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeadSummary::has_data() const
{
    return active.is_set
	|| igp.is_set
	|| partial.is_set
	|| ready.is_set;
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeadSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(igp.yfilter)
	|| ydk::is_set(partial.yfilter)
	|| ydk::is_set(ready.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeadSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-head-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeadSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (igp.is_set || is_set(igp.yfilter)) leaf_name_data.push_back(igp.get_name_leafdata());
    if (partial.is_set || is_set(partial.yfilter)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeadSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeadSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeadSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp")
    {
        igp = value;
        igp.value_namespace = name_space;
        igp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial")
    {
        partial = value;
        partial.value_namespace = name_space;
        partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeadSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "igp")
    {
        igp.yfilter = yfilter;
    }
    if(value_path == "partial")
    {
        partial.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeadSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "igp" || name == "partial" || name == "ready")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHeads()
{

    yang_name = "tunnel-heads"; yang_parent_name = "frr-database"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::~TunnelHeads()
{
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::has_data() const
{
    for (std::size_t index=0; index<tunnel_head.size(); index++)
    {
        if(tunnel_head[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::has_operation() const
{
    for (std::size_t index=0; index<tunnel_head.size(); index++)
    {
        if(tunnel_head[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-heads";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-head")
    {
        for(auto const & c : tunnel_head)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead>();
        c->parent = this;
        tunnel_head.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tunnel_head)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-head")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::TunnelHead()
    :
    interface_name{YType::str, "interface-name"},
    entry_frr_state{YType::enumeration, "entry-frr-state"},
    input_label{YType::uint32, "input-label"},
    tunnel_interface{YType::str, "tunnel-interface"}
    	,
    frr_entry_id(std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId>())
{
    frr_entry_id->parent = this;

    yang_name = "tunnel-head"; yang_parent_name = "tunnel-heads"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::~TunnelHead()
{
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::has_data() const
{
    for (std::size_t index=0; index<out_path.size(); index++)
    {
        if(out_path[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| entry_frr_state.is_set
	|| input_label.is_set
	|| tunnel_interface.is_set
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_data());
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::has_operation() const
{
    for (std::size_t index=0; index<out_path.size(); index++)
    {
        if(out_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(entry_frr_state.yfilter)
	|| ydk::is_set(input_label.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-head" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (entry_frr_state.is_set || is_set(entry_frr_state.yfilter)) leaf_name_data.push_back(entry_frr_state.get_name_leafdata());
    if (input_label.is_set || is_set(input_label.yfilter)) leaf_name_data.push_back(input_label.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-entry-id")
    {
        if(frr_entry_id == nullptr)
        {
            frr_entry_id = std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId>();
        }
        return frr_entry_id;
    }

    if(child_yang_name == "out-path")
    {
        for(auto const & c : out_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::OutPath>();
        c->parent = this;
        out_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frr_entry_id != nullptr)
    {
        children["frr-entry-id"] = frr_entry_id;
    }

    for (auto const & c : out_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entry-frr-state")
    {
        entry_frr_state = value;
        entry_frr_state.value_namespace = name_space;
        entry_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-label")
    {
        input_label = value;
        input_label.value_namespace = name_space;
        input_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "entry-frr-state")
    {
        entry_frr_state.yfilter = yfilter;
    }
    if(value_path == "input-label")
    {
        input_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-entry-id" || name == "out-path" || name == "interface-name" || name == "entry-frr-state" || name == "input-label" || name == "tunnel-interface")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::FrrEntryId()
    :
    role{YType::enumeration, "role"}
    	,
    head(std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head>())
	,midpoint(std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint>())
{
    head->parent = this;
    midpoint->parent = this;

    yang_name = "frr-entry-id"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::~FrrEntryId()
{
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::has_data() const
{
    return role.is_set
	|| (head !=  nullptr && head->has_data())
	|| (midpoint !=  nullptr && midpoint->has_data());
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (head !=  nullptr && head->has_operation())
	|| (midpoint !=  nullptr && midpoint->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-entry-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head")
    {
        if(head == nullptr)
        {
            head = std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head>();
        }
        return head;
    }

    if(child_yang_name == "midpoint")
    {
        if(midpoint == nullptr)
        {
            midpoint = std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint>();
        }
        return midpoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(head != nullptr)
    {
        children["head"] = head;
    }

    if(midpoint != nullptr)
    {
        children["midpoint"] = midpoint;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head" || name == "midpoint" || name == "role")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head::Head()
    :
    destination_prefix{YType::str, "destination-prefix"},
    destination_prefix_length{YType::uint8, "destination-prefix-length"}
{

    yang_name = "head"; yang_parent_name = "frr-entry-id"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head::~Head()
{
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head::has_data() const
{
    return destination_prefix.is_set
	|| destination_prefix_length.is_set;
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_prefix_length.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_prefix_length.is_set || is_set(destination_prefix_length.yfilter)) leaf_name_data.push_back(destination_prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length = value;
        destination_prefix_length.value_namespace = name_space;
        destination_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-prefix" || name == "destination-prefix-length")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint::Midpoint()
    :
    lspid{YType::uint32, "lspid"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "midpoint"; yang_parent_name = "frr-entry-id"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint::~Midpoint()
{
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint::has_data() const
{
    return lspid.is_set
	|| source_address.is_set
	|| tunnel_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lspid.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "midpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lspid.is_set || is_set(lspid.yfilter)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lspid")
    {
        lspid = value;
        lspid.value_namespace = name_space;
        lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lspid")
    {
        lspid.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lspid" || name == "source-address" || name == "tunnel-id")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::OutPath::OutPath()
    :
    frr_interface{YType::str, "frr-interface"},
    frr_label{YType::uint32, "frr-label"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"}
{

    yang_name = "out-path"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::OutPath::~OutPath()
{
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::OutPath::has_data() const
{
    return frr_interface.is_set
	|| frr_label.is_set
	|| ipv4_next_hop.is_set
	|| out_interface.is_set
	|| out_label.is_set;
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::OutPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frr_interface.yfilter)
	|| ydk::is_set(frr_label.yfilter)
	|| ydk::is_set(ipv4_next_hop.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::OutPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::OutPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_interface.is_set || is_set(frr_interface.yfilter)) leaf_name_data.push_back(frr_interface.get_name_leafdata());
    if (frr_label.is_set || is_set(frr_label.yfilter)) leaf_name_data.push_back(frr_label.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.yfilter)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::OutPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::OutPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::OutPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frr-interface")
    {
        frr_interface = value;
        frr_interface.value_namespace = name_space;
        frr_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-label")
    {
        frr_label = value;
        frr_label.value_namespace = name_space;
        frr_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop = value;
        ipv4_next_hop.value_namespace = name_space;
        ipv4_next_hop.value_namespace_prefix = name_space_prefix;
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
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::OutPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frr-interface")
    {
        frr_interface.yfilter = yfilter;
    }
    if(value_path == "frr-label")
    {
        frr_label.yfilter = yfilter;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::OutPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-interface" || name == "frr-label" || name == "ipv4-next-hop" || name == "out-interface" || name == "out-label")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpointSummary::TunnelMidpointSummary()
    :
    active{YType::uint32, "active"},
    igp{YType::uint32, "igp"},
    partial{YType::uint32, "partial"},
    ready{YType::uint32, "ready"}
{

    yang_name = "tunnel-midpoint-summary"; yang_parent_name = "frr-database"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpointSummary::~TunnelMidpointSummary()
{
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpointSummary::has_data() const
{
    return active.is_set
	|| igp.is_set
	|| partial.is_set
	|| ready.is_set;
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpointSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(igp.yfilter)
	|| ydk::is_set(partial.yfilter)
	|| ydk::is_set(ready.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpointSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-midpoint-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpointSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (igp.is_set || is_set(igp.yfilter)) leaf_name_data.push_back(igp.get_name_leafdata());
    if (partial.is_set || is_set(partial.yfilter)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpointSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpointSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpointSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp")
    {
        igp = value;
        igp.value_namespace = name_space;
        igp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial")
    {
        partial = value;
        partial.value_namespace = name_space;
        partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpointSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "igp")
    {
        igp.yfilter = yfilter;
    }
    if(value_path == "partial")
    {
        partial.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpointSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "igp" || name == "partial" || name == "ready")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoints()
{

    yang_name = "tunnel-midpoints"; yang_parent_name = "frr-database"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::~TunnelMidpoints()
{
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::has_data() const
{
    for (std::size_t index=0; index<tunnel_midpoint.size(); index++)
    {
        if(tunnel_midpoint[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::has_operation() const
{
    for (std::size_t index=0; index<tunnel_midpoint.size(); index++)
    {
        if(tunnel_midpoint[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-midpoints";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-midpoint")
    {
        for(auto const & c : tunnel_midpoint)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint>();
        c->parent = this;
        tunnel_midpoint.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tunnel_midpoint)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-midpoint")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::TunnelMidpoint()
    :
    label{YType::int32, "label"},
    entry_frr_state{YType::enumeration, "entry-frr-state"},
    input_label{YType::uint32, "input-label"},
    tunnel_interface{YType::str, "tunnel-interface"}
    	,
    frr_entry_id(std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId>())
{
    frr_entry_id->parent = this;

    yang_name = "tunnel-midpoint"; yang_parent_name = "tunnel-midpoints"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::~TunnelMidpoint()
{
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::has_data() const
{
    for (std::size_t index=0; index<out_path.size(); index++)
    {
        if(out_path[index]->has_data())
            return true;
    }
    return label.is_set
	|| entry_frr_state.is_set
	|| input_label.is_set
	|| tunnel_interface.is_set
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_data());
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::has_operation() const
{
    for (std::size_t index=0; index<out_path.size(); index++)
    {
        if(out_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(entry_frr_state.yfilter)
	|| ydk::is_set(input_label.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-midpoint" <<"[label='" <<label <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (entry_frr_state.is_set || is_set(entry_frr_state.yfilter)) leaf_name_data.push_back(entry_frr_state.get_name_leafdata());
    if (input_label.is_set || is_set(input_label.yfilter)) leaf_name_data.push_back(input_label.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-entry-id")
    {
        if(frr_entry_id == nullptr)
        {
            frr_entry_id = std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId>();
        }
        return frr_entry_id;
    }

    if(child_yang_name == "out-path")
    {
        for(auto const & c : out_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath>();
        c->parent = this;
        out_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frr_entry_id != nullptr)
    {
        children["frr-entry-id"] = frr_entry_id;
    }

    for (auto const & c : out_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entry-frr-state")
    {
        entry_frr_state = value;
        entry_frr_state.value_namespace = name_space;
        entry_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-label")
    {
        input_label = value;
        input_label.value_namespace = name_space;
        input_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "entry-frr-state")
    {
        entry_frr_state.yfilter = yfilter;
    }
    if(value_path == "input-label")
    {
        input_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-entry-id" || name == "out-path" || name == "label" || name == "entry-frr-state" || name == "input-label" || name == "tunnel-interface")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::FrrEntryId()
    :
    role{YType::enumeration, "role"}
    	,
    head(std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head>())
	,midpoint(std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint>())
{
    head->parent = this;
    midpoint->parent = this;

    yang_name = "frr-entry-id"; yang_parent_name = "tunnel-midpoint"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::~FrrEntryId()
{
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::has_data() const
{
    return role.is_set
	|| (head !=  nullptr && head->has_data())
	|| (midpoint !=  nullptr && midpoint->has_data());
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (head !=  nullptr && head->has_operation())
	|| (midpoint !=  nullptr && midpoint->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-entry-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head")
    {
        if(head == nullptr)
        {
            head = std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head>();
        }
        return head;
    }

    if(child_yang_name == "midpoint")
    {
        if(midpoint == nullptr)
        {
            midpoint = std::make_shared<MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint>();
        }
        return midpoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(head != nullptr)
    {
        children["head"] = head;
    }

    if(midpoint != nullptr)
    {
        children["midpoint"] = midpoint;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head" || name == "midpoint" || name == "role")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head::Head()
    :
    destination_prefix{YType::str, "destination-prefix"},
    destination_prefix_length{YType::uint8, "destination-prefix-length"}
{

    yang_name = "head"; yang_parent_name = "frr-entry-id"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head::~Head()
{
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head::has_data() const
{
    return destination_prefix.is_set
	|| destination_prefix_length.is_set;
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_prefix_length.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_prefix_length.is_set || is_set(destination_prefix_length.yfilter)) leaf_name_data.push_back(destination_prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length = value;
        destination_prefix_length.value_namespace = name_space;
        destination_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-prefix" || name == "destination-prefix-length")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint::Midpoint()
    :
    lspid{YType::uint32, "lspid"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "midpoint"; yang_parent_name = "frr-entry-id"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint::~Midpoint()
{
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint::has_data() const
{
    return lspid.is_set
	|| source_address.is_set
	|| tunnel_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lspid.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "midpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lspid.is_set || is_set(lspid.yfilter)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lspid")
    {
        lspid = value;
        lspid.value_namespace = name_space;
        lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lspid")
    {
        lspid.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lspid" || name == "source-address" || name == "tunnel-id")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath::OutPath()
    :
    frr_interface{YType::str, "frr-interface"},
    frr_label{YType::uint32, "frr-label"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"}
{

    yang_name = "out-path"; yang_parent_name = "tunnel-midpoint"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath::~OutPath()
{
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath::has_data() const
{
    return frr_interface.is_set
	|| frr_label.is_set
	|| ipv4_next_hop.is_set
	|| out_interface.is_set
	|| out_label.is_set;
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frr_interface.yfilter)
	|| ydk::is_set(frr_label.yfilter)
	|| ydk::is_set(ipv4_next_hop.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_interface.is_set || is_set(frr_interface.yfilter)) leaf_name_data.push_back(frr_interface.get_name_leafdata());
    if (frr_label.is_set || is_set(frr_label.yfilter)) leaf_name_data.push_back(frr_label.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.yfilter)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frr-interface")
    {
        frr_interface = value;
        frr_interface.value_namespace = name_space;
        frr_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-label")
    {
        frr_label = value;
        frr_label.value_namespace = name_space;
        frr_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop = value;
        ipv4_next_hop.value_namespace = name_space;
        ipv4_next_hop.value_namespace_prefix = name_space_prefix;
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
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frr-interface")
    {
        frr_interface.yfilter = yfilter;
    }
    if(value_path == "frr-label")
    {
        frr_label.yfilter = yfilter;
    }
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-interface" || name == "frr-label" || name == "ipv4-next-hop" || name == "out-interface" || name == "out-label")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelSummary::TunnelSummary()
    :
    active{YType::uint32, "active"},
    igp{YType::uint32, "igp"},
    partial{YType::uint32, "partial"},
    ready{YType::uint32, "ready"}
{

    yang_name = "tunnel-summary"; yang_parent_name = "frr-database"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelSummary::~TunnelSummary()
{
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelSummary::has_data() const
{
    return active.is_set
	|| igp.is_set
	|| partial.is_set
	|| ready.is_set;
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(igp.yfilter)
	|| ydk::is_set(partial.yfilter)
	|| ydk::is_set(ready.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (igp.is_set || is_set(igp.yfilter)) leaf_name_data.push_back(igp.get_name_leafdata());
    if (partial.is_set || is_set(partial.yfilter)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp")
    {
        igp = value;
        igp.value_namespace = name_space;
        igp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial")
    {
        partial = value;
        partial.value_namespace = name_space;
        partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "igp")
    {
        igp.yfilter = yfilter;
    }
    if(value_path == "partial")
    {
        partial.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "igp" || name == "partial" || name == "ready")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "mpls-lsd-node"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Interfaces::~Interfaces()
{
}

bool MplsLsdNodes::MplsLsdNode::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsdNodes::MplsLsdNode::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsdNodes::MplsLsdNode::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsdNodes::MplsLsdNode::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsdNodes::MplsLsdNode::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface{YType::str, "interface"},
    interface_state{YType::enumeration, "interface-state"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Interfaces::Interface::~Interface()
{
}

bool MplsLsdNodes::MplsLsdNode::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<application_owner.size(); index++)
    {
        if(application_owner[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface.is_set
	|| interface_state.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<application_owner.size(); index++)
    {
        if(application_owner[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_state.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_state.is_set || is_set(interface_state.yfilter)) leaf_name_data.push_back(interface_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-owner")
    {
        for(auto const & c : application_owner)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsdNodes::MplsLsdNode::Interfaces::Interface::ApplicationOwner>();
        c->parent = this;
        application_owner.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : application_owner)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-state")
    {
        interface_state = value;
        interface_state.value_namespace = name_space;
        interface_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-state")
    {
        interface_state.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-owner" || name == "interface-name" || name == "interface" || name == "interface-state")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Interfaces::Interface::ApplicationOwner::ApplicationOwner()
    :
    application_instance{YType::str, "application-instance"},
    application_name{YType::str, "application-name"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_type{YType::enumeration, "application-type"},
    resource_state{YType::enumeration, "resource-state"}
{

    yang_name = "application-owner"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Interfaces::Interface::ApplicationOwner::~ApplicationOwner()
{
}

bool MplsLsdNodes::MplsLsdNode::Interfaces::Interface::ApplicationOwner::has_data() const
{
    return application_instance.is_set
	|| application_name.is_set
	|| application_role_primary.is_set
	|| application_type.is_set
	|| resource_state.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Interfaces::Interface::ApplicationOwner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_instance.yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| ydk::is_set(application_role_primary.yfilter)
	|| ydk::is_set(application_type.yfilter)
	|| ydk::is_set(resource_state.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Interfaces::Interface::ApplicationOwner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-owner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Interfaces::Interface::ApplicationOwner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_instance.is_set || is_set(application_instance.yfilter)) leaf_name_data.push_back(application_instance.get_name_leafdata());
    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (application_role_primary.is_set || is_set(application_role_primary.yfilter)) leaf_name_data.push_back(application_role_primary.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (resource_state.is_set || is_set(resource_state.yfilter)) leaf_name_data.push_back(resource_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Interfaces::Interface::ApplicationOwner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Interfaces::Interface::ApplicationOwner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Interfaces::Interface::ApplicationOwner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-instance")
    {
        application_instance = value;
        application_instance.value_namespace = name_space;
        application_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary = value;
        application_role_primary.value_namespace = name_space;
        application_role_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-type")
    {
        application_type = value;
        application_type.value_namespace = name_space;
        application_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-state")
    {
        resource_state = value;
        resource_state.value_namespace = name_space;
        resource_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Interfaces::Interface::ApplicationOwner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-instance")
    {
        application_instance.yfilter = yfilter;
    }
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary.yfilter = yfilter;
    }
    if(value_path == "application-type")
    {
        application_type.yfilter = yfilter;
    }
    if(value_path == "resource-state")
    {
        resource_state.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Interfaces::Interface::ApplicationOwner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-instance" || name == "application-name" || name == "application-role-primary" || name == "application-type" || name == "resource-state")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::LabelRange::LabelRange()
    :
    max_dynamic_label_value{YType::uint32, "max-dynamic-label-value"},
    max_static_label_value{YType::uint32, "max-static-label-value"},
    min_dynamic_label_value{YType::uint32, "min-dynamic-label-value"},
    min_static_label_value{YType::uint32, "min-static-label-value"}
{

    yang_name = "label-range"; yang_parent_name = "mpls-lsd-node"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::LabelRange::~LabelRange()
{
}

bool MplsLsdNodes::MplsLsdNode::LabelRange::has_data() const
{
    return max_dynamic_label_value.is_set
	|| max_static_label_value.is_set
	|| min_dynamic_label_value.is_set
	|| min_static_label_value.is_set;
}

bool MplsLsdNodes::MplsLsdNode::LabelRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_dynamic_label_value.yfilter)
	|| ydk::is_set(max_static_label_value.yfilter)
	|| ydk::is_set(min_dynamic_label_value.yfilter)
	|| ydk::is_set(min_static_label_value.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::LabelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::LabelRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_dynamic_label_value.is_set || is_set(max_dynamic_label_value.yfilter)) leaf_name_data.push_back(max_dynamic_label_value.get_name_leafdata());
    if (max_static_label_value.is_set || is_set(max_static_label_value.yfilter)) leaf_name_data.push_back(max_static_label_value.get_name_leafdata());
    if (min_dynamic_label_value.is_set || is_set(min_dynamic_label_value.yfilter)) leaf_name_data.push_back(min_dynamic_label_value.get_name_leafdata());
    if (min_static_label_value.is_set || is_set(min_static_label_value.yfilter)) leaf_name_data.push_back(min_static_label_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::LabelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::LabelRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::LabelRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-dynamic-label-value")
    {
        max_dynamic_label_value = value;
        max_dynamic_label_value.value_namespace = name_space;
        max_dynamic_label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-static-label-value")
    {
        max_static_label_value = value;
        max_static_label_value.value_namespace = name_space;
        max_static_label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-dynamic-label-value")
    {
        min_dynamic_label_value = value;
        min_dynamic_label_value.value_namespace = name_space;
        min_dynamic_label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-static-label-value")
    {
        min_static_label_value = value;
        min_static_label_value.value_namespace = name_space;
        min_static_label_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::LabelRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-dynamic-label-value")
    {
        max_dynamic_label_value.yfilter = yfilter;
    }
    if(value_path == "max-static-label-value")
    {
        max_static_label_value.yfilter = yfilter;
    }
    if(value_path == "min-dynamic-label-value")
    {
        min_dynamic_label_value.yfilter = yfilter;
    }
    if(value_path == "min-static-label-value")
    {
        min_static_label_value.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::LabelRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-dynamic-label-value" || name == "max-static-label-value" || name == "min-dynamic-label-value" || name == "min-static-label-value")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::LabelSummary::LabelSummary()
    :
    rsi_connected{YType::int32, "rsi-connected"},
    total_labels{YType::uint32, "total-labels"},
    vrf_name_xr{YType::str, "vrf-name-xr"}
{

    yang_name = "label-summary"; yang_parent_name = "mpls-lsd-node"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::LabelSummary::~LabelSummary()
{
}

bool MplsLsdNodes::MplsLsdNode::LabelSummary::has_data() const
{
    for (std::size_t index=0; index<owner_count.size(); index++)
    {
        if(owner_count[index]->has_data())
            return true;
    }
    return rsi_connected.is_set
	|| total_labels.is_set
	|| vrf_name_xr.is_set;
}

bool MplsLsdNodes::MplsLsdNode::LabelSummary::has_operation() const
{
    for (std::size_t index=0; index<owner_count.size(); index++)
    {
        if(owner_count[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rsi_connected.yfilter)
	|| ydk::is_set(total_labels.yfilter)
	|| ydk::is_set(vrf_name_xr.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::LabelSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::LabelSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsi_connected.is_set || is_set(rsi_connected.yfilter)) leaf_name_data.push_back(rsi_connected.get_name_leafdata());
    if (total_labels.is_set || is_set(total_labels.yfilter)) leaf_name_data.push_back(total_labels.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.yfilter)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::LabelSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "owner-count")
    {
        for(auto const & c : owner_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsdNodes::MplsLsdNode::LabelSummary::OwnerCount>();
        c->parent = this;
        owner_count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::LabelSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : owner_count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::LabelSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rsi-connected")
    {
        rsi_connected = value;
        rsi_connected.value_namespace = name_space;
        rsi_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-labels")
    {
        total_labels = value;
        total_labels.value_namespace = name_space;
        total_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr = value;
        vrf_name_xr.value_namespace = name_space;
        vrf_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::LabelSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rsi-connected")
    {
        rsi_connected.yfilter = yfilter;
    }
    if(value_path == "total-labels")
    {
        total_labels.yfilter = yfilter;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::LabelSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner-count" || name == "rsi-connected" || name == "total-labels" || name == "vrf-name-xr")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::LabelSummary::OwnerCount::OwnerCount()
    :
    application_instance{YType::str, "application-instance"},
    application_name{YType::str, "application-name"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_type{YType::enumeration, "application-type"},
    number_of_labels{YType::uint32, "number-of-labels"}
{

    yang_name = "owner-count"; yang_parent_name = "label-summary"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::LabelSummary::OwnerCount::~OwnerCount()
{
}

bool MplsLsdNodes::MplsLsdNode::LabelSummary::OwnerCount::has_data() const
{
    return application_instance.is_set
	|| application_name.is_set
	|| application_role_primary.is_set
	|| application_type.is_set
	|| number_of_labels.is_set;
}

bool MplsLsdNodes::MplsLsdNode::LabelSummary::OwnerCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_instance.yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| ydk::is_set(application_role_primary.yfilter)
	|| ydk::is_set(application_type.yfilter)
	|| ydk::is_set(number_of_labels.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::LabelSummary::OwnerCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::LabelSummary::OwnerCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_instance.is_set || is_set(application_instance.yfilter)) leaf_name_data.push_back(application_instance.get_name_leafdata());
    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (application_role_primary.is_set || is_set(application_role_primary.yfilter)) leaf_name_data.push_back(application_role_primary.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (number_of_labels.is_set || is_set(number_of_labels.yfilter)) leaf_name_data.push_back(number_of_labels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::LabelSummary::OwnerCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::LabelSummary::OwnerCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::LabelSummary::OwnerCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-instance")
    {
        application_instance = value;
        application_instance.value_namespace = name_space;
        application_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary = value;
        application_role_primary.value_namespace = name_space;
        application_role_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-type")
    {
        application_type = value;
        application_type.value_namespace = name_space;
        application_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-labels")
    {
        number_of_labels = value;
        number_of_labels.value_namespace = name_space;
        number_of_labels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::LabelSummary::OwnerCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-instance")
    {
        application_instance.yfilter = yfilter;
    }
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary.yfilter = yfilter;
    }
    if(value_path == "application-type")
    {
        application_type.yfilter = yfilter;
    }
    if(value_path == "number-of-labels")
    {
        number_of_labels.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::LabelSummary::OwnerCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-instance" || name == "application-name" || name == "application-role-primary" || name == "application-type" || name == "number-of-labels")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrfs()
{

    yang_name = "label-summary-vrfs"; yang_parent_name = "mpls-lsd-node"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::~LabelSummaryVrfs()
{
}

bool MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::has_data() const
{
    for (std::size_t index=0; index<label_summary_vrf.size(); index++)
    {
        if(label_summary_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::has_operation() const
{
    for (std::size_t index=0; index<label_summary_vrf.size(); index++)
    {
        if(label_summary_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-summary-vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-summary-vrf")
    {
        for(auto const & c : label_summary_vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf>();
        c->parent = this;
        label_summary_vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_summary_vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-summary-vrf")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::LabelSummaryVrf()
    :
    vrf_name{YType::str, "vrf-name"},
    rsi_connected{YType::int32, "rsi-connected"},
    total_labels{YType::uint32, "total-labels"},
    vrf_name_xr{YType::str, "vrf-name-xr"}
{

    yang_name = "label-summary-vrf"; yang_parent_name = "label-summary-vrfs"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::~LabelSummaryVrf()
{
}

bool MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::has_data() const
{
    for (std::size_t index=0; index<owner_count.size(); index++)
    {
        if(owner_count[index]->has_data())
            return true;
    }
    return vrf_name.is_set
	|| rsi_connected.is_set
	|| total_labels.is_set
	|| vrf_name_xr.is_set;
}

bool MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::has_operation() const
{
    for (std::size_t index=0; index<owner_count.size(); index++)
    {
        if(owner_count[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(rsi_connected.yfilter)
	|| ydk::is_set(total_labels.yfilter)
	|| ydk::is_set(vrf_name_xr.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-summary-vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (rsi_connected.is_set || is_set(rsi_connected.yfilter)) leaf_name_data.push_back(rsi_connected.get_name_leafdata());
    if (total_labels.is_set || is_set(total_labels.yfilter)) leaf_name_data.push_back(total_labels.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.yfilter)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "owner-count")
    {
        for(auto const & c : owner_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount>();
        c->parent = this;
        owner_count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : owner_count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsi-connected")
    {
        rsi_connected = value;
        rsi_connected.value_namespace = name_space;
        rsi_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-labels")
    {
        total_labels = value;
        total_labels.value_namespace = name_space;
        total_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr = value;
        vrf_name_xr.value_namespace = name_space;
        vrf_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "rsi-connected")
    {
        rsi_connected.yfilter = yfilter;
    }
    if(value_path == "total-labels")
    {
        total_labels.yfilter = yfilter;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner-count" || name == "vrf-name" || name == "rsi-connected" || name == "total-labels" || name == "vrf-name-xr")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::OwnerCount()
    :
    application_instance{YType::str, "application-instance"},
    application_name{YType::str, "application-name"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_type{YType::enumeration, "application-type"},
    number_of_labels{YType::uint32, "number-of-labels"}
{

    yang_name = "owner-count"; yang_parent_name = "label-summary-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::~OwnerCount()
{
}

bool MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::has_data() const
{
    return application_instance.is_set
	|| application_name.is_set
	|| application_role_primary.is_set
	|| application_type.is_set
	|| number_of_labels.is_set;
}

bool MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_instance.yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| ydk::is_set(application_role_primary.yfilter)
	|| ydk::is_set(application_type.yfilter)
	|| ydk::is_set(number_of_labels.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_instance.is_set || is_set(application_instance.yfilter)) leaf_name_data.push_back(application_instance.get_name_leafdata());
    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (application_role_primary.is_set || is_set(application_role_primary.yfilter)) leaf_name_data.push_back(application_role_primary.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (number_of_labels.is_set || is_set(number_of_labels.yfilter)) leaf_name_data.push_back(number_of_labels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-instance")
    {
        application_instance = value;
        application_instance.value_namespace = name_space;
        application_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary = value;
        application_role_primary.value_namespace = name_space;
        application_role_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-type")
    {
        application_type = value;
        application_type.value_namespace = name_space;
        application_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-labels")
    {
        number_of_labels = value;
        number_of_labels.value_namespace = name_space;
        number_of_labels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-instance")
    {
        application_instance.yfilter = yfilter;
    }
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary.yfilter = yfilter;
    }
    if(value_path == "application-type")
    {
        application_type.yfilter = yfilter;
    }
    if(value_path == "number-of-labels")
    {
        number_of_labels.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-instance" || name == "application-name" || name == "application-role-primary" || name == "application-type" || name == "number-of-labels")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Labels::Labels()
{

    yang_name = "labels"; yang_parent_name = "mpls-lsd-node"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Labels::~Labels()
{
}

bool MplsLsdNodes::MplsLsdNode::Labels::has_data() const
{
    for (std::size_t index=0; index<label.size(); index++)
    {
        if(label[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsdNodes::MplsLsdNode::Labels::has_operation() const
{
    for (std::size_t index=0; index<label.size(); index++)
    {
        if(label[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Labels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Labels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Labels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label")
    {
        for(auto const & c : label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label>();
        c->parent = this;
        label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Labels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Labels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsdNodes::MplsLsdNode::Labels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsdNodes::MplsLsdNode::Labels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::Label()
    :
    label_id{YType::int32, "label-id"},
    label{YType::uint32, "label"},
    rewrite_is_bound{YType::int32, "rewrite-is-bound"},
    rewrite_owners{YType::uint32, "rewrite-owners"},
    rs_iconnected{YType::int32, "rs-iconnected"},
    vrf_name{YType::str, "vrf-name"}
    	,
    label_context(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext>())
{
    label_context->parent = this;

    yang_name = "label"; yang_parent_name = "labels"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::~Label()
{
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::has_data() const
{
    for (std::size_t index=0; index<application_owner.size(); index++)
    {
        if(application_owner[index]->has_data())
            return true;
    }
    return label_id.is_set
	|| label.is_set
	|| rewrite_is_bound.is_set
	|| rewrite_owners.is_set
	|| rs_iconnected.is_set
	|| vrf_name.is_set
	|| (label_context !=  nullptr && label_context->has_data());
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::has_operation() const
{
    for (std::size_t index=0; index<application_owner.size(); index++)
    {
        if(application_owner[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_id.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(rewrite_is_bound.yfilter)
	|| ydk::is_set(rewrite_owners.yfilter)
	|| ydk::is_set(rs_iconnected.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (label_context !=  nullptr && label_context->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::Labels::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label" <<"[label-id='" <<label_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Labels::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_id.is_set || is_set(label_id.yfilter)) leaf_name_data.push_back(label_id.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (rewrite_is_bound.is_set || is_set(rewrite_is_bound.yfilter)) leaf_name_data.push_back(rewrite_is_bound.get_name_leafdata());
    if (rewrite_owners.is_set || is_set(rewrite_owners.yfilter)) leaf_name_data.push_back(rewrite_owners.get_name_leafdata());
    if (rs_iconnected.is_set || is_set(rs_iconnected.yfilter)) leaf_name_data.push_back(rs_iconnected.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Labels::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-owner")
    {
        for(auto const & c : application_owner)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::ApplicationOwner>();
        c->parent = this;
        application_owner.push_back(c);
        return c;
    }

    if(child_yang_name == "label-context")
    {
        if(label_context == nullptr)
        {
            label_context = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext>();
        }
        return label_context;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Labels::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : application_owner)
    {
        children[c->get_segment_path()] = c;
    }

    if(label_context != nullptr)
    {
        children["label-context"] = label_context;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Labels::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-id")
    {
        label_id = value;
        label_id.value_namespace = name_space;
        label_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rewrite-is-bound")
    {
        rewrite_is_bound = value;
        rewrite_is_bound.value_namespace = name_space;
        rewrite_is_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rewrite-owners")
    {
        rewrite_owners = value;
        rewrite_owners.value_namespace = name_space;
        rewrite_owners.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rs-iconnected")
    {
        rs_iconnected = value;
        rs_iconnected.value_namespace = name_space;
        rs_iconnected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Labels::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-id")
    {
        label_id.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "rewrite-is-bound")
    {
        rewrite_is_bound.yfilter = yfilter;
    }
    if(value_path == "rewrite-owners")
    {
        rewrite_owners.yfilter = yfilter;
    }
    if(value_path == "rs-iconnected")
    {
        rs_iconnected.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-owner" || name == "label-context" || name == "label-id" || name == "label" || name == "rewrite-is-bound" || name == "rewrite-owners" || name == "rs-iconnected" || name == "vrf-name")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::ApplicationOwner::ApplicationOwner()
    :
    application_instance{YType::str, "application-instance"},
    application_name{YType::str, "application-name"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_type{YType::enumeration, "application-type"},
    resource_state{YType::enumeration, "resource-state"}
{

    yang_name = "application-owner"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::ApplicationOwner::~ApplicationOwner()
{
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::ApplicationOwner::has_data() const
{
    return application_instance.is_set
	|| application_name.is_set
	|| application_role_primary.is_set
	|| application_type.is_set
	|| resource_state.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::ApplicationOwner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_instance.yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| ydk::is_set(application_role_primary.yfilter)
	|| ydk::is_set(application_type.yfilter)
	|| ydk::is_set(resource_state.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Labels::Label::ApplicationOwner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-owner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Labels::Label::ApplicationOwner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_instance.is_set || is_set(application_instance.yfilter)) leaf_name_data.push_back(application_instance.get_name_leafdata());
    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (application_role_primary.is_set || is_set(application_role_primary.yfilter)) leaf_name_data.push_back(application_role_primary.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (resource_state.is_set || is_set(resource_state.yfilter)) leaf_name_data.push_back(resource_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Labels::Label::ApplicationOwner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Labels::Label::ApplicationOwner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Labels::Label::ApplicationOwner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-instance")
    {
        application_instance = value;
        application_instance.value_namespace = name_space;
        application_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary = value;
        application_role_primary.value_namespace = name_space;
        application_role_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-type")
    {
        application_type = value;
        application_type.value_namespace = name_space;
        application_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-state")
    {
        resource_state = value;
        resource_state.value_namespace = name_space;
        resource_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Labels::Label::ApplicationOwner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-instance")
    {
        application_instance.yfilter = yfilter;
    }
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary.yfilter = yfilter;
    }
    if(value_path == "application-type")
    {
        application_type.yfilter = yfilter;
    }
    if(value_path == "resource-state")
    {
        resource_state.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::ApplicationOwner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-instance" || name == "application-name" || name == "application-role-primary" || name == "application-type" || name == "resource-state")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::LabelContext()
    :
    application_data{YType::str, "application-data"}
    	,
    key(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key>())
{
    key->parent = this;

    yang_name = "label-context"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::~LabelContext()
{
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::has_data() const
{
    return application_data.is_set
	|| (key !=  nullptr && key->has_data());
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_data.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_data.is_set || is_set(application_data.yfilter)) leaf_name_data.push_back(application_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-data")
    {
        application_data = value;
        application_data.value_namespace = name_space;
        application_data.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-data")
    {
        application_data.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "application-data")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Key()
    :
    label_context_type{YType::enumeration, "label-context-type"}
    	,
    cev4l3vpn_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev4L3VpnData>())
	,cev6l3vpn_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev6L3VpnData>())
	,evpn_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::EvpnData>())
	,generic_routing_encapsulation(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation>())
	,ip_sub_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::IpSubData>())
	,ipv4_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4Data>())
	,ipv4blb_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4BlbData>())
	,ipv4l3vpn_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4L3VpnData>())
	,ipv6_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6Data>())
	,ipv6_generic_routing_encapsulation(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation>())
	,ipv6blb_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6BlbData>())
	,ipv6l3vpn_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6L3VpnData>())
	,label_block_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::LabelBlockData>())
	,label_block_srgb_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::LabelBlockSrgbData>())
	,label_block_srlb_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::LabelBlockSrlbData>())
	,mld_pv4_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::MldPv4Data>())
	,next_hop_set_l3vpn(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::NextHopSetL3Vpn>())
	,pi_mi_pmsi_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PiMiPmsiData>())
	,pi_ms_pmsi_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PiMsPmsiData>())
	,pseudowire_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PseudowireData>())
	,pseudowire_head_end_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PseudowireHeadEndData>())
	,sr_adj_segment_ipv4(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4>())
	,sr_adj_segment_ipv6(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6>())
	,sr_prefix_segment(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrPrefixSegment>())
	,te_binding(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::TeBinding>())
	,tev4_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Tev4Data>())
	,tev4p2mp_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Tev4P2MpData>())
	,tp_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::TpData>())
	,vrf_l3vpn_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::VrfL3VpnData>())
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

    yang_name = "key"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::~Key()
{
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::has_data() const
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

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::has_operation() const
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

std::string MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_context_type.is_set || is_set(label_context_type.yfilter)) leaf_name_data.push_back(label_context_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cev4l3vpn-data")
    {
        if(cev4l3vpn_data == nullptr)
        {
            cev4l3vpn_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev4L3VpnData>();
        }
        return cev4l3vpn_data;
    }

    if(child_yang_name == "cev6l3vpn-data")
    {
        if(cev6l3vpn_data == nullptr)
        {
            cev6l3vpn_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev6L3VpnData>();
        }
        return cev6l3vpn_data;
    }

    if(child_yang_name == "evpn-data")
    {
        if(evpn_data == nullptr)
        {
            evpn_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::EvpnData>();
        }
        return evpn_data;
    }

    if(child_yang_name == "generic-routing-encapsulation")
    {
        if(generic_routing_encapsulation == nullptr)
        {
            generic_routing_encapsulation = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation>();
        }
        return generic_routing_encapsulation;
    }

    if(child_yang_name == "ip-sub-data")
    {
        if(ip_sub_data == nullptr)
        {
            ip_sub_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::IpSubData>();
        }
        return ip_sub_data;
    }

    if(child_yang_name == "ipv4-data")
    {
        if(ipv4_data == nullptr)
        {
            ipv4_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4Data>();
        }
        return ipv4_data;
    }

    if(child_yang_name == "ipv4blb-data")
    {
        if(ipv4blb_data == nullptr)
        {
            ipv4blb_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4BlbData>();
        }
        return ipv4blb_data;
    }

    if(child_yang_name == "ipv4l3vpn-data")
    {
        if(ipv4l3vpn_data == nullptr)
        {
            ipv4l3vpn_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4L3VpnData>();
        }
        return ipv4l3vpn_data;
    }

    if(child_yang_name == "ipv6-data")
    {
        if(ipv6_data == nullptr)
        {
            ipv6_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6Data>();
        }
        return ipv6_data;
    }

    if(child_yang_name == "ipv6-generic-routing-encapsulation")
    {
        if(ipv6_generic_routing_encapsulation == nullptr)
        {
            ipv6_generic_routing_encapsulation = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation>();
        }
        return ipv6_generic_routing_encapsulation;
    }

    if(child_yang_name == "ipv6blb-data")
    {
        if(ipv6blb_data == nullptr)
        {
            ipv6blb_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6BlbData>();
        }
        return ipv6blb_data;
    }

    if(child_yang_name == "ipv6l3vpn-data")
    {
        if(ipv6l3vpn_data == nullptr)
        {
            ipv6l3vpn_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6L3VpnData>();
        }
        return ipv6l3vpn_data;
    }

    if(child_yang_name == "label-block-data")
    {
        if(label_block_data == nullptr)
        {
            label_block_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::LabelBlockData>();
        }
        return label_block_data;
    }

    if(child_yang_name == "label-block-srgb-data")
    {
        if(label_block_srgb_data == nullptr)
        {
            label_block_srgb_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::LabelBlockSrgbData>();
        }
        return label_block_srgb_data;
    }

    if(child_yang_name == "label-block-srlb-data")
    {
        if(label_block_srlb_data == nullptr)
        {
            label_block_srlb_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::LabelBlockSrlbData>();
        }
        return label_block_srlb_data;
    }

    if(child_yang_name == "mld-pv4-data")
    {
        if(mld_pv4_data == nullptr)
        {
            mld_pv4_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::MldPv4Data>();
        }
        return mld_pv4_data;
    }

    if(child_yang_name == "next-hop-set-l3vpn")
    {
        if(next_hop_set_l3vpn == nullptr)
        {
            next_hop_set_l3vpn = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::NextHopSetL3Vpn>();
        }
        return next_hop_set_l3vpn;
    }

    if(child_yang_name == "pi-mi-pmsi-data")
    {
        if(pi_mi_pmsi_data == nullptr)
        {
            pi_mi_pmsi_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PiMiPmsiData>();
        }
        return pi_mi_pmsi_data;
    }

    if(child_yang_name == "pi-ms-pmsi-data")
    {
        if(pi_ms_pmsi_data == nullptr)
        {
            pi_ms_pmsi_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PiMsPmsiData>();
        }
        return pi_ms_pmsi_data;
    }

    if(child_yang_name == "pseudowire-data")
    {
        if(pseudowire_data == nullptr)
        {
            pseudowire_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PseudowireData>();
        }
        return pseudowire_data;
    }

    if(child_yang_name == "pseudowire-head-end-data")
    {
        if(pseudowire_head_end_data == nullptr)
        {
            pseudowire_head_end_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PseudowireHeadEndData>();
        }
        return pseudowire_head_end_data;
    }

    if(child_yang_name == "sr-adj-segment-ipv4")
    {
        if(sr_adj_segment_ipv4 == nullptr)
        {
            sr_adj_segment_ipv4 = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4>();
        }
        return sr_adj_segment_ipv4;
    }

    if(child_yang_name == "sr-adj-segment-ipv6")
    {
        if(sr_adj_segment_ipv6 == nullptr)
        {
            sr_adj_segment_ipv6 = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6>();
        }
        return sr_adj_segment_ipv6;
    }

    if(child_yang_name == "sr-prefix-segment")
    {
        if(sr_prefix_segment == nullptr)
        {
            sr_prefix_segment = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrPrefixSegment>();
        }
        return sr_prefix_segment;
    }

    if(child_yang_name == "te-binding")
    {
        if(te_binding == nullptr)
        {
            te_binding = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::TeBinding>();
        }
        return te_binding;
    }

    if(child_yang_name == "tev4-data")
    {
        if(tev4_data == nullptr)
        {
            tev4_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Tev4Data>();
        }
        return tev4_data;
    }

    if(child_yang_name == "tev4p2mp-data")
    {
        if(tev4p2mp_data == nullptr)
        {
            tev4p2mp_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Tev4P2MpData>();
        }
        return tev4p2mp_data;
    }

    if(child_yang_name == "tp-data")
    {
        if(tp_data == nullptr)
        {
            tp_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::TpData>();
        }
        return tp_data;
    }

    if(child_yang_name == "vrf-l3vpn-data")
    {
        if(vrf_l3vpn_data == nullptr)
        {
            vrf_l3vpn_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::VrfL3VpnData>();
        }
        return vrf_l3vpn_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::get_children() const
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

void MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-context-type")
    {
        label_context_type = value;
        label_context_type.value_namespace = name_space;
        label_context_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-context-type")
    {
        label_context_type.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cev4l3vpn-data" || name == "cev6l3vpn-data" || name == "evpn-data" || name == "generic-routing-encapsulation" || name == "ip-sub-data" || name == "ipv4-data" || name == "ipv4blb-data" || name == "ipv4l3vpn-data" || name == "ipv6-data" || name == "ipv6-generic-routing-encapsulation" || name == "ipv6blb-data" || name == "ipv6l3vpn-data" || name == "label-block-data" || name == "label-block-srgb-data" || name == "label-block-srlb-data" || name == "mld-pv4-data" || name == "next-hop-set-l3vpn" || name == "pi-mi-pmsi-data" || name == "pi-ms-pmsi-data" || name == "pseudowire-data" || name == "pseudowire-head-end-data" || name == "sr-adj-segment-ipv4" || name == "sr-adj-segment-ipv6" || name == "sr-prefix-segment" || name == "te-binding" || name == "tev4-data" || name == "tev4p2mp-data" || name == "tp-data" || name == "vrf-l3vpn-data" || name == "label-context-type")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev4L3VpnData::Cev4L3VpnData()
    :
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    security_id{YType::uint32, "security-id"},
    table_id{YType::uint32, "table-id"}
{

    yang_name = "cev4l3vpn-data"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev4L3VpnData::~Cev4L3VpnData()
{
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev4L3VpnData::has_data() const
{
    return ipv4_next_hop.is_set
	|| security_id.is_set
	|| table_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev4L3VpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_next_hop.yfilter)
	|| ydk::is_set(security_id.yfilter)
	|| ydk::is_set(table_id.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev4L3VpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cev4l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev4L3VpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.yfilter)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev4L3VpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev4L3VpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev4L3VpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev4L3VpnData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev4L3VpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-next-hop" || name == "security-id" || name == "table-id")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev6L3VpnData::Cev6L3VpnData()
    :
    ipv6_next_hop{YType::str, "ipv6-next-hop"},
    security_id{YType::uint32, "security-id"},
    table_id{YType::uint32, "table-id"}
{

    yang_name = "cev6l3vpn-data"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev6L3VpnData::~Cev6L3VpnData()
{
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev6L3VpnData::has_data() const
{
    return ipv6_next_hop.is_set
	|| security_id.is_set
	|| table_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev6L3VpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_next_hop.yfilter)
	|| ydk::is_set(security_id.yfilter)
	|| ydk::is_set(table_id.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev6L3VpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cev6l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev6L3VpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_next_hop.is_set || is_set(ipv6_next_hop.yfilter)) leaf_name_data.push_back(ipv6_next_hop.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev6L3VpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev6L3VpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev6L3VpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev6L3VpnData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev6L3VpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-next-hop" || name == "security-id" || name == "table-id")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::EvpnData::EvpnData()
    :
    ethernet_segment{YType::str, "ethernet-segment"},
    evpn_id{YType::uint32, "evpn-id"},
    evpn_tag{YType::uint32, "evpn-tag"}
{

    yang_name = "evpn-data"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::EvpnData::~EvpnData()
{
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::EvpnData::has_data() const
{
    return ethernet_segment.is_set
	|| evpn_id.is_set
	|| evpn_tag.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::EvpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet_segment.yfilter)
	|| ydk::is_set(evpn_id.yfilter)
	|| ydk::is_set(evpn_tag.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::EvpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::EvpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_segment.is_set || is_set(ethernet_segment.yfilter)) leaf_name_data.push_back(ethernet_segment.get_name_leafdata());
    if (evpn_id.is_set || is_set(evpn_id.yfilter)) leaf_name_data.push_back(evpn_id.get_name_leafdata());
    if (evpn_tag.is_set || is_set(evpn_tag.yfilter)) leaf_name_data.push_back(evpn_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::EvpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::EvpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::EvpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::EvpnData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::EvpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-segment" || name == "evpn-id" || name == "evpn-tag")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation::GenericRoutingEncapsulation()
    :
    gre_interface{YType::str, "gre-interface"}
{

    yang_name = "generic-routing-encapsulation"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation::~GenericRoutingEncapsulation()
{
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation::has_data() const
{
    return gre_interface.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gre_interface.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-routing-encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gre_interface.is_set || is_set(gre_interface.yfilter)) leaf_name_data.push_back(gre_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gre-interface")
    {
        gre_interface = value;
        gre_interface.value_namespace = name_space;
        gre_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gre-interface")
    {
        gre_interface.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-interface")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::IpSubData::IpSubData()
    :
    parent_interface{YType::str, "parent-interface"},
    table_id{YType::uint32, "table-id"}
{

    yang_name = "ip-sub-data"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::IpSubData::~IpSubData()
{
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::IpSubData::has_data() const
{
    return parent_interface.is_set
	|| table_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::IpSubData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(parent_interface.yfilter)
	|| ydk::is_set(table_id.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::IpSubData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-sub-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::IpSubData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (parent_interface.is_set || is_set(parent_interface.yfilter)) leaf_name_data.push_back(parent_interface.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::IpSubData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::IpSubData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::IpSubData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::IpSubData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::IpSubData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parent-interface" || name == "table-id")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4BlbData::Ipv4BlbData()
    :
    blb_intf{YType::str, "blb-intf"},
    prefix{YType::str, "prefix"}
{

    yang_name = "ipv4blb-data"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4BlbData::~Ipv4BlbData()
{
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4BlbData::has_data() const
{
    return blb_intf.is_set
	|| prefix.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4BlbData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(blb_intf.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4BlbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4blb-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4BlbData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blb_intf.is_set || is_set(blb_intf.yfilter)) leaf_name_data.push_back(blb_intf.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4BlbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4BlbData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4BlbData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4BlbData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4BlbData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "blb-intf" || name == "prefix")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4Data::Ipv4Data()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    security_id{YType::uint32, "security-id"},
    table_id{YType::uint32, "table-id"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "ipv4-data"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4Data::~Ipv4Data()
{
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4Data::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| security_id.is_set
	|| table_id.is_set
	|| vrf_name.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(security_id.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "security-id" || name == "table-id" || name == "vrf-name")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4L3VpnData::Ipv4L3VpnData()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    route_distinguisher{YType::uint64, "route-distinguisher"}
{

    yang_name = "ipv4l3vpn-data"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4L3VpnData::~Ipv4L3VpnData()
{
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4L3VpnData::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| route_distinguisher.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4L3VpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4L3VpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4L3VpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4L3VpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4L3VpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4L3VpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4L3VpnData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4L3VpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "route-distinguisher")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6BlbData::Ipv6BlbData()
    :
    blb_intf{YType::str, "blb-intf"},
    prefix{YType::str, "prefix"}
{

    yang_name = "ipv6blb-data"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6BlbData::~Ipv6BlbData()
{
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6BlbData::has_data() const
{
    return blb_intf.is_set
	|| prefix.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6BlbData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(blb_intf.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6BlbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6blb-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6BlbData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blb_intf.is_set || is_set(blb_intf.yfilter)) leaf_name_data.push_back(blb_intf.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6BlbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6BlbData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6BlbData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6BlbData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6BlbData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "blb-intf" || name == "prefix")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6Data::Ipv6Data()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    security_id{YType::uint32, "security-id"},
    table_id{YType::uint32, "table-id"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "ipv6-data"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6Data::~Ipv6Data()
{
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6Data::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| security_id.is_set
	|| table_id.is_set
	|| vrf_name.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(security_id.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "security-id" || name == "table-id" || name == "vrf-name")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation::Ipv6GenericRoutingEncapsulation()
    :
    greipv6_interface{YType::str, "greipv6-interface"}
{

    yang_name = "ipv6-generic-routing-encapsulation"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation::~Ipv6GenericRoutingEncapsulation()
{
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation::has_data() const
{
    return greipv6_interface.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(greipv6_interface.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-generic-routing-encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (greipv6_interface.is_set || is_set(greipv6_interface.yfilter)) leaf_name_data.push_back(greipv6_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "greipv6-interface")
    {
        greipv6_interface = value;
        greipv6_interface.value_namespace = name_space;
        greipv6_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "greipv6-interface")
    {
        greipv6_interface.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "greipv6-interface")
        return true;
    return false;
}


}
}

