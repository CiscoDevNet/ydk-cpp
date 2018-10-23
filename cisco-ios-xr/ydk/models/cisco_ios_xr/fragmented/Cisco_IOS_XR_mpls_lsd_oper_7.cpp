
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_lsd_oper_7.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_lsd_oper {

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data::Ipv6Data()
    :
    table_id{YType::uint32, "table-id"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    security_id{YType::uint32, "security-id"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "ipv6-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data::~Ipv6Data()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| security_id.is_set
	|| vrf_name.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(security_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "prefix" || name == "prefix-length" || name == "security-id" || name == "vrf-name")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data::Tev4Data()
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

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data::~Tev4Data()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data::has_data() const
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data::has_operation() const
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

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tev4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "tunnel-source" || name == "tunnel-dest" || name == "tunnel-id" || name == "tunnel-id-extension" || name == "tunnel-lsp-id" || name == "is-srte")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::Ipv4l3vpnData()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    route_distinguisher{YType::uint64, "route-distinguisher"}
{

    yang_name = "ipv4l3vpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::~Ipv4l3vpnData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| route_distinguisher.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "route-distinguisher")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::Ipv6l3vpnData()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    route_distinguisher{YType::uint64, "route-distinguisher"}
{

    yang_name = "ipv6l3vpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::~Ipv6l3vpnData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| route_distinguisher.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "route-distinguisher")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::VrfL3vpnData()
    :
    table_id{YType::uint32, "table-id"},
    security_id{YType::uint32, "security-id"}
{

    yang_name = "vrf-l3vpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::~VrfL3vpnData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| security_id.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(security_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3vpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "security-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::Cev4l3vpnData()
    :
    table_id{YType::uint32, "table-id"},
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    security_id{YType::uint32, "security-id"}
{

    yang_name = "cev4l3vpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::~Cev4l3vpnData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| ipv4_next_hop.is_set
	|| security_id.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(ipv4_next_hop.yfilter)
	|| ydk::is_set(security_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cev4l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.yfilter)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "ipv4-next-hop" || name == "security-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::Cev6l3vpnData()
    :
    table_id{YType::uint32, "table-id"},
    ipv6_next_hop{YType::str, "ipv6-next-hop"},
    security_id{YType::uint32, "security-id"}
{

    yang_name = "cev6l3vpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::~Cev6l3vpnData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| ipv6_next_hop.is_set
	|| security_id.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(ipv6_next_hop.yfilter)
	|| ydk::is_set(security_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cev6l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (ipv6_next_hop.is_set || is_set(ipv6_next_hop.yfilter)) leaf_name_data.push_back(ipv6_next_hop.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "ipv6-next-hop" || name == "security-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData::PseudowireData()
    :
    prefix{YType::str, "prefix"},
    pseudowire_id{YType::uint64, "pseudowire-id"},
    remote_l2_router_id{YType::uint32, "remote-l2-router-id"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "pseudowire-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData::~PseudowireData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| pseudowire_id.is_set
	|| remote_l2_router_id.is_set
	|| subinterface.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| ydk::is_set(remote_l2_router_id.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (remote_l2_router_id.is_set || is_set(remote_l2_router_id.yfilter)) leaf_name_data.push_back(remote_l2_router_id.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "pseudowire-id" || name == "remote-l2-router-id" || name == "subinterface")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData::LabelBlockData()
    :
    service{YType::uint8, "service"},
    vpn_id{YType::uint16, "vpn-id"},
    edge_id{YType::uint16, "edge-id"},
    offset{YType::uint32, "offset"},
    size{YType::uint32, "size"}
{

    yang_name = "label-block-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData::~LabelBlockData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData::has_data() const
{
    if (is_presence_container) return true;
    return service.is_set
	|| vpn_id.is_set
	|| edge_id.is_set
	|| offset.is_set
	|| size.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service.yfilter)
	|| ydk::is_set(vpn_id.yfilter)
	|| ydk::is_set(edge_id.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());
    if (edge_id.is_set || is_set(edge_id.yfilter)) leaf_name_data.push_back(edge_id.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service" || name == "vpn-id" || name == "edge-id" || name == "offset" || name == "size")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData::IpSubData()
    :
    table_id{YType::uint32, "table-id"},
    parent_interface{YType::str, "parent-interface"}
{

    yang_name = "ip-sub-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData::~IpSubData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| parent_interface.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(parent_interface.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-sub-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (parent_interface.is_set || is_set(parent_interface.yfilter)) leaf_name_data.push_back(parent_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "parent-interface")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::Tev4p2mpData()
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

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::~Tev4p2mpData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::has_data() const
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::has_operation() const
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

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tev4p2mp-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4p2mpData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "tunnel-source" || name == "p2mp-id" || name == "tunnel-id" || name == "tunnel-id-extension" || name == "tunnel-lsp-id" || name == "previous-hop")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data::MldPv4Data()
    :
    table_id{YType::uint32, "table-id"},
    type{YType::uint16, "type"},
    lsm_id{YType::uint32, "lsm-id"},
    peer_lsrid{YType::str, "peer-lsrid"},
    peer_label_space_id{YType::uint16, "peer-label-space-id"}
{

    yang_name = "mld-pv4-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data::~MldPv4Data()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| type.is_set
	|| lsm_id.is_set
	|| peer_lsrid.is_set
	|| peer_label_space_id.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(lsm_id.yfilter)
	|| ydk::is_set(peer_lsrid.yfilter)
	|| ydk::is_set(peer_label_space_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld-pv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (lsm_id.is_set || is_set(lsm_id.yfilter)) leaf_name_data.push_back(lsm_id.get_name_leafdata());
    if (peer_lsrid.is_set || is_set(peer_lsrid.yfilter)) leaf_name_data.push_back(peer_lsrid.get_name_leafdata());
    if (peer_label_space_id.is_set || is_set(peer_label_space_id.yfilter)) leaf_name_data.push_back(peer_label_space_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "type" || name == "lsm-id" || name == "peer-lsrid" || name == "peer-label-space-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::PseudowireHeadEndData()
    :
    pwhe_intf{YType::str, "pwhe-intf"}
{

    yang_name = "pseudowire-head-end-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::~PseudowireHeadEndData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::has_data() const
{
    if (is_presence_container) return true;
    return pwhe_intf.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pwhe_intf.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-head-end-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pwhe_intf.is_set || is_set(pwhe_intf.yfilter)) leaf_name_data.push_back(pwhe_intf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pwhe-intf")
    {
        pwhe_intf = value;
        pwhe_intf.value_namespace = name_space;
        pwhe_intf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pwhe-intf")
    {
        pwhe_intf.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pwhe-intf")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData::TpData()
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

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData::~TpData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData::has_data() const
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData::has_operation() const
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

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-global-id" || name == "source-node-id" || name == "dest-global-id" || name == "dest-node-id" || name == "source-tunnel-id" || name == "dest-tunnel-id" || name == "lsp-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::GenericRoutingEncapsulation()
    :
    gre_interface{YType::str, "gre-interface"}
{

    yang_name = "generic-routing-encapsulation"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::~GenericRoutingEncapsulation()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::has_data() const
{
    if (is_presence_container) return true;
    return gre_interface.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gre_interface.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-routing-encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gre_interface.is_set || is_set(gre_interface.yfilter)) leaf_name_data.push_back(gre_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gre-interface")
    {
        gre_interface = value;
        gre_interface.value_namespace = name_space;
        gre_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gre-interface")
    {
        gre_interface.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-interface")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::Ipv6GenericRoutingEncapsulation()
    :
    greipv6_interface{YType::str, "greipv6-interface"}
{

    yang_name = "ipv6-generic-routing-encapsulation"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::~Ipv6GenericRoutingEncapsulation()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::has_data() const
{
    if (is_presence_container) return true;
    return greipv6_interface.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(greipv6_interface.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-generic-routing-encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (greipv6_interface.is_set || is_set(greipv6_interface.yfilter)) leaf_name_data.push_back(greipv6_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "greipv6-interface")
    {
        greipv6_interface = value;
        greipv6_interface.value_namespace = name_space;
        greipv6_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "greipv6-interface")
    {
        greipv6_interface.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "greipv6-interface")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData::EvpnData()
    :
    evpn_id{YType::uint32, "evpn-id"},
    evpn_tag{YType::uint32, "evpn-tag"},
    ethernet_segment{YType::str, "ethernet-segment"},
    evpn_encap{YType::uint8, "evpn-encap"}
{

    yang_name = "evpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData::~EvpnData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData::has_data() const
{
    if (is_presence_container) return true;
    return evpn_id.is_set
	|| evpn_tag.is_set
	|| ethernet_segment.is_set
	|| evpn_encap.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evpn_id.yfilter)
	|| ydk::is_set(evpn_tag.yfilter)
	|| ydk::is_set(ethernet_segment.yfilter)
	|| ydk::is_set(evpn_encap.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evpn_id.is_set || is_set(evpn_id.yfilter)) leaf_name_data.push_back(evpn_id.get_name_leafdata());
    if (evpn_tag.is_set || is_set(evpn_tag.yfilter)) leaf_name_data.push_back(evpn_tag.get_name_leafdata());
    if (ethernet_segment.is_set || is_set(ethernet_segment.yfilter)) leaf_name_data.push_back(ethernet_segment.get_name_leafdata());
    if (evpn_encap.is_set || is_set(evpn_encap.yfilter)) leaf_name_data.push_back(evpn_encap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-id" || name == "evpn-tag" || name == "ethernet-segment" || name == "evpn-encap")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4blbData::Ipv4blbData()
    :
    blb_intf{YType::str, "blb-intf"},
    prefix{YType::str, "prefix"}
{

    yang_name = "ipv4blb-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4blbData::~Ipv4blbData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4blbData::has_data() const
{
    if (is_presence_container) return true;
    return blb_intf.is_set
	|| prefix.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4blbData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(blb_intf.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4blbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4blb-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4blbData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blb_intf.is_set || is_set(blb_intf.yfilter)) leaf_name_data.push_back(blb_intf.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4blbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4blbData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4blbData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4blbData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4blbData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "blb-intf" || name == "prefix")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6blbData::Ipv6blbData()
    :
    blb_intf{YType::str, "blb-intf"},
    prefix{YType::str, "prefix"}
{

    yang_name = "ipv6blb-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6blbData::~Ipv6blbData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6blbData::has_data() const
{
    if (is_presence_container) return true;
    return blb_intf.is_set
	|| prefix.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6blbData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(blb_intf.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6blbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6blb-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6blbData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blb_intf.is_set || is_set(blb_intf.yfilter)) leaf_name_data.push_back(blb_intf.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6blbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6blbData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6blbData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6blbData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6blbData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "blb-intf" || name == "prefix")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::PiMiPmsiData()
    :
    vrf_id{YType::uint32, "vrf-id"},
    head{YType::int32, "head"},
    v6{YType::int32, "v6"}
{

    yang_name = "pi-mi-pmsi-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::~PiMiPmsiData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::has_data() const
{
    if (is_presence_container) return true;
    return vrf_id.is_set
	|| head.is_set
	|| v6.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(head.yfilter)
	|| ydk::is_set(v6.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pi-mi-pmsi-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (head.is_set || is_set(head.yfilter)) leaf_name_data.push_back(head.get_name_leafdata());
    if (v6.is_set || is_set(v6.yfilter)) leaf_name_data.push_back(v6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-id" || name == "head" || name == "v6")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::PiMsPmsiData()
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

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::~PiMsPmsiData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::has_data() const
{
    if (is_presence_container) return true;
    return vrf_id.is_set
	|| source.is_set
	|| head.is_set
	|| v6.is_set
	|| hli.is_set
	|| seg.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(head.yfilter)
	|| ydk::is_set(v6.yfilter)
	|| ydk::is_set(hli.yfilter)
	|| ydk::is_set(seg.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pi-ms-pmsi-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-id" || name == "source" || name == "head" || name == "v6" || name == "hli" || name == "seg")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::NextHopSetL3vpn()
    :
    table_id{YType::uint32, "table-id"},
    next_hop_set_id{YType::uint32, "next-hop-set-id"}
{

    yang_name = "next-hop-set-l3vpn"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::~NextHopSetL3vpn()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| next_hop_set_id.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(next_hop_set_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-set-l3vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (next_hop_set_id.is_set || is_set(next_hop_set_id.yfilter)) leaf_name_data.push_back(next_hop_set_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "next-hop-set-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::SrPrefixSegment()
    :
    table_id{YType::uint32, "table-id"},
    segment_id{YType::uint32, "segment-id"}
{

    yang_name = "sr-prefix-segment"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::~SrPrefixSegment()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| segment_id.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(segment_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-prefix-segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (segment_id.is_set || is_set(segment_id.yfilter)) leaf_name_data.push_back(segment_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "segment-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::SrAdjSegmentIpv4()
    :
    index_{YType::uint32, "index"},
    type{YType::uint32, "type"},
    intf{YType::str, "intf"},
    addr{YType::str, "addr"}
{

    yang_name = "sr-adj-segment-ipv4"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::~SrAdjSegmentIpv4()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| type.is_set
	|| intf.is_set
	|| addr.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-adj-segment-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "type" || name == "intf" || name == "addr")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::SrAdjSegmentIpv6()
    :
    index_{YType::uint32, "index"},
    type{YType::uint32, "type"},
    intf{YType::str, "intf"},
    addr{YType::str, "addr"}
{

    yang_name = "sr-adj-segment-ipv6"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::~SrAdjSegmentIpv6()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| type.is_set
	|| intf.is_set
	|| addr.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-adj-segment-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "type" || name == "intf" || name == "addr")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::LabelBlockSrgbData()
    :
    start_label{YType::uint32, "start-label"},
    offset{YType::uint32, "offset"},
    size{YType::uint32, "size"}
{

    yang_name = "label-block-srgb-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::~LabelBlockSrgbData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::has_data() const
{
    if (is_presence_container) return true;
    return start_label.is_set
	|| offset.is_set
	|| size.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_label.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block-srgb-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_label.is_set || is_set(start_label.yfilter)) leaf_name_data.push_back(start_label.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-label" || name == "offset" || name == "size")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding::TeBinding()
    :
    te_identifier{YType::uint32, "te-identifier"},
    te_type{YType::enumeration, "te-type"}
{

    yang_name = "te-binding"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding::~TeBinding()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding::has_data() const
{
    if (is_presence_container) return true;
    return te_identifier.is_set
	|| te_type.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_identifier.yfilter)
	|| ydk::is_set(te_type.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_identifier.is_set || is_set(te_identifier.yfilter)) leaf_name_data.push_back(te_identifier.get_name_leafdata());
    if (te_type.is_set || is_set(te_type.yfilter)) leaf_name_data.push_back(te_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-identifier" || name == "te-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::LabelBlockSrlbData()
    :
    start_label{YType::uint32, "start-label"},
    offset{YType::uint32, "offset"},
    size{YType::uint32, "size"}
{

    yang_name = "label-block-srlb-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::~LabelBlockSrlbData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::has_data() const
{
    if (is_presence_container) return true;
    return start_label.is_set
	|| offset.is_set
	|| size.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_label.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block-srlb-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_label.is_set || is_set(start_label.yfilter)) leaf_name_data.push_back(start_label.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-label" || name == "offset" || name == "size")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::LocalLabelRewrite()
    :
    label_data(this, {})
{

    yang_name = "local-label-rewrite"; yang_parent_name = "rewrite-id"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::~LocalLabelRewrite()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<label_data.len(); index++)
    {
        if(label_data[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::has_operation() const
{
    for (std::size_t index=0; index<label_data.len(); index++)
    {
        if(label_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-label-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-data")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::LabelData>();
        ent_->parent = this;
        label_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::get_children() const
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-data")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::LabelData()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "label-data"; yang_parent_name = "local-label-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::~LabelData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::LabelData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::AssociatedFpi()
    :
    fpi(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi>())
    , application_owner(this, {})
{
    fpi->parent = this;

    yang_name = "associated-fpi"; yang_parent_name = "rewrite-label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::~AssociatedFpi()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application_owner.len(); index++)
    {
        if(application_owner[index]->has_data())
            return true;
    }
    return (fpi !=  nullptr && fpi->has_data());
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::has_operation() const
{
    for (std::size_t index=0; index<application_owner.len(); index++)
    {
        if(application_owner[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (fpi !=  nullptr && fpi->has_operation());
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "associated-fpi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpi")
    {
        if(fpi == nullptr)
        {
            fpi = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi>();
        }
        return fpi;
    }

    if(child_yang_name == "application-owner")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner>();
        ent_->parent = this;
        application_owner.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::get_children() const
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpi" || name == "application-owner")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Fpi()
    :
    fpi_type{YType::enumeration, "fpi-type"}
        ,
    label_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData>())
    , te_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData>())
    , ipv4_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data>())
    , ipv6_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data>())
    , pw_list_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData>())
    , dmtc_ext_intf_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData>())
    , label_range(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelRange>())
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

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::~Fpi()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::has_data() const
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::has_operation() const
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

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fpi_type.is_set || is_set(fpi_type.yfilter)) leaf_name_data.push_back(fpi_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-data")
    {
        if(label_data == nullptr)
        {
            label_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData>();
        }
        return label_data;
    }

    if(child_yang_name == "te-data")
    {
        if(te_data == nullptr)
        {
            te_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData>();
        }
        return te_data;
    }

    if(child_yang_name == "ipv4-data")
    {
        if(ipv4_data == nullptr)
        {
            ipv4_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data>();
        }
        return ipv4_data;
    }

    if(child_yang_name == "ipv6-data")
    {
        if(ipv6_data == nullptr)
        {
            ipv6_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data>();
        }
        return ipv6_data;
    }

    if(child_yang_name == "pw-list-data")
    {
        if(pw_list_data == nullptr)
        {
            pw_list_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData>();
        }
        return pw_list_data;
    }

    if(child_yang_name == "dmtc-ext-intf-data")
    {
        if(dmtc_ext_intf_data == nullptr)
        {
            dmtc_ext_intf_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData>();
        }
        return dmtc_ext_intf_data;
    }

    if(child_yang_name == "label-range")
    {
        if(label_range == nullptr)
        {
            label_range = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelRange>();
        }
        return label_range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::get_children() const
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fpi-type")
    {
        fpi_type = value;
        fpi_type.value_namespace = name_space;
        fpi_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fpi-type")
    {
        fpi_type.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-data" || name == "te-data" || name == "ipv4-data" || name == "ipv6-data" || name == "pw-list-data" || name == "dmtc-ext-intf-data" || name == "label-range" || name == "fpi-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData::LabelData()
    :
    label{YType::uint32, "label"},
    security_id{YType::uint32, "security-id"},
    elc{YType::int32, "elc"}
{

    yang_name = "label-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData::~LabelData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| security_id.is_set
	|| elc.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(security_id.yfilter)
	|| ydk::is_set(elc.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (elc.is_set || is_set(elc.yfilter)) leaf_name_data.push_back(elc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "security-id" || name == "elc")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData::TeData()
    :
    tunnel_interface{YType::str, "tunnel-interface"},
    local_label{YType::uint32, "local-label"}
{

    yang_name = "te-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData::~TeData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_interface.is_set
	|| local_label.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(local_label.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-interface" || name == "local-label")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data::Ipv4Data()
    :
    table_id{YType::uint32, "table-id"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    version{YType::uint32, "version"},
    sr_local_label{YType::uint32, "sr-local-label"}
{

    yang_name = "ipv4-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data::~Ipv4Data()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| version.is_set
	|| sr_local_label.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(sr_local_label.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (sr_local_label.is_set || is_set(sr_local_label.yfilter)) leaf_name_data.push_back(sr_local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "prefix" || name == "prefix-length" || name == "version" || name == "sr-local-label")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data::Ipv6Data()
    :
    table_id{YType::uint32, "table-id"},
    prefix{YType::str, "prefix"},
    router_flags{YType::uint32, "router-flags"},
    prefix_len{YType::uint8, "prefix-len"},
    version{YType::uint32, "version"}
{

    yang_name = "ipv6-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data::~Ipv6Data()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| prefix.is_set
	|| router_flags.is_set
	|| prefix_len.is_set
	|| version.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(router_flags.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (router_flags.is_set || is_set(router_flags.yfilter)) leaf_name_data.push_back(router_flags.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "prefix" || name == "router-flags" || name == "prefix-len" || name == "version")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData::PwListData()
    :
    pwhe_list_id{YType::uint16, "pwhe-list-id"}
{

    yang_name = "pw-list-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData::~PwListData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData::has_data() const
{
    if (is_presence_container) return true;
    return pwhe_list_id.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pwhe_list_id.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-list-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pwhe_list_id.is_set || is_set(pwhe_list_id.yfilter)) leaf_name_data.push_back(pwhe_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pwhe-list-id")
    {
        pwhe_list_id = value;
        pwhe_list_id.value_namespace = name_space;
        pwhe_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pwhe-list-id")
    {
        pwhe_list_id.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pwhe-list-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData::DmtcExtIntfData()
    :
    dmtc_ext_ifh{YType::str, "dmtc-ext-ifh"}
{

    yang_name = "dmtc-ext-intf-data"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData::~DmtcExtIntfData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData::has_data() const
{
    if (is_presence_container) return true;
    return dmtc_ext_ifh.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dmtc_ext_ifh.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dmtc-ext-intf-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dmtc_ext_ifh.is_set || is_set(dmtc_ext_ifh.yfilter)) leaf_name_data.push_back(dmtc_ext_ifh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dmtc-ext-ifh")
    {
        dmtc_ext_ifh = value;
        dmtc_ext_ifh.value_namespace = name_space;
        dmtc_ext_ifh.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dmtc-ext-ifh")
    {
        dmtc_ext_ifh.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dmtc-ext-ifh")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelRange::LabelRange()
    :
    type{YType::uint8, "type"},
    index_{YType::uint8, "index"}
{

    yang_name = "label-range"; yang_parent_name = "fpi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelRange::~LabelRange()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelRange::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| index_.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelRange::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "index")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner::ApplicationOwner()
    :
    application_name{YType::str, "application-name"},
    application_type{YType::enumeration, "application-type"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_instance{YType::str, "application-instance"},
    resource_state{YType::enumeration, "resource-state"}
{

    yang_name = "application-owner"; yang_parent_name = "associated-fpi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner::~ApplicationOwner()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner::has_data() const
{
    if (is_presence_container) return true;
    return application_name.is_set
	|| application_type.is_set
	|| application_role_primary.is_set
	|| application_instance.is_set
	|| resource_state.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| ydk::is_set(application_type.yfilter)
	|| ydk::is_set(application_role_primary.yfilter)
	|| ydk::is_set(application_instance.yfilter)
	|| ydk::is_set(resource_state.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-owner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (application_role_primary.is_set || is_set(application_role_primary.yfilter)) leaf_name_data.push_back(application_role_primary.get_name_leafdata());
    if (application_instance.is_set || is_set(application_instance.yfilter)) leaf_name_data.push_back(application_instance.get_name_leafdata());
    if (resource_state.is_set || is_set(resource_state.yfilter)) leaf_name_data.push_back(resource_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-name" || name == "application-type" || name == "application-role-primary" || name == "application-instance" || name == "resource-state")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V4Rpf::V4Rpf()
    :
    table_id{YType::uint32, "table-id"},
    v4_rpf_neighbor{YType::str, "v4-rpf-neighbor"}
{

    yang_name = "v4-rpf"; yang_parent_name = "rewrite-label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V4Rpf::~V4Rpf()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V4Rpf::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| v4_rpf_neighbor.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V4Rpf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(v4_rpf_neighbor.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V4Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-rpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V4Rpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (v4_rpf_neighbor.is_set || is_set(v4_rpf_neighbor.yfilter)) leaf_name_data.push_back(v4_rpf_neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V4Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V4Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V4Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V4Rpf::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V4Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "v4-rpf-neighbor")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V6Rpf::V6Rpf()
    :
    table_id{YType::uint32, "table-id"},
    v6_rpf_neighbor{YType::str, "v6-rpf-neighbor"}
{

    yang_name = "v6-rpf"; yang_parent_name = "rewrite-label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V6Rpf::~V6Rpf()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V6Rpf::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| v6_rpf_neighbor.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V6Rpf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(v6_rpf_neighbor.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V6Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v6-rpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V6Rpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (v6_rpf_neighbor.is_set || is_set(v6_rpf_neighbor.yfilter)) leaf_name_data.push_back(v6_rpf_neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V6Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V6Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V6Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V6Rpf::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V6Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "v6-rpf-neighbor")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::Mois()
    :
    application_resource(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource>())
    , moi_array(this, {})
{
    application_resource->parent = this;

    yang_name = "mois"; yang_parent_name = "rewrite-label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::~Mois()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<moi_array.len(); index++)
    {
        if(moi_array[index]->has_data())
            return true;
    }
    return (application_resource !=  nullptr && application_resource->has_data());
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::has_operation() const
{
    for (std::size_t index=0; index<moi_array.len(); index++)
    {
        if(moi_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (application_resource !=  nullptr && application_resource->has_operation());
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mois";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-resource")
    {
        if(application_resource == nullptr)
        {
            application_resource = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource>();
        }
        return application_resource;
    }

    if(child_yang_name == "moi-array")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray>();
        ent_->parent = this;
        moi_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::get_children() const
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-resource" || name == "moi-array")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::ApplicationResource()
    :
    application_name{YType::str, "application-name"},
    application_type{YType::enumeration, "application-type"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_instance{YType::str, "application-instance"},
    resource_state{YType::enumeration, "resource-state"}
{

    yang_name = "application-resource"; yang_parent_name = "mois"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::~ApplicationResource()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::has_data() const
{
    if (is_presence_container) return true;
    return application_name.is_set
	|| application_type.is_set
	|| application_role_primary.is_set
	|| application_instance.is_set
	|| resource_state.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| ydk::is_set(application_type.yfilter)
	|| ydk::is_set(application_role_primary.yfilter)
	|| ydk::is_set(application_instance.yfilter)
	|| ydk::is_set(resource_state.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-resource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (application_role_primary.is_set || is_set(application_role_primary.yfilter)) leaf_name_data.push_back(application_role_primary.get_name_leafdata());
    if (application_instance.is_set || is_set(application_instance.yfilter)) leaf_name_data.push_back(application_instance.get_name_leafdata());
    if (resource_state.is_set || is_set(resource_state.yfilter)) leaf_name_data.push_back(resource_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-name" || name == "application-type" || name == "application-role-primary" || name == "application-instance" || name == "resource-state")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::MoiArray()
    :
    moi(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi>())
{
    moi->parent = this;

    yang_name = "moi-array"; yang_parent_name = "mois"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::~MoiArray()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::has_data() const
{
    if (is_presence_container) return true;
    return (moi !=  nullptr && moi->has_data());
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::has_operation() const
{
    return is_set(yfilter)
	|| (moi !=  nullptr && moi->has_operation());
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "moi-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "moi")
    {
        if(moi == nullptr)
        {
            moi = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi>();
        }
        return moi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(moi != nullptr)
    {
        _children["moi"] = moi;
    }

    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "moi")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Moi()
    :
    moi_type{YType::enumeration, "moi-type"}
        ,
    pop_and_lookup_ipv4(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4>())
    , pop_and_lookup_tp(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp>())
    , pop_and_lookup_ipv6(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6>())
    , ipv4_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data>())
    , ipv6_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data>())
    , tev4_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data>())
    , pseudowire_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData>())
    , ip_sub_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData>())
    , pseudowire_head_end_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData>())
    , pw_list_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData>())
    , stackv4_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data>())
    , stackv6_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data>())
    , te_head_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData>())
    , dmtc_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData>())
    , nnh_stackv4_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data>())
    , nnh_stackv6_data(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data>())
    , label_range(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::LabelRange>())
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

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::~Moi()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::has_data() const
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::has_operation() const
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

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "moi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (moi_type.is_set || is_set(moi_type.yfilter)) leaf_name_data.push_back(moi_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pop-and-lookup-ipv4")
    {
        if(pop_and_lookup_ipv4 == nullptr)
        {
            pop_and_lookup_ipv4 = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4>();
        }
        return pop_and_lookup_ipv4;
    }

    if(child_yang_name == "pop-and-lookup-tp")
    {
        if(pop_and_lookup_tp == nullptr)
        {
            pop_and_lookup_tp = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp>();
        }
        return pop_and_lookup_tp;
    }

    if(child_yang_name == "pop-and-lookup-ipv6")
    {
        if(pop_and_lookup_ipv6 == nullptr)
        {
            pop_and_lookup_ipv6 = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6>();
        }
        return pop_and_lookup_ipv6;
    }

    if(child_yang_name == "ipv4-data")
    {
        if(ipv4_data == nullptr)
        {
            ipv4_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data>();
        }
        return ipv4_data;
    }

    if(child_yang_name == "ipv6-data")
    {
        if(ipv6_data == nullptr)
        {
            ipv6_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data>();
        }
        return ipv6_data;
    }

    if(child_yang_name == "tev4-data")
    {
        if(tev4_data == nullptr)
        {
            tev4_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data>();
        }
        return tev4_data;
    }

    if(child_yang_name == "pseudowire-data")
    {
        if(pseudowire_data == nullptr)
        {
            pseudowire_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData>();
        }
        return pseudowire_data;
    }

    if(child_yang_name == "ip-sub-data")
    {
        if(ip_sub_data == nullptr)
        {
            ip_sub_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData>();
        }
        return ip_sub_data;
    }

    if(child_yang_name == "pseudowire-head-end-data")
    {
        if(pseudowire_head_end_data == nullptr)
        {
            pseudowire_head_end_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData>();
        }
        return pseudowire_head_end_data;
    }

    if(child_yang_name == "pw-list-data")
    {
        if(pw_list_data == nullptr)
        {
            pw_list_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData>();
        }
        return pw_list_data;
    }

    if(child_yang_name == "stackv4-data")
    {
        if(stackv4_data == nullptr)
        {
            stackv4_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data>();
        }
        return stackv4_data;
    }

    if(child_yang_name == "stackv6-data")
    {
        if(stackv6_data == nullptr)
        {
            stackv6_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data>();
        }
        return stackv6_data;
    }

    if(child_yang_name == "te-head-data")
    {
        if(te_head_data == nullptr)
        {
            te_head_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData>();
        }
        return te_head_data;
    }

    if(child_yang_name == "dmtc-data")
    {
        if(dmtc_data == nullptr)
        {
            dmtc_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData>();
        }
        return dmtc_data;
    }

    if(child_yang_name == "nnh-stackv4-data")
    {
        if(nnh_stackv4_data == nullptr)
        {
            nnh_stackv4_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data>();
        }
        return nnh_stackv4_data;
    }

    if(child_yang_name == "nnh-stackv6-data")
    {
        if(nnh_stackv6_data == nullptr)
        {
            nnh_stackv6_data = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data>();
        }
        return nnh_stackv6_data;
    }

    if(child_yang_name == "label-range")
    {
        if(label_range == nullptr)
        {
            label_range = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::LabelRange>();
        }
        return label_range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::get_children() const
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "moi-type")
    {
        moi_type = value;
        moi_type.value_namespace = name_space;
        moi_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "moi-type")
    {
        moi_type.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pop-and-lookup-ipv4" || name == "pop-and-lookup-tp" || name == "pop-and-lookup-ipv6" || name == "ipv4-data" || name == "ipv6-data" || name == "tev4-data" || name == "pseudowire-data" || name == "ip-sub-data" || name == "pseudowire-head-end-data" || name == "pw-list-data" || name == "stackv4-data" || name == "stackv6-data" || name == "te-head-data" || name == "dmtc-data" || name == "nnh-stackv4-data" || name == "nnh-stackv6-data" || name == "label-range" || name == "moi-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::PopAndLookupIpv4()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"}
{

    yang_name = "pop-and-lookup-ipv4"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::~PopAndLookupIpv4()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop-and-lookup-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::PopAndLookupTp()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"},
    out_label{YType::uint32, "out-label"}
{

    yang_name = "pop-and-lookup-tp"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::~PopAndLookupTp()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set
	|| out_label.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop-and-lookup-tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-label")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::PopAndLookupIpv6()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    path_flags_decode{YType::str, "path-flags-decode"}
{

    yang_name = "pop-and-lookup-ipv6"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::~PopAndLookupIpv6()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| table_name.is_set
	|| path_flags_decode.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop-and-lookup-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::Ipv4Data()
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

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::~Ipv4Data()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::has_data() const
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::has_operation() const
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

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-interface" || name == "out-interface-parent" || name == "ipv4-next-hop" || name == "path-id" || name == "backup-path-id" || name == "load-metric" || name == "out-label" || name == "out-label-name" || name == "tunnel-id" || name == "tunnel-type" || name == "next-hop-id" || name == "local-label")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::Ipv6Data()
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

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::~Ipv6Data()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::has_data() const
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::has_operation() const
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

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-interface" || name == "out-label" || name == "out-label-name" || name == "ipv6-next-hop" || name == "path-id" || name == "backup-path-id" || name == "tunnel-id" || name == "tunnel-type" || name == "next-hop-id" || name == "out-interface-parent")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::Tev4Data()
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

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::~Tev4Data()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::has_data() const
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::has_operation() const
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

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tev4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-interface" || name == "out-label" || name == "out-label-name" || name == "ipv4-next-hop" || name == "backup-interface" || name == "backup-ipv4-next-hop" || name == "merge-point-label" || name == "backup-local-label" || name == "tunnel-interface" || name == "tunnel-weight" || name == "data-out-parent-interface" || name == "tunnel-class" || name == "ipv4-next-next-hop")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::PseudowireData()
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

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::~PseudowireData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::has_data() const
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::has_operation() const
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

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-interface" || name == "out-label" || name == "cross-connect-id" || name == "pseuodo-wire-connect-id" || name == "ipv4-next-hop" || name == "bridge-id" || name == "split-horizon-id")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::IpSubData()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    out_interface{YType::str, "out-interface"},
    path_flags_decode{YType::str, "path-flags-decode"}
{

    yang_name = "ip-sub-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::~IpSubData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| table_name.is_set
	|| out_interface.is_set
	|| path_flags_decode.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-sub-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "out-interface" || name == "path-flags-decode")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::PseudowireHeadEndData()
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

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::~PseudowireHeadEndData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::has_data() const
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::has_operation() const
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

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-head-end-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-interface" || name == "out-label" || name == "ipv4-next-hop" || name == "control-word" || name == "imposition" || name == "vctype" || name == "pw-list-id" || name == "pwhe-interface")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::PwListData()
    :
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    l3_interface{YType::str, "l3-interface"},
    l2_interface{YType::str, "l2-interface"},
    path_flags_decode{YType::str, "path-flags-decode"}
{

    yang_name = "pw-list-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::~PwListData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| table_name.is_set
	|| l3_interface.is_set
	|| l2_interface.is_set
	|| path_flags_decode.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(l3_interface.yfilter)
	|| ydk::is_set(l2_interface.yfilter)
	|| ydk::is_set(path_flags_decode.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-list-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (l3_interface.is_set || is_set(l3_interface.yfilter)) leaf_name_data.push_back(l3_interface.get_name_leafdata());
    if (l2_interface.is_set || is_set(l2_interface.yfilter)) leaf_name_data.push_back(l2_interface.get_name_leafdata());
    if (path_flags_decode.is_set || is_set(path_flags_decode.yfilter)) leaf_name_data.push_back(path_flags_decode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "l3-interface" || name == "l2-interface" || name == "path-flags-decode")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Stackv4Data()
    :
    owner_application_type{YType::enumeration, "owner-application-type"}
        ,
    nexthop(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop>())
    , inner_stack(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack>())
{
    nexthop->parent = this;
    inner_stack->parent = this;

    yang_name = "stackv4-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::~Stackv4Data()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::has_data() const
{
    if (is_presence_container) return true;
    return owner_application_type.is_set
	|| (nexthop !=  nullptr && nexthop->has_data())
	|| (inner_stack !=  nullptr && inner_stack->has_data());
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner_application_type.yfilter)
	|| (nexthop !=  nullptr && nexthop->has_operation())
	|| (inner_stack !=  nullptr && inner_stack->has_operation());
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stackv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner_application_type.is_set || is_set(owner_application_type.yfilter)) leaf_name_data.push_back(owner_application_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop>();
        }
        return nexthop;
    }

    if(child_yang_name == "inner-stack")
    {
        if(inner_stack == nullptr)
        {
            inner_stack = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack>();
        }
        return inner_stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::get_children() const
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner-application-type")
    {
        owner_application_type = value;
        owner_application_type.value_namespace = name_space;
        owner_application_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner-application-type")
    {
        owner_application_type.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "inner-stack" || name == "owner-application-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::Nexthop()
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

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::~Nexthop()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::has_data() const
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::has_operation() const
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

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-interface" || name == "out-interface-parent" || name == "ipv4-next-hop" || name == "path-id" || name == "backup-path-id" || name == "load-metric" || name == "out-label" || name == "out-label-name" || name == "tunnel-id" || name == "tunnel-type" || name == "next-hop-id" || name == "local-label")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::InnerStack()
    :
    num_nexthops{YType::uint8, "num-nexthops"},
    num_lbls{YType::uint8, "num-lbls"}
        ,
    nexthop(this, {})
    , label(this, {})
{

    yang_name = "inner-stack"; yang_parent_name = "stackv4-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::~InnerStack()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::has_data() const
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::has_operation() const
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

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inner-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_nexthops.is_set || is_set(num_nexthops.yfilter)) leaf_name_data.push_back(num_nexthops.get_name_leafdata());
    if (num_lbls.is_set || is_set(num_lbls.yfilter)) leaf_name_data.push_back(num_lbls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop>();
        ent_->parent = this;
        nexthop.append(ent_);
        return ent_;
    }

    if(child_yang_name == "label")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label>();
        ent_->parent = this;
        label.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::get_children() const
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "label" || name == "num-nexthops" || name == "num-lbls")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop::Nexthop()
    :
    entry{YType::str, "entry"}
{

    yang_name = "nexthop"; yang_parent_name = "inner-stack"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop::~Nexthop()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::Label()
    :
    outgoing_label{YType::uint32, "outgoing-label"},
    outgoing_label_str{YType::str, "outgoing-label-str"}
{

    yang_name = "label"; yang_parent_name = "inner-stack"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::~Label()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::has_data() const
{
    if (is_presence_container) return true;
    return outgoing_label.is_set
	|| outgoing_label_str.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(outgoing_label_str.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (outgoing_label_str.is_set || is_set(outgoing_label_str.yfilter)) leaf_name_data.push_back(outgoing_label_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outgoing-label" || name == "outgoing-label-str")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Stackv6Data()
    :
    nexthop(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop>())
    , inner_stack(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack>())
{
    nexthop->parent = this;
    inner_stack->parent = this;

    yang_name = "stackv6-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::~Stackv6Data()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::has_data() const
{
    if (is_presence_container) return true;
    return (nexthop !=  nullptr && nexthop->has_data())
	|| (inner_stack !=  nullptr && inner_stack->has_data());
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::has_operation() const
{
    return is_set(yfilter)
	|| (nexthop !=  nullptr && nexthop->has_operation())
	|| (inner_stack !=  nullptr && inner_stack->has_operation());
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stackv6-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop>();
        }
        return nexthop;
    }

    if(child_yang_name == "inner-stack")
    {
        if(inner_stack == nullptr)
        {
            inner_stack = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack>();
        }
        return inner_stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::get_children() const
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "inner-stack")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::Nexthop()
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

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::~Nexthop()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::has_data() const
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::has_operation() const
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

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-interface" || name == "out-label" || name == "out-label-name" || name == "ipv6-next-hop" || name == "path-id" || name == "backup-path-id" || name == "tunnel-id" || name == "tunnel-type" || name == "next-hop-id" || name == "out-interface-parent")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::InnerStack()
    :
    num_nexthops{YType::uint8, "num-nexthops"},
    num_lbls{YType::uint8, "num-lbls"}
        ,
    nexthop(this, {})
    , label(this, {})
{

    yang_name = "inner-stack"; yang_parent_name = "stackv6-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::~InnerStack()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::has_data() const
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::has_operation() const
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

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inner-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_nexthops.is_set || is_set(num_nexthops.yfilter)) leaf_name_data.push_back(num_nexthops.get_name_leafdata());
    if (num_lbls.is_set || is_set(num_lbls.yfilter)) leaf_name_data.push_back(num_lbls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop>();
        ent_->parent = this;
        nexthop.append(ent_);
        return ent_;
    }

    if(child_yang_name == "label")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label>();
        ent_->parent = this;
        label.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::get_children() const
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "label" || name == "num-nexthops" || name == "num-lbls")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop::Nexthop()
    :
    entry{YType::str, "entry"}
{

    yang_name = "nexthop"; yang_parent_name = "inner-stack"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop::~Nexthop()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::Label()
    :
    outgoing_label{YType::uint32, "outgoing-label"},
    outgoing_label_str{YType::str, "outgoing-label-str"}
{

    yang_name = "label"; yang_parent_name = "inner-stack"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::~Label()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::has_data() const
{
    if (is_presence_container) return true;
    return outgoing_label.is_set
	|| outgoing_label_str.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(outgoing_label_str.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (outgoing_label_str.is_set || is_set(outgoing_label_str.yfilter)) leaf_name_data.push_back(outgoing_label_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outgoing-label" || name == "outgoing-label-str")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::TeHeadData()
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

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::~TeHeadData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::has_data() const
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::has_operation() const
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

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-head-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "tunnel-local-label" || name == "tunnel-local-label-str" || name == "tunnel-fwd-class" || name == "tunnel-load-metric" || name == "flags-decode")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::DmtcData()
    :
    dmtc_ext_ifh{YType::str, "dmtc-ext-ifh"}
{

    yang_name = "dmtc-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::~DmtcData()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::has_data() const
{
    if (is_presence_container) return true;
    return dmtc_ext_ifh.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dmtc_ext_ifh.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dmtc-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dmtc_ext_ifh.is_set || is_set(dmtc_ext_ifh.yfilter)) leaf_name_data.push_back(dmtc_ext_ifh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dmtc-ext-ifh")
    {
        dmtc_ext_ifh = value;
        dmtc_ext_ifh.value_namespace = name_space;
        dmtc_ext_ifh.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dmtc-ext-ifh")
    {
        dmtc_ext_ifh.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dmtc-ext-ifh")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::NnhStackv4Data()
    :
    ipv4_stack(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack>())
    , neighbor_next_hop(this, {})
{
    ipv4_stack->parent = this;

    yang_name = "nnh-stackv4-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::~NnhStackv4Data()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_next_hop.len(); index++)
    {
        if(neighbor_next_hop[index]->has_data())
            return true;
    }
    return (ipv4_stack !=  nullptr && ipv4_stack->has_data());
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::has_operation() const
{
    for (std::size_t index=0; index<neighbor_next_hop.len(); index++)
    {
        if(neighbor_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ipv4_stack !=  nullptr && ipv4_stack->has_operation());
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nnh-stackv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-stack")
    {
        if(ipv4_stack == nullptr)
        {
            ipv4_stack = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack>();
        }
        return ipv4_stack;
    }

    if(child_yang_name == "neighbor-next-hop")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop>();
        ent_->parent = this;
        neighbor_next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::get_children() const
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-stack" || name == "neighbor-next-hop")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Ipv4Stack()
    :
    owner_application_type{YType::enumeration, "owner-application-type"}
        ,
    nexthop(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop>())
    , inner_stack(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack>())
{
    nexthop->parent = this;
    inner_stack->parent = this;

    yang_name = "ipv4-stack"; yang_parent_name = "nnh-stackv4-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::~Ipv4Stack()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::has_data() const
{
    if (is_presence_container) return true;
    return owner_application_type.is_set
	|| (nexthop !=  nullptr && nexthop->has_data())
	|| (inner_stack !=  nullptr && inner_stack->has_data());
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner_application_type.yfilter)
	|| (nexthop !=  nullptr && nexthop->has_operation())
	|| (inner_stack !=  nullptr && inner_stack->has_operation());
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner_application_type.is_set || is_set(owner_application_type.yfilter)) leaf_name_data.push_back(owner_application_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop>();
        }
        return nexthop;
    }

    if(child_yang_name == "inner-stack")
    {
        if(inner_stack == nullptr)
        {
            inner_stack = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack>();
        }
        return inner_stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::get_children() const
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner-application-type")
    {
        owner_application_type = value;
        owner_application_type.value_namespace = name_space;
        owner_application_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner-application-type")
    {
        owner_application_type.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "inner-stack" || name == "owner-application-type")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop::Nexthop()
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

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop::~Nexthop()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop::has_data() const
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop::has_operation() const
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

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-interface" || name == "out-interface-parent" || name == "ipv4-next-hop" || name == "path-id" || name == "backup-path-id" || name == "load-metric" || name == "out-label" || name == "out-label-name" || name == "tunnel-id" || name == "tunnel-type" || name == "next-hop-id" || name == "local-label")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::InnerStack()
    :
    num_nexthops{YType::uint8, "num-nexthops"},
    num_lbls{YType::uint8, "num-lbls"}
        ,
    nexthop(this, {})
    , label(this, {})
{

    yang_name = "inner-stack"; yang_parent_name = "ipv4-stack"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::~InnerStack()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::has_data() const
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::has_operation() const
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

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inner-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_nexthops.is_set || is_set(num_nexthops.yfilter)) leaf_name_data.push_back(num_nexthops.get_name_leafdata());
    if (num_lbls.is_set || is_set(num_lbls.yfilter)) leaf_name_data.push_back(num_lbls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop>();
        ent_->parent = this;
        nexthop.append(ent_);
        return ent_;
    }

    if(child_yang_name == "label")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label>();
        ent_->parent = this;
        label.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::get_children() const
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "label" || name == "num-nexthops" || name == "num-lbls")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop::Nexthop()
    :
    entry{YType::str, "entry"}
{

    yang_name = "nexthop"; yang_parent_name = "inner-stack"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop::~Nexthop()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label::Label()
    :
    outgoing_label{YType::uint32, "outgoing-label"},
    outgoing_label_str{YType::str, "outgoing-label-str"}
{

    yang_name = "label"; yang_parent_name = "inner-stack"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label::~Label()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label::has_data() const
{
    if (is_presence_container) return true;
    return outgoing_label.is_set
	|| outgoing_label_str.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(outgoing_label_str.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (outgoing_label_str.is_set || is_set(outgoing_label_str.yfilter)) leaf_name_data.push_back(outgoing_label_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outgoing-label" || name == "outgoing-label-str")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop::NeighborNextHop()
    :
    nnh_type{YType::enumeration, "nnh-type"},
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "neighbor-next-hop"; yang_parent_name = "nnh-stackv4-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop::~NeighborNextHop()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop::has_data() const
{
    if (is_presence_container) return true;
    return nnh_type.is_set
	|| address.is_set
	|| interface_name.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nnh_type.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nnh_type.is_set || is_set(nnh_type.yfilter)) leaf_name_data.push_back(nnh_type.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nnh-type" || name == "address" || name == "interface-name")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::NnhStackv6Data()
    :
    ipv6_stack(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack>())
    , neighbor_next_hop(this, {})
{
    ipv6_stack->parent = this;

    yang_name = "nnh-stackv6-data"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::~NnhStackv6Data()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_next_hop.len(); index++)
    {
        if(neighbor_next_hop[index]->has_data())
            return true;
    }
    return (ipv6_stack !=  nullptr && ipv6_stack->has_data());
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::has_operation() const
{
    for (std::size_t index=0; index<neighbor_next_hop.len(); index++)
    {
        if(neighbor_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ipv6_stack !=  nullptr && ipv6_stack->has_operation());
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nnh-stackv6-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-stack")
    {
        if(ipv6_stack == nullptr)
        {
            ipv6_stack = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack>();
        }
        return ipv6_stack;
    }

    if(child_yang_name == "neighbor-next-hop")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop>();
        ent_->parent = this;
        neighbor_next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::get_children() const
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-stack" || name == "neighbor-next-hop")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Ipv6Stack()
    :
    nexthop(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop>())
    , inner_stack(std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack>())
{
    nexthop->parent = this;
    inner_stack->parent = this;

    yang_name = "ipv6-stack"; yang_parent_name = "nnh-stackv6-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::~Ipv6Stack()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::has_data() const
{
    if (is_presence_container) return true;
    return (nexthop !=  nullptr && nexthop->has_data())
	|| (inner_stack !=  nullptr && inner_stack->has_data());
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::has_operation() const
{
    return is_set(yfilter)
	|| (nexthop !=  nullptr && nexthop->has_operation())
	|| (inner_stack !=  nullptr && inner_stack->has_operation());
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop>();
        }
        return nexthop;
    }

    if(child_yang_name == "inner-stack")
    {
        if(inner_stack == nullptr)
        {
            inner_stack = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack>();
        }
        return inner_stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::get_children() const
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "inner-stack")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop::Nexthop()
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

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop::~Nexthop()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop::has_data() const
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop::has_operation() const
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

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "table-name" || name == "path-flags-decode" || name == "out-interface" || name == "out-label" || name == "out-label-name" || name == "ipv6-next-hop" || name == "path-id" || name == "backup-path-id" || name == "tunnel-id" || name == "tunnel-type" || name == "next-hop-id" || name == "out-interface-parent")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::InnerStack()
    :
    num_nexthops{YType::uint8, "num-nexthops"},
    num_lbls{YType::uint8, "num-lbls"}
        ,
    nexthop(this, {})
    , label(this, {})
{

    yang_name = "inner-stack"; yang_parent_name = "ipv6-stack"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::~InnerStack()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::has_data() const
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::has_operation() const
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

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inner-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_nexthops.is_set || is_set(num_nexthops.yfilter)) leaf_name_data.push_back(num_nexthops.get_name_leafdata());
    if (num_lbls.is_set || is_set(num_lbls.yfilter)) leaf_name_data.push_back(num_lbls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop>();
        ent_->parent = this;
        nexthop.append(ent_);
        return ent_;
    }

    if(child_yang_name == "label")
    {
        auto ent_ = std::make_shared<MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label>();
        ent_->parent = this;
        label.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::get_children() const
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "label" || name == "num-nexthops" || name == "num-lbls")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop::Nexthop()
    :
    entry{YType::str, "entry"}
{

    yang_name = "nexthop"; yang_parent_name = "inner-stack"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop::~Nexthop()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label::Label()
    :
    outgoing_label{YType::uint32, "outgoing-label"},
    outgoing_label_str{YType::str, "outgoing-label-str"}
{

    yang_name = "label"; yang_parent_name = "inner-stack"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label::~Label()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label::has_data() const
{
    if (is_presence_container) return true;
    return outgoing_label.is_set
	|| outgoing_label_str.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(outgoing_label_str.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (outgoing_label_str.is_set || is_set(outgoing_label_str.yfilter)) leaf_name_data.push_back(outgoing_label_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outgoing-label" || name == "outgoing-label-str")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop::NeighborNextHop()
    :
    nnh_type{YType::enumeration, "nnh-type"},
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "neighbor-next-hop"; yang_parent_name = "nnh-stackv6-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop::~NeighborNextHop()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop::has_data() const
{
    if (is_presence_container) return true;
    return nnh_type.is_set
	|| address.is_set
	|| interface_name.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nnh_type.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nnh_type.is_set || is_set(nnh_type.yfilter)) leaf_name_data.push_back(nnh_type.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nnh-type" || name == "address" || name == "interface-name")
        return true;
    return false;
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::LabelRange::LabelRange()
    :
    start_label_active{YType::uint32, "start-label-active"},
    end_label_active{YType::uint32, "end-label-active"}
{

    yang_name = "label-range"; yang_parent_name = "moi"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::LabelRange::~LabelRange()
{
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::LabelRange::has_data() const
{
    if (is_presence_container) return true;
    return start_label_active.is_set
	|| end_label_active.is_set;
}

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::LabelRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_label_active.yfilter)
	|| ydk::is_set(end_label_active.yfilter);
}

std::string MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::LabelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::LabelRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_label_active.is_set || is_set(start_label_active.yfilter)) leaf_name_data.push_back(start_label_active.get_name_leafdata());
    if (end_label_active.is_set || is_set(end_label_active.yfilter)) leaf_name_data.push_back(end_label_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::LabelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::LabelRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::LabelRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::LabelRange::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::LabelRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-label-active" || name == "end-label-active")
        return true;
    return false;
}

MplsLsd::RewriteSummary::RewriteSummary()
    :
    num_label_fpi{YType::uint32, "num-label-fpi"},
    num_tefpi{YType::uint32, "num-tefpi"},
    num_ipv4fpi{YType::uint32, "num-ipv4fpi"},
    num_ipv6fpi{YType::uint32, "num-ipv6fpi"},
    num_pw_list_tefpi{YType::uint32, "num-pw-list-tefpi"},
    num_dmtctefpi{YType::uint32, "num-dmtctefpi"},
    num_label_range{YType::uint32, "num-label-range"},
    num_rewrite{YType::uint32, "num-rewrite"},
    total_forward_update{YType::uint32, "total-forward-update"},
    total_forwad_update_message{YType::uint32, "total-forwad-update-message"},
    total_paths{YType::uint32, "total-paths"},
    total_t_ev4_paths{YType::uint32, "total-t-ev4-paths"},
    total_te_head_paths{YType::uint32, "total-te-head-paths"},
    total_pw_paths{YType::uint32, "total-pw-paths"},
    total_ip_sub_paths{YType::uint32, "total-ip-sub-paths"},
    total_ipv4rpf_neighbors{YType::uint32, "total-ipv4rpf-neighbors"},
    total_ipv6rpf_neighbors{YType::uint32, "total-ipv6rpf-neighbors"},
    num_rewrite_rpf_neighbors{YType::uint32, "num-rewrite-rpf-neighbors"},
    total_dmtc_intf{YType::uint32, "total-dmtc-intf"},
    total_label_range{YType::uint32, "total-label-range"},
    vrf_name_xr{YType::str, "vrf-name-xr"}
        ,
    ipv4_paths(std::make_shared<MplsLsd::RewriteSummary::Ipv4Paths>())
    , ipv6_paths(std::make_shared<MplsLsd::RewriteSummary::Ipv6Paths>())
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
    if (is_presence_container) return true;
    return num_label_fpi.is_set
	|| num_tefpi.is_set
	|| num_ipv4fpi.is_set
	|| num_ipv6fpi.is_set
	|| num_pw_list_tefpi.is_set
	|| num_dmtctefpi.is_set
	|| num_label_range.is_set
	|| num_rewrite.is_set
	|| total_forward_update.is_set
	|| total_forwad_update_message.is_set
	|| total_paths.is_set
	|| total_t_ev4_paths.is_set
	|| total_te_head_paths.is_set
	|| total_pw_paths.is_set
	|| total_ip_sub_paths.is_set
	|| total_ipv4rpf_neighbors.is_set
	|| total_ipv6rpf_neighbors.is_set
	|| num_rewrite_rpf_neighbors.is_set
	|| total_dmtc_intf.is_set
	|| total_label_range.is_set
	|| vrf_name_xr.is_set
	|| (ipv4_paths !=  nullptr && ipv4_paths->has_data())
	|| (ipv6_paths !=  nullptr && ipv6_paths->has_data());
}

bool MplsLsd::RewriteSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_label_fpi.yfilter)
	|| ydk::is_set(num_tefpi.yfilter)
	|| ydk::is_set(num_ipv4fpi.yfilter)
	|| ydk::is_set(num_ipv6fpi.yfilter)
	|| ydk::is_set(num_pw_list_tefpi.yfilter)
	|| ydk::is_set(num_dmtctefpi.yfilter)
	|| ydk::is_set(num_label_range.yfilter)
	|| ydk::is_set(num_rewrite.yfilter)
	|| ydk::is_set(total_forward_update.yfilter)
	|| ydk::is_set(total_forwad_update_message.yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_t_ev4_paths.yfilter)
	|| ydk::is_set(total_te_head_paths.yfilter)
	|| ydk::is_set(total_pw_paths.yfilter)
	|| ydk::is_set(total_ip_sub_paths.yfilter)
	|| ydk::is_set(total_ipv4rpf_neighbors.yfilter)
	|| ydk::is_set(total_ipv6rpf_neighbors.yfilter)
	|| ydk::is_set(num_rewrite_rpf_neighbors.yfilter)
	|| ydk::is_set(total_dmtc_intf.yfilter)
	|| ydk::is_set(total_label_range.yfilter)
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

    if (num_label_fpi.is_set || is_set(num_label_fpi.yfilter)) leaf_name_data.push_back(num_label_fpi.get_name_leafdata());
    if (num_tefpi.is_set || is_set(num_tefpi.yfilter)) leaf_name_data.push_back(num_tefpi.get_name_leafdata());
    if (num_ipv4fpi.is_set || is_set(num_ipv4fpi.yfilter)) leaf_name_data.push_back(num_ipv4fpi.get_name_leafdata());
    if (num_ipv6fpi.is_set || is_set(num_ipv6fpi.yfilter)) leaf_name_data.push_back(num_ipv6fpi.get_name_leafdata());
    if (num_pw_list_tefpi.is_set || is_set(num_pw_list_tefpi.yfilter)) leaf_name_data.push_back(num_pw_list_tefpi.get_name_leafdata());
    if (num_dmtctefpi.is_set || is_set(num_dmtctefpi.yfilter)) leaf_name_data.push_back(num_dmtctefpi.get_name_leafdata());
    if (num_label_range.is_set || is_set(num_label_range.yfilter)) leaf_name_data.push_back(num_label_range.get_name_leafdata());
    if (num_rewrite.is_set || is_set(num_rewrite.yfilter)) leaf_name_data.push_back(num_rewrite.get_name_leafdata());
    if (total_forward_update.is_set || is_set(total_forward_update.yfilter)) leaf_name_data.push_back(total_forward_update.get_name_leafdata());
    if (total_forwad_update_message.is_set || is_set(total_forwad_update_message.yfilter)) leaf_name_data.push_back(total_forwad_update_message.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_t_ev4_paths.is_set || is_set(total_t_ev4_paths.yfilter)) leaf_name_data.push_back(total_t_ev4_paths.get_name_leafdata());
    if (total_te_head_paths.is_set || is_set(total_te_head_paths.yfilter)) leaf_name_data.push_back(total_te_head_paths.get_name_leafdata());
    if (total_pw_paths.is_set || is_set(total_pw_paths.yfilter)) leaf_name_data.push_back(total_pw_paths.get_name_leafdata());
    if (total_ip_sub_paths.is_set || is_set(total_ip_sub_paths.yfilter)) leaf_name_data.push_back(total_ip_sub_paths.get_name_leafdata());
    if (total_ipv4rpf_neighbors.is_set || is_set(total_ipv4rpf_neighbors.yfilter)) leaf_name_data.push_back(total_ipv4rpf_neighbors.get_name_leafdata());
    if (total_ipv6rpf_neighbors.is_set || is_set(total_ipv6rpf_neighbors.yfilter)) leaf_name_data.push_back(total_ipv6rpf_neighbors.get_name_leafdata());
    if (num_rewrite_rpf_neighbors.is_set || is_set(num_rewrite_rpf_neighbors.yfilter)) leaf_name_data.push_back(num_rewrite_rpf_neighbors.get_name_leafdata());
    if (total_dmtc_intf.is_set || is_set(total_dmtc_intf.yfilter)) leaf_name_data.push_back(total_dmtc_intf.get_name_leafdata());
    if (total_label_range.is_set || is_set(total_label_range.yfilter)) leaf_name_data.push_back(total_label_range.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.yfilter)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::RewriteSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::RewriteSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_paths != nullptr)
    {
        _children["ipv4-paths"] = ipv4_paths;
    }

    if(ipv6_paths != nullptr)
    {
        _children["ipv6-paths"] = ipv6_paths;
    }

    return _children;
}

void MplsLsd::RewriteSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-label-fpi")
    {
        num_label_fpi = value;
        num_label_fpi.value_namespace = name_space;
        num_label_fpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-tefpi")
    {
        num_tefpi = value;
        num_tefpi.value_namespace = name_space;
        num_tefpi.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "num-pw-list-tefpi")
    {
        num_pw_list_tefpi = value;
        num_pw_list_tefpi.value_namespace = name_space;
        num_pw_list_tefpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-dmtctefpi")
    {
        num_dmtctefpi = value;
        num_dmtctefpi.value_namespace = name_space;
        num_dmtctefpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-label-range")
    {
        num_label_range = value;
        num_label_range.value_namespace = name_space;
        num_label_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-rewrite")
    {
        num_rewrite = value;
        num_rewrite.value_namespace = name_space;
        num_rewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-forward-update")
    {
        total_forward_update = value;
        total_forward_update.value_namespace = name_space;
        total_forward_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-forwad-update-message")
    {
        total_forwad_update_message = value;
        total_forwad_update_message.value_namespace = name_space;
        total_forwad_update_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "total-pw-paths")
    {
        total_pw_paths = value;
        total_pw_paths.value_namespace = name_space;
        total_pw_paths.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "num-rewrite-rpf-neighbors")
    {
        num_rewrite_rpf_neighbors = value;
        num_rewrite_rpf_neighbors.value_namespace = name_space;
        num_rewrite_rpf_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-dmtc-intf")
    {
        total_dmtc_intf = value;
        total_dmtc_intf.value_namespace = name_space;
        total_dmtc_intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-label-range")
    {
        total_label_range = value;
        total_label_range.value_namespace = name_space;
        total_label_range.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "num-label-fpi")
    {
        num_label_fpi.yfilter = yfilter;
    }
    if(value_path == "num-tefpi")
    {
        num_tefpi.yfilter = yfilter;
    }
    if(value_path == "num-ipv4fpi")
    {
        num_ipv4fpi.yfilter = yfilter;
    }
    if(value_path == "num-ipv6fpi")
    {
        num_ipv6fpi.yfilter = yfilter;
    }
    if(value_path == "num-pw-list-tefpi")
    {
        num_pw_list_tefpi.yfilter = yfilter;
    }
    if(value_path == "num-dmtctefpi")
    {
        num_dmtctefpi.yfilter = yfilter;
    }
    if(value_path == "num-label-range")
    {
        num_label_range.yfilter = yfilter;
    }
    if(value_path == "num-rewrite")
    {
        num_rewrite.yfilter = yfilter;
    }
    if(value_path == "total-forward-update")
    {
        total_forward_update.yfilter = yfilter;
    }
    if(value_path == "total-forwad-update-message")
    {
        total_forwad_update_message.yfilter = yfilter;
    }
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
    if(value_path == "total-t-ev4-paths")
    {
        total_t_ev4_paths.yfilter = yfilter;
    }
    if(value_path == "total-te-head-paths")
    {
        total_te_head_paths.yfilter = yfilter;
    }
    if(value_path == "total-pw-paths")
    {
        total_pw_paths.yfilter = yfilter;
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
    if(value_path == "num-rewrite-rpf-neighbors")
    {
        num_rewrite_rpf_neighbors.yfilter = yfilter;
    }
    if(value_path == "total-dmtc-intf")
    {
        total_dmtc_intf.yfilter = yfilter;
    }
    if(value_path == "total-label-range")
    {
        total_label_range.yfilter = yfilter;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr.yfilter = yfilter;
    }
}

bool MplsLsd::RewriteSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-paths" || name == "ipv6-paths" || name == "num-label-fpi" || name == "num-tefpi" || name == "num-ipv4fpi" || name == "num-ipv6fpi" || name == "num-pw-list-tefpi" || name == "num-dmtctefpi" || name == "num-label-range" || name == "num-rewrite" || name == "total-forward-update" || name == "total-forwad-update-message" || name == "total-paths" || name == "total-t-ev4-paths" || name == "total-te-head-paths" || name == "total-pw-paths" || name == "total-ip-sub-paths" || name == "total-ipv4rpf-neighbors" || name == "total-ipv6rpf-neighbors" || name == "num-rewrite-rpf-neighbors" || name == "total-dmtc-intf" || name == "total-label-range" || name == "vrf-name-xr")
        return true;
    return false;
}

MplsLsd::RewriteSummary::Ipv4Paths::Ipv4Paths()
    :
    total_paths{YType::uint32, "total-paths"},
    total_backup_paths{YType::uint32, "total-backup-paths"},
    total_remote_backup_paths{YType::uint32, "total-remote-backup-paths"},
    total_protected_paths{YType::uint32, "total-protected-paths"},
    total_pop_lkup_paths{YType::uint32, "total-pop-lkup-paths"}
{

    yang_name = "ipv4-paths"; yang_parent_name = "rewrite-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::RewriteSummary::Ipv4Paths::~Ipv4Paths()
{
}

bool MplsLsd::RewriteSummary::Ipv4Paths::has_data() const
{
    if (is_presence_container) return true;
    return total_paths.is_set
	|| total_backup_paths.is_set
	|| total_remote_backup_paths.is_set
	|| total_protected_paths.is_set
	|| total_pop_lkup_paths.is_set;
}

bool MplsLsd::RewriteSummary::Ipv4Paths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_backup_paths.yfilter)
	|| ydk::is_set(total_remote_backup_paths.yfilter)
	|| ydk::is_set(total_protected_paths.yfilter)
	|| ydk::is_set(total_pop_lkup_paths.yfilter);
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

    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_backup_paths.is_set || is_set(total_backup_paths.yfilter)) leaf_name_data.push_back(total_backup_paths.get_name_leafdata());
    if (total_remote_backup_paths.is_set || is_set(total_remote_backup_paths.yfilter)) leaf_name_data.push_back(total_remote_backup_paths.get_name_leafdata());
    if (total_protected_paths.is_set || is_set(total_protected_paths.yfilter)) leaf_name_data.push_back(total_protected_paths.get_name_leafdata());
    if (total_pop_lkup_paths.is_set || is_set(total_pop_lkup_paths.yfilter)) leaf_name_data.push_back(total_pop_lkup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::RewriteSummary::Ipv4Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::RewriteSummary::Ipv4Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::RewriteSummary::Ipv4Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-paths")
    {
        total_backup_paths = value;
        total_backup_paths.value_namespace = name_space;
        total_backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths = value;
        total_remote_backup_paths.value_namespace = name_space;
        total_remote_backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths = value;
        total_protected_paths.value_namespace = name_space;
        total_protected_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths = value;
        total_pop_lkup_paths.value_namespace = name_space;
        total_pop_lkup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::RewriteSummary::Ipv4Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
    if(value_path == "total-backup-paths")
    {
        total_backup_paths.yfilter = yfilter;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths.yfilter = yfilter;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths.yfilter = yfilter;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths.yfilter = yfilter;
    }
}

bool MplsLsd::RewriteSummary::Ipv4Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-paths" || name == "total-backup-paths" || name == "total-remote-backup-paths" || name == "total-protected-paths" || name == "total-pop-lkup-paths")
        return true;
    return false;
}

MplsLsd::RewriteSummary::Ipv6Paths::Ipv6Paths()
    :
    total_paths{YType::uint32, "total-paths"},
    total_backup_paths{YType::uint32, "total-backup-paths"},
    total_remote_backup_paths{YType::uint32, "total-remote-backup-paths"},
    total_protected_paths{YType::uint32, "total-protected-paths"},
    total_pop_lkup_paths{YType::uint32, "total-pop-lkup-paths"}
{

    yang_name = "ipv6-paths"; yang_parent_name = "rewrite-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::RewriteSummary::Ipv6Paths::~Ipv6Paths()
{
}

bool MplsLsd::RewriteSummary::Ipv6Paths::has_data() const
{
    if (is_presence_container) return true;
    return total_paths.is_set
	|| total_backup_paths.is_set
	|| total_remote_backup_paths.is_set
	|| total_protected_paths.is_set
	|| total_pop_lkup_paths.is_set;
}

bool MplsLsd::RewriteSummary::Ipv6Paths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_backup_paths.yfilter)
	|| ydk::is_set(total_remote_backup_paths.yfilter)
	|| ydk::is_set(total_protected_paths.yfilter)
	|| ydk::is_set(total_pop_lkup_paths.yfilter);
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

    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_backup_paths.is_set || is_set(total_backup_paths.yfilter)) leaf_name_data.push_back(total_backup_paths.get_name_leafdata());
    if (total_remote_backup_paths.is_set || is_set(total_remote_backup_paths.yfilter)) leaf_name_data.push_back(total_remote_backup_paths.get_name_leafdata());
    if (total_protected_paths.is_set || is_set(total_protected_paths.yfilter)) leaf_name_data.push_back(total_protected_paths.get_name_leafdata());
    if (total_pop_lkup_paths.is_set || is_set(total_pop_lkup_paths.yfilter)) leaf_name_data.push_back(total_pop_lkup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::RewriteSummary::Ipv6Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::RewriteSummary::Ipv6Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::RewriteSummary::Ipv6Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-paths")
    {
        total_backup_paths = value;
        total_backup_paths.value_namespace = name_space;
        total_backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths = value;
        total_remote_backup_paths.value_namespace = name_space;
        total_remote_backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths = value;
        total_protected_paths.value_namespace = name_space;
        total_protected_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths = value;
        total_pop_lkup_paths.value_namespace = name_space;
        total_pop_lkup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::RewriteSummary::Ipv6Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
    if(value_path == "total-backup-paths")
    {
        total_backup_paths.yfilter = yfilter;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths.yfilter = yfilter;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths.yfilter = yfilter;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths.yfilter = yfilter;
    }
}

bool MplsLsd::RewriteSummary::Ipv6Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-paths" || name == "total-backup-paths" || name == "total-remote-backup-paths" || name == "total-protected-paths" || name == "total-pop-lkup-paths")
        return true;
    return false;
}

MplsLsd::Applications::Applications()
    :
    application(this, {"application_name"})
{

    yang_name = "applications"; yang_parent_name = "mpls-lsd"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Applications::~Applications()
{
}

bool MplsLsd::Applications::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsd::Applications::has_operation() const
{
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsd::Applications::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Applications::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "applications";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Applications::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Applications::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        auto ent_ = std::make_shared<MplsLsd::Applications::Application>();
        ent_->parent = this;
        application.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Applications::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : application.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLsd::Applications::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Applications::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Applications::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application")
        return true;
    return false;
}

MplsLsd::Applications::Application::Application()
    :
    application_name{YType::str, "application-name"},
    application_name_xr{YType::str, "application-name-xr"},
    application_type{YType::enumeration, "application-type"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_instance{YType::str, "application-instance"},
    app_reg_time{YType::uint64, "app-reg-time"},
    app_disconnect_time{YType::uint64, "app-disconnect-time"},
    app_flow_controlled{YType::int32, "app-flow-controlled"},
    flow_ctrl_time{YType::uint64, "flow-ctrl-time"},
    flow_ctrl_clr_time{YType::uint64, "flow-ctrl-clr-time"},
    go_act_ts{YType::uint64, "go-act-ts"},
    application_state{YType::enumeration, "application-state"},
    recovery_time_remaining_seconds{YType::uint32, "recovery-time-remaining-seconds"},
    recovery_time_elapsed_seconds{YType::uint32, "recovery-time-elapsed-seconds"},
    recovery_time_register_seconds{YType::uint32, "recovery-time-register-seconds"},
    node_id{YType::str, "node-id"}
        ,
    application_statistics(std::make_shared<MplsLsd::Applications::Application::ApplicationStatistics>())
{
    application_statistics->parent = this;

    yang_name = "application"; yang_parent_name = "applications"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Applications::Application::~Application()
{
}

bool MplsLsd::Applications::Application::has_data() const
{
    if (is_presence_container) return true;
    return application_name.is_set
	|| application_name_xr.is_set
	|| application_type.is_set
	|| application_role_primary.is_set
	|| application_instance.is_set
	|| app_reg_time.is_set
	|| app_disconnect_time.is_set
	|| app_flow_controlled.is_set
	|| flow_ctrl_time.is_set
	|| flow_ctrl_clr_time.is_set
	|| go_act_ts.is_set
	|| application_state.is_set
	|| recovery_time_remaining_seconds.is_set
	|| recovery_time_elapsed_seconds.is_set
	|| recovery_time_register_seconds.is_set
	|| node_id.is_set
	|| (application_statistics !=  nullptr && application_statistics->has_data());
}

bool MplsLsd::Applications::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| ydk::is_set(application_name_xr.yfilter)
	|| ydk::is_set(application_type.yfilter)
	|| ydk::is_set(application_role_primary.yfilter)
	|| ydk::is_set(application_instance.yfilter)
	|| ydk::is_set(app_reg_time.yfilter)
	|| ydk::is_set(app_disconnect_time.yfilter)
	|| ydk::is_set(app_flow_controlled.yfilter)
	|| ydk::is_set(flow_ctrl_time.yfilter)
	|| ydk::is_set(flow_ctrl_clr_time.yfilter)
	|| ydk::is_set(go_act_ts.yfilter)
	|| ydk::is_set(application_state.yfilter)
	|| ydk::is_set(recovery_time_remaining_seconds.yfilter)
	|| ydk::is_set(recovery_time_elapsed_seconds.yfilter)
	|| ydk::is_set(recovery_time_register_seconds.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (application_statistics !=  nullptr && application_statistics->has_operation());
}

std::string MplsLsd::Applications::Application::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/applications/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Applications::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    ADD_KEY_TOKEN(application_name, "application-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Applications::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (application_name_xr.is_set || is_set(application_name_xr.yfilter)) leaf_name_data.push_back(application_name_xr.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (application_role_primary.is_set || is_set(application_role_primary.yfilter)) leaf_name_data.push_back(application_role_primary.get_name_leafdata());
    if (application_instance.is_set || is_set(application_instance.yfilter)) leaf_name_data.push_back(application_instance.get_name_leafdata());
    if (app_reg_time.is_set || is_set(app_reg_time.yfilter)) leaf_name_data.push_back(app_reg_time.get_name_leafdata());
    if (app_disconnect_time.is_set || is_set(app_disconnect_time.yfilter)) leaf_name_data.push_back(app_disconnect_time.get_name_leafdata());
    if (app_flow_controlled.is_set || is_set(app_flow_controlled.yfilter)) leaf_name_data.push_back(app_flow_controlled.get_name_leafdata());
    if (flow_ctrl_time.is_set || is_set(flow_ctrl_time.yfilter)) leaf_name_data.push_back(flow_ctrl_time.get_name_leafdata());
    if (flow_ctrl_clr_time.is_set || is_set(flow_ctrl_clr_time.yfilter)) leaf_name_data.push_back(flow_ctrl_clr_time.get_name_leafdata());
    if (go_act_ts.is_set || is_set(go_act_ts.yfilter)) leaf_name_data.push_back(go_act_ts.get_name_leafdata());
    if (application_state.is_set || is_set(application_state.yfilter)) leaf_name_data.push_back(application_state.get_name_leafdata());
    if (recovery_time_remaining_seconds.is_set || is_set(recovery_time_remaining_seconds.yfilter)) leaf_name_data.push_back(recovery_time_remaining_seconds.get_name_leafdata());
    if (recovery_time_elapsed_seconds.is_set || is_set(recovery_time_elapsed_seconds.yfilter)) leaf_name_data.push_back(recovery_time_elapsed_seconds.get_name_leafdata());
    if (recovery_time_register_seconds.is_set || is_set(recovery_time_register_seconds.yfilter)) leaf_name_data.push_back(recovery_time_register_seconds.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Applications::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-statistics")
    {
        if(application_statistics == nullptr)
        {
            application_statistics = std::make_shared<MplsLsd::Applications::Application::ApplicationStatistics>();
        }
        return application_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Applications::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(application_statistics != nullptr)
    {
        _children["application-statistics"] = application_statistics;
    }

    return _children;
}

void MplsLsd::Applications::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-name-xr")
    {
        application_name_xr = value;
        application_name_xr.value_namespace = name_space;
        application_name_xr.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "app-reg-time")
    {
        app_reg_time = value;
        app_reg_time.value_namespace = name_space;
        app_reg_time.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "flow-ctrl-time")
    {
        flow_ctrl_time = value;
        flow_ctrl_time.value_namespace = name_space;
        flow_ctrl_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-ctrl-clr-time")
    {
        flow_ctrl_clr_time = value;
        flow_ctrl_clr_time.value_namespace = name_space;
        flow_ctrl_clr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "go-act-ts")
    {
        go_act_ts = value;
        go_act_ts.value_namespace = name_space;
        go_act_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-state")
    {
        application_state = value;
        application_state.value_namespace = name_space;
        application_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-time-remaining-seconds")
    {
        recovery_time_remaining_seconds = value;
        recovery_time_remaining_seconds.value_namespace = name_space;
        recovery_time_remaining_seconds.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Applications::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
    if(value_path == "application-name-xr")
    {
        application_name_xr.yfilter = yfilter;
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
    if(value_path == "app-reg-time")
    {
        app_reg_time.yfilter = yfilter;
    }
    if(value_path == "app-disconnect-time")
    {
        app_disconnect_time.yfilter = yfilter;
    }
    if(value_path == "app-flow-controlled")
    {
        app_flow_controlled.yfilter = yfilter;
    }
    if(value_path == "flow-ctrl-time")
    {
        flow_ctrl_time.yfilter = yfilter;
    }
    if(value_path == "flow-ctrl-clr-time")
    {
        flow_ctrl_clr_time.yfilter = yfilter;
    }
    if(value_path == "go-act-ts")
    {
        go_act_ts.yfilter = yfilter;
    }
    if(value_path == "application-state")
    {
        application_state.yfilter = yfilter;
    }
    if(value_path == "recovery-time-remaining-seconds")
    {
        recovery_time_remaining_seconds.yfilter = yfilter;
    }
    if(value_path == "recovery-time-elapsed-seconds")
    {
        recovery_time_elapsed_seconds.yfilter = yfilter;
    }
    if(value_path == "recovery-time-register-seconds")
    {
        recovery_time_register_seconds.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool MplsLsd::Applications::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-statistics" || name == "application-name" || name == "application-name-xr" || name == "application-type" || name == "application-role-primary" || name == "application-instance" || name == "app-reg-time" || name == "app-disconnect-time" || name == "app-flow-controlled" || name == "flow-ctrl-time" || name == "flow-ctrl-clr-time" || name == "go-act-ts" || name == "application-state" || name == "recovery-time-remaining-seconds" || name == "recovery-time-elapsed-seconds" || name == "recovery-time-register-seconds" || name == "node-id")
        return true;
    return false;
}

MplsLsd::Applications::Application::ApplicationStatistics::ApplicationStatistics()
    :
    interface_enable{YType::uint32, "interface-enable"},
    interface_enable_pending{YType::uint32, "interface-enable-pending"},
    connect_count{YType::uint32, "connect-count"}
        ,
    connected(std::make_shared<MplsLsd::Applications::Application::ApplicationStatistics::Connected>())
    , label_context_count(this, {})
    , label_context_pending_count(this, {})
{
    connected->parent = this;

    yang_name = "application-statistics"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Applications::Application::ApplicationStatistics::~ApplicationStatistics()
{
}

bool MplsLsd::Applications::Application::ApplicationStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<label_context_count.len(); index++)
    {
        if(label_context_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<label_context_pending_count.len(); index++)
    {
        if(label_context_pending_count[index]->has_data())
            return true;
    }
    return interface_enable.is_set
	|| interface_enable_pending.is_set
	|| connect_count.is_set
	|| (connected !=  nullptr && connected->has_data());
}

bool MplsLsd::Applications::Application::ApplicationStatistics::has_operation() const
{
    for (std::size_t index=0; index<label_context_count.len(); index++)
    {
        if(label_context_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<label_context_pending_count.len(); index++)
    {
        if(label_context_pending_count[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_enable.yfilter)
	|| ydk::is_set(interface_enable_pending.yfilter)
	|| ydk::is_set(connect_count.yfilter)
	|| (connected !=  nullptr && connected->has_operation());
}

std::string MplsLsd::Applications::Application::ApplicationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Applications::Application::ApplicationStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_enable.is_set || is_set(interface_enable.yfilter)) leaf_name_data.push_back(interface_enable.get_name_leafdata());
    if (interface_enable_pending.is_set || is_set(interface_enable_pending.yfilter)) leaf_name_data.push_back(interface_enable_pending.get_name_leafdata());
    if (connect_count.is_set || is_set(connect_count.yfilter)) leaf_name_data.push_back(connect_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Applications::Application::ApplicationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<MplsLsd::Applications::Application::ApplicationStatistics::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "label-context-count")
    {
        auto ent_ = std::make_shared<MplsLsd::Applications::Application::ApplicationStatistics::LabelContextCount>();
        ent_->parent = this;
        label_context_count.append(ent_);
        return ent_;
    }

    if(child_yang_name == "label-context-pending-count")
    {
        auto ent_ = std::make_shared<MplsLsd::Applications::Application::ApplicationStatistics::LabelContextPendingCount>();
        ent_->parent = this;
        label_context_pending_count.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Applications::Application::ApplicationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(connected != nullptr)
    {
        _children["connected"] = connected;
    }

    count_ = 0;
    for (auto ent_ : label_context_count.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : label_context_pending_count.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLsd::Applications::Application::ApplicationStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "connect-count")
    {
        connect_count = value;
        connect_count.value_namespace = name_space;
        connect_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Applications::Application::ApplicationStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-enable")
    {
        interface_enable.yfilter = yfilter;
    }
    if(value_path == "interface-enable-pending")
    {
        interface_enable_pending.yfilter = yfilter;
    }
    if(value_path == "connect-count")
    {
        connect_count.yfilter = yfilter;
    }
}

bool MplsLsd::Applications::Application::ApplicationStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected" || name == "label-context-count" || name == "label-context-pending-count" || name == "interface-enable" || name == "interface-enable-pending" || name == "connect-count")
        return true;
    return false;
}

MplsLsd::Applications::Application::ApplicationStatistics::Connected::Connected()
    :
    rt_set_msg_count{YType::uint32, "rt-set-msg-count"},
    operation_msg_count{YType::uint32, "operation-msg-count"},
    oor_label_count{YType::uint32, "oor-label-count"},
    error_msg_count{YType::uint32, "error-msg-count"}
{

    yang_name = "connected"; yang_parent_name = "application-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Applications::Application::ApplicationStatistics::Connected::~Connected()
{
}

bool MplsLsd::Applications::Application::ApplicationStatistics::Connected::has_data() const
{
    if (is_presence_container) return true;
    return rt_set_msg_count.is_set
	|| operation_msg_count.is_set
	|| oor_label_count.is_set
	|| error_msg_count.is_set;
}

bool MplsLsd::Applications::Application::ApplicationStatistics::Connected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt_set_msg_count.yfilter)
	|| ydk::is_set(operation_msg_count.yfilter)
	|| ydk::is_set(oor_label_count.yfilter)
	|| ydk::is_set(error_msg_count.yfilter);
}

std::string MplsLsd::Applications::Application::ApplicationStatistics::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Applications::Application::ApplicationStatistics::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_set_msg_count.is_set || is_set(rt_set_msg_count.yfilter)) leaf_name_data.push_back(rt_set_msg_count.get_name_leafdata());
    if (operation_msg_count.is_set || is_set(operation_msg_count.yfilter)) leaf_name_data.push_back(operation_msg_count.get_name_leafdata());
    if (oor_label_count.is_set || is_set(oor_label_count.yfilter)) leaf_name_data.push_back(oor_label_count.get_name_leafdata());
    if (error_msg_count.is_set || is_set(error_msg_count.yfilter)) leaf_name_data.push_back(error_msg_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Applications::Application::ApplicationStatistics::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Applications::Application::ApplicationStatistics::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Applications::Application::ApplicationStatistics::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt-set-msg-count")
    {
        rt_set_msg_count = value;
        rt_set_msg_count.value_namespace = name_space;
        rt_set_msg_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-msg-count")
    {
        operation_msg_count = value;
        operation_msg_count.value_namespace = name_space;
        operation_msg_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-label-count")
    {
        oor_label_count = value;
        oor_label_count.value_namespace = name_space;
        oor_label_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-msg-count")
    {
        error_msg_count = value;
        error_msg_count.value_namespace = name_space;
        error_msg_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Applications::Application::ApplicationStatistics::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt-set-msg-count")
    {
        rt_set_msg_count.yfilter = yfilter;
    }
    if(value_path == "operation-msg-count")
    {
        operation_msg_count.yfilter = yfilter;
    }
    if(value_path == "oor-label-count")
    {
        oor_label_count.yfilter = yfilter;
    }
    if(value_path == "error-msg-count")
    {
        error_msg_count.yfilter = yfilter;
    }
}

bool MplsLsd::Applications::Application::ApplicationStatistics::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-set-msg-count" || name == "operation-msg-count" || name == "oor-label-count" || name == "error-msg-count")
        return true;
    return false;
}

MplsLsd::Applications::Application::ApplicationStatistics::LabelContextCount::LabelContextCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "label-context-count"; yang_parent_name = "application-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Applications::Application::ApplicationStatistics::LabelContextCount::~LabelContextCount()
{
}

bool MplsLsd::Applications::Application::ApplicationStatistics::LabelContextCount::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsLsd::Applications::Application::ApplicationStatistics::LabelContextCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLsd::Applications::Application::ApplicationStatistics::LabelContextCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-context-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Applications::Application::ApplicationStatistics::LabelContextCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Applications::Application::ApplicationStatistics::LabelContextCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Applications::Application::ApplicationStatistics::LabelContextCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Applications::Application::ApplicationStatistics::LabelContextCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Applications::Application::ApplicationStatistics::LabelContextCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLsd::Applications::Application::ApplicationStatistics::LabelContextCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLsd::Applications::Application::ApplicationStatistics::LabelContextPendingCount::LabelContextPendingCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "label-context-pending-count"; yang_parent_name = "application-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Applications::Application::ApplicationStatistics::LabelContextPendingCount::~LabelContextPendingCount()
{
}

bool MplsLsd::Applications::Application::ApplicationStatistics::LabelContextPendingCount::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsLsd::Applications::Application::ApplicationStatistics::LabelContextPendingCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLsd::Applications::Application::ApplicationStatistics::LabelContextPendingCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-context-pending-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Applications::Application::ApplicationStatistics::LabelContextPendingCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Applications::Application::ApplicationStatistics::LabelContextPendingCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Applications::Application::ApplicationStatistics::LabelContextPendingCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Applications::Application::ApplicationStatistics::LabelContextPendingCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Applications::Application::ApplicationStatistics::LabelContextPendingCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLsd::Applications::Application::ApplicationStatistics::LabelContextPendingCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLsd::LabelSummaryVrfs::LabelSummaryVrfs()
    :
    label_summary_vrf(this, {"vrf_name"})
{

    yang_name = "label-summary-vrfs"; yang_parent_name = "mpls-lsd"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::LabelSummaryVrfs::~LabelSummaryVrfs()
{
}

bool MplsLsd::LabelSummaryVrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<label_summary_vrf.len(); index++)
    {
        if(label_summary_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsd::LabelSummaryVrfs::has_operation() const
{
    for (std::size_t index=0; index<label_summary_vrf.len(); index++)
    {
        if(label_summary_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsd::LabelSummaryVrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::LabelSummaryVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-summary-vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::LabelSummaryVrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::LabelSummaryVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-summary-vrf")
    {
        auto ent_ = std::make_shared<MplsLsd::LabelSummaryVrfs::LabelSummaryVrf>();
        ent_->parent = this;
        label_summary_vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::LabelSummaryVrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : label_summary_vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLsd::LabelSummaryVrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::LabelSummaryVrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::LabelSummaryVrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-summary-vrf")
        return true;
    return false;
}

MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::LabelSummaryVrf()
    :
    vrf_name{YType::str, "vrf-name"},
    vrf_name_xr{YType::str, "vrf-name-xr"},
    total_labels{YType::uint32, "total-labels"},
    rsi_connected{YType::int32, "rsi-connected"}
        ,
    owner_count(this, {})
{

    yang_name = "label-summary-vrf"; yang_parent_name = "label-summary-vrfs"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::~LabelSummaryVrf()
{
}

bool MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<owner_count.len(); index++)
    {
        if(owner_count[index]->has_data())
            return true;
    }
    return vrf_name.is_set
	|| vrf_name_xr.is_set
	|| total_labels.is_set
	|| rsi_connected.is_set;
}

bool MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::has_operation() const
{
    for (std::size_t index=0; index<owner_count.len(); index++)
    {
        if(owner_count[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(vrf_name_xr.yfilter)
	|| ydk::is_set(total_labels.yfilter)
	|| ydk::is_set(rsi_connected.yfilter);
}

std::string MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/label-summary-vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-summary-vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.yfilter)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());
    if (total_labels.is_set || is_set(total_labels.yfilter)) leaf_name_data.push_back(total_labels.get_name_leafdata());
    if (rsi_connected.is_set || is_set(rsi_connected.yfilter)) leaf_name_data.push_back(rsi_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "owner-count")
    {
        auto ent_ = std::make_shared<MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount>();
        ent_->parent = this;
        owner_count.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : owner_count.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr = value;
        vrf_name_xr.value_namespace = name_space;
        vrf_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-labels")
    {
        total_labels = value;
        total_labels.value_namespace = name_space;
        total_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsi-connected")
    {
        rsi_connected = value;
        rsi_connected.value_namespace = name_space;
        rsi_connected.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr.yfilter = yfilter;
    }
    if(value_path == "total-labels")
    {
        total_labels.yfilter = yfilter;
    }
    if(value_path == "rsi-connected")
    {
        rsi_connected.yfilter = yfilter;
    }
}

bool MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner-count" || name == "vrf-name" || name == "vrf-name-xr" || name == "total-labels" || name == "rsi-connected")
        return true;
    return false;
}

MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::OwnerCount()
    :
    application_type{YType::enumeration, "application-type"},
    application_name{YType::str, "application-name"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_instance{YType::str, "application-instance"},
    number_of_labels{YType::uint32, "number-of-labels"}
{

    yang_name = "owner-count"; yang_parent_name = "label-summary-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::~OwnerCount()
{
}

bool MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::has_data() const
{
    if (is_presence_container) return true;
    return application_type.is_set
	|| application_name.is_set
	|| application_role_primary.is_set
	|| application_instance.is_set
	|| number_of_labels.is_set;
}

bool MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_type.yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| ydk::is_set(application_role_primary.yfilter)
	|| ydk::is_set(application_instance.yfilter)
	|| ydk::is_set(number_of_labels.yfilter);
}

std::string MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (application_role_primary.is_set || is_set(application_role_primary.yfilter)) leaf_name_data.push_back(application_role_primary.get_name_leafdata());
    if (application_instance.is_set || is_set(application_instance.yfilter)) leaf_name_data.push_back(application_instance.get_name_leafdata());
    if (number_of_labels.is_set || is_set(number_of_labels.yfilter)) leaf_name_data.push_back(number_of_labels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-type")
    {
        application_type = value;
        application_type.value_namespace = name_space;
        application_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "application-instance")
    {
        application_instance = value;
        application_instance.value_namespace = name_space;
        application_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-labels")
    {
        number_of_labels = value;
        number_of_labels.value_namespace = name_space;
        number_of_labels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-type")
    {
        application_type.yfilter = yfilter;
    }
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
    if(value_path == "application-role-primary")
    {
        application_role_primary.yfilter = yfilter;
    }
    if(value_path == "application-instance")
    {
        application_instance.yfilter = yfilter;
    }
    if(value_path == "number-of-labels")
    {
        number_of_labels.yfilter = yfilter;
    }
}

bool MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-type" || name == "application-name" || name == "application-role-primary" || name == "application-instance" || name == "number-of-labels")
        return true;
    return false;
}

MplsLsd::LabelRange::LabelRange()
    :
    min_dynamic_label_value{YType::uint32, "min-dynamic-label-value"},
    max_dynamic_label_value{YType::uint32, "max-dynamic-label-value"},
    min_static_label_value{YType::uint32, "min-static-label-value"},
    max_static_label_value{YType::uint32, "max-static-label-value"}
{

    yang_name = "label-range"; yang_parent_name = "mpls-lsd"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::LabelRange::~LabelRange()
{
}

bool MplsLsd::LabelRange::has_data() const
{
    if (is_presence_container) return true;
    return min_dynamic_label_value.is_set
	|| max_dynamic_label_value.is_set
	|| min_static_label_value.is_set
	|| max_static_label_value.is_set;
}

bool MplsLsd::LabelRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_dynamic_label_value.yfilter)
	|| ydk::is_set(max_dynamic_label_value.yfilter)
	|| ydk::is_set(min_static_label_value.yfilter)
	|| ydk::is_set(max_static_label_value.yfilter);
}

std::string MplsLsd::LabelRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::LabelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::LabelRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_dynamic_label_value.is_set || is_set(min_dynamic_label_value.yfilter)) leaf_name_data.push_back(min_dynamic_label_value.get_name_leafdata());
    if (max_dynamic_label_value.is_set || is_set(max_dynamic_label_value.yfilter)) leaf_name_data.push_back(max_dynamic_label_value.get_name_leafdata());
    if (min_static_label_value.is_set || is_set(min_static_label_value.yfilter)) leaf_name_data.push_back(min_static_label_value.get_name_leafdata());
    if (max_static_label_value.is_set || is_set(max_static_label_value.yfilter)) leaf_name_data.push_back(max_static_label_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::LabelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::LabelRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::LabelRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-dynamic-label-value")
    {
        min_dynamic_label_value = value;
        min_dynamic_label_value.value_namespace = name_space;
        min_dynamic_label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-dynamic-label-value")
    {
        max_dynamic_label_value = value;
        max_dynamic_label_value.value_namespace = name_space;
        max_dynamic_label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-static-label-value")
    {
        min_static_label_value = value;
        min_static_label_value.value_namespace = name_space;
        min_static_label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-static-label-value")
    {
        max_static_label_value = value;
        max_static_label_value.value_namespace = name_space;
        max_static_label_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::LabelRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-dynamic-label-value")
    {
        min_dynamic_label_value.yfilter = yfilter;
    }
    if(value_path == "max-dynamic-label-value")
    {
        max_dynamic_label_value.yfilter = yfilter;
    }
    if(value_path == "min-static-label-value")
    {
        min_static_label_value.yfilter = yfilter;
    }
    if(value_path == "max-static-label-value")
    {
        max_static_label_value.yfilter = yfilter;
    }
}

bool MplsLsd::LabelRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-dynamic-label-value" || name == "max-dynamic-label-value" || name == "min-static-label-value" || name == "max-static-label-value")
        return true;
    return false;
}

MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrfs()
    :
    rewrite_summary_vrf(this, {"vrf_name"})
{

    yang_name = "rewrite-summary-vrfs"; yang_parent_name = "mpls-lsd"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::RewriteSummaryVrfs::~RewriteSummaryVrfs()
{
}

bool MplsLsd::RewriteSummaryVrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rewrite_summary_vrf.len(); index++)
    {
        if(rewrite_summary_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsd::RewriteSummaryVrfs::has_operation() const
{
    for (std::size_t index=0; index<rewrite_summary_vrf.len(); index++)
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

std::shared_ptr<ydk::Entity> MplsLsd::RewriteSummaryVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rewrite-summary-vrf")
    {
        auto ent_ = std::make_shared<MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf>();
        ent_->parent = this;
        rewrite_summary_vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::RewriteSummaryVrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rewrite_summary_vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    num_label_fpi{YType::uint32, "num-label-fpi"},
    num_tefpi{YType::uint32, "num-tefpi"},
    num_ipv4fpi{YType::uint32, "num-ipv4fpi"},
    num_ipv6fpi{YType::uint32, "num-ipv6fpi"},
    num_pw_list_tefpi{YType::uint32, "num-pw-list-tefpi"},
    num_dmtctefpi{YType::uint32, "num-dmtctefpi"},
    num_label_range{YType::uint32, "num-label-range"},
    num_rewrite{YType::uint32, "num-rewrite"},
    total_forward_update{YType::uint32, "total-forward-update"},
    total_forwad_update_message{YType::uint32, "total-forwad-update-message"},
    total_paths{YType::uint32, "total-paths"},
    total_t_ev4_paths{YType::uint32, "total-t-ev4-paths"},
    total_te_head_paths{YType::uint32, "total-te-head-paths"},
    total_pw_paths{YType::uint32, "total-pw-paths"},
    total_ip_sub_paths{YType::uint32, "total-ip-sub-paths"},
    total_ipv4rpf_neighbors{YType::uint32, "total-ipv4rpf-neighbors"},
    total_ipv6rpf_neighbors{YType::uint32, "total-ipv6rpf-neighbors"},
    num_rewrite_rpf_neighbors{YType::uint32, "num-rewrite-rpf-neighbors"},
    total_dmtc_intf{YType::uint32, "total-dmtc-intf"},
    total_label_range{YType::uint32, "total-label-range"},
    vrf_name_xr{YType::str, "vrf-name-xr"}
        ,
    ipv4_paths(std::make_shared<MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths>())
    , ipv6_paths(std::make_shared<MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths>())
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
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| num_label_fpi.is_set
	|| num_tefpi.is_set
	|| num_ipv4fpi.is_set
	|| num_ipv6fpi.is_set
	|| num_pw_list_tefpi.is_set
	|| num_dmtctefpi.is_set
	|| num_label_range.is_set
	|| num_rewrite.is_set
	|| total_forward_update.is_set
	|| total_forwad_update_message.is_set
	|| total_paths.is_set
	|| total_t_ev4_paths.is_set
	|| total_te_head_paths.is_set
	|| total_pw_paths.is_set
	|| total_ip_sub_paths.is_set
	|| total_ipv4rpf_neighbors.is_set
	|| total_ipv6rpf_neighbors.is_set
	|| num_rewrite_rpf_neighbors.is_set
	|| total_dmtc_intf.is_set
	|| total_label_range.is_set
	|| vrf_name_xr.is_set
	|| (ipv4_paths !=  nullptr && ipv4_paths->has_data())
	|| (ipv6_paths !=  nullptr && ipv6_paths->has_data());
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(num_label_fpi.yfilter)
	|| ydk::is_set(num_tefpi.yfilter)
	|| ydk::is_set(num_ipv4fpi.yfilter)
	|| ydk::is_set(num_ipv6fpi.yfilter)
	|| ydk::is_set(num_pw_list_tefpi.yfilter)
	|| ydk::is_set(num_dmtctefpi.yfilter)
	|| ydk::is_set(num_label_range.yfilter)
	|| ydk::is_set(num_rewrite.yfilter)
	|| ydk::is_set(total_forward_update.yfilter)
	|| ydk::is_set(total_forwad_update_message.yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_t_ev4_paths.yfilter)
	|| ydk::is_set(total_te_head_paths.yfilter)
	|| ydk::is_set(total_pw_paths.yfilter)
	|| ydk::is_set(total_ip_sub_paths.yfilter)
	|| ydk::is_set(total_ipv4rpf_neighbors.yfilter)
	|| ydk::is_set(total_ipv6rpf_neighbors.yfilter)
	|| ydk::is_set(num_rewrite_rpf_neighbors.yfilter)
	|| ydk::is_set(total_dmtc_intf.yfilter)
	|| ydk::is_set(total_label_range.yfilter)
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
    path_buffer << "rewrite-summary-vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (num_label_fpi.is_set || is_set(num_label_fpi.yfilter)) leaf_name_data.push_back(num_label_fpi.get_name_leafdata());
    if (num_tefpi.is_set || is_set(num_tefpi.yfilter)) leaf_name_data.push_back(num_tefpi.get_name_leafdata());
    if (num_ipv4fpi.is_set || is_set(num_ipv4fpi.yfilter)) leaf_name_data.push_back(num_ipv4fpi.get_name_leafdata());
    if (num_ipv6fpi.is_set || is_set(num_ipv6fpi.yfilter)) leaf_name_data.push_back(num_ipv6fpi.get_name_leafdata());
    if (num_pw_list_tefpi.is_set || is_set(num_pw_list_tefpi.yfilter)) leaf_name_data.push_back(num_pw_list_tefpi.get_name_leafdata());
    if (num_dmtctefpi.is_set || is_set(num_dmtctefpi.yfilter)) leaf_name_data.push_back(num_dmtctefpi.get_name_leafdata());
    if (num_label_range.is_set || is_set(num_label_range.yfilter)) leaf_name_data.push_back(num_label_range.get_name_leafdata());
    if (num_rewrite.is_set || is_set(num_rewrite.yfilter)) leaf_name_data.push_back(num_rewrite.get_name_leafdata());
    if (total_forward_update.is_set || is_set(total_forward_update.yfilter)) leaf_name_data.push_back(total_forward_update.get_name_leafdata());
    if (total_forwad_update_message.is_set || is_set(total_forwad_update_message.yfilter)) leaf_name_data.push_back(total_forwad_update_message.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_t_ev4_paths.is_set || is_set(total_t_ev4_paths.yfilter)) leaf_name_data.push_back(total_t_ev4_paths.get_name_leafdata());
    if (total_te_head_paths.is_set || is_set(total_te_head_paths.yfilter)) leaf_name_data.push_back(total_te_head_paths.get_name_leafdata());
    if (total_pw_paths.is_set || is_set(total_pw_paths.yfilter)) leaf_name_data.push_back(total_pw_paths.get_name_leafdata());
    if (total_ip_sub_paths.is_set || is_set(total_ip_sub_paths.yfilter)) leaf_name_data.push_back(total_ip_sub_paths.get_name_leafdata());
    if (total_ipv4rpf_neighbors.is_set || is_set(total_ipv4rpf_neighbors.yfilter)) leaf_name_data.push_back(total_ipv4rpf_neighbors.get_name_leafdata());
    if (total_ipv6rpf_neighbors.is_set || is_set(total_ipv6rpf_neighbors.yfilter)) leaf_name_data.push_back(total_ipv6rpf_neighbors.get_name_leafdata());
    if (num_rewrite_rpf_neighbors.is_set || is_set(num_rewrite_rpf_neighbors.yfilter)) leaf_name_data.push_back(num_rewrite_rpf_neighbors.get_name_leafdata());
    if (total_dmtc_intf.is_set || is_set(total_dmtc_intf.yfilter)) leaf_name_data.push_back(total_dmtc_intf.get_name_leafdata());
    if (total_label_range.is_set || is_set(total_label_range.yfilter)) leaf_name_data.push_back(total_label_range.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.yfilter)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_paths != nullptr)
    {
        _children["ipv4-paths"] = ipv4_paths;
    }

    if(ipv6_paths != nullptr)
    {
        _children["ipv6-paths"] = ipv6_paths;
    }

    return _children;
}

void MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-label-fpi")
    {
        num_label_fpi = value;
        num_label_fpi.value_namespace = name_space;
        num_label_fpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-tefpi")
    {
        num_tefpi = value;
        num_tefpi.value_namespace = name_space;
        num_tefpi.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "num-pw-list-tefpi")
    {
        num_pw_list_tefpi = value;
        num_pw_list_tefpi.value_namespace = name_space;
        num_pw_list_tefpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-dmtctefpi")
    {
        num_dmtctefpi = value;
        num_dmtctefpi.value_namespace = name_space;
        num_dmtctefpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-label-range")
    {
        num_label_range = value;
        num_label_range.value_namespace = name_space;
        num_label_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-rewrite")
    {
        num_rewrite = value;
        num_rewrite.value_namespace = name_space;
        num_rewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-forward-update")
    {
        total_forward_update = value;
        total_forward_update.value_namespace = name_space;
        total_forward_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-forwad-update-message")
    {
        total_forwad_update_message = value;
        total_forwad_update_message.value_namespace = name_space;
        total_forwad_update_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "total-pw-paths")
    {
        total_pw_paths = value;
        total_pw_paths.value_namespace = name_space;
        total_pw_paths.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "num-rewrite-rpf-neighbors")
    {
        num_rewrite_rpf_neighbors = value;
        num_rewrite_rpf_neighbors.value_namespace = name_space;
        num_rewrite_rpf_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-dmtc-intf")
    {
        total_dmtc_intf = value;
        total_dmtc_intf.value_namespace = name_space;
        total_dmtc_intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-label-range")
    {
        total_label_range = value;
        total_label_range.value_namespace = name_space;
        total_label_range.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "num-label-fpi")
    {
        num_label_fpi.yfilter = yfilter;
    }
    if(value_path == "num-tefpi")
    {
        num_tefpi.yfilter = yfilter;
    }
    if(value_path == "num-ipv4fpi")
    {
        num_ipv4fpi.yfilter = yfilter;
    }
    if(value_path == "num-ipv6fpi")
    {
        num_ipv6fpi.yfilter = yfilter;
    }
    if(value_path == "num-pw-list-tefpi")
    {
        num_pw_list_tefpi.yfilter = yfilter;
    }
    if(value_path == "num-dmtctefpi")
    {
        num_dmtctefpi.yfilter = yfilter;
    }
    if(value_path == "num-label-range")
    {
        num_label_range.yfilter = yfilter;
    }
    if(value_path == "num-rewrite")
    {
        num_rewrite.yfilter = yfilter;
    }
    if(value_path == "total-forward-update")
    {
        total_forward_update.yfilter = yfilter;
    }
    if(value_path == "total-forwad-update-message")
    {
        total_forwad_update_message.yfilter = yfilter;
    }
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
    if(value_path == "total-t-ev4-paths")
    {
        total_t_ev4_paths.yfilter = yfilter;
    }
    if(value_path == "total-te-head-paths")
    {
        total_te_head_paths.yfilter = yfilter;
    }
    if(value_path == "total-pw-paths")
    {
        total_pw_paths.yfilter = yfilter;
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
    if(value_path == "num-rewrite-rpf-neighbors")
    {
        num_rewrite_rpf_neighbors.yfilter = yfilter;
    }
    if(value_path == "total-dmtc-intf")
    {
        total_dmtc_intf.yfilter = yfilter;
    }
    if(value_path == "total-label-range")
    {
        total_label_range.yfilter = yfilter;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr.yfilter = yfilter;
    }
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-paths" || name == "ipv6-paths" || name == "vrf-name" || name == "num-label-fpi" || name == "num-tefpi" || name == "num-ipv4fpi" || name == "num-ipv6fpi" || name == "num-pw-list-tefpi" || name == "num-dmtctefpi" || name == "num-label-range" || name == "num-rewrite" || name == "total-forward-update" || name == "total-forwad-update-message" || name == "total-paths" || name == "total-t-ev4-paths" || name == "total-te-head-paths" || name == "total-pw-paths" || name == "total-ip-sub-paths" || name == "total-ipv4rpf-neighbors" || name == "total-ipv6rpf-neighbors" || name == "num-rewrite-rpf-neighbors" || name == "total-dmtc-intf" || name == "total-label-range" || name == "vrf-name-xr")
        return true;
    return false;
}

MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::Ipv4Paths()
    :
    total_paths{YType::uint32, "total-paths"},
    total_backup_paths{YType::uint32, "total-backup-paths"},
    total_remote_backup_paths{YType::uint32, "total-remote-backup-paths"},
    total_protected_paths{YType::uint32, "total-protected-paths"},
    total_pop_lkup_paths{YType::uint32, "total-pop-lkup-paths"}
{

    yang_name = "ipv4-paths"; yang_parent_name = "rewrite-summary-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::~Ipv4Paths()
{
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::has_data() const
{
    if (is_presence_container) return true;
    return total_paths.is_set
	|| total_backup_paths.is_set
	|| total_remote_backup_paths.is_set
	|| total_protected_paths.is_set
	|| total_pop_lkup_paths.is_set;
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_backup_paths.yfilter)
	|| ydk::is_set(total_remote_backup_paths.yfilter)
	|| ydk::is_set(total_protected_paths.yfilter)
	|| ydk::is_set(total_pop_lkup_paths.yfilter);
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

    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_backup_paths.is_set || is_set(total_backup_paths.yfilter)) leaf_name_data.push_back(total_backup_paths.get_name_leafdata());
    if (total_remote_backup_paths.is_set || is_set(total_remote_backup_paths.yfilter)) leaf_name_data.push_back(total_remote_backup_paths.get_name_leafdata());
    if (total_protected_paths.is_set || is_set(total_protected_paths.yfilter)) leaf_name_data.push_back(total_protected_paths.get_name_leafdata());
    if (total_pop_lkup_paths.is_set || is_set(total_pop_lkup_paths.yfilter)) leaf_name_data.push_back(total_pop_lkup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-paths")
    {
        total_backup_paths = value;
        total_backup_paths.value_namespace = name_space;
        total_backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths = value;
        total_remote_backup_paths.value_namespace = name_space;
        total_remote_backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths = value;
        total_protected_paths.value_namespace = name_space;
        total_protected_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths = value;
        total_pop_lkup_paths.value_namespace = name_space;
        total_pop_lkup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
    if(value_path == "total-backup-paths")
    {
        total_backup_paths.yfilter = yfilter;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths.yfilter = yfilter;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths.yfilter = yfilter;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths.yfilter = yfilter;
    }
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-paths" || name == "total-backup-paths" || name == "total-remote-backup-paths" || name == "total-protected-paths" || name == "total-pop-lkup-paths")
        return true;
    return false;
}

MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::Ipv6Paths()
    :
    total_paths{YType::uint32, "total-paths"},
    total_backup_paths{YType::uint32, "total-backup-paths"},
    total_remote_backup_paths{YType::uint32, "total-remote-backup-paths"},
    total_protected_paths{YType::uint32, "total-protected-paths"},
    total_pop_lkup_paths{YType::uint32, "total-pop-lkup-paths"}
{

    yang_name = "ipv6-paths"; yang_parent_name = "rewrite-summary-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::~Ipv6Paths()
{
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::has_data() const
{
    if (is_presence_container) return true;
    return total_paths.is_set
	|| total_backup_paths.is_set
	|| total_remote_backup_paths.is_set
	|| total_protected_paths.is_set
	|| total_pop_lkup_paths.is_set;
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_backup_paths.yfilter)
	|| ydk::is_set(total_remote_backup_paths.yfilter)
	|| ydk::is_set(total_protected_paths.yfilter)
	|| ydk::is_set(total_pop_lkup_paths.yfilter);
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

    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_backup_paths.is_set || is_set(total_backup_paths.yfilter)) leaf_name_data.push_back(total_backup_paths.get_name_leafdata());
    if (total_remote_backup_paths.is_set || is_set(total_remote_backup_paths.yfilter)) leaf_name_data.push_back(total_remote_backup_paths.get_name_leafdata());
    if (total_protected_paths.is_set || is_set(total_protected_paths.yfilter)) leaf_name_data.push_back(total_protected_paths.get_name_leafdata());
    if (total_pop_lkup_paths.is_set || is_set(total_pop_lkup_paths.yfilter)) leaf_name_data.push_back(total_pop_lkup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-paths")
    {
        total_backup_paths = value;
        total_backup_paths.value_namespace = name_space;
        total_backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths = value;
        total_remote_backup_paths.value_namespace = name_space;
        total_remote_backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths = value;
        total_protected_paths.value_namespace = name_space;
        total_protected_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths = value;
        total_pop_lkup_paths.value_namespace = name_space;
        total_pop_lkup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
    if(value_path == "total-backup-paths")
    {
        total_backup_paths.yfilter = yfilter;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths.yfilter = yfilter;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths.yfilter = yfilter;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths.yfilter = yfilter;
    }
}

bool MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-paths" || name == "total-backup-paths" || name == "total-remote-backup-paths" || name == "total-protected-paths" || name == "total-pop-lkup-paths")
        return true;
    return false;
}

MplsLsd::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "mpls-lsd"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Interfaces::~Interfaces()
{
}

bool MplsLsd::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsd::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsd::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<MplsLsd::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLsd::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

MplsLsd::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface{YType::str, "interface"},
    interface_state{YType::enumeration, "interface-state"}
        ,
    application_owner(this, {})
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLsd::Interfaces::Interface::~Interface()
{
}

bool MplsLsd::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application_owner.len(); index++)
    {
        if(application_owner[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface.is_set
	|| interface_state.is_set;
}

bool MplsLsd::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<application_owner.len(); index++)
    {
        if(application_owner[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_state.yfilter);
}

std::string MplsLsd::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_state.is_set || is_set(interface_state.yfilter)) leaf_name_data.push_back(interface_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-owner")
    {
        auto ent_ = std::make_shared<MplsLsd::Interfaces::Interface::ApplicationOwner>();
        ent_->parent = this;
        application_owner.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
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

void MplsLsd::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-owner" || name == "interface-name" || name == "interface" || name == "interface-state")
        return true;
    return false;
}

MplsLsd::Interfaces::Interface::ApplicationOwner::ApplicationOwner()
    :
    application_name{YType::str, "application-name"},
    application_type{YType::enumeration, "application-type"},
    application_role_primary{YType::int32, "application-role-primary"},
    application_instance{YType::str, "application-instance"},
    resource_state{YType::enumeration, "resource-state"}
{

    yang_name = "application-owner"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLsd::Interfaces::Interface::ApplicationOwner::~ApplicationOwner()
{
}

bool MplsLsd::Interfaces::Interface::ApplicationOwner::has_data() const
{
    if (is_presence_container) return true;
    return application_name.is_set
	|| application_type.is_set
	|| application_role_primary.is_set
	|| application_instance.is_set
	|| resource_state.is_set;
}

bool MplsLsd::Interfaces::Interface::ApplicationOwner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| ydk::is_set(application_type.yfilter)
	|| ydk::is_set(application_role_primary.yfilter)
	|| ydk::is_set(application_instance.yfilter)
	|| ydk::is_set(resource_state.yfilter);
}

std::string MplsLsd::Interfaces::Interface::ApplicationOwner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-owner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Interfaces::Interface::ApplicationOwner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (application_role_primary.is_set || is_set(application_role_primary.yfilter)) leaf_name_data.push_back(application_role_primary.get_name_leafdata());
    if (application_instance.is_set || is_set(application_instance.yfilter)) leaf_name_data.push_back(application_instance.get_name_leafdata());
    if (resource_state.is_set || is_set(resource_state.yfilter)) leaf_name_data.push_back(resource_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLsd::Interfaces::Interface::ApplicationOwner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLsd::Interfaces::Interface::ApplicationOwner::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLsd::Interfaces::Interface::ApplicationOwner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLsd::Interfaces::Interface::ApplicationOwner::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLsd::Interfaces::Interface::ApplicationOwner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-name" || name == "application-type" || name == "application-role-primary" || name == "application-instance" || name == "resource-state")
        return true;
    return false;
}


}
}

