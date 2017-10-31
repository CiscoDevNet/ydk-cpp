
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_23.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_24.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::S2LReverseLspSubObj::S2LReverseLspSubObj()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "s2l-reverse-lsp-sub-obj"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::S2LReverseLspSubObj::~S2LReverseLspSubObj()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::S2LReverseLspSubObj::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::S2LReverseLspSubObj::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::S2LReverseLspSubObj::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-reverse-lsp-sub-obj";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::S2LReverseLspSubObj::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::S2LReverseLspSubObj::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::S2LReverseLspSubObj::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::S2LReverseLspSubObj::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::S2LReverseLspSubObj::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::S2LReverseLspSubObj::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "shared-risk-link-group"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::SharedRiskLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
        shared_risk_group.value_namespace = name_space;
        shared_risk_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::OutEro()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "out-ero"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::~OutEro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-ero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::Ipv4EroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4ero_sub_object != nullptr)
    {
        children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_address{YType::str, "ero-address"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "out-ero"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::Ipv4EroSubObject::has_data() const
{
    return is_strict_route.is_set
	|| ero_address.is_set
	|| prefix_length.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::Ipv4EroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::Ipv4EroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::Ipv4EroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::Ipv4EroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::Ipv4EroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::Ipv4EroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-address" || name == "prefix-length")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "out-ero"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::UnnumberedEroSubObject::has_data() const
{
    return is_strict_route.is_set
	|| ero_interface_id.is_set
	|| ero_router_id.is_set
	|| status.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
        ero_interface_id.value_namespace = name_space;
        ero_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
        ero_router_id.value_namespace = name_space;
        ero_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::OutEro::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-interface-id" || name == "ero-router-id" || name == "status")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::InEro()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "in-ero"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::~InEro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-ero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::Ipv4EroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4ero_sub_object != nullptr)
    {
        children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_address{YType::str, "ero-address"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "in-ero"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::Ipv4EroSubObject::has_data() const
{
    return is_strict_route.is_set
	|| ero_address.is_set
	|| prefix_length.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::Ipv4EroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::Ipv4EroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::Ipv4EroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::Ipv4EroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::Ipv4EroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::Ipv4EroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-address" || name == "prefix-length")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "in-ero"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::UnnumberedEroSubObject::has_data() const
{
    return is_strict_route.is_set
	|| ero_interface_id.is_set
	|| ero_router_id.is_set
	|| status.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
        ero_interface_id.value_namespace = name_space;
        ero_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
        ero_router_id.value_namespace = name_space;
        ero_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::InEro::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-interface-id" || name == "ero-router-id" || name == "status")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::PathRro()
    :
    rro_type{YType::enumeration, "rro-type"}
    	,
    ipv4rro_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::Ipv4RroSubObject>())
	,label_rro_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject>())
	,unnumbered_rro_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::UnnumberedRroSubObject>())
	,srlg_rro_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::SrlgRroSubObject>())
{
    ipv4rro_sub_object->parent = this;
    label_rro_sub_object->parent = this;
    unnumbered_rro_sub_object->parent = this;
    srlg_rro_sub_object->parent = this;

    yang_name = "path-rro"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::~PathRro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::has_data() const
{
    return rro_type.is_set
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_data())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_data())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_data())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_type.yfilter)
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_operation())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_operation())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_operation())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-rro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_type.is_set || is_set(rro_type.yfilter)) leaf_name_data.push_back(rro_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4rro-sub-object")
    {
        if(ipv4rro_sub_object == nullptr)
        {
            ipv4rro_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::Ipv4RroSubObject>();
        }
        return ipv4rro_sub_object;
    }

    if(child_yang_name == "label-rro-sub-object")
    {
        if(label_rro_sub_object == nullptr)
        {
            label_rro_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject>();
        }
        return label_rro_sub_object;
    }

    if(child_yang_name == "unnumbered-rro-sub-object")
    {
        if(unnumbered_rro_sub_object == nullptr)
        {
            unnumbered_rro_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::UnnumberedRroSubObject>();
        }
        return unnumbered_rro_sub_object;
    }

    if(child_yang_name == "srlg-rro-sub-object")
    {
        if(srlg_rro_sub_object == nullptr)
        {
            srlg_rro_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::SrlgRroSubObject>();
        }
        return srlg_rro_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4rro_sub_object != nullptr)
    {
        children["ipv4rro-sub-object"] = ipv4rro_sub_object;
    }

    if(label_rro_sub_object != nullptr)
    {
        children["label-rro-sub-object"] = label_rro_sub_object;
    }

    if(unnumbered_rro_sub_object != nullptr)
    {
        children["unnumbered-rro-sub-object"] = unnumbered_rro_sub_object;
    }

    if(srlg_rro_sub_object != nullptr)
    {
        children["srlg-rro-sub-object"] = srlg_rro_sub_object;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-type")
    {
        rro_type = value;
        rro_type.value_namespace = name_space;
        rro_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-type")
    {
        rro_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4rro-sub-object" || name == "label-rro-sub-object" || name == "unnumbered-rro-sub-object" || name == "srlg-rro-sub-object" || name == "rro-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::Ipv4RroSubObject::Ipv4RroSubObject()
    :
    rro_address{YType::str, "rro-address"}
    	,
    flags(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::Ipv4RroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "ipv4rro-sub-object"; yang_parent_name = "path-rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::Ipv4RroSubObject::~Ipv4RroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::Ipv4RroSubObject::has_data() const
{
    return rro_address.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::Ipv4RroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_address.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::Ipv4RroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::Ipv4RroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_address.is_set || is_set(rro_address.yfilter)) leaf_name_data.push_back(rro_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::Ipv4RroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::Ipv4RroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::Ipv4RroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::Ipv4RroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-address")
    {
        rro_address = value;
        rro_address.value_namespace = name_space;
        rro_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::Ipv4RroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-address")
    {
        rro_address.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::Ipv4RroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "rro-address")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::Ipv4RroSubObject::Flags::Flags()
    :
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"},
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_node_id{YType::boolean, "is-node-id"}
{

    yang_name = "flags"; yang_parent_name = "ipv4rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::Ipv4RroSubObject::Flags::~Flags()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::Ipv4RroSubObject::Flags::has_data() const
{
    return is_protection_available.is_set
	|| is_protection_in_use.is_set
	|| is_bandwidth_protected.is_set
	|| is_node_protection_available.is_set
	|| is_node_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::Ipv4RroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_node_id.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::Ipv4RroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::Ipv4RroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());
    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::Ipv4RroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::Ipv4RroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::Ipv4RroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available = value;
        is_protection_available.value_namespace = name_space;
        is_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use = value;
        is_protection_in_use.value_namespace = name_space;
        is_protection_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
        is_bandwidth_protected.value_namespace = name_space;
        is_bandwidth_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
        is_node_protection_available.value_namespace = name_space;
        is_node_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
        is_node_id.value_namespace = name_space;
        is_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::Ipv4RroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected.yfilter = yfilter;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-node-id")
    {
        is_node_id.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::Ipv4RroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-protection-available" || name == "is-protection-in-use" || name == "is-bandwidth-protected" || name == "is-node-protection-available" || name == "is-node-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::LabelRroSubObject()
    :
    label{YType::uint32, "label"},
    is_label_variable_length{YType::boolean, "is-label-variable-length"}
    	,
    flags(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "label-rro-sub-object"; yang_parent_name = "path-rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::~LabelRroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::has_data() const
{
    for (std::size_t index=0; index<variable_length_label.size(); index++)
    {
        if(variable_length_label[index]->has_data())
            return true;
    }
    return label.is_set
	|| is_label_variable_length.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::has_operation() const
{
    for (std::size_t index=0; index<variable_length_label.size(); index++)
    {
        if(variable_length_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(is_label_variable_length.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (is_label_variable_length.is_set || is_set(is_label_variable_length.yfilter)) leaf_name_data.push_back(is_label_variable_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::Flags>();
        }
        return flags;
    }

    if(child_yang_name == "variable-length-label")
    {
        for(auto const & c : variable_length_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel>();
        c->parent = this;
        variable_length_label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    for (auto const & c : variable_length_label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-label-variable-length")
    {
        is_label_variable_length = value;
        is_label_variable_length.value_namespace = name_space;
        is_label_variable_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "is-label-variable-length")
    {
        is_label_variable_length.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "variable-length-label" || name == "label" || name == "is-label-variable-length")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::Flags::Flags()
    :
    is_global_label{YType::boolean, "is-global-label"}
{

    yang_name = "flags"; yang_parent_name = "label-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::Flags::~Flags()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::Flags::has_data() const
{
    return is_global_label.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_global_label.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_global_label.is_set || is_set(is_global_label.yfilter)) leaf_name_data.push_back(is_global_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-global-label")
    {
        is_global_label = value;
        is_global_label.value_namespace = name_space;
        is_global_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-global-label")
    {
        is_global_label.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-global-label")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::VariableLengthLabel()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "variable-length-label"; yang_parent_name = "label-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::~VariableLengthLabel()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "variable-length-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::UnnumberedRroSubObject()
    :
    interface_address{YType::str, "interface-address"},
    interface_id{YType::uint32, "interface-id"}
    	,
    flags(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "unnumbered-rro-sub-object"; yang_parent_name = "path-rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::~UnnumberedRroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::has_data() const
{
    return interface_address.is_set
	|| interface_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_address.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_address.is_set || is_set(interface_address.yfilter)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-address")
    {
        interface_address = value;
        interface_address.value_namespace = name_space;
        interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-address")
    {
        interface_address.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "interface-address" || name == "interface-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::Flags()
    :
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"},
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_node_id{YType::boolean, "is-node-id"}
{

    yang_name = "flags"; yang_parent_name = "unnumbered-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::~Flags()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::has_data() const
{
    return is_protection_available.is_set
	|| is_protection_in_use.is_set
	|| is_bandwidth_protected.is_set
	|| is_node_protection_available.is_set
	|| is_node_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_node_id.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());
    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available = value;
        is_protection_available.value_namespace = name_space;
        is_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use = value;
        is_protection_in_use.value_namespace = name_space;
        is_protection_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
        is_bandwidth_protected.value_namespace = name_space;
        is_bandwidth_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
        is_node_protection_available.value_namespace = name_space;
        is_node_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
        is_node_id.value_namespace = name_space;
        is_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected.yfilter = yfilter;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-node-id")
    {
        is_node_id.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-protection-available" || name == "is-protection-in-use" || name == "is-bandwidth-protected" || name == "is-node-protection-available" || name == "is-node-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::SrlgRroSubObject::SrlgRroSubObject()
{

    yang_name = "srlg-rro-sub-object"; yang_parent_name = "path-rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::SrlgRroSubObject::~SrlgRroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::SrlgRroSubObject::has_data() const
{
    for (std::size_t index=0; index<srl_gs.size(); index++)
    {
        if(srl_gs[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::SrlgRroSubObject::has_operation() const
{
    for (std::size_t index=0; index<srl_gs.size(); index++)
    {
        if(srl_gs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::SrlgRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::SrlgRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::SrlgRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srl-gs")
    {
        for(auto const & c : srl_gs)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::SrlgRroSubObject::SrlGs>();
        c->parent = this;
        srl_gs.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::SrlgRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : srl_gs)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::SrlgRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::SrlgRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::SrlgRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srl-gs")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::SrlgRroSubObject::SrlGs::SrlGs()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "srl-gs"; yang_parent_name = "srlg-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::SrlgRroSubObject::SrlGs::~SrlGs()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::SrlgRroSubObject::SrlGs::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::SrlgRroSubObject::SrlGs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::SrlgRroSubObject::SrlGs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srl-gs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::SrlgRroSubObject::SrlGs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::SrlgRroSubObject::SrlGs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::SrlgRroSubObject::SrlGs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::SrlgRroSubObject::SrlGs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::SrlgRroSubObject::SrlGs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathRro::SrlgRroSubObject::SrlGs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::ResvRro()
    :
    rro_type{YType::enumeration, "rro-type"}
    	,
    ipv4rro_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject>())
	,label_rro_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject>())
	,unnumbered_rro_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject>())
	,srlg_rro_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject>())
{
    ipv4rro_sub_object->parent = this;
    label_rro_sub_object->parent = this;
    unnumbered_rro_sub_object->parent = this;
    srlg_rro_sub_object->parent = this;

    yang_name = "resv-rro"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::~ResvRro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::has_data() const
{
    return rro_type.is_set
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_data())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_data())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_data())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_type.yfilter)
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_operation())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_operation())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_operation())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resv-rro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_type.is_set || is_set(rro_type.yfilter)) leaf_name_data.push_back(rro_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4rro-sub-object")
    {
        if(ipv4rro_sub_object == nullptr)
        {
            ipv4rro_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject>();
        }
        return ipv4rro_sub_object;
    }

    if(child_yang_name == "label-rro-sub-object")
    {
        if(label_rro_sub_object == nullptr)
        {
            label_rro_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject>();
        }
        return label_rro_sub_object;
    }

    if(child_yang_name == "unnumbered-rro-sub-object")
    {
        if(unnumbered_rro_sub_object == nullptr)
        {
            unnumbered_rro_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject>();
        }
        return unnumbered_rro_sub_object;
    }

    if(child_yang_name == "srlg-rro-sub-object")
    {
        if(srlg_rro_sub_object == nullptr)
        {
            srlg_rro_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject>();
        }
        return srlg_rro_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4rro_sub_object != nullptr)
    {
        children["ipv4rro-sub-object"] = ipv4rro_sub_object;
    }

    if(label_rro_sub_object != nullptr)
    {
        children["label-rro-sub-object"] = label_rro_sub_object;
    }

    if(unnumbered_rro_sub_object != nullptr)
    {
        children["unnumbered-rro-sub-object"] = unnumbered_rro_sub_object;
    }

    if(srlg_rro_sub_object != nullptr)
    {
        children["srlg-rro-sub-object"] = srlg_rro_sub_object;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-type")
    {
        rro_type = value;
        rro_type.value_namespace = name_space;
        rro_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-type")
    {
        rro_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4rro-sub-object" || name == "label-rro-sub-object" || name == "unnumbered-rro-sub-object" || name == "srlg-rro-sub-object" || name == "rro-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::Ipv4RroSubObject()
    :
    rro_address{YType::str, "rro-address"}
    	,
    flags(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "ipv4rro-sub-object"; yang_parent_name = "resv-rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::~Ipv4RroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::has_data() const
{
    return rro_address.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_address.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_address.is_set || is_set(rro_address.yfilter)) leaf_name_data.push_back(rro_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-address")
    {
        rro_address = value;
        rro_address.value_namespace = name_space;
        rro_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-address")
    {
        rro_address.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "rro-address")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::Flags()
    :
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"},
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_node_id{YType::boolean, "is-node-id"}
{

    yang_name = "flags"; yang_parent_name = "ipv4rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::~Flags()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::has_data() const
{
    return is_protection_available.is_set
	|| is_protection_in_use.is_set
	|| is_bandwidth_protected.is_set
	|| is_node_protection_available.is_set
	|| is_node_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_node_id.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());
    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available = value;
        is_protection_available.value_namespace = name_space;
        is_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use = value;
        is_protection_in_use.value_namespace = name_space;
        is_protection_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
        is_bandwidth_protected.value_namespace = name_space;
        is_bandwidth_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
        is_node_protection_available.value_namespace = name_space;
        is_node_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
        is_node_id.value_namespace = name_space;
        is_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected.yfilter = yfilter;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-node-id")
    {
        is_node_id.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-protection-available" || name == "is-protection-in-use" || name == "is-bandwidth-protected" || name == "is-node-protection-available" || name == "is-node-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::LabelRroSubObject()
    :
    label{YType::uint32, "label"},
    is_label_variable_length{YType::boolean, "is-label-variable-length"}
    	,
    flags(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "label-rro-sub-object"; yang_parent_name = "resv-rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::~LabelRroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::has_data() const
{
    for (std::size_t index=0; index<variable_length_label.size(); index++)
    {
        if(variable_length_label[index]->has_data())
            return true;
    }
    return label.is_set
	|| is_label_variable_length.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::has_operation() const
{
    for (std::size_t index=0; index<variable_length_label.size(); index++)
    {
        if(variable_length_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(is_label_variable_length.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (is_label_variable_length.is_set || is_set(is_label_variable_length.yfilter)) leaf_name_data.push_back(is_label_variable_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::Flags>();
        }
        return flags;
    }

    if(child_yang_name == "variable-length-label")
    {
        for(auto const & c : variable_length_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel>();
        c->parent = this;
        variable_length_label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    for (auto const & c : variable_length_label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-label-variable-length")
    {
        is_label_variable_length = value;
        is_label_variable_length.value_namespace = name_space;
        is_label_variable_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "is-label-variable-length")
    {
        is_label_variable_length.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "variable-length-label" || name == "label" || name == "is-label-variable-length")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::Flags::Flags()
    :
    is_global_label{YType::boolean, "is-global-label"}
{

    yang_name = "flags"; yang_parent_name = "label-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::Flags::~Flags()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::Flags::has_data() const
{
    return is_global_label.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_global_label.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_global_label.is_set || is_set(is_global_label.yfilter)) leaf_name_data.push_back(is_global_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-global-label")
    {
        is_global_label = value;
        is_global_label.value_namespace = name_space;
        is_global_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-global-label")
    {
        is_global_label.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-global-label")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::VariableLengthLabel()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "variable-length-label"; yang_parent_name = "label-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::~VariableLengthLabel()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "variable-length-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::UnnumberedRroSubObject()
    :
    interface_address{YType::str, "interface-address"},
    interface_id{YType::uint32, "interface-id"}
    	,
    flags(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "unnumbered-rro-sub-object"; yang_parent_name = "resv-rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::~UnnumberedRroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::has_data() const
{
    return interface_address.is_set
	|| interface_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_address.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_address.is_set || is_set(interface_address.yfilter)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-address")
    {
        interface_address = value;
        interface_address.value_namespace = name_space;
        interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-address")
    {
        interface_address.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "interface-address" || name == "interface-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::Flags()
    :
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"},
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_node_id{YType::boolean, "is-node-id"}
{

    yang_name = "flags"; yang_parent_name = "unnumbered-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::~Flags()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::has_data() const
{
    return is_protection_available.is_set
	|| is_protection_in_use.is_set
	|| is_bandwidth_protected.is_set
	|| is_node_protection_available.is_set
	|| is_node_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_node_id.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());
    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available = value;
        is_protection_available.value_namespace = name_space;
        is_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use = value;
        is_protection_in_use.value_namespace = name_space;
        is_protection_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
        is_bandwidth_protected.value_namespace = name_space;
        is_bandwidth_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
        is_node_protection_available.value_namespace = name_space;
        is_node_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
        is_node_id.value_namespace = name_space;
        is_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected.yfilter = yfilter;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-node-id")
    {
        is_node_id.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-protection-available" || name == "is-protection-in-use" || name == "is-bandwidth-protected" || name == "is-node-protection-available" || name == "is-node-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject::SrlgRroSubObject()
{

    yang_name = "srlg-rro-sub-object"; yang_parent_name = "resv-rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject::~SrlgRroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject::has_data() const
{
    for (std::size_t index=0; index<srl_gs.size(); index++)
    {
        if(srl_gs[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject::has_operation() const
{
    for (std::size_t index=0; index<srl_gs.size(); index++)
    {
        if(srl_gs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srl-gs")
    {
        for(auto const & c : srl_gs)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs>();
        c->parent = this;
        srl_gs.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : srl_gs)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srl-gs")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs::SrlGs()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "srl-gs"; yang_parent_name = "srlg-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs::~SrlGs()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srl-gs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathAffinityArray::PathAffinityArray()
    :
    hop_address{YType::str, "hop-address"},
    hop_affinity{YType::uint32, "hop-affinity"}
{

    yang_name = "path-affinity-array"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathAffinityArray::~PathAffinityArray()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathAffinityArray::has_data() const
{
    for (std::size_t index=0; index<hop_extended_affinity.size(); index++)
    {
        if(hop_extended_affinity[index]->has_data())
            return true;
    }
    return hop_address.is_set
	|| hop_affinity.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathAffinityArray::has_operation() const
{
    for (std::size_t index=0; index<hop_extended_affinity.size(); index++)
    {
        if(hop_extended_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hop_address.yfilter)
	|| ydk::is_set(hop_affinity.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathAffinityArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-affinity-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathAffinityArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_address.is_set || is_set(hop_address.yfilter)) leaf_name_data.push_back(hop_address.get_name_leafdata());
    if (hop_affinity.is_set || is_set(hop_affinity.yfilter)) leaf_name_data.push_back(hop_affinity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathAffinityArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hop-extended-affinity")
    {
        for(auto const & c : hop_extended_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathAffinityArray::HopExtendedAffinity>();
        c->parent = this;
        hop_extended_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathAffinityArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hop_extended_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathAffinityArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hop-address")
    {
        hop_address = value;
        hop_address.value_namespace = name_space;
        hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-affinity")
    {
        hop_affinity = value;
        hop_affinity.value_namespace = name_space;
        hop_affinity.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathAffinityArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hop-address")
    {
        hop_address.yfilter = yfilter;
    }
    if(value_path == "hop-affinity")
    {
        hop_affinity.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathAffinityArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hop-extended-affinity" || name == "hop-address" || name == "hop-affinity")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathAffinityArray::HopExtendedAffinity::HopExtendedAffinity()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "hop-extended-affinity"; yang_parent_name = "path-affinity-array"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathAffinityArray::HopExtendedAffinity::~HopExtendedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathAffinityArray::HopExtendedAffinity::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathAffinityArray::HopExtendedAffinity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathAffinityArray::HopExtendedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop-extended-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathAffinityArray::HopExtendedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathAffinityArray::HopExtendedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathAffinityArray::HopExtendedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathAffinityArray::HopExtendedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathAffinityArray::HopExtendedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathAffinityArray::HopExtendedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::ReverseEroIn()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "reverse-ero-in"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::~ReverseEroIn()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-ero-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::Ipv4EroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4ero_sub_object != nullptr)
    {
        children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_address{YType::str, "ero-address"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "reverse-ero-in"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::Ipv4EroSubObject::has_data() const
{
    return is_strict_route.is_set
	|| ero_address.is_set
	|| prefix_length.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::Ipv4EroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::Ipv4EroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::Ipv4EroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::Ipv4EroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::Ipv4EroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::Ipv4EroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-address" || name == "prefix-length")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "reverse-ero-in"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::has_data() const
{
    return is_strict_route.is_set
	|| ero_interface_id.is_set
	|| ero_router_id.is_set
	|| status.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
        ero_interface_id.value_namespace = name_space;
        ero_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
        ero_router_id.value_namespace = name_space;
        ero_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-interface-id" || name == "ero-router-id" || name == "status")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::S2LSegmentRoutingPath::S2LSegmentRoutingPath()
    :
    sid_type{YType::enumeration, "sid-type"},
    has_ip_addresses{YType::boolean, "has-ip-addresses"},
    local_addr{YType::str, "local-addr"},
    remote_addr{YType::str, "remote-addr"},
    has_mpls_label{YType::boolean, "has-mpls-label"},
    mpls_label_value{YType::uint32, "mpls-label-value"},
    has_entropy_label{YType::boolean, "has-entropy-label"}
{

    yang_name = "s2l-segment-routing-path"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::S2LSegmentRoutingPath::~S2LSegmentRoutingPath()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::S2LSegmentRoutingPath::has_data() const
{
    return sid_type.is_set
	|| has_ip_addresses.is_set
	|| local_addr.is_set
	|| remote_addr.is_set
	|| has_mpls_label.is_set
	|| mpls_label_value.is_set
	|| has_entropy_label.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::S2LSegmentRoutingPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(has_ip_addresses.yfilter)
	|| ydk::is_set(local_addr.yfilter)
	|| ydk::is_set(remote_addr.yfilter)
	|| ydk::is_set(has_mpls_label.yfilter)
	|| ydk::is_set(mpls_label_value.yfilter)
	|| ydk::is_set(has_entropy_label.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::S2LSegmentRoutingPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-segment-routing-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::S2LSegmentRoutingPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (has_ip_addresses.is_set || is_set(has_ip_addresses.yfilter)) leaf_name_data.push_back(has_ip_addresses.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.yfilter)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.yfilter)) leaf_name_data.push_back(remote_addr.get_name_leafdata());
    if (has_mpls_label.is_set || is_set(has_mpls_label.yfilter)) leaf_name_data.push_back(has_mpls_label.get_name_leafdata());
    if (mpls_label_value.is_set || is_set(mpls_label_value.yfilter)) leaf_name_data.push_back(mpls_label_value.get_name_leafdata());
    if (has_entropy_label.is_set || is_set(has_entropy_label.yfilter)) leaf_name_data.push_back(has_entropy_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::S2LSegmentRoutingPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::S2LSegmentRoutingPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::S2LSegmentRoutingPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-ip-addresses")
    {
        has_ip_addresses = value;
        has_ip_addresses.value_namespace = name_space;
        has_ip_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
        local_addr.value_namespace = name_space;
        local_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
        remote_addr.value_namespace = name_space;
        remote_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-mpls-label")
    {
        has_mpls_label = value;
        has_mpls_label.value_namespace = name_space;
        has_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label-value")
    {
        mpls_label_value = value;
        mpls_label_value.value_namespace = name_space;
        mpls_label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-entropy-label")
    {
        has_entropy_label = value;
        has_entropy_label.value_namespace = name_space;
        has_entropy_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::S2LSegmentRoutingPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "has-ip-addresses")
    {
        has_ip_addresses.yfilter = yfilter;
    }
    if(value_path == "local-addr")
    {
        local_addr.yfilter = yfilter;
    }
    if(value_path == "remote-addr")
    {
        remote_addr.yfilter = yfilter;
    }
    if(value_path == "has-mpls-label")
    {
        has_mpls_label.yfilter = yfilter;
    }
    if(value_path == "mpls-label-value")
    {
        mpls_label_value.yfilter = yfilter;
    }
    if(value_path == "has-entropy-label")
    {
        has_entropy_label.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::S2LSegmentRoutingPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-type" || name == "has-ip-addresses" || name == "local-addr" || name == "remote-addr" || name == "has-mpls-label" || name == "mpls-label-value" || name == "has-entropy-label")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::TunnelRestorationLsp()
    :
    signaled_name{YType::str, "signaled-name"},
    is_frr_failed{YType::boolean, "is-frr-failed"},
    frr_active_reason{YType::uint32, "frr-active-reason"},
    lsp_bandwidth{YType::uint32, "lsp-bandwidth"},
    lsp_setup_priority{YType::uint8, "lsp-setup-priority"},
    lsp_hold_priority{YType::uint8, "lsp-hold-priority"},
    lsp_bandwidth_type{YType::enumeration, "lsp-bandwidth-type"},
    dste_class_match{YType::boolean, "dste-class-match"},
    dste_class_index{YType::uint8, "dste-class-index"},
    type{YType::enumeration, "type"},
    uptime{YType::uint32, "uptime"},
    s2_ls_up{YType::uint32, "s2-ls-up"},
    s2_ls_proceeding{YType::uint32, "s2-ls-proceeding"},
    s2_ls_down{YType::uint32, "s2-ls-down"},
    reoptimize_reason{YType::enumeration, "reoptimize-reason"},
    reoptimize_trigger{YType::enumeration, "reoptimize-trigger"},
    timer_left{YType::uint32, "timer-left"},
    is_passive{YType::boolean, "is-passive"},
    is_interface{YType::boolean, "is-interface"},
    last_path_change{YType::uint32, "last-path-change"},
    persistent_bytes{YType::uint64, "persistent-bytes"},
    persistent_packets{YType::uint64, "persistent-packets"}
    	,
    lsp_fec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec>())
{
    lsp_fec->parent = this;

    yang_name = "tunnel-restoration-lsp"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::~TunnelRestorationLsp()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::has_data() const
{
    for (std::size_t index=0; index<s2l.size(); index++)
    {
        if(s2l[index]->has_data())
            return true;
    }
    return signaled_name.is_set
	|| is_frr_failed.is_set
	|| frr_active_reason.is_set
	|| lsp_bandwidth.is_set
	|| lsp_setup_priority.is_set
	|| lsp_hold_priority.is_set
	|| lsp_bandwidth_type.is_set
	|| dste_class_match.is_set
	|| dste_class_index.is_set
	|| type.is_set
	|| uptime.is_set
	|| s2_ls_up.is_set
	|| s2_ls_proceeding.is_set
	|| s2_ls_down.is_set
	|| reoptimize_reason.is_set
	|| reoptimize_trigger.is_set
	|| timer_left.is_set
	|| is_passive.is_set
	|| is_interface.is_set
	|| last_path_change.is_set
	|| persistent_bytes.is_set
	|| persistent_packets.is_set
	|| (lsp_fec !=  nullptr && lsp_fec->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::has_operation() const
{
    for (std::size_t index=0; index<s2l.size(); index++)
    {
        if(s2l[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(signaled_name.yfilter)
	|| ydk::is_set(is_frr_failed.yfilter)
	|| ydk::is_set(frr_active_reason.yfilter)
	|| ydk::is_set(lsp_bandwidth.yfilter)
	|| ydk::is_set(lsp_setup_priority.yfilter)
	|| ydk::is_set(lsp_hold_priority.yfilter)
	|| ydk::is_set(lsp_bandwidth_type.yfilter)
	|| ydk::is_set(dste_class_match.yfilter)
	|| ydk::is_set(dste_class_index.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(s2_ls_up.yfilter)
	|| ydk::is_set(s2_ls_proceeding.yfilter)
	|| ydk::is_set(s2_ls_down.yfilter)
	|| ydk::is_set(reoptimize_reason.yfilter)
	|| ydk::is_set(reoptimize_trigger.yfilter)
	|| ydk::is_set(timer_left.yfilter)
	|| ydk::is_set(is_passive.yfilter)
	|| ydk::is_set(is_interface.yfilter)
	|| ydk::is_set(last_path_change.yfilter)
	|| ydk::is_set(persistent_bytes.yfilter)
	|| ydk::is_set(persistent_packets.yfilter)
	|| (lsp_fec !=  nullptr && lsp_fec->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-restoration-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signaled_name.is_set || is_set(signaled_name.yfilter)) leaf_name_data.push_back(signaled_name.get_name_leafdata());
    if (is_frr_failed.is_set || is_set(is_frr_failed.yfilter)) leaf_name_data.push_back(is_frr_failed.get_name_leafdata());
    if (frr_active_reason.is_set || is_set(frr_active_reason.yfilter)) leaf_name_data.push_back(frr_active_reason.get_name_leafdata());
    if (lsp_bandwidth.is_set || is_set(lsp_bandwidth.yfilter)) leaf_name_data.push_back(lsp_bandwidth.get_name_leafdata());
    if (lsp_setup_priority.is_set || is_set(lsp_setup_priority.yfilter)) leaf_name_data.push_back(lsp_setup_priority.get_name_leafdata());
    if (lsp_hold_priority.is_set || is_set(lsp_hold_priority.yfilter)) leaf_name_data.push_back(lsp_hold_priority.get_name_leafdata());
    if (lsp_bandwidth_type.is_set || is_set(lsp_bandwidth_type.yfilter)) leaf_name_data.push_back(lsp_bandwidth_type.get_name_leafdata());
    if (dste_class_match.is_set || is_set(dste_class_match.yfilter)) leaf_name_data.push_back(dste_class_match.get_name_leafdata());
    if (dste_class_index.is_set || is_set(dste_class_index.yfilter)) leaf_name_data.push_back(dste_class_index.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (s2_ls_up.is_set || is_set(s2_ls_up.yfilter)) leaf_name_data.push_back(s2_ls_up.get_name_leafdata());
    if (s2_ls_proceeding.is_set || is_set(s2_ls_proceeding.yfilter)) leaf_name_data.push_back(s2_ls_proceeding.get_name_leafdata());
    if (s2_ls_down.is_set || is_set(s2_ls_down.yfilter)) leaf_name_data.push_back(s2_ls_down.get_name_leafdata());
    if (reoptimize_reason.is_set || is_set(reoptimize_reason.yfilter)) leaf_name_data.push_back(reoptimize_reason.get_name_leafdata());
    if (reoptimize_trigger.is_set || is_set(reoptimize_trigger.yfilter)) leaf_name_data.push_back(reoptimize_trigger.get_name_leafdata());
    if (timer_left.is_set || is_set(timer_left.yfilter)) leaf_name_data.push_back(timer_left.get_name_leafdata());
    if (is_passive.is_set || is_set(is_passive.yfilter)) leaf_name_data.push_back(is_passive.get_name_leafdata());
    if (is_interface.is_set || is_set(is_interface.yfilter)) leaf_name_data.push_back(is_interface.get_name_leafdata());
    if (last_path_change.is_set || is_set(last_path_change.yfilter)) leaf_name_data.push_back(last_path_change.get_name_leafdata());
    if (persistent_bytes.is_set || is_set(persistent_bytes.yfilter)) leaf_name_data.push_back(persistent_bytes.get_name_leafdata());
    if (persistent_packets.is_set || is_set(persistent_packets.yfilter)) leaf_name_data.push_back(persistent_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-fec")
    {
        if(lsp_fec == nullptr)
        {
            lsp_fec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec>();
        }
        return lsp_fec;
    }

    if(child_yang_name == "s2l")
    {
        for(auto const & c : s2l)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L>();
        c->parent = this;
        s2l.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp_fec != nullptr)
    {
        children["lsp-fec"] = lsp_fec;
    }

    for (auto const & c : s2l)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "signaled-name")
    {
        signaled_name = value;
        signaled_name.value_namespace = name_space;
        signaled_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-frr-failed")
    {
        is_frr_failed = value;
        is_frr_failed.value_namespace = name_space;
        is_frr_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-active-reason")
    {
        frr_active_reason = value;
        frr_active_reason.value_namespace = name_space;
        frr_active_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth")
    {
        lsp_bandwidth = value;
        lsp_bandwidth.value_namespace = name_space;
        lsp_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-setup-priority")
    {
        lsp_setup_priority = value;
        lsp_setup_priority.value_namespace = name_space;
        lsp_setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-hold-priority")
    {
        lsp_hold_priority = value;
        lsp_hold_priority.value_namespace = name_space;
        lsp_hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-type")
    {
        lsp_bandwidth_type = value;
        lsp_bandwidth_type.value_namespace = name_space;
        lsp_bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-match")
    {
        dste_class_match = value;
        dste_class_match.value_namespace = name_space;
        dste_class_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-index")
    {
        dste_class_index = value;
        dste_class_index.value_namespace = name_space;
        dste_class_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2-ls-up")
    {
        s2_ls_up = value;
        s2_ls_up.value_namespace = name_space;
        s2_ls_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2-ls-proceeding")
    {
        s2_ls_proceeding = value;
        s2_ls_proceeding.value_namespace = name_space;
        s2_ls_proceeding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2-ls-down")
    {
        s2_ls_down = value;
        s2_ls_down.value_namespace = name_space;
        s2_ls_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-reason")
    {
        reoptimize_reason = value;
        reoptimize_reason.value_namespace = name_space;
        reoptimize_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-trigger")
    {
        reoptimize_trigger = value;
        reoptimize_trigger.value_namespace = name_space;
        reoptimize_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-left")
    {
        timer_left = value;
        timer_left.value_namespace = name_space;
        timer_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-passive")
    {
        is_passive = value;
        is_passive.value_namespace = name_space;
        is_passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface")
    {
        is_interface = value;
        is_interface.value_namespace = name_space;
        is_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-path-change")
    {
        last_path_change = value;
        last_path_change.value_namespace = name_space;
        last_path_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "persistent-bytes")
    {
        persistent_bytes = value;
        persistent_bytes.value_namespace = name_space;
        persistent_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "persistent-packets")
    {
        persistent_packets = value;
        persistent_packets.value_namespace = name_space;
        persistent_packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signaled-name")
    {
        signaled_name.yfilter = yfilter;
    }
    if(value_path == "is-frr-failed")
    {
        is_frr_failed.yfilter = yfilter;
    }
    if(value_path == "frr-active-reason")
    {
        frr_active_reason.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth")
    {
        lsp_bandwidth.yfilter = yfilter;
    }
    if(value_path == "lsp-setup-priority")
    {
        lsp_setup_priority.yfilter = yfilter;
    }
    if(value_path == "lsp-hold-priority")
    {
        lsp_hold_priority.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-type")
    {
        lsp_bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "dste-class-match")
    {
        dste_class_match.yfilter = yfilter;
    }
    if(value_path == "dste-class-index")
    {
        dste_class_index.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "s2-ls-up")
    {
        s2_ls_up.yfilter = yfilter;
    }
    if(value_path == "s2-ls-proceeding")
    {
        s2_ls_proceeding.yfilter = yfilter;
    }
    if(value_path == "s2-ls-down")
    {
        s2_ls_down.yfilter = yfilter;
    }
    if(value_path == "reoptimize-reason")
    {
        reoptimize_reason.yfilter = yfilter;
    }
    if(value_path == "reoptimize-trigger")
    {
        reoptimize_trigger.yfilter = yfilter;
    }
    if(value_path == "timer-left")
    {
        timer_left.yfilter = yfilter;
    }
    if(value_path == "is-passive")
    {
        is_passive.yfilter = yfilter;
    }
    if(value_path == "is-interface")
    {
        is_interface.yfilter = yfilter;
    }
    if(value_path == "last-path-change")
    {
        last_path_change.yfilter = yfilter;
    }
    if(value_path == "persistent-bytes")
    {
        persistent_bytes.yfilter = yfilter;
    }
    if(value_path == "persistent-packets")
    {
        persistent_packets.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-fec" || name == "s2l" || name == "signaled-name" || name == "is-frr-failed" || name == "frr-active-reason" || name == "lsp-bandwidth" || name == "lsp-setup-priority" || name == "lsp-hold-priority" || name == "lsp-bandwidth-type" || name == "dste-class-match" || name == "dste-class-index" || name == "type" || name == "uptime" || name == "s2-ls-up" || name == "s2-ls-proceeding" || name == "s2-ls-down" || name == "reoptimize-reason" || name == "reoptimize-trigger" || name == "timer-left" || name == "is-passive" || name == "is-interface" || name == "last-path-change" || name == "persistent-bytes" || name == "persistent-packets")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::LspFec()
    :
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "lsp-fec"; yang_parent_name = "tunnel-restoration-lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::~LspFec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::has_data() const
{
    return fec_lsp_id.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
        fec_lsp_id.value_namespace = name_space;
        fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
        fec_vrf.value_namespace = name_space;
        fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-lsp-id" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-vrf")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "lsp-fec"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| p2p_lsp_destination.is_set
	|| fec_destination_p2mp_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
        p2p_lsp_destination.value_namespace = name_space;
        p2p_lsp_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
        fec_destination_p2mp_id.value_namespace = name_space;
        fec_destination_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination.yfilter = yfilter;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "p2p-lsp-destination" || name == "fec-destination-p2mp-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2L()
    :
    pcalc_area{YType::str, "pcalc-area"},
    is_expanded_ero{YType::boolean, "is-expanded-ero"},
    path_reeval_query_mid{YType::uint32, "path-reeval-query-mid"},
    time_since_last_query_received_mid{YType::uint32, "time-since-last-query-received-mid"},
    time_since_last_preferred_path_exists_send_mid{YType::uint32, "time-since-last-preferred-path-exists-send-mid"},
    time_since_last_preferred_tree_exists_send_mid{YType::uint32, "time-since-last-preferred-tree-exists-send-mid"},
    expanded_ero_area_id{YType::str, "expanded-ero-area-id"},
    expanded_ero_affinity_bits{YType::uint32, "expanded-ero-affinity-bits"},
    expanded_ero_affinity_mask{YType::uint32, "expanded-ero-affinity-mask"},
    expanded_ero_metric_type{YType::enumeration, "expanded-ero-metric-type"},
    expanded_ero_metric{YType::uint32, "expanded-ero-metric"},
    abr_auto_discovered{YType::str, "abr-auto-discovered"},
    is_frr_enabled{YType::boolean, "is-frr-enabled"},
    is_node_protected{YType::boolean, "is-node-protected"},
    is_bandwidth_protect{YType::boolean, "is-bandwidth-protect"},
    path_rro_enabled{YType::boolean, "path-rro-enabled"},
    weight{YType::uint64, "weight"},
    reverse_weight{YType::uint64, "reverse-weight"},
    uptime{YType::uint32, "uptime"},
    egress_interface{YType::str, "egress-interface"},
    egress_interface_state{YType::enumeration, "egress-interface-state"},
    egress_interface_brief{YType::str, "egress-interface-brief"},
    ingress_interface{YType::str, "ingress-interface"},
    ingress_interface_state{YType::enumeration, "ingress-interface-state"},
    ingress_interface_brief{YType::str, "ingress-interface-brief"},
    s2l_local_label{YType::uint32, "s2l-local-label"},
    s2l_out_label{YType::uint32, "s2l-out-label"},
    outbound_frr_state{YType::enumeration, "outbound-frr-state"},
    frr_out_tunnel_interface{YType::str, "frr-out-tunnel-interface"},
    role{YType::enumeration, "role"},
    signalling_status{YType::enumeration, "signalling-status"},
    local_router_id{YType::str, "local-router-id"},
    upstream_router_id{YType::str, "upstream-router-id"},
    downstream_router_id{YType::str, "downstream-router-id"},
    next_hop_address{YType::str, "next-hop-address"},
    previous_hop_address{YType::str, "previous-hop-address"},
    incoming_address{YType::str, "incoming-address"},
    backup_tunnel_interface{YType::str, "backup-tunnel-interface"},
    node_hop_count{YType::uint8, "node-hop-count"},
    is_optical{YType::boolean, "is-optical"},
    s2l_reverse_ero_obj_present{YType::boolean, "s2l-reverse-ero-obj-present"},
    reverse_lsp_present{YType::boolean, "reverse-lsp-present"},
    reverse_lsp_connected{YType::boolean, "reverse-lsp-connected"},
    reverse_lsp_name{YType::str, "reverse-lsp-name"},
    s2l_reverse_tspec_obj_present{YType::boolean, "s2l-reverse-tspec-obj-present"},
    path_using_strict_spf{YType::boolean, "path-using-strict-spf"}
    	,
    s2l_fec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LFec>())
	,active_path_option(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption>())
	,out_xro(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro>())
	,in_xro(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro>())
	,tspec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Tspec>())
	,generic_tspec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec>())
	,fspec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Fspec>())
	,generic_fspec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec>())
	,next_hop_address_generic(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric>())
	,previous_hop_address_generic(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric>())
	,incoming_address_generic(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric>())
	,s2l_convergence(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LConvergence>())
	,soft_preemption(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SoftPreemption>())
	,gmpls_labels(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels>())
	,otn_s2l(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L>())
	,head_end_bfd_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo>())
	,tail_end_bfd_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo>())
	,srlg_collection(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection>())
	,association(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association>())
	,protection(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Protection>())
	,reverse_lsp_fec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec>())
	,reverse_tspec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseTspec>())
	,flex_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo>())
	,lsp_wrap_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::LspWrapInfo>())
	,diversity_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::DiversityInfo>())
{
    s2l_fec->parent = this;
    active_path_option->parent = this;
    out_xro->parent = this;
    in_xro->parent = this;
    tspec->parent = this;
    generic_tspec->parent = this;
    fspec->parent = this;
    generic_fspec->parent = this;
    next_hop_address_generic->parent = this;
    previous_hop_address_generic->parent = this;
    incoming_address_generic->parent = this;
    s2l_convergence->parent = this;
    soft_preemption->parent = this;
    gmpls_labels->parent = this;
    otn_s2l->parent = this;
    head_end_bfd_info->parent = this;
    tail_end_bfd_info->parent = this;
    srlg_collection->parent = this;
    association->parent = this;
    protection->parent = this;
    reverse_lsp_fec->parent = this;
    reverse_tspec->parent = this;
    flex_info->parent = this;
    lsp_wrap_info->parent = this;
    diversity_info->parent = this;

    yang_name = "s2l"; yang_parent_name = "tunnel-restoration-lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::~S2L()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::has_data() const
{
    for (std::size_t index=0; index<s2l_reverse_lsp_sub_obj.size(); index++)
    {
        if(s2l_reverse_lsp_sub_obj[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<out_ero.size(); index++)
    {
        if(out_ero[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<in_ero.size(); index++)
    {
        if(in_ero[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path_rro.size(); index++)
    {
        if(path_rro[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<resv_rro.size(); index++)
    {
        if(resv_rro[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path_affinity_array.size(); index++)
    {
        if(path_affinity_array[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reverse_ero_in.size(); index++)
    {
        if(reverse_ero_in[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<s2l_segment_routing_path.size(); index++)
    {
        if(s2l_segment_routing_path[index]->has_data())
            return true;
    }
    return pcalc_area.is_set
	|| is_expanded_ero.is_set
	|| path_reeval_query_mid.is_set
	|| time_since_last_query_received_mid.is_set
	|| time_since_last_preferred_path_exists_send_mid.is_set
	|| time_since_last_preferred_tree_exists_send_mid.is_set
	|| expanded_ero_area_id.is_set
	|| expanded_ero_affinity_bits.is_set
	|| expanded_ero_affinity_mask.is_set
	|| expanded_ero_metric_type.is_set
	|| expanded_ero_metric.is_set
	|| abr_auto_discovered.is_set
	|| is_frr_enabled.is_set
	|| is_node_protected.is_set
	|| is_bandwidth_protect.is_set
	|| path_rro_enabled.is_set
	|| weight.is_set
	|| reverse_weight.is_set
	|| uptime.is_set
	|| egress_interface.is_set
	|| egress_interface_state.is_set
	|| egress_interface_brief.is_set
	|| ingress_interface.is_set
	|| ingress_interface_state.is_set
	|| ingress_interface_brief.is_set
	|| s2l_local_label.is_set
	|| s2l_out_label.is_set
	|| outbound_frr_state.is_set
	|| frr_out_tunnel_interface.is_set
	|| role.is_set
	|| signalling_status.is_set
	|| local_router_id.is_set
	|| upstream_router_id.is_set
	|| downstream_router_id.is_set
	|| next_hop_address.is_set
	|| previous_hop_address.is_set
	|| incoming_address.is_set
	|| backup_tunnel_interface.is_set
	|| node_hop_count.is_set
	|| is_optical.is_set
	|| s2l_reverse_ero_obj_present.is_set
	|| reverse_lsp_present.is_set
	|| reverse_lsp_connected.is_set
	|| reverse_lsp_name.is_set
	|| s2l_reverse_tspec_obj_present.is_set
	|| path_using_strict_spf.is_set
	|| (s2l_fec !=  nullptr && s2l_fec->has_data())
	|| (active_path_option !=  nullptr && active_path_option->has_data())
	|| (out_xro !=  nullptr && out_xro->has_data())
	|| (in_xro !=  nullptr && in_xro->has_data())
	|| (tspec !=  nullptr && tspec->has_data())
	|| (generic_tspec !=  nullptr && generic_tspec->has_data())
	|| (fspec !=  nullptr && fspec->has_data())
	|| (generic_fspec !=  nullptr && generic_fspec->has_data())
	|| (next_hop_address_generic !=  nullptr && next_hop_address_generic->has_data())
	|| (previous_hop_address_generic !=  nullptr && previous_hop_address_generic->has_data())
	|| (incoming_address_generic !=  nullptr && incoming_address_generic->has_data())
	|| (s2l_convergence !=  nullptr && s2l_convergence->has_data())
	|| (soft_preemption !=  nullptr && soft_preemption->has_data())
	|| (gmpls_labels !=  nullptr && gmpls_labels->has_data())
	|| (otn_s2l !=  nullptr && otn_s2l->has_data())
	|| (head_end_bfd_info !=  nullptr && head_end_bfd_info->has_data())
	|| (tail_end_bfd_info !=  nullptr && tail_end_bfd_info->has_data())
	|| (srlg_collection !=  nullptr && srlg_collection->has_data())
	|| (association !=  nullptr && association->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (reverse_lsp_fec !=  nullptr && reverse_lsp_fec->has_data())
	|| (reverse_tspec !=  nullptr && reverse_tspec->has_data())
	|| (flex_info !=  nullptr && flex_info->has_data())
	|| (lsp_wrap_info !=  nullptr && lsp_wrap_info->has_data())
	|| (diversity_info !=  nullptr && diversity_info->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::has_operation() const
{
    for (std::size_t index=0; index<s2l_reverse_lsp_sub_obj.size(); index++)
    {
        if(s2l_reverse_lsp_sub_obj[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<out_ero.size(); index++)
    {
        if(out_ero[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<in_ero.size(); index++)
    {
        if(in_ero[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path_rro.size(); index++)
    {
        if(path_rro[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<resv_rro.size(); index++)
    {
        if(resv_rro[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path_affinity_array.size(); index++)
    {
        if(path_affinity_array[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reverse_ero_in.size(); index++)
    {
        if(reverse_ero_in[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<s2l_segment_routing_path.size(); index++)
    {
        if(s2l_segment_routing_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pcalc_area.yfilter)
	|| ydk::is_set(is_expanded_ero.yfilter)
	|| ydk::is_set(path_reeval_query_mid.yfilter)
	|| ydk::is_set(time_since_last_query_received_mid.yfilter)
	|| ydk::is_set(time_since_last_preferred_path_exists_send_mid.yfilter)
	|| ydk::is_set(time_since_last_preferred_tree_exists_send_mid.yfilter)
	|| ydk::is_set(expanded_ero_area_id.yfilter)
	|| ydk::is_set(expanded_ero_affinity_bits.yfilter)
	|| ydk::is_set(expanded_ero_affinity_mask.yfilter)
	|| ydk::is_set(expanded_ero_metric_type.yfilter)
	|| ydk::is_set(expanded_ero_metric.yfilter)
	|| ydk::is_set(abr_auto_discovered.yfilter)
	|| ydk::is_set(is_frr_enabled.yfilter)
	|| ydk::is_set(is_node_protected.yfilter)
	|| ydk::is_set(is_bandwidth_protect.yfilter)
	|| ydk::is_set(path_rro_enabled.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(reverse_weight.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(egress_interface_state.yfilter)
	|| ydk::is_set(egress_interface_brief.yfilter)
	|| ydk::is_set(ingress_interface.yfilter)
	|| ydk::is_set(ingress_interface_state.yfilter)
	|| ydk::is_set(ingress_interface_brief.yfilter)
	|| ydk::is_set(s2l_local_label.yfilter)
	|| ydk::is_set(s2l_out_label.yfilter)
	|| ydk::is_set(outbound_frr_state.yfilter)
	|| ydk::is_set(frr_out_tunnel_interface.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(signalling_status.yfilter)
	|| ydk::is_set(local_router_id.yfilter)
	|| ydk::is_set(upstream_router_id.yfilter)
	|| ydk::is_set(downstream_router_id.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(previous_hop_address.yfilter)
	|| ydk::is_set(incoming_address.yfilter)
	|| ydk::is_set(backup_tunnel_interface.yfilter)
	|| ydk::is_set(node_hop_count.yfilter)
	|| ydk::is_set(is_optical.yfilter)
	|| ydk::is_set(s2l_reverse_ero_obj_present.yfilter)
	|| ydk::is_set(reverse_lsp_present.yfilter)
	|| ydk::is_set(reverse_lsp_connected.yfilter)
	|| ydk::is_set(reverse_lsp_name.yfilter)
	|| ydk::is_set(s2l_reverse_tspec_obj_present.yfilter)
	|| ydk::is_set(path_using_strict_spf.yfilter)
	|| (s2l_fec !=  nullptr && s2l_fec->has_operation())
	|| (active_path_option !=  nullptr && active_path_option->has_operation())
	|| (out_xro !=  nullptr && out_xro->has_operation())
	|| (in_xro !=  nullptr && in_xro->has_operation())
	|| (tspec !=  nullptr && tspec->has_operation())
	|| (generic_tspec !=  nullptr && generic_tspec->has_operation())
	|| (fspec !=  nullptr && fspec->has_operation())
	|| (generic_fspec !=  nullptr && generic_fspec->has_operation())
	|| (next_hop_address_generic !=  nullptr && next_hop_address_generic->has_operation())
	|| (previous_hop_address_generic !=  nullptr && previous_hop_address_generic->has_operation())
	|| (incoming_address_generic !=  nullptr && incoming_address_generic->has_operation())
	|| (s2l_convergence !=  nullptr && s2l_convergence->has_operation())
	|| (soft_preemption !=  nullptr && soft_preemption->has_operation())
	|| (gmpls_labels !=  nullptr && gmpls_labels->has_operation())
	|| (otn_s2l !=  nullptr && otn_s2l->has_operation())
	|| (head_end_bfd_info !=  nullptr && head_end_bfd_info->has_operation())
	|| (tail_end_bfd_info !=  nullptr && tail_end_bfd_info->has_operation())
	|| (srlg_collection !=  nullptr && srlg_collection->has_operation())
	|| (association !=  nullptr && association->has_operation())
	|| (protection !=  nullptr && protection->has_operation())
	|| (reverse_lsp_fec !=  nullptr && reverse_lsp_fec->has_operation())
	|| (reverse_tspec !=  nullptr && reverse_tspec->has_operation())
	|| (flex_info !=  nullptr && flex_info->has_operation())
	|| (lsp_wrap_info !=  nullptr && lsp_wrap_info->has_operation())
	|| (diversity_info !=  nullptr && diversity_info->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcalc_area.is_set || is_set(pcalc_area.yfilter)) leaf_name_data.push_back(pcalc_area.get_name_leafdata());
    if (is_expanded_ero.is_set || is_set(is_expanded_ero.yfilter)) leaf_name_data.push_back(is_expanded_ero.get_name_leafdata());
    if (path_reeval_query_mid.is_set || is_set(path_reeval_query_mid.yfilter)) leaf_name_data.push_back(path_reeval_query_mid.get_name_leafdata());
    if (time_since_last_query_received_mid.is_set || is_set(time_since_last_query_received_mid.yfilter)) leaf_name_data.push_back(time_since_last_query_received_mid.get_name_leafdata());
    if (time_since_last_preferred_path_exists_send_mid.is_set || is_set(time_since_last_preferred_path_exists_send_mid.yfilter)) leaf_name_data.push_back(time_since_last_preferred_path_exists_send_mid.get_name_leafdata());
    if (time_since_last_preferred_tree_exists_send_mid.is_set || is_set(time_since_last_preferred_tree_exists_send_mid.yfilter)) leaf_name_data.push_back(time_since_last_preferred_tree_exists_send_mid.get_name_leafdata());
    if (expanded_ero_area_id.is_set || is_set(expanded_ero_area_id.yfilter)) leaf_name_data.push_back(expanded_ero_area_id.get_name_leafdata());
    if (expanded_ero_affinity_bits.is_set || is_set(expanded_ero_affinity_bits.yfilter)) leaf_name_data.push_back(expanded_ero_affinity_bits.get_name_leafdata());
    if (expanded_ero_affinity_mask.is_set || is_set(expanded_ero_affinity_mask.yfilter)) leaf_name_data.push_back(expanded_ero_affinity_mask.get_name_leafdata());
    if (expanded_ero_metric_type.is_set || is_set(expanded_ero_metric_type.yfilter)) leaf_name_data.push_back(expanded_ero_metric_type.get_name_leafdata());
    if (expanded_ero_metric.is_set || is_set(expanded_ero_metric.yfilter)) leaf_name_data.push_back(expanded_ero_metric.get_name_leafdata());
    if (abr_auto_discovered.is_set || is_set(abr_auto_discovered.yfilter)) leaf_name_data.push_back(abr_auto_discovered.get_name_leafdata());
    if (is_frr_enabled.is_set || is_set(is_frr_enabled.yfilter)) leaf_name_data.push_back(is_frr_enabled.get_name_leafdata());
    if (is_node_protected.is_set || is_set(is_node_protected.yfilter)) leaf_name_data.push_back(is_node_protected.get_name_leafdata());
    if (is_bandwidth_protect.is_set || is_set(is_bandwidth_protect.yfilter)) leaf_name_data.push_back(is_bandwidth_protect.get_name_leafdata());
    if (path_rro_enabled.is_set || is_set(path_rro_enabled.yfilter)) leaf_name_data.push_back(path_rro_enabled.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (reverse_weight.is_set || is_set(reverse_weight.yfilter)) leaf_name_data.push_back(reverse_weight.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (egress_interface_state.is_set || is_set(egress_interface_state.yfilter)) leaf_name_data.push_back(egress_interface_state.get_name_leafdata());
    if (egress_interface_brief.is_set || is_set(egress_interface_brief.yfilter)) leaf_name_data.push_back(egress_interface_brief.get_name_leafdata());
    if (ingress_interface.is_set || is_set(ingress_interface.yfilter)) leaf_name_data.push_back(ingress_interface.get_name_leafdata());
    if (ingress_interface_state.is_set || is_set(ingress_interface_state.yfilter)) leaf_name_data.push_back(ingress_interface_state.get_name_leafdata());
    if (ingress_interface_brief.is_set || is_set(ingress_interface_brief.yfilter)) leaf_name_data.push_back(ingress_interface_brief.get_name_leafdata());
    if (s2l_local_label.is_set || is_set(s2l_local_label.yfilter)) leaf_name_data.push_back(s2l_local_label.get_name_leafdata());
    if (s2l_out_label.is_set || is_set(s2l_out_label.yfilter)) leaf_name_data.push_back(s2l_out_label.get_name_leafdata());
    if (outbound_frr_state.is_set || is_set(outbound_frr_state.yfilter)) leaf_name_data.push_back(outbound_frr_state.get_name_leafdata());
    if (frr_out_tunnel_interface.is_set || is_set(frr_out_tunnel_interface.yfilter)) leaf_name_data.push_back(frr_out_tunnel_interface.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (signalling_status.is_set || is_set(signalling_status.yfilter)) leaf_name_data.push_back(signalling_status.get_name_leafdata());
    if (local_router_id.is_set || is_set(local_router_id.yfilter)) leaf_name_data.push_back(local_router_id.get_name_leafdata());
    if (upstream_router_id.is_set || is_set(upstream_router_id.yfilter)) leaf_name_data.push_back(upstream_router_id.get_name_leafdata());
    if (downstream_router_id.is_set || is_set(downstream_router_id.yfilter)) leaf_name_data.push_back(downstream_router_id.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.yfilter)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());
    if (incoming_address.is_set || is_set(incoming_address.yfilter)) leaf_name_data.push_back(incoming_address.get_name_leafdata());
    if (backup_tunnel_interface.is_set || is_set(backup_tunnel_interface.yfilter)) leaf_name_data.push_back(backup_tunnel_interface.get_name_leafdata());
    if (node_hop_count.is_set || is_set(node_hop_count.yfilter)) leaf_name_data.push_back(node_hop_count.get_name_leafdata());
    if (is_optical.is_set || is_set(is_optical.yfilter)) leaf_name_data.push_back(is_optical.get_name_leafdata());
    if (s2l_reverse_ero_obj_present.is_set || is_set(s2l_reverse_ero_obj_present.yfilter)) leaf_name_data.push_back(s2l_reverse_ero_obj_present.get_name_leafdata());
    if (reverse_lsp_present.is_set || is_set(reverse_lsp_present.yfilter)) leaf_name_data.push_back(reverse_lsp_present.get_name_leafdata());
    if (reverse_lsp_connected.is_set || is_set(reverse_lsp_connected.yfilter)) leaf_name_data.push_back(reverse_lsp_connected.get_name_leafdata());
    if (reverse_lsp_name.is_set || is_set(reverse_lsp_name.yfilter)) leaf_name_data.push_back(reverse_lsp_name.get_name_leafdata());
    if (s2l_reverse_tspec_obj_present.is_set || is_set(s2l_reverse_tspec_obj_present.yfilter)) leaf_name_data.push_back(s2l_reverse_tspec_obj_present.get_name_leafdata());
    if (path_using_strict_spf.is_set || is_set(path_using_strict_spf.yfilter)) leaf_name_data.push_back(path_using_strict_spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-fec")
    {
        if(s2l_fec == nullptr)
        {
            s2l_fec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LFec>();
        }
        return s2l_fec;
    }

    if(child_yang_name == "active-path-option")
    {
        if(active_path_option == nullptr)
        {
            active_path_option = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption>();
        }
        return active_path_option;
    }

    if(child_yang_name == "out-xro")
    {
        if(out_xro == nullptr)
        {
            out_xro = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro>();
        }
        return out_xro;
    }

    if(child_yang_name == "in-xro")
    {
        if(in_xro == nullptr)
        {
            in_xro = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro>();
        }
        return in_xro;
    }

    if(child_yang_name == "tspec")
    {
        if(tspec == nullptr)
        {
            tspec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Tspec>();
        }
        return tspec;
    }

    if(child_yang_name == "generic-tspec")
    {
        if(generic_tspec == nullptr)
        {
            generic_tspec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec>();
        }
        return generic_tspec;
    }

    if(child_yang_name == "fspec")
    {
        if(fspec == nullptr)
        {
            fspec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Fspec>();
        }
        return fspec;
    }

    if(child_yang_name == "generic-fspec")
    {
        if(generic_fspec == nullptr)
        {
            generic_fspec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec>();
        }
        return generic_fspec;
    }

    if(child_yang_name == "next-hop-address-generic")
    {
        if(next_hop_address_generic == nullptr)
        {
            next_hop_address_generic = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric>();
        }
        return next_hop_address_generic;
    }

    if(child_yang_name == "previous-hop-address-generic")
    {
        if(previous_hop_address_generic == nullptr)
        {
            previous_hop_address_generic = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric>();
        }
        return previous_hop_address_generic;
    }

    if(child_yang_name == "incoming-address-generic")
    {
        if(incoming_address_generic == nullptr)
        {
            incoming_address_generic = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric>();
        }
        return incoming_address_generic;
    }

    if(child_yang_name == "s2l-convergence")
    {
        if(s2l_convergence == nullptr)
        {
            s2l_convergence = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LConvergence>();
        }
        return s2l_convergence;
    }

    if(child_yang_name == "soft-preemption")
    {
        if(soft_preemption == nullptr)
        {
            soft_preemption = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SoftPreemption>();
        }
        return soft_preemption;
    }

    if(child_yang_name == "gmpls-labels")
    {
        if(gmpls_labels == nullptr)
        {
            gmpls_labels = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels>();
        }
        return gmpls_labels;
    }

    if(child_yang_name == "otn-s2l")
    {
        if(otn_s2l == nullptr)
        {
            otn_s2l = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L>();
        }
        return otn_s2l;
    }

    if(child_yang_name == "head-end-bfd-info")
    {
        if(head_end_bfd_info == nullptr)
        {
            head_end_bfd_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo>();
        }
        return head_end_bfd_info;
    }

    if(child_yang_name == "tail-end-bfd-info")
    {
        if(tail_end_bfd_info == nullptr)
        {
            tail_end_bfd_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo>();
        }
        return tail_end_bfd_info;
    }

    if(child_yang_name == "srlg-collection")
    {
        if(srlg_collection == nullptr)
        {
            srlg_collection = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection>();
        }
        return srlg_collection;
    }

    if(child_yang_name == "association")
    {
        if(association == nullptr)
        {
            association = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association>();
        }
        return association;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Protection>();
        }
        return protection;
    }

    if(child_yang_name == "reverse-lsp-fec")
    {
        if(reverse_lsp_fec == nullptr)
        {
            reverse_lsp_fec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec>();
        }
        return reverse_lsp_fec;
    }

    if(child_yang_name == "reverse-tspec")
    {
        if(reverse_tspec == nullptr)
        {
            reverse_tspec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseTspec>();
        }
        return reverse_tspec;
    }

    if(child_yang_name == "flex-info")
    {
        if(flex_info == nullptr)
        {
            flex_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo>();
        }
        return flex_info;
    }

    if(child_yang_name == "lsp-wrap-info")
    {
        if(lsp_wrap_info == nullptr)
        {
            lsp_wrap_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::LspWrapInfo>();
        }
        return lsp_wrap_info;
    }

    if(child_yang_name == "diversity-info")
    {
        if(diversity_info == nullptr)
        {
            diversity_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::DiversityInfo>();
        }
        return diversity_info;
    }

    if(child_yang_name == "s2l-reverse-lsp-sub-obj")
    {
        for(auto const & c : s2l_reverse_lsp_sub_obj)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LReverseLspSubObj>();
        c->parent = this;
        s2l_reverse_lsp_sub_obj.push_back(c);
        return c;
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        for(auto const & c : shared_risk_link_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(c);
        return c;
    }

    if(child_yang_name == "out-ero")
    {
        for(auto const & c : out_ero)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro>();
        c->parent = this;
        out_ero.push_back(c);
        return c;
    }

    if(child_yang_name == "in-ero")
    {
        for(auto const & c : in_ero)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro>();
        c->parent = this;
        in_ero.push_back(c);
        return c;
    }

    if(child_yang_name == "path-rro")
    {
        for(auto const & c : path_rro)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro>();
        c->parent = this;
        path_rro.push_back(c);
        return c;
    }

    if(child_yang_name == "resv-rro")
    {
        for(auto const & c : resv_rro)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro>();
        c->parent = this;
        resv_rro.push_back(c);
        return c;
    }

    if(child_yang_name == "path-affinity-array")
    {
        for(auto const & c : path_affinity_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathAffinityArray>();
        c->parent = this;
        path_affinity_array.push_back(c);
        return c;
    }

    if(child_yang_name == "reverse-ero-in")
    {
        for(auto const & c : reverse_ero_in)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn>();
        c->parent = this;
        reverse_ero_in.push_back(c);
        return c;
    }

    if(child_yang_name == "s2l-segment-routing-path")
    {
        for(auto const & c : s2l_segment_routing_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LSegmentRoutingPath>();
        c->parent = this;
        s2l_segment_routing_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(s2l_fec != nullptr)
    {
        children["s2l-fec"] = s2l_fec;
    }

    if(active_path_option != nullptr)
    {
        children["active-path-option"] = active_path_option;
    }

    if(out_xro != nullptr)
    {
        children["out-xro"] = out_xro;
    }

    if(in_xro != nullptr)
    {
        children["in-xro"] = in_xro;
    }

    if(tspec != nullptr)
    {
        children["tspec"] = tspec;
    }

    if(generic_tspec != nullptr)
    {
        children["generic-tspec"] = generic_tspec;
    }

    if(fspec != nullptr)
    {
        children["fspec"] = fspec;
    }

    if(generic_fspec != nullptr)
    {
        children["generic-fspec"] = generic_fspec;
    }

    if(next_hop_address_generic != nullptr)
    {
        children["next-hop-address-generic"] = next_hop_address_generic;
    }

    if(previous_hop_address_generic != nullptr)
    {
        children["previous-hop-address-generic"] = previous_hop_address_generic;
    }

    if(incoming_address_generic != nullptr)
    {
        children["incoming-address-generic"] = incoming_address_generic;
    }

    if(s2l_convergence != nullptr)
    {
        children["s2l-convergence"] = s2l_convergence;
    }

    if(soft_preemption != nullptr)
    {
        children["soft-preemption"] = soft_preemption;
    }

    if(gmpls_labels != nullptr)
    {
        children["gmpls-labels"] = gmpls_labels;
    }

    if(otn_s2l != nullptr)
    {
        children["otn-s2l"] = otn_s2l;
    }

    if(head_end_bfd_info != nullptr)
    {
        children["head-end-bfd-info"] = head_end_bfd_info;
    }

    if(tail_end_bfd_info != nullptr)
    {
        children["tail-end-bfd-info"] = tail_end_bfd_info;
    }

    if(srlg_collection != nullptr)
    {
        children["srlg-collection"] = srlg_collection;
    }

    if(association != nullptr)
    {
        children["association"] = association;
    }

    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    if(reverse_lsp_fec != nullptr)
    {
        children["reverse-lsp-fec"] = reverse_lsp_fec;
    }

    if(reverse_tspec != nullptr)
    {
        children["reverse-tspec"] = reverse_tspec;
    }

    if(flex_info != nullptr)
    {
        children["flex-info"] = flex_info;
    }

    if(lsp_wrap_info != nullptr)
    {
        children["lsp-wrap-info"] = lsp_wrap_info;
    }

    if(diversity_info != nullptr)
    {
        children["diversity-info"] = diversity_info;
    }

    for (auto const & c : s2l_reverse_lsp_sub_obj)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : shared_risk_link_group)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : out_ero)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : in_ero)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : path_rro)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : resv_rro)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : path_affinity_array)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : reverse_ero_in)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : s2l_segment_routing_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcalc-area")
    {
        pcalc_area = value;
        pcalc_area.value_namespace = name_space;
        pcalc_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-expanded-ero")
    {
        is_expanded_ero = value;
        is_expanded_ero.value_namespace = name_space;
        is_expanded_ero.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reeval-query-mid")
    {
        path_reeval_query_mid = value;
        path_reeval_query_mid.value_namespace = name_space;
        path_reeval_query_mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-query-received-mid")
    {
        time_since_last_query_received_mid = value;
        time_since_last_query_received_mid.value_namespace = name_space;
        time_since_last_query_received_mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-preferred-path-exists-send-mid")
    {
        time_since_last_preferred_path_exists_send_mid = value;
        time_since_last_preferred_path_exists_send_mid.value_namespace = name_space;
        time_since_last_preferred_path_exists_send_mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-preferred-tree-exists-send-mid")
    {
        time_since_last_preferred_tree_exists_send_mid = value;
        time_since_last_preferred_tree_exists_send_mid.value_namespace = name_space;
        time_since_last_preferred_tree_exists_send_mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expanded-ero-area-id")
    {
        expanded_ero_area_id = value;
        expanded_ero_area_id.value_namespace = name_space;
        expanded_ero_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expanded-ero-affinity-bits")
    {
        expanded_ero_affinity_bits = value;
        expanded_ero_affinity_bits.value_namespace = name_space;
        expanded_ero_affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expanded-ero-affinity-mask")
    {
        expanded_ero_affinity_mask = value;
        expanded_ero_affinity_mask.value_namespace = name_space;
        expanded_ero_affinity_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expanded-ero-metric-type")
    {
        expanded_ero_metric_type = value;
        expanded_ero_metric_type.value_namespace = name_space;
        expanded_ero_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expanded-ero-metric")
    {
        expanded_ero_metric = value;
        expanded_ero_metric.value_namespace = name_space;
        expanded_ero_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abr-auto-discovered")
    {
        abr_auto_discovered = value;
        abr_auto_discovered.value_namespace = name_space;
        abr_auto_discovered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-frr-enabled")
    {
        is_frr_enabled = value;
        is_frr_enabled.value_namespace = name_space;
        is_frr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protected")
    {
        is_node_protected = value;
        is_node_protected.value_namespace = name_space;
        is_node_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-protect")
    {
        is_bandwidth_protect = value;
        is_bandwidth_protect.value_namespace = name_space;
        is_bandwidth_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rro-enabled")
    {
        path_rro_enabled = value;
        path_rro_enabled.value_namespace = name_space;
        path_rro_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-weight")
    {
        reverse_weight = value;
        reverse_weight.value_namespace = name_space;
        reverse_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface-state")
    {
        egress_interface_state = value;
        egress_interface_state.value_namespace = name_space;
        egress_interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface-brief")
    {
        egress_interface_brief = value;
        egress_interface_brief.value_namespace = name_space;
        egress_interface_brief.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-interface")
    {
        ingress_interface = value;
        ingress_interface.value_namespace = name_space;
        ingress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-interface-state")
    {
        ingress_interface_state = value;
        ingress_interface_state.value_namespace = name_space;
        ingress_interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-interface-brief")
    {
        ingress_interface_brief = value;
        ingress_interface_brief.value_namespace = name_space;
        ingress_interface_brief.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-local-label")
    {
        s2l_local_label = value;
        s2l_local_label.value_namespace = name_space;
        s2l_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-out-label")
    {
        s2l_out_label = value;
        s2l_out_label.value_namespace = name_space;
        s2l_out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound-frr-state")
    {
        outbound_frr_state = value;
        outbound_frr_state.value_namespace = name_space;
        outbound_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-out-tunnel-interface")
    {
        frr_out_tunnel_interface = value;
        frr_out_tunnel_interface.value_namespace = name_space;
        frr_out_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalling-status")
    {
        signalling_status = value;
        signalling_status.value_namespace = name_space;
        signalling_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-router-id")
    {
        local_router_id = value;
        local_router_id.value_namespace = name_space;
        local_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upstream-router-id")
    {
        upstream_router_id = value;
        upstream_router_id.value_namespace = name_space;
        upstream_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream-router-id")
    {
        downstream_router_id = value;
        downstream_router_id.value_namespace = name_space;
        downstream_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address = value;
        previous_hop_address.value_namespace = name_space;
        previous_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-address")
    {
        incoming_address = value;
        incoming_address.value_namespace = name_space;
        incoming_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-interface")
    {
        backup_tunnel_interface = value;
        backup_tunnel_interface.value_namespace = name_space;
        backup_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count = value;
        node_hop_count.value_namespace = name_space;
        node_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-optical")
    {
        is_optical = value;
        is_optical.value_namespace = name_space;
        is_optical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-reverse-ero-obj-present")
    {
        s2l_reverse_ero_obj_present = value;
        s2l_reverse_ero_obj_present.value_namespace = name_space;
        s2l_reverse_ero_obj_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-present")
    {
        reverse_lsp_present = value;
        reverse_lsp_present.value_namespace = name_space;
        reverse_lsp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-connected")
    {
        reverse_lsp_connected = value;
        reverse_lsp_connected.value_namespace = name_space;
        reverse_lsp_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-name")
    {
        reverse_lsp_name = value;
        reverse_lsp_name.value_namespace = name_space;
        reverse_lsp_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-reverse-tspec-obj-present")
    {
        s2l_reverse_tspec_obj_present = value;
        s2l_reverse_tspec_obj_present.value_namespace = name_space;
        s2l_reverse_tspec_obj_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-using-strict-spf")
    {
        path_using_strict_spf = value;
        path_using_strict_spf.value_namespace = name_space;
        path_using_strict_spf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcalc-area")
    {
        pcalc_area.yfilter = yfilter;
    }
    if(value_path == "is-expanded-ero")
    {
        is_expanded_ero.yfilter = yfilter;
    }
    if(value_path == "path-reeval-query-mid")
    {
        path_reeval_query_mid.yfilter = yfilter;
    }
    if(value_path == "time-since-last-query-received-mid")
    {
        time_since_last_query_received_mid.yfilter = yfilter;
    }
    if(value_path == "time-since-last-preferred-path-exists-send-mid")
    {
        time_since_last_preferred_path_exists_send_mid.yfilter = yfilter;
    }
    if(value_path == "time-since-last-preferred-tree-exists-send-mid")
    {
        time_since_last_preferred_tree_exists_send_mid.yfilter = yfilter;
    }
    if(value_path == "expanded-ero-area-id")
    {
        expanded_ero_area_id.yfilter = yfilter;
    }
    if(value_path == "expanded-ero-affinity-bits")
    {
        expanded_ero_affinity_bits.yfilter = yfilter;
    }
    if(value_path == "expanded-ero-affinity-mask")
    {
        expanded_ero_affinity_mask.yfilter = yfilter;
    }
    if(value_path == "expanded-ero-metric-type")
    {
        expanded_ero_metric_type.yfilter = yfilter;
    }
    if(value_path == "expanded-ero-metric")
    {
        expanded_ero_metric.yfilter = yfilter;
    }
    if(value_path == "abr-auto-discovered")
    {
        abr_auto_discovered.yfilter = yfilter;
    }
    if(value_path == "is-frr-enabled")
    {
        is_frr_enabled.yfilter = yfilter;
    }
    if(value_path == "is-node-protected")
    {
        is_node_protected.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-protect")
    {
        is_bandwidth_protect.yfilter = yfilter;
    }
    if(value_path == "path-rro-enabled")
    {
        path_rro_enabled.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "reverse-weight")
    {
        reverse_weight.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "egress-interface-state")
    {
        egress_interface_state.yfilter = yfilter;
    }
    if(value_path == "egress-interface-brief")
    {
        egress_interface_brief.yfilter = yfilter;
    }
    if(value_path == "ingress-interface")
    {
        ingress_interface.yfilter = yfilter;
    }
    if(value_path == "ingress-interface-state")
    {
        ingress_interface_state.yfilter = yfilter;
    }
    if(value_path == "ingress-interface-brief")
    {
        ingress_interface_brief.yfilter = yfilter;
    }
    if(value_path == "s2l-local-label")
    {
        s2l_local_label.yfilter = yfilter;
    }
    if(value_path == "s2l-out-label")
    {
        s2l_out_label.yfilter = yfilter;
    }
    if(value_path == "outbound-frr-state")
    {
        outbound_frr_state.yfilter = yfilter;
    }
    if(value_path == "frr-out-tunnel-interface")
    {
        frr_out_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "signalling-status")
    {
        signalling_status.yfilter = yfilter;
    }
    if(value_path == "local-router-id")
    {
        local_router_id.yfilter = yfilter;
    }
    if(value_path == "upstream-router-id")
    {
        upstream_router_id.yfilter = yfilter;
    }
    if(value_path == "downstream-router-id")
    {
        downstream_router_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address.yfilter = yfilter;
    }
    if(value_path == "incoming-address")
    {
        incoming_address.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-interface")
    {
        backup_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count.yfilter = yfilter;
    }
    if(value_path == "is-optical")
    {
        is_optical.yfilter = yfilter;
    }
    if(value_path == "s2l-reverse-ero-obj-present")
    {
        s2l_reverse_ero_obj_present.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-present")
    {
        reverse_lsp_present.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-connected")
    {
        reverse_lsp_connected.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-name")
    {
        reverse_lsp_name.yfilter = yfilter;
    }
    if(value_path == "s2l-reverse-tspec-obj-present")
    {
        s2l_reverse_tspec_obj_present.yfilter = yfilter;
    }
    if(value_path == "path-using-strict-spf")
    {
        path_using_strict_spf.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-fec" || name == "active-path-option" || name == "out-xro" || name == "in-xro" || name == "tspec" || name == "generic-tspec" || name == "fspec" || name == "generic-fspec" || name == "next-hop-address-generic" || name == "previous-hop-address-generic" || name == "incoming-address-generic" || name == "s2l-convergence" || name == "soft-preemption" || name == "gmpls-labels" || name == "otn-s2l" || name == "head-end-bfd-info" || name == "tail-end-bfd-info" || name == "srlg-collection" || name == "association" || name == "protection" || name == "reverse-lsp-fec" || name == "reverse-tspec" || name == "flex-info" || name == "lsp-wrap-info" || name == "diversity-info" || name == "s2l-reverse-lsp-sub-obj" || name == "shared-risk-link-group" || name == "out-ero" || name == "in-ero" || name == "path-rro" || name == "resv-rro" || name == "path-affinity-array" || name == "reverse-ero-in" || name == "s2l-segment-routing-path" || name == "pcalc-area" || name == "is-expanded-ero" || name == "path-reeval-query-mid" || name == "time-since-last-query-received-mid" || name == "time-since-last-preferred-path-exists-send-mid" || name == "time-since-last-preferred-tree-exists-send-mid" || name == "expanded-ero-area-id" || name == "expanded-ero-affinity-bits" || name == "expanded-ero-affinity-mask" || name == "expanded-ero-metric-type" || name == "expanded-ero-metric" || name == "abr-auto-discovered" || name == "is-frr-enabled" || name == "is-node-protected" || name == "is-bandwidth-protect" || name == "path-rro-enabled" || name == "weight" || name == "reverse-weight" || name == "uptime" || name == "egress-interface" || name == "egress-interface-state" || name == "egress-interface-brief" || name == "ingress-interface" || name == "ingress-interface-state" || name == "ingress-interface-brief" || name == "s2l-local-label" || name == "s2l-out-label" || name == "outbound-frr-state" || name == "frr-out-tunnel-interface" || name == "role" || name == "signalling-status" || name == "local-router-id" || name == "upstream-router-id" || name == "downstream-router-id" || name == "next-hop-address" || name == "previous-hop-address" || name == "incoming-address" || name == "backup-tunnel-interface" || name == "node-hop-count" || name == "is-optical" || name == "s2l-reverse-ero-obj-present" || name == "reverse-lsp-present" || name == "reverse-lsp-connected" || name == "reverse-lsp-name" || name == "s2l-reverse-tspec-obj-present" || name == "path-using-strict-spf")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LFec::S2LFec()
    :
    s2l_fec_subgroup_id{YType::uint16, "s2l-fec-subgroup-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    s2l_fec_extended_tunnel_id{YType::str, "s2l-fec-extended-tunnel-id"},
    s2l_fec_source{YType::str, "s2l-fec-source"},
    s2l_fec_dest{YType::str, "s2l-fec-dest"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    s2l_fec_subgroup_originator{YType::str, "s2l-fec-subgroup-originator"},
    s2l_fec_ctype{YType::enumeration, "s2l-fec-ctype"},
    s2l_fec_vrf{YType::str, "s2l-fec-vrf"}
{

    yang_name = "s2l-fec"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LFec::~S2LFec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LFec::has_data() const
{
    return s2l_fec_subgroup_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_tunnel_id.is_set
	|| s2l_fec_extended_tunnel_id.is_set
	|| s2l_fec_source.is_set
	|| s2l_fec_dest.is_set
	|| s2l_fec_p2mp_id.is_set
	|| s2l_fec_subgroup_originator.is_set
	|| s2l_fec_ctype.is_set
	|| s2l_fec_vrf.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_fec_subgroup_id.yfilter)
	|| ydk::is_set(s2l_fec_lsp_id.yfilter)
	|| ydk::is_set(s2l_fec_tunnel_id.yfilter)
	|| ydk::is_set(s2l_fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(s2l_fec_source.yfilter)
	|| ydk::is_set(s2l_fec_dest.yfilter)
	|| ydk::is_set(s2l_fec_p2mp_id.yfilter)
	|| ydk::is_set(s2l_fec_subgroup_originator.yfilter)
	|| ydk::is_set(s2l_fec_ctype.yfilter)
	|| ydk::is_set(s2l_fec_vrf.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_subgroup_id.is_set || is_set(s2l_fec_subgroup_id.yfilter)) leaf_name_data.push_back(s2l_fec_subgroup_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.yfilter)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.yfilter)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (s2l_fec_extended_tunnel_id.is_set || is_set(s2l_fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(s2l_fec_extended_tunnel_id.get_name_leafdata());
    if (s2l_fec_source.is_set || is_set(s2l_fec_source.yfilter)) leaf_name_data.push_back(s2l_fec_source.get_name_leafdata());
    if (s2l_fec_dest.is_set || is_set(s2l_fec_dest.yfilter)) leaf_name_data.push_back(s2l_fec_dest.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.yfilter)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (s2l_fec_subgroup_originator.is_set || is_set(s2l_fec_subgroup_originator.yfilter)) leaf_name_data.push_back(s2l_fec_subgroup_originator.get_name_leafdata());
    if (s2l_fec_ctype.is_set || is_set(s2l_fec_ctype.yfilter)) leaf_name_data.push_back(s2l_fec_ctype.get_name_leafdata());
    if (s2l_fec_vrf.is_set || is_set(s2l_fec_vrf.yfilter)) leaf_name_data.push_back(s2l_fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LFec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id = value;
        s2l_fec_subgroup_id.value_namespace = name_space;
        s2l_fec_subgroup_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
        s2l_fec_lsp_id.value_namespace = name_space;
        s2l_fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
        s2l_fec_tunnel_id.value_namespace = name_space;
        s2l_fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id = value;
        s2l_fec_extended_tunnel_id.value_namespace = name_space;
        s2l_fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source = value;
        s2l_fec_source.value_namespace = name_space;
        s2l_fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest = value;
        s2l_fec_dest.value_namespace = name_space;
        s2l_fec_dest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
        s2l_fec_p2mp_id.value_namespace = name_space;
        s2l_fec_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator = value;
        s2l_fec_subgroup_originator.value_namespace = name_space;
        s2l_fec_subgroup_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype = value;
        s2l_fec_ctype.value_namespace = name_space;
        s2l_fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf = value;
        s2l_fec_vrf.value_namespace = name_space;
        s2l_fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LFec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-fec-subgroup-id" || name == "s2l-fec-lsp-id" || name == "s2l-fec-tunnel-id" || name == "s2l-fec-extended-tunnel-id" || name == "s2l-fec-source" || name == "s2l-fec-dest" || name == "s2l-fec-p2mp-id" || name == "s2l-fec-subgroup-originator" || name == "s2l-fec-ctype" || name == "s2l-fec-vrf")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::ActivePathOption()
    :
    option_index_is_valid{YType::boolean, "option-index-is-valid"},
    option_index{YType::uint32, "option-index"},
    path_option_name{YType::str, "path-option-name"},
    path_option_type{YType::enumeration, "path-option-type"},
    explicit_path_name{YType::str, "explicit-path-name"},
    explicit_path_id{YType::uint16, "explicit-path-id"},
    holddown_duration{YType::uint16, "holddown-duration"},
    pce_address{YType::str, "pce-address"},
    path_option_area_id{YType::str, "path-option-area-id"},
    is_strict_explicit_path{YType::boolean, "is-strict-explicit-path"},
    is_helddown{YType::boolean, "is-helddown"},
    is_lockdown{YType::boolean, "is-lockdown"},
    is_verbatim{YType::boolean, "is-verbatim"},
    is_disabled{YType::boolean, "is-disabled"},
    has_attribute_set{YType::boolean, "has-attribute-set"},
    attribute_set_found{YType::boolean, "attribute-set-found"},
    has_xro_attribute_set{YType::boolean, "has-xro-attribute-set"},
    xro_attribute_set_found{YType::boolean, "xro-attribute-set-found"},
    is_segment_routing{YType::boolean, "is-segment-routing"},
    protected_by_path_option_index{YType::uint32, "protected-by-path-option-index"},
    restored_from_path_option_index{YType::uint32, "restored-from-path-option-index"}
    	,
    attribute_set(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet>())
	,xro_attribute_set(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet>())
{
    attribute_set->parent = this;
    xro_attribute_set->parent = this;

    yang_name = "active-path-option"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::~ActivePathOption()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::has_data() const
{
    for (std::size_t index=0; index<path_calculation_error.size(); index++)
    {
        if(path_calculation_error[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remerge_error.size(); index++)
    {
        if(remerge_error[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<signalling_error.size(); index++)
    {
        if(signalling_error[index]->has_data())
            return true;
    }
    return option_index_is_valid.is_set
	|| option_index.is_set
	|| path_option_name.is_set
	|| path_option_type.is_set
	|| explicit_path_name.is_set
	|| explicit_path_id.is_set
	|| holddown_duration.is_set
	|| pce_address.is_set
	|| path_option_area_id.is_set
	|| is_strict_explicit_path.is_set
	|| is_helddown.is_set
	|| is_lockdown.is_set
	|| is_verbatim.is_set
	|| is_disabled.is_set
	|| has_attribute_set.is_set
	|| attribute_set_found.is_set
	|| has_xro_attribute_set.is_set
	|| xro_attribute_set_found.is_set
	|| is_segment_routing.is_set
	|| protected_by_path_option_index.is_set
	|| restored_from_path_option_index.is_set
	|| (attribute_set !=  nullptr && attribute_set->has_data())
	|| (xro_attribute_set !=  nullptr && xro_attribute_set->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::has_operation() const
{
    for (std::size_t index=0; index<path_calculation_error.size(); index++)
    {
        if(path_calculation_error[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remerge_error.size(); index++)
    {
        if(remerge_error[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<signalling_error.size(); index++)
    {
        if(signalling_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option_index_is_valid.yfilter)
	|| ydk::is_set(option_index.yfilter)
	|| ydk::is_set(path_option_name.yfilter)
	|| ydk::is_set(path_option_type.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(explicit_path_id.yfilter)
	|| ydk::is_set(holddown_duration.yfilter)
	|| ydk::is_set(pce_address.yfilter)
	|| ydk::is_set(path_option_area_id.yfilter)
	|| ydk::is_set(is_strict_explicit_path.yfilter)
	|| ydk::is_set(is_helddown.yfilter)
	|| ydk::is_set(is_lockdown.yfilter)
	|| ydk::is_set(is_verbatim.yfilter)
	|| ydk::is_set(is_disabled.yfilter)
	|| ydk::is_set(has_attribute_set.yfilter)
	|| ydk::is_set(attribute_set_found.yfilter)
	|| ydk::is_set(has_xro_attribute_set.yfilter)
	|| ydk::is_set(xro_attribute_set_found.yfilter)
	|| ydk::is_set(is_segment_routing.yfilter)
	|| ydk::is_set(protected_by_path_option_index.yfilter)
	|| ydk::is_set(restored_from_path_option_index.yfilter)
	|| (attribute_set !=  nullptr && attribute_set->has_operation())
	|| (xro_attribute_set !=  nullptr && xro_attribute_set->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-path-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_index_is_valid.is_set || is_set(option_index_is_valid.yfilter)) leaf_name_data.push_back(option_index_is_valid.get_name_leafdata());
    if (option_index.is_set || is_set(option_index.yfilter)) leaf_name_data.push_back(option_index.get_name_leafdata());
    if (path_option_name.is_set || is_set(path_option_name.yfilter)) leaf_name_data.push_back(path_option_name.get_name_leafdata());
    if (path_option_type.is_set || is_set(path_option_type.yfilter)) leaf_name_data.push_back(path_option_type.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (explicit_path_id.is_set || is_set(explicit_path_id.yfilter)) leaf_name_data.push_back(explicit_path_id.get_name_leafdata());
    if (holddown_duration.is_set || is_set(holddown_duration.yfilter)) leaf_name_data.push_back(holddown_duration.get_name_leafdata());
    if (pce_address.is_set || is_set(pce_address.yfilter)) leaf_name_data.push_back(pce_address.get_name_leafdata());
    if (path_option_area_id.is_set || is_set(path_option_area_id.yfilter)) leaf_name_data.push_back(path_option_area_id.get_name_leafdata());
    if (is_strict_explicit_path.is_set || is_set(is_strict_explicit_path.yfilter)) leaf_name_data.push_back(is_strict_explicit_path.get_name_leafdata());
    if (is_helddown.is_set || is_set(is_helddown.yfilter)) leaf_name_data.push_back(is_helddown.get_name_leafdata());
    if (is_lockdown.is_set || is_set(is_lockdown.yfilter)) leaf_name_data.push_back(is_lockdown.get_name_leafdata());
    if (is_verbatim.is_set || is_set(is_verbatim.yfilter)) leaf_name_data.push_back(is_verbatim.get_name_leafdata());
    if (is_disabled.is_set || is_set(is_disabled.yfilter)) leaf_name_data.push_back(is_disabled.get_name_leafdata());
    if (has_attribute_set.is_set || is_set(has_attribute_set.yfilter)) leaf_name_data.push_back(has_attribute_set.get_name_leafdata());
    if (attribute_set_found.is_set || is_set(attribute_set_found.yfilter)) leaf_name_data.push_back(attribute_set_found.get_name_leafdata());
    if (has_xro_attribute_set.is_set || is_set(has_xro_attribute_set.yfilter)) leaf_name_data.push_back(has_xro_attribute_set.get_name_leafdata());
    if (xro_attribute_set_found.is_set || is_set(xro_attribute_set_found.yfilter)) leaf_name_data.push_back(xro_attribute_set_found.get_name_leafdata());
    if (is_segment_routing.is_set || is_set(is_segment_routing.yfilter)) leaf_name_data.push_back(is_segment_routing.get_name_leafdata());
    if (protected_by_path_option_index.is_set || is_set(protected_by_path_option_index.yfilter)) leaf_name_data.push_back(protected_by_path_option_index.get_name_leafdata());
    if (restored_from_path_option_index.is_set || is_set(restored_from_path_option_index.yfilter)) leaf_name_data.push_back(restored_from_path_option_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set")
    {
        if(attribute_set == nullptr)
        {
            attribute_set = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet>();
        }
        return attribute_set;
    }

    if(child_yang_name == "xro-attribute-set")
    {
        if(xro_attribute_set == nullptr)
        {
            xro_attribute_set = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet>();
        }
        return xro_attribute_set;
    }

    if(child_yang_name == "path-calculation-error")
    {
        for(auto const & c : path_calculation_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::PathCalculationError>();
        c->parent = this;
        path_calculation_error.push_back(c);
        return c;
    }

    if(child_yang_name == "remerge-error")
    {
        for(auto const & c : remerge_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::RemergeError>();
        c->parent = this;
        remerge_error.push_back(c);
        return c;
    }

    if(child_yang_name == "signalling-error")
    {
        for(auto const & c : signalling_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::SignallingError>();
        c->parent = this;
        signalling_error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_set != nullptr)
    {
        children["attribute-set"] = attribute_set;
    }

    if(xro_attribute_set != nullptr)
    {
        children["xro-attribute-set"] = xro_attribute_set;
    }

    for (auto const & c : path_calculation_error)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : remerge_error)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : signalling_error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option-index-is-valid")
    {
        option_index_is_valid = value;
        option_index_is_valid.value_namespace = name_space;
        option_index_is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option-index")
    {
        option_index = value;
        option_index.value_namespace = name_space;
        option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-name")
    {
        path_option_name = value;
        path_option_name.value_namespace = name_space;
        path_option_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-type")
    {
        path_option_type = value;
        path_option_type.value_namespace = name_space;
        path_option_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-id")
    {
        explicit_path_id = value;
        explicit_path_id.value_namespace = name_space;
        explicit_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown-duration")
    {
        holddown_duration = value;
        holddown_duration.value_namespace = name_space;
        holddown_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-address")
    {
        pce_address = value;
        pce_address.value_namespace = name_space;
        pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-area-id")
    {
        path_option_area_id = value;
        path_option_area_id.value_namespace = name_space;
        path_option_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-explicit-path")
    {
        is_strict_explicit_path = value;
        is_strict_explicit_path.value_namespace = name_space;
        is_strict_explicit_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-helddown")
    {
        is_helddown = value;
        is_helddown.value_namespace = name_space;
        is_helddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lockdown")
    {
        is_lockdown = value;
        is_lockdown.value_namespace = name_space;
        is_lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-verbatim")
    {
        is_verbatim = value;
        is_verbatim.value_namespace = name_space;
        is_verbatim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-disabled")
    {
        is_disabled = value;
        is_disabled.value_namespace = name_space;
        is_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set = value;
        has_attribute_set.value_namespace = name_space;
        has_attribute_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-set-found")
    {
        attribute_set_found = value;
        attribute_set_found.value_namespace = name_space;
        attribute_set_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-xro-attribute-set")
    {
        has_xro_attribute_set = value;
        has_xro_attribute_set.value_namespace = name_space;
        has_xro_attribute_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xro-attribute-set-found")
    {
        xro_attribute_set_found = value;
        xro_attribute_set_found.value_namespace = name_space;
        xro_attribute_set_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-segment-routing")
    {
        is_segment_routing = value;
        is_segment_routing.value_namespace = name_space;
        is_segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-by-path-option-index")
    {
        protected_by_path_option_index = value;
        protected_by_path_option_index.value_namespace = name_space;
        protected_by_path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restored-from-path-option-index")
    {
        restored_from_path_option_index = value;
        restored_from_path_option_index.value_namespace = name_space;
        restored_from_path_option_index.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option-index-is-valid")
    {
        option_index_is_valid.yfilter = yfilter;
    }
    if(value_path == "option-index")
    {
        option_index.yfilter = yfilter;
    }
    if(value_path == "path-option-name")
    {
        path_option_name.yfilter = yfilter;
    }
    if(value_path == "path-option-type")
    {
        path_option_type.yfilter = yfilter;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "explicit-path-id")
    {
        explicit_path_id.yfilter = yfilter;
    }
    if(value_path == "holddown-duration")
    {
        holddown_duration.yfilter = yfilter;
    }
    if(value_path == "pce-address")
    {
        pce_address.yfilter = yfilter;
    }
    if(value_path == "path-option-area-id")
    {
        path_option_area_id.yfilter = yfilter;
    }
    if(value_path == "is-strict-explicit-path")
    {
        is_strict_explicit_path.yfilter = yfilter;
    }
    if(value_path == "is-helddown")
    {
        is_helddown.yfilter = yfilter;
    }
    if(value_path == "is-lockdown")
    {
        is_lockdown.yfilter = yfilter;
    }
    if(value_path == "is-verbatim")
    {
        is_verbatim.yfilter = yfilter;
    }
    if(value_path == "is-disabled")
    {
        is_disabled.yfilter = yfilter;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set.yfilter = yfilter;
    }
    if(value_path == "attribute-set-found")
    {
        attribute_set_found.yfilter = yfilter;
    }
    if(value_path == "has-xro-attribute-set")
    {
        has_xro_attribute_set.yfilter = yfilter;
    }
    if(value_path == "xro-attribute-set-found")
    {
        xro_attribute_set_found.yfilter = yfilter;
    }
    if(value_path == "is-segment-routing")
    {
        is_segment_routing.yfilter = yfilter;
    }
    if(value_path == "protected-by-path-option-index")
    {
        protected_by_path_option_index.yfilter = yfilter;
    }
    if(value_path == "restored-from-path-option-index")
    {
        restored_from_path_option_index.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set" || name == "xro-attribute-set" || name == "path-calculation-error" || name == "remerge-error" || name == "signalling-error" || name == "option-index-is-valid" || name == "option-index" || name == "path-option-name" || name == "path-option-type" || name == "explicit-path-name" || name == "explicit-path-id" || name == "holddown-duration" || name == "pce-address" || name == "path-option-area-id" || name == "is-strict-explicit-path" || name == "is-helddown" || name == "is-lockdown" || name == "is-verbatim" || name == "is-disabled" || name == "has-attribute-set" || name == "attribute-set-found" || name == "has-xro-attribute-set" || name == "xro-attribute-set-found" || name == "is-segment-routing" || name == "protected-by-path-option-index" || name == "restored-from-path-option-index")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSet()
    :
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_attribute_set_name_crc32{YType::uint32, "tunnel-attribute-set-name-crc32"}
    	,
    attribute_set_union(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion>())
{
    attribute_set_union->parent = this;

    yang_name = "attribute-set"; yang_parent_name = "active-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::~AttributeSet()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::has_data() const
{
    return tunnel_attribute_set_name.is_set
	|| tunnel_attribute_set_name_crc32.is_set
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name_crc32.yfilter)
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (tunnel_attribute_set_name_crc32.is_set || is_set(tunnel_attribute_set_name_crc32.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name_crc32.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-union")
    {
        if(attribute_set_union == nullptr)
        {
            attribute_set_union = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion>();
        }
        return attribute_set_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_set_union != nullptr)
    {
        children["attribute-set-union"] = attribute_set_union;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
        tunnel_attribute_set_name.value_namespace = name_space;
        tunnel_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-attribute-set-name-crc32")
    {
        tunnel_attribute_set_name_crc32 = value;
        tunnel_attribute_set_name_crc32.value_namespace = name_space;
        tunnel_attribute_set_name_crc32.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-attribute-set-name-crc32")
    {
        tunnel_attribute_set_name_crc32.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-union" || name == "tunnel-attribute-set-name" || name == "tunnel-attribute-set-name-crc32")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetUnion()
    :
    tunnel_attribute_set_type{YType::enumeration, "tunnel-attribute-set-type"}
    	,
    attribute_set_path_option(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption>())
	,attribute_set_autobackup(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup>())
	,attribute_set_automesh(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh>())
	,attribute_set_xro(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro>())
	,attribute_set_p2mpte(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte>())
	,attribute_set_aps_pp(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp>())
	,attribute_set_p2p_te(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe>())
{
    attribute_set_path_option->parent = this;
    attribute_set_autobackup->parent = this;
    attribute_set_automesh->parent = this;
    attribute_set_xro->parent = this;
    attribute_set_p2mpte->parent = this;
    attribute_set_aps_pp->parent = this;
    attribute_set_p2p_te->parent = this;

    yang_name = "attribute-set-union"; yang_parent_name = "attribute-set"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::~AttributeSetUnion()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::has_data() const
{
    return tunnel_attribute_set_type.is_set
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_data())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_data())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_data())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_data())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_data())
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_data())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_attribute_set_type.yfilter)
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_operation())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_operation())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_operation())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_operation())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_operation())
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_operation())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_type.is_set || is_set(tunnel_attribute_set_type.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-path-option")
    {
        if(attribute_set_path_option == nullptr)
        {
            attribute_set_path_option = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption>();
        }
        return attribute_set_path_option;
    }

    if(child_yang_name == "attribute-set-autobackup")
    {
        if(attribute_set_autobackup == nullptr)
        {
            attribute_set_autobackup = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup>();
        }
        return attribute_set_autobackup;
    }

    if(child_yang_name == "attribute-set-automesh")
    {
        if(attribute_set_automesh == nullptr)
        {
            attribute_set_automesh = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh>();
        }
        return attribute_set_automesh;
    }

    if(child_yang_name == "attribute-set-xro")
    {
        if(attribute_set_xro == nullptr)
        {
            attribute_set_xro = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro>();
        }
        return attribute_set_xro;
    }

    if(child_yang_name == "attribute-set-p2mpte")
    {
        if(attribute_set_p2mpte == nullptr)
        {
            attribute_set_p2mpte = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte>();
        }
        return attribute_set_p2mpte;
    }

    if(child_yang_name == "attribute-set-aps-pp")
    {
        if(attribute_set_aps_pp == nullptr)
        {
            attribute_set_aps_pp = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp>();
        }
        return attribute_set_aps_pp;
    }

    if(child_yang_name == "attribute-set-p2p-te")
    {
        if(attribute_set_p2p_te == nullptr)
        {
            attribute_set_p2p_te = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe>();
        }
        return attribute_set_p2p_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_set_path_option != nullptr)
    {
        children["attribute-set-path-option"] = attribute_set_path_option;
    }

    if(attribute_set_autobackup != nullptr)
    {
        children["attribute-set-autobackup"] = attribute_set_autobackup;
    }

    if(attribute_set_automesh != nullptr)
    {
        children["attribute-set-automesh"] = attribute_set_automesh;
    }

    if(attribute_set_xro != nullptr)
    {
        children["attribute-set-xro"] = attribute_set_xro;
    }

    if(attribute_set_p2mpte != nullptr)
    {
        children["attribute-set-p2mpte"] = attribute_set_p2mpte;
    }

    if(attribute_set_aps_pp != nullptr)
    {
        children["attribute-set-aps-pp"] = attribute_set_aps_pp;
    }

    if(attribute_set_p2p_te != nullptr)
    {
        children["attribute-set-p2p-te"] = attribute_set_p2p_te;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type = value;
        tunnel_attribute_set_type.value_namespace = name_space;
        tunnel_attribute_set_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-path-option" || name == "attribute-set-autobackup" || name == "attribute-set-automesh" || name == "attribute-set-xro" || name == "attribute-set-p2mpte" || name == "attribute-set-aps-pp" || name == "attribute-set-p2p-te" || name == "tunnel-attribute-set-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::AttributeSetPathOption()
    :
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    cost_limit{YType::uint32, "cost-limit"},
    dste_class_type{YType::uint8, "dste-class-type"},
    bandwidth_type{YType::enumeration, "bandwidth-type"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_cost_limit_configured{YType::boolean, "is-cost-limit-configured"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    generation{YType::uint32, "generation"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_invalidation_action{YType::uint32, "path-invalidation-action"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    exclude_list_name{YType::str, "exclude-list-name"},
    is_exclude_list_name_configured{YType::boolean, "is-exclude-list-name-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"},
    is_bfd_reverse_pat_configured{YType::boolean, "is-bfd-reverse-pat-configured"}
    	,
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>())
	,bfd_reverse_path(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>())
{
    affinity->parent = this;
    bfd_reverse_path->parent = this;

    yang_name = "attribute-set-path-option"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::~AttributeSetPathOption()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_data() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<version_info.size(); index++)
    {
        if(version_info[index]->has_data())
            return true;
    }
    return configured_bandwidth.is_set
	|| cost_limit.is_set
	|| dste_class_type.is_set
	|| bandwidth_type.is_set
	|| is_bandwidth_configured.is_set
	|| is_cost_limit_configured.is_set
	|| is_affinity_configured.is_set
	|| generation.is_set
	|| path_invalidation_timeout.is_set
	|| path_invalidation_action.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| exclude_list_name.is_set
	|| is_exclude_list_name_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| pcedp_group_id.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| pcebd_source_address.is_set
	|| pcebd_group_id.is_set
	|| is_bfd_reverse_pat_configured.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<version_info.size(); index++)
    {
        if(version_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(cost_limit.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(is_cost_limit_configured.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter)
	|| ydk::is_set(path_invalidation_action.yfilter)
	|| ydk::is_set(is_path_invalidation_timeout_configured.yfilter)
	|| ydk::is_set(is_path_invalidation_action_configured.yfilter)
	|| ydk::is_set(exclude_list_name.yfilter)
	|| ydk::is_set(is_exclude_list_name_configured.yfilter)
	|| ydk::is_set(is_pce_configured.yfilter)
	|| ydk::is_set(is_pce_disj_source_configured.yfilter)
	|| ydk::is_set(is_pce_disj_type_configured.yfilter)
	|| ydk::is_set(is_pce_disj_group_id_configured.yfilter)
	|| ydk::is_set(pcedp_source_address.yfilter)
	|| ydk::is_set(pcedp_type.yfilter)
	|| ydk::is_set(pcedp_group_id.yfilter)
	|| ydk::is_set(is_pceb_dj_source_configured.yfilter)
	|| ydk::is_set(is_pcebd_group_id_configured.yfilter)
	|| ydk::is_set(pcebd_source_address.yfilter)
	|| ydk::is_set(pcebd_group_id.yfilter)
	|| ydk::is_set(is_bfd_reverse_pat_configured.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-path-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (cost_limit.is_set || is_set(cost_limit.yfilter)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_cost_limit_configured.is_set || is_set(is_cost_limit_configured.yfilter)) leaf_name_data.push_back(is_cost_limit_configured.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_invalidation_action.is_set || is_set(path_invalidation_action.yfilter)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (exclude_list_name.is_set || is_set(exclude_list_name.yfilter)) leaf_name_data.push_back(exclude_list_name.get_name_leafdata());
    if (is_exclude_list_name_configured.is_set || is_set(is_exclude_list_name_configured.yfilter)) leaf_name_data.push_back(is_exclude_list_name_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.yfilter)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.yfilter)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.yfilter)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.yfilter)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.yfilter)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.yfilter)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.yfilter)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.yfilter)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());
    if (is_bfd_reverse_pat_configured.is_set || is_set(is_bfd_reverse_pat_configured.yfilter)) leaf_name_data.push_back(is_bfd_reverse_pat_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path == nullptr)
        {
            bfd_reverse_path = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>();
        }
        return bfd_reverse_path;
    }

    if(child_yang_name == "tunnel-id")
    {
        for(auto const & c : tunnel_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    if(child_yang_name == "version-info")
    {
        for(auto const & c : version_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo>();
        c->parent = this;
        version_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(bfd_reverse_path != nullptr)
    {
        children["bfd-reverse-path"] = bfd_reverse_path;
    }

    for (auto const & c : tunnel_id)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : version_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-limit")
    {
        cost_limit = value;
        cost_limit.value_namespace = name_space;
        cost_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured = value;
        is_cost_limit_configured.value_namespace = name_space;
        is_cost_limit_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation")
    {
        generation = value;
        generation.value_namespace = name_space;
        generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
        path_invalidation_action.value_namespace = name_space;
        path_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
        is_path_invalidation_timeout_configured.value_namespace = name_space;
        is_path_invalidation_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
        is_path_invalidation_action_configured.value_namespace = name_space;
        is_path_invalidation_action_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name = value;
        exclude_list_name.value_namespace = name_space;
        exclude_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured = value;
        is_exclude_list_name_configured.value_namespace = name_space;
        is_exclude_list_name_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
        is_pce_configured.value_namespace = name_space;
        is_pce_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
        is_pce_disj_source_configured.value_namespace = name_space;
        is_pce_disj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
        is_pce_disj_type_configured.value_namespace = name_space;
        is_pce_disj_type_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
        is_pce_disj_group_id_configured.value_namespace = name_space;
        is_pce_disj_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
        pcedp_source_address.value_namespace = name_space;
        pcedp_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
        pcedp_type.value_namespace = name_space;
        pcedp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
        pcedp_group_id.value_namespace = name_space;
        pcedp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
        is_pceb_dj_source_configured.value_namespace = name_space;
        is_pceb_dj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
        is_pcebd_group_id_configured.value_namespace = name_space;
        is_pcebd_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
        pcebd_source_address.value_namespace = name_space;
        pcebd_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
        pcebd_group_id.value_namespace = name_space;
        pcebd_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured = value;
        is_bfd_reverse_pat_configured.value_namespace = name_space;
        is_bfd_reverse_pat_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "cost-limit")
    {
        cost_limit.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "generation")
    {
        generation.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured.yfilter = yfilter;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name.yfilter = yfilter;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address.yfilter = yfilter;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type.yfilter = yfilter;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id.yfilter = yfilter;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address.yfilter = yfilter;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id.yfilter = yfilter;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "bfd-reverse-path" || name == "tunnel-id" || name == "version-info" || name == "configured-bandwidth" || name == "cost-limit" || name == "dste-class-type" || name == "bandwidth-type" || name == "is-bandwidth-configured" || name == "is-cost-limit-configured" || name == "is-affinity-configured" || name == "generation" || name == "path-invalidation-timeout" || name == "path-invalidation-action" || name == "is-path-invalidation-timeout-configured" || name == "is-path-invalidation-action-configured" || name == "exclude-list-name" || name == "is-exclude-list-name-configured" || name == "is-pce-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pce-disj-group-id-configured" || name == "pcedp-source-address" || name == "pcedp-type" || name == "pcedp-group-id" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "pcebd-source-address" || name == "pcebd-group-id" || name == "is-bfd-reverse-pat-configured")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_data() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        for(auto const & c : constraint_extended_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        for(auto const & c : extended_forward_ref_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : constraint_extended_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_forward_ref_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::BfdReversePath()
    :
    path_type{YType::enumeration, "path-type"},
    binding_label{YType::uint32, "binding-label"}
{

    yang_name = "bfd-reverse-path"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::~BfdReversePath()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_data() const
{
    return path_type.is_set
	|| binding_label.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(binding_label.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-type" || name == "binding-label")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::~TunnelId()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::VersionInfo()
    :
    attribute_type{YType::str, "attribute-type"},
    generation{YType::uint32, "generation"},
    is_default{YType::boolean, "is-default"}
{

    yang_name = "version-info"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::~VersionInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_data() const
{
    return attribute_type.is_set
	|| generation.is_set
	|| is_default.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_type.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(is_default.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.yfilter)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.yfilter)) leaf_name_data.push_back(is_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-type")
    {
        attribute_type = value;
        attribute_type.value_namespace = name_space;
        attribute_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation")
    {
        generation = value;
        generation.value_namespace = name_space;
        generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default")
    {
        is_default = value;
        is_default.value_namespace = name_space;
        is_default.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-type")
    {
        attribute_type.yfilter = yfilter;
    }
    if(value_path == "generation")
    {
        generation.yfilter = yfilter;
    }
    if(value_path == "is-default")
    {
        is_default.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-type" || name == "generation" || name == "is-default")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::AttributeSetAutobackup()
    :
    is_signalled_name_configured{YType::boolean, "is-signalled-name-configured"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    policy_class{YType::uint8, "policy-class"},
    is_policyclass_configured{YType::boolean, "is-policyclass-configured"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    record_route{YType::boolean, "record-route"}
    	,
    signalled_name(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>())
	,affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>())
	,logging(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>())
{
    signalled_name->parent = this;
    affinity->parent = this;
    logging->parent = this;

    yang_name = "attribute-set-autobackup"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::~AttributeSetAutobackup()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_data() const
{
    for (std::size_t index=0; index<policy_class_entry.size(); index++)
    {
        if(policy_class_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<protected_interface.size(); index++)
    {
        if(protected_interface[index]->has_data())
            return true;
    }
    return is_signalled_name_configured.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| is_priority_configured.is_set
	|| policy_class.is_set
	|| is_policyclass_configured.is_set
	|| is_affinity_configured.is_set
	|| record_route.is_set
	|| (signalled_name !=  nullptr && signalled_name->has_data())
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_operation() const
{
    for (std::size_t index=0; index<policy_class_entry.size(); index++)
    {
        if(policy_class_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<protected_interface.size(); index++)
    {
        if(protected_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_signalled_name_configured.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_priority_configured.yfilter)
	|| ydk::is_set(policy_class.yfilter)
	|| ydk::is_set(is_policyclass_configured.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| (signalled_name !=  nullptr && signalled_name->has_operation())
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-autobackup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_signalled_name_configured.is_set || is_set(is_signalled_name_configured.yfilter)) leaf_name_data.push_back(is_signalled_name_configured.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.yfilter)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.yfilter)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signalled-name")
    {
        if(signalled_name == nullptr)
        {
            signalled_name = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>();
        }
        return signalled_name;
    }

    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "policy-class-entry")
    {
        for(auto const & c : policy_class_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry>();
        c->parent = this;
        policy_class_entry.push_back(c);
        return c;
    }

    if(child_yang_name == "tunnel-id")
    {
        for(auto const & c : tunnel_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    if(child_yang_name == "protected-interface")
    {
        for(auto const & c : protected_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface>();
        c->parent = this;
        protected_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(signalled_name != nullptr)
    {
        children["signalled-name"] = signalled_name;
    }

    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    for (auto const & c : policy_class_entry)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tunnel_id)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : protected_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-signalled-name-configured")
    {
        is_signalled_name_configured = value;
        is_signalled_name_configured.value_namespace = name_space;
        is_signalled_name_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
        is_priority_configured.value_namespace = name_space;
        is_priority_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-class")
    {
        policy_class = value;
        policy_class.value_namespace = name_space;
        policy_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured = value;
        is_policyclass_configured.value_namespace = name_space;
        is_policyclass_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-signalled-name-configured")
    {
        is_signalled_name_configured.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured.yfilter = yfilter;
    }
    if(value_path == "policy-class")
    {
        policy_class.yfilter = yfilter;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signalled-name" || name == "affinity" || name == "logging" || name == "policy-class-entry" || name == "tunnel-id" || name == "protected-interface" || name == "is-signalled-name-configured" || name == "setup-priority" || name == "hold-priority" || name == "is-priority-configured" || name == "policy-class" || name == "is-policyclass-configured" || name == "is-affinity-configured" || name == "record-route")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::SignalledName()
    :
    name{YType::str, "name"},
    source_type{YType::enumeration, "source-type"},
    protected_interface_type{YType::enumeration, "protected-interface-type"},
    is_mp_addresses{YType::boolean, "is-mp-addresses"}
{

    yang_name = "signalled-name"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::~SignalledName()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_data() const
{
    return name.is_set
	|| source_type.is_set
	|| protected_interface_type.is_set
	|| is_mp_addresses.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(source_type.yfilter)
	|| ydk::is_set(protected_interface_type.yfilter)
	|| ydk::is_set(is_mp_addresses.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalled-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (source_type.is_set || is_set(source_type.yfilter)) leaf_name_data.push_back(source_type.get_name_leafdata());
    if (protected_interface_type.is_set || is_set(protected_interface_type.yfilter)) leaf_name_data.push_back(protected_interface_type.get_name_leafdata());
    if (is_mp_addresses.is_set || is_set(is_mp_addresses.yfilter)) leaf_name_data.push_back(is_mp_addresses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-type")
    {
        source_type = value;
        source_type.value_namespace = name_space;
        source_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-interface-type")
    {
        protected_interface_type = value;
        protected_interface_type.value_namespace = name_space;
        protected_interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mp-addresses")
    {
        is_mp_addresses = value;
        is_mp_addresses.value_namespace = name_space;
        is_mp_addresses.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "source-type")
    {
        source_type.yfilter = yfilter;
    }
    if(value_path == "protected-interface-type")
    {
        protected_interface_type.yfilter = yfilter;
    }
    if(value_path == "is-mp-addresses")
    {
        is_mp_addresses.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "source-type" || name == "protected-interface-type" || name == "is-mp-addresses")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_data() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        for(auto const & c : constraint_extended_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        for(auto const & c : extended_forward_ref_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : constraint_extended_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_forward_ref_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::Logging()
    :
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    all_logging_enabled{YType::boolean, "all-logging-enabled"}
{

    yang_name = "logging"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::~Logging()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_data() const
{
    return lsp_state.is_set
	|| s2l_state.is_set
	|| lsp_re_route.is_set
	|| lsp_re_opt.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| all_logging_enabled.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(s2l_state.yfilter)
	|| ydk::is_set(lsp_re_route.yfilter)
	|| ydk::is_set(lsp_re_opt.yfilter)
	|| ydk::is_set(lsp_insufficient_bw.yfilter)
	|| ydk::is_set(lsp_bandwidth_change.yfilter)
	|| ydk::is_set(lsp_pcalc_failure_logging_enabled.yfilter)
	|| ydk::is_set(all_logging_enabled.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
        s2l_state.value_namespace = name_space;
        s2l_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
        lsp_re_route.value_namespace = name_space;
        lsp_re_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
        lsp_re_opt.value_namespace = name_space;
        lsp_re_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
        lsp_insufficient_bw.value_namespace = name_space;
        lsp_insufficient_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
        lsp_bandwidth_change.value_namespace = name_space;
        lsp_bandwidth_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
        lsp_pcalc_failure_logging_enabled.value_namespace = name_space;
        lsp_pcalc_failure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
        all_logging_enabled.value_namespace = name_space;
        all_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
    if(value_path == "s2l-state")
    {
        s2l_state.yfilter = yfilter;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route.yfilter = yfilter;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt.yfilter = yfilter;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change.yfilter = yfilter;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-state" || name == "s2l-state" || name == "lsp-re-route" || name == "lsp-re-opt" || name == "lsp-insufficient-bw" || name == "lsp-bandwidth-change" || name == "lsp-pcalc-failure-logging-enabled" || name == "all-logging-enabled")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::PolicyClassEntry()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "policy-class-entry"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::~PolicyClassEntry()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-class-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::~TunnelId()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::ProtectedInterface()
    :
    protected_interface{YType::str, "protected-interface"}
{

    yang_name = "protected-interface"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::~ProtectedInterface()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_data() const
{
    return protected_interface.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protected_interface.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protected_interface.is_set || is_set(protected_interface.yfilter)) leaf_name_data.push_back(protected_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protected-interface")
    {
        protected_interface = value;
        protected_interface.value_namespace = name_space;
        protected_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protected-interface")
    {
        protected_interface.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected-interface")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::AttributeSetAutomesh()
    :
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    policy_class{YType::uint8, "policy-class"},
    is_policyclass_configured{YType::boolean, "is-policyclass-configured"},
    forward_class{YType::uint32, "forward-class"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    fast_reroute{YType::boolean, "fast-reroute"},
    frr_node_protection{YType::boolean, "frr-node-protection"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    record_route{YType::boolean, "record-route"},
    auto_bandwidth_collect{YType::boolean, "auto-bandwidth-collect"},
    auto_route_announce{YType::boolean, "auto-route-announce"},
    soft_preemption_configured{YType::boolean, "soft-preemption-configured"},
    bandwidth{YType::uint32, "bandwidth"},
    load_share{YType::uint32, "load-share"},
    is_interface_bw_configured{YType::boolean, "is-interface-bw-configured"}
    	,
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>())
	,logging(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>())
{
    affinity->parent = this;
    logging->parent = this;

    yang_name = "attribute-set-automesh"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::~AttributeSetAutomesh()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_data() const
{
    for (std::size_t index=0; index<policy_class_entry.size(); index++)
    {
        if(policy_class_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mesh_group_id.size(); index++)
    {
        if(mesh_group_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    return configured_bandwidth.is_set
	|| dste_class_type.is_set
	|| is_bandwidth_configured.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| is_priority_configured.is_set
	|| policy_class.is_set
	|| is_policyclass_configured.is_set
	|| forward_class.is_set
	|| is_affinity_configured.is_set
	|| fast_reroute.is_set
	|| frr_node_protection.is_set
	|| frr_bandwidth_protection.is_set
	|| record_route.is_set
	|| auto_bandwidth_collect.is_set
	|| auto_route_announce.is_set
	|| soft_preemption_configured.is_set
	|| bandwidth.is_set
	|| load_share.is_set
	|| is_interface_bw_configured.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_operation() const
{
    for (std::size_t index=0; index<policy_class_entry.size(); index++)
    {
        if(policy_class_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mesh_group_id.size(); index++)
    {
        if(mesh_group_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_priority_configured.yfilter)
	|| ydk::is_set(policy_class.yfilter)
	|| ydk::is_set(is_policyclass_configured.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(fast_reroute.yfilter)
	|| ydk::is_set(frr_node_protection.yfilter)
	|| ydk::is_set(frr_bandwidth_protection.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| ydk::is_set(auto_bandwidth_collect.yfilter)
	|| ydk::is_set(auto_route_announce.yfilter)
	|| ydk::is_set(soft_preemption_configured.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(load_share.yfilter)
	|| ydk::is_set(is_interface_bw_configured.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-automesh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.yfilter)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.yfilter)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (fast_reroute.is_set || is_set(fast_reroute.yfilter)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (frr_node_protection.is_set || is_set(frr_node_protection.yfilter)) leaf_name_data.push_back(frr_node_protection.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.yfilter)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (auto_bandwidth_collect.is_set || is_set(auto_bandwidth_collect.yfilter)) leaf_name_data.push_back(auto_bandwidth_collect.get_name_leafdata());
    if (auto_route_announce.is_set || is_set(auto_route_announce.yfilter)) leaf_name_data.push_back(auto_route_announce.get_name_leafdata());
    if (soft_preemption_configured.is_set || is_set(soft_preemption_configured.yfilter)) leaf_name_data.push_back(soft_preemption_configured.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (is_interface_bw_configured.is_set || is_set(is_interface_bw_configured.yfilter)) leaf_name_data.push_back(is_interface_bw_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "policy-class-entry")
    {
        for(auto const & c : policy_class_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry>();
        c->parent = this;
        policy_class_entry.push_back(c);
        return c;
    }

    if(child_yang_name == "mesh-group-id")
    {
        for(auto const & c : mesh_group_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId>();
        c->parent = this;
        mesh_group_id.push_back(c);
        return c;
    }

    if(child_yang_name == "tunnel-id")
    {
        for(auto const & c : tunnel_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    for (auto const & c : policy_class_entry)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : mesh_group_id)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tunnel_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
        is_priority_configured.value_namespace = name_space;
        is_priority_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-class")
    {
        policy_class = value;
        policy_class.value_namespace = name_space;
        policy_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured = value;
        is_policyclass_configured.value_namespace = name_space;
        is_policyclass_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
        fast_reroute.value_namespace = name_space;
        fast_reroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-node-protection")
    {
        frr_node_protection = value;
        frr_node_protection.value_namespace = name_space;
        frr_node_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
        frr_bandwidth_protection.value_namespace = name_space;
        frr_bandwidth_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-bandwidth-collect")
    {
        auto_bandwidth_collect = value;
        auto_bandwidth_collect.value_namespace = name_space;
        auto_bandwidth_collect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-route-announce")
    {
        auto_route_announce = value;
        auto_route_announce.value_namespace = name_space;
        auto_route_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-configured")
    {
        soft_preemption_configured = value;
        soft_preemption_configured.value_namespace = name_space;
        soft_preemption_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-share")
    {
        load_share = value;
        load_share.value_namespace = name_space;
        load_share.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface-bw-configured")
    {
        is_interface_bw_configured = value;
        is_interface_bw_configured.value_namespace = name_space;
        is_interface_bw_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured.yfilter = yfilter;
    }
    if(value_path == "policy-class")
    {
        policy_class.yfilter = yfilter;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute.yfilter = yfilter;
    }
    if(value_path == "frr-node-protection")
    {
        frr_node_protection.yfilter = yfilter;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
    if(value_path == "auto-bandwidth-collect")
    {
        auto_bandwidth_collect.yfilter = yfilter;
    }
    if(value_path == "auto-route-announce")
    {
        auto_route_announce.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-configured")
    {
        soft_preemption_configured.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "load-share")
    {
        load_share.yfilter = yfilter;
    }
    if(value_path == "is-interface-bw-configured")
    {
        is_interface_bw_configured.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "policy-class-entry" || name == "mesh-group-id" || name == "tunnel-id" || name == "configured-bandwidth" || name == "dste-class-type" || name == "is-bandwidth-configured" || name == "setup-priority" || name == "hold-priority" || name == "is-priority-configured" || name == "policy-class" || name == "is-policyclass-configured" || name == "forward-class" || name == "is-affinity-configured" || name == "fast-reroute" || name == "frr-node-protection" || name == "frr-bandwidth-protection" || name == "record-route" || name == "auto-bandwidth-collect" || name == "auto-route-announce" || name == "soft-preemption-configured" || name == "bandwidth" || name == "load-share" || name == "is-interface-bw-configured")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_data() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        for(auto const & c : constraint_extended_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        for(auto const & c : extended_forward_ref_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : constraint_extended_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_forward_ref_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::Logging()
    :
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    all_logging_enabled{YType::boolean, "all-logging-enabled"}
{

    yang_name = "logging"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::~Logging()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_data() const
{
    return lsp_state.is_set
	|| s2l_state.is_set
	|| lsp_re_route.is_set
	|| lsp_re_opt.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| all_logging_enabled.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(s2l_state.yfilter)
	|| ydk::is_set(lsp_re_route.yfilter)
	|| ydk::is_set(lsp_re_opt.yfilter)
	|| ydk::is_set(lsp_insufficient_bw.yfilter)
	|| ydk::is_set(lsp_bandwidth_change.yfilter)
	|| ydk::is_set(lsp_pcalc_failure_logging_enabled.yfilter)
	|| ydk::is_set(all_logging_enabled.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
        s2l_state.value_namespace = name_space;
        s2l_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
        lsp_re_route.value_namespace = name_space;
        lsp_re_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
        lsp_re_opt.value_namespace = name_space;
        lsp_re_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
        lsp_insufficient_bw.value_namespace = name_space;
        lsp_insufficient_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
        lsp_bandwidth_change.value_namespace = name_space;
        lsp_bandwidth_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
        lsp_pcalc_failure_logging_enabled.value_namespace = name_space;
        lsp_pcalc_failure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
        all_logging_enabled.value_namespace = name_space;
        all_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
    if(value_path == "s2l-state")
    {
        s2l_state.yfilter = yfilter;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route.yfilter = yfilter;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt.yfilter = yfilter;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change.yfilter = yfilter;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-state" || name == "s2l-state" || name == "lsp-re-route" || name == "lsp-re-opt" || name == "lsp-insufficient-bw" || name == "lsp-bandwidth-change" || name == "lsp-pcalc-failure-logging-enabled" || name == "all-logging-enabled")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::PolicyClassEntry()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "policy-class-entry"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::~PolicyClassEntry()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-class-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::MeshGroupId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mesh-group-id"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::~MeshGroupId()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::~TunnelId()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::AttributeSetXro()
    :
    xro(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro>())
{
    xro->parent = this;

    yang_name = "attribute-set-xro"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::~AttributeSetXro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::has_data() const
{
    return (xro !=  nullptr && xro->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::has_operation() const
{
    return is_set(yfilter)
	|| (xro !=  nullptr && xro->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-xro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro")
    {
        if(xro == nullptr)
        {
            xro = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro>();
        }
        return xro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xro != nullptr)
    {
        children["xro"] = xro;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::Xro()
    :
    mutual_diversity_flag{YType::boolean, "mutual-diversity-flag"}
{

    yang_name = "xro"; yang_parent_name = "attribute-set-xro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::~Xro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_data() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_data())
            return true;
    }
    return mutual_diversity_flag.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_operation() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mutual_diversity_flag.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mutual_diversity_flag.is_set || is_set(mutual_diversity_flag.yfilter)) leaf_name_data.push_back(mutual_diversity_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro-subobject")
    {
        for(auto const & c : xro_subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject>();
        c->parent = this;
        xro_subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xro_subobject)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag = value;
        mutual_diversity_flag.value_namespace = name_space;
        mutual_diversity_flag.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro-subobject" || name == "mutual-diversity-flag")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::XroSubobject()
    :
    type{YType::enumeration, "type"}
    	,
    ipv4_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>())
	,ipv6_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>())
	,unnumbered_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>())
	,as_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>())
	,srlg_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>())
	,lsp_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>())
{
    ipv4_subobject->parent = this;
    ipv6_subobject->parent = this;
    unnumbered_subobject->parent = this;
    as_subobject->parent = this;
    srlg_subobject->parent = this;
    lsp_subobject->parent = this;

    yang_name = "xro-subobject"; yang_parent_name = "xro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::~XroSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_data() const
{
    return type.is_set
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_data())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_data())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_data())
	|| (as_subobject !=  nullptr && as_subobject->has_data())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_data())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_operation())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_operation())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_operation())
	|| (as_subobject !=  nullptr && as_subobject->has_operation())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_operation())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-subobject")
    {
        if(ipv4_subobject == nullptr)
        {
            ipv4_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>();
        }
        return ipv4_subobject;
    }

    if(child_yang_name == "ipv6-subobject")
    {
        if(ipv6_subobject == nullptr)
        {
            ipv6_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>();
        }
        return ipv6_subobject;
    }

    if(child_yang_name == "unnumbered-subobject")
    {
        if(unnumbered_subobject == nullptr)
        {
            unnumbered_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>();
        }
        return unnumbered_subobject;
    }

    if(child_yang_name == "as-subobject")
    {
        if(as_subobject == nullptr)
        {
            as_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>();
        }
        return as_subobject;
    }

    if(child_yang_name == "srlg-subobject")
    {
        if(srlg_subobject == nullptr)
        {
            srlg_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>();
        }
        return srlg_subobject;
    }

    if(child_yang_name == "lsp-subobject")
    {
        if(lsp_subobject == nullptr)
        {
            lsp_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>();
        }
        return lsp_subobject;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_subobject != nullptr)
    {
        children["ipv4-subobject"] = ipv4_subobject;
    }

    if(ipv6_subobject != nullptr)
    {
        children["ipv6-subobject"] = ipv6_subobject;
    }

    if(unnumbered_subobject != nullptr)
    {
        children["unnumbered-subobject"] = unnumbered_subobject;
    }

    if(as_subobject != nullptr)
    {
        children["as-subobject"] = as_subobject;
    }

    if(srlg_subobject != nullptr)
    {
        children["srlg-subobject"] = srlg_subobject;
    }

    if(lsp_subobject != nullptr)
    {
        children["lsp-subobject"] = lsp_subobject;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-subobject" || name == "ipv6-subobject" || name == "unnumbered-subobject" || name == "as-subobject" || name == "srlg-subobject" || name == "lsp-subobject" || name == "type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::Ipv4Subobject()
    :
    address{YType::str, "address"},
    prefix_len{YType::uint8, "prefix-len"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "ipv4-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::~Ipv4Subobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_data() const
{
    return address.is_set
	|| prefix_len.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-len" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::Ipv6Subobject()
    :
    address{YType::str, "address"},
    prefix_len{YType::uint8, "prefix-len"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "ipv6-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::~Ipv6Subobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_data() const
{
    return address.is_set
	|| prefix_len.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-len" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::UnnumberedSubobject()
    :
    te_router_id{YType::str, "te-router-id"},
    interface_id{YType::uint32, "interface-id"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "unnumbered-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::~UnnumberedSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_data() const
{
    return te_router_id.is_set
	|| interface_id.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_router_id.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_router_id.is_set || is_set(te_router_id.yfilter)) leaf_name_data.push_back(te_router_id.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-router-id")
    {
        te_router_id = value;
        te_router_id.value_namespace = name_space;
        te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-router-id")
    {
        te_router_id.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-router-id" || name == "interface-id" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::AsSubobject()
    :
    as_number{YType::uint16, "as-number"}
{

    yang_name = "as-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::~AsSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_data() const
{
    return as_number.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::SrlgSubobject()
    :
    srlg_id{YType::uint32, "srlg-id"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "srlg-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::~SrlgSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_data() const
{
    return srlg_id.is_set
	|| exclusion_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_id.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_id.is_set || is_set(srlg_id.yfilter)) leaf_name_data.push_back(srlg_id.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-id")
    {
        srlg_id = value;
        srlg_id.value_namespace = name_space;
        srlg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-id")
    {
        srlg_id.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-id" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::LspSubobject()
    :
    ignore_lsp_id{YType::boolean, "ignore-lsp-id"},
    processing_node_exception{YType::boolean, "processing-node-exception"},
    penultimate_node_exception{YType::boolean, "penultimate-node-exception"},
    destination_node_exception{YType::boolean, "destination-node-exception"},
    exclusion_type{YType::enumeration, "exclusion-type"}
    	,
    fec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>())
{
    fec->parent = this;

    yang_name = "lsp-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::~LspSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_data() const
{
    return ignore_lsp_id.is_set
	|| processing_node_exception.is_set
	|| penultimate_node_exception.is_set
	|| destination_node_exception.is_set
	|| exclusion_type.is_set
	|| (fec !=  nullptr && fec->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_lsp_id.yfilter)
	|| ydk::is_set(processing_node_exception.yfilter)
	|| ydk::is_set(penultimate_node_exception.yfilter)
	|| ydk::is_set(destination_node_exception.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| (fec !=  nullptr && fec->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_lsp_id.is_set || is_set(ignore_lsp_id.yfilter)) leaf_name_data.push_back(ignore_lsp_id.get_name_leafdata());
    if (processing_node_exception.is_set || is_set(processing_node_exception.yfilter)) leaf_name_data.push_back(processing_node_exception.get_name_leafdata());
    if (penultimate_node_exception.is_set || is_set(penultimate_node_exception.yfilter)) leaf_name_data.push_back(penultimate_node_exception.get_name_leafdata());
    if (destination_node_exception.is_set || is_set(destination_node_exception.yfilter)) leaf_name_data.push_back(destination_node_exception.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec")
    {
        if(fec == nullptr)
        {
            fec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>();
        }
        return fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec != nullptr)
    {
        children["fec"] = fec;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id = value;
        ignore_lsp_id.value_namespace = name_space;
        ignore_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception = value;
        processing_node_exception.value_namespace = name_space;
        processing_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception = value;
        penultimate_node_exception.value_namespace = name_space;
        penultimate_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-node-exception")
    {
        destination_node_exception = value;
        destination_node_exception.value_namespace = name_space;
        destination_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id.yfilter = yfilter;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception.yfilter = yfilter;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception.yfilter = yfilter;
    }
    if(value_path == "destination-node-exception")
    {
        destination_node_exception.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec" || name == "ignore-lsp-id" || name == "processing-node-exception" || name == "penultimate-node-exception" || name == "destination-node-exception" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::Fec()
    :
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "fec"; yang_parent_name = "lsp-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::~Fec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_data() const
{
    return fec_lsp_id.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
        fec_lsp_id.value_namespace = name_space;
        fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
        fec_vrf.value_namespace = name_space;
        fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-lsp-id" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-vrf")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "fec"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| p2p_lsp_destination.is_set
	|| fec_destination_p2mp_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
        p2p_lsp_destination.value_namespace = name_space;
        p2p_lsp_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
        fec_destination_p2mp_id.value_namespace = name_space;
        fec_destination_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination.yfilter = yfilter;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "p2p-lsp-destination" || name == "fec-destination-p2mp-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::AttributeSetP2Mpte()
    :
    fast_reroute{YType::boolean, "fast-reroute"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"}
    	,
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>())
{
    affinity->parent = this;

    yang_name = "attribute-set-p2mpte"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::~AttributeSetP2Mpte()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_data() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    return fast_reroute.is_set
	|| frr_bandwidth_protection.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| is_priority_configured.is_set
	|| configured_bandwidth.is_set
	|| dste_class_type.is_set
	|| is_bandwidth_configured.is_set
	|| is_affinity_configured.is_set
	|| (affinity !=  nullptr && affinity->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute.yfilter)
	|| ydk::is_set(frr_bandwidth_protection.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_priority_configured.yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2mpte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute.is_set || is_set(fast_reroute.yfilter)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.yfilter)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "tunnel-id")
    {
        for(auto const & c : tunnel_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    for (auto const & c : tunnel_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
        fast_reroute.value_namespace = name_space;
        fast_reroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
        frr_bandwidth_protection.value_namespace = name_space;
        frr_bandwidth_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
        is_priority_configured.value_namespace = name_space;
        is_priority_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute")
    {
        fast_reroute.yfilter = yfilter;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured.yfilter = yfilter;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "tunnel-id" || name == "fast-reroute" || name == "frr-bandwidth-protection" || name == "setup-priority" || name == "hold-priority" || name == "is-priority-configured" || name == "configured-bandwidth" || name == "dste-class-type" || name == "is-bandwidth-configured" || name == "is-affinity-configured")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-p2mpte"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_data() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        for(auto const & c : constraint_extended_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        for(auto const & c : extended_forward_ref_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : constraint_extended_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_forward_ref_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-p2mpte"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::~TunnelId()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::AttributeSetApsPp()
    :
    snc_mode{YType::enumeration, "snc-mode"},
    tcm_id{YType::uint32, "tcm-id"},
    protection_type{YType::enumeration, "protection-type"},
    protection_mode{YType::enumeration, "protection-mode"},
    wait_to_restore_time{YType::uint32, "wait-to-restore-time"},
    hold_off_time{YType::uint32, "hold-off-time"},
    path_prot_profile_type{YType::enumeration, "path-prot-profile-type"},
    restoration_style{YType::enumeration, "restoration-style"}
    	,
    revert_schedule(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>())
{
    revert_schedule->parent = this;

    yang_name = "attribute-set-aps-pp"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::~AttributeSetApsPp()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_data() const
{
    return snc_mode.is_set
	|| tcm_id.is_set
	|| protection_type.is_set
	|| protection_mode.is_set
	|| wait_to_restore_time.is_set
	|| hold_off_time.is_set
	|| path_prot_profile_type.is_set
	|| restoration_style.is_set
	|| (revert_schedule !=  nullptr && revert_schedule->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snc_mode.yfilter)
	|| ydk::is_set(tcm_id.yfilter)
	|| ydk::is_set(protection_type.yfilter)
	|| ydk::is_set(protection_mode.yfilter)
	|| ydk::is_set(wait_to_restore_time.yfilter)
	|| ydk::is_set(hold_off_time.yfilter)
	|| ydk::is_set(path_prot_profile_type.yfilter)
	|| ydk::is_set(restoration_style.yfilter)
	|| (revert_schedule !=  nullptr && revert_schedule->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-aps-pp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snc_mode.is_set || is_set(snc_mode.yfilter)) leaf_name_data.push_back(snc_mode.get_name_leafdata());
    if (tcm_id.is_set || is_set(tcm_id.yfilter)) leaf_name_data.push_back(tcm_id.get_name_leafdata());
    if (protection_type.is_set || is_set(protection_type.yfilter)) leaf_name_data.push_back(protection_type.get_name_leafdata());
    if (protection_mode.is_set || is_set(protection_mode.yfilter)) leaf_name_data.push_back(protection_mode.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());
    if (hold_off_time.is_set || is_set(hold_off_time.yfilter)) leaf_name_data.push_back(hold_off_time.get_name_leafdata());
    if (path_prot_profile_type.is_set || is_set(path_prot_profile_type.yfilter)) leaf_name_data.push_back(path_prot_profile_type.get_name_leafdata());
    if (restoration_style.is_set || is_set(restoration_style.yfilter)) leaf_name_data.push_back(restoration_style.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "revert-schedule")
    {
        if(revert_schedule == nullptr)
        {
            revert_schedule = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>();
        }
        return revert_schedule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(revert_schedule != nullptr)
    {
        children["revert-schedule"] = revert_schedule;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snc-mode")
    {
        snc_mode = value;
        snc_mode.value_namespace = name_space;
        snc_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcm-id")
    {
        tcm_id = value;
        tcm_id.value_namespace = name_space;
        tcm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-type")
    {
        protection_type = value;
        protection_type.value_namespace = name_space;
        protection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-mode")
    {
        protection_mode = value;
        protection_mode.value_namespace = name_space;
        protection_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
        wait_to_restore_time.value_namespace = name_space;
        wait_to_restore_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-off-time")
    {
        hold_off_time = value;
        hold_off_time.value_namespace = name_space;
        hold_off_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type = value;
        path_prot_profile_type.value_namespace = name_space;
        path_prot_profile_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restoration-style")
    {
        restoration_style = value;
        restoration_style.value_namespace = name_space;
        restoration_style.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snc-mode")
    {
        snc_mode.yfilter = yfilter;
    }
    if(value_path == "tcm-id")
    {
        tcm_id.yfilter = yfilter;
    }
    if(value_path == "protection-type")
    {
        protection_type.yfilter = yfilter;
    }
    if(value_path == "protection-mode")
    {
        protection_mode.yfilter = yfilter;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time.yfilter = yfilter;
    }
    if(value_path == "hold-off-time")
    {
        hold_off_time.yfilter = yfilter;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type.yfilter = yfilter;
    }
    if(value_path == "restoration-style")
    {
        restoration_style.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "revert-schedule" || name == "snc-mode" || name == "tcm-id" || name == "protection-type" || name == "protection-mode" || name == "wait-to-restore-time" || name == "hold-off-time" || name == "path-prot-profile-type" || name == "restoration-style")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::RevertSchedule()
    :
    schedulename{YType::str, "schedulename"},
    schedule_date{YType::uint32, "schedule-date"},
    schedule_frequency{YType::enumeration, "schedule-frequency"},
    duration{YType::uint32, "duration"},
    max_tries{YType::uint32, "max-tries"}
{

    yang_name = "revert-schedule"; yang_parent_name = "attribute-set-aps-pp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::~RevertSchedule()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_data() const
{
    return schedulename.is_set
	|| schedule_date.is_set
	|| schedule_frequency.is_set
	|| duration.is_set
	|| max_tries.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(schedulename.yfilter)
	|| ydk::is_set(schedule_date.yfilter)
	|| ydk::is_set(schedule_frequency.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(max_tries.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schedulename.is_set || is_set(schedulename.yfilter)) leaf_name_data.push_back(schedulename.get_name_leafdata());
    if (schedule_date.is_set || is_set(schedule_date.yfilter)) leaf_name_data.push_back(schedule_date.get_name_leafdata());
    if (schedule_frequency.is_set || is_set(schedule_frequency.yfilter)) leaf_name_data.push_back(schedule_frequency.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (max_tries.is_set || is_set(max_tries.yfilter)) leaf_name_data.push_back(max_tries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "schedulename")
    {
        schedulename = value;
        schedulename.value_namespace = name_space;
        schedulename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedule-date")
    {
        schedule_date = value;
        schedule_date.value_namespace = name_space;
        schedule_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedule-frequency")
    {
        schedule_frequency = value;
        schedule_frequency.value_namespace = name_space;
        schedule_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-tries")
    {
        max_tries = value;
        max_tries.value_namespace = name_space;
        max_tries.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "schedulename")
    {
        schedulename.yfilter = yfilter;
    }
    if(value_path == "schedule-date")
    {
        schedule_date.yfilter = yfilter;
    }
    if(value_path == "schedule-frequency")
    {
        schedule_frequency.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "max-tries")
    {
        max_tries.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedulename" || name == "schedule-date" || name == "schedule-frequency" || name == "duration" || name == "max-tries")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::AttributeSetP2PTe()
    :
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    path_selection_segment_routing_adjacency_protection{YType::enumeration, "path-selection-segment-routing-adjacency-protection"},
    is_path_selection_segment_routing_adjacency_protection_configured{YType::boolean, "is-path-selection-segment-routing-adjacency-protection-configured"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_selection_invalidation_action{YType::enumeration, "path-selection-invalidation-action"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    is_path_selection_metric_configured{YType::boolean, "is-path-selection-metric-configured"},
    path_selection_segment_routing_margin{YType::uint32, "path-selection-segment-routing-margin"},
    is_path_selection_segment_routing_margin_relative{YType::boolean, "is-path-selection-segment-routing-margin-relative"},
    is_path_selection_segment_routing_margin_configured{YType::boolean, "is-path-selection-segment-routing-margin-configured"},
    path_selection_segment_routing_segment_limit{YType::uint32, "path-selection-segment-routing-segment-limit"},
    is_path_selection_segment_routing_segment_limit_configured{YType::boolean, "is-path-selection-segment-routing-segment-limit-configured"},
    is_path_select_configured{YType::boolean, "is-path-select-configured"},
    is_prepend_list_configured{YType::boolean, "is-prepend-list-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"}
    	,
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>())
	,logging(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>())
	,prepend_list(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>())
{
    affinity->parent = this;
    logging->parent = this;
    prepend_list->parent = this;

    yang_name = "attribute-set-p2p-te"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::~AttributeSetP2PTe()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_data() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    return is_affinity_configured.is_set
	|| path_selection_segment_routing_adjacency_protection.is_set
	|| is_path_selection_segment_routing_adjacency_protection_configured.is_set
	|| path_invalidation_timeout.is_set
	|| path_selection_invalidation_action.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| path_selection_metric.is_set
	|| is_path_selection_metric_configured.is_set
	|| path_selection_segment_routing_margin.is_set
	|| is_path_selection_segment_routing_margin_relative.is_set
	|| is_path_selection_segment_routing_margin_configured.is_set
	|| path_selection_segment_routing_segment_limit.is_set
	|| is_path_selection_segment_routing_segment_limit_configured.is_set
	|| is_path_select_configured.is_set
	|| is_prepend_list_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| pcedp_group_id.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| pcebd_source_address.is_set
	|| pcebd_group_id.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (prepend_list !=  nullptr && prepend_list->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(path_selection_segment_routing_adjacency_protection.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_adjacency_protection_configured.yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter)
	|| ydk::is_set(path_selection_invalidation_action.yfilter)
	|| ydk::is_set(is_path_invalidation_timeout_configured.yfilter)
	|| ydk::is_set(is_path_invalidation_action_configured.yfilter)
	|| ydk::is_set(path_selection_metric.yfilter)
	|| ydk::is_set(is_path_selection_metric_configured.yfilter)
	|| ydk::is_set(path_selection_segment_routing_margin.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_margin_relative.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_margin_configured.yfilter)
	|| ydk::is_set(path_selection_segment_routing_segment_limit.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_segment_limit_configured.yfilter)
	|| ydk::is_set(is_path_select_configured.yfilter)
	|| ydk::is_set(is_prepend_list_configured.yfilter)
	|| ydk::is_set(is_pce_configured.yfilter)
	|| ydk::is_set(is_pce_disj_source_configured.yfilter)
	|| ydk::is_set(is_pce_disj_type_configured.yfilter)
	|| ydk::is_set(is_pce_disj_group_id_configured.yfilter)
	|| ydk::is_set(pcedp_source_address.yfilter)
	|| ydk::is_set(pcedp_type.yfilter)
	|| ydk::is_set(pcedp_group_id.yfilter)
	|| ydk::is_set(is_pceb_dj_source_configured.yfilter)
	|| ydk::is_set(is_pcebd_group_id_configured.yfilter)
	|| ydk::is_set(pcebd_source_address.yfilter)
	|| ydk::is_set(pcebd_group_id.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (prepend_list !=  nullptr && prepend_list->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2p-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (path_selection_segment_routing_adjacency_protection.is_set || is_set(path_selection_segment_routing_adjacency_protection.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_adjacency_protection.get_name_leafdata());
    if (is_path_selection_segment_routing_adjacency_protection_configured.is_set || is_set(is_path_selection_segment_routing_adjacency_protection_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_adjacency_protection_configured.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_selection_invalidation_action.is_set || is_set(path_selection_invalidation_action.yfilter)) leaf_name_data.push_back(path_selection_invalidation_action.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.yfilter)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (is_path_selection_metric_configured.is_set || is_set(is_path_selection_metric_configured.yfilter)) leaf_name_data.push_back(is_path_selection_metric_configured.get_name_leafdata());
    if (path_selection_segment_routing_margin.is_set || is_set(path_selection_segment_routing_margin.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_margin.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_relative.is_set || is_set(is_path_selection_segment_routing_margin_relative.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_relative.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_configured.is_set || is_set(is_path_selection_segment_routing_margin_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_configured.get_name_leafdata());
    if (path_selection_segment_routing_segment_limit.is_set || is_set(path_selection_segment_routing_segment_limit.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_segment_limit.get_name_leafdata());
    if (is_path_selection_segment_routing_segment_limit_configured.is_set || is_set(is_path_selection_segment_routing_segment_limit_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_segment_limit_configured.get_name_leafdata());
    if (is_path_select_configured.is_set || is_set(is_path_select_configured.yfilter)) leaf_name_data.push_back(is_path_select_configured.get_name_leafdata());
    if (is_prepend_list_configured.is_set || is_set(is_prepend_list_configured.yfilter)) leaf_name_data.push_back(is_prepend_list_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.yfilter)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.yfilter)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.yfilter)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.yfilter)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.yfilter)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.yfilter)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.yfilter)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.yfilter)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "prepend-list")
    {
        if(prepend_list == nullptr)
        {
            prepend_list = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>();
        }
        return prepend_list;
    }

    if(child_yang_name == "tunnel-id")
    {
        for(auto const & c : tunnel_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(prepend_list != nullptr)
    {
        children["prepend-list"] = prepend_list;
    }

    for (auto const & c : tunnel_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection = value;
        path_selection_segment_routing_adjacency_protection.value_namespace = name_space;
        path_selection_segment_routing_adjacency_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-adjacency-protection-configured")
    {
        is_path_selection_segment_routing_adjacency_protection_configured = value;
        is_path_selection_segment_routing_adjacency_protection_configured.value_namespace = name_space;
        is_path_selection_segment_routing_adjacency_protection_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-invalidation-action")
    {
        path_selection_invalidation_action = value;
        path_selection_invalidation_action.value_namespace = name_space;
        path_selection_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
        is_path_invalidation_timeout_configured.value_namespace = name_space;
        is_path_invalidation_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
        is_path_invalidation_action_configured.value_namespace = name_space;
        is_path_invalidation_action_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
        path_selection_metric.value_namespace = name_space;
        path_selection_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-metric-configured")
    {
        is_path_selection_metric_configured = value;
        is_path_selection_metric_configured.value_namespace = name_space;
        is_path_selection_metric_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-margin")
    {
        path_selection_segment_routing_margin = value;
        path_selection_segment_routing_margin.value_namespace = name_space;
        path_selection_segment_routing_margin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-margin-relative")
    {
        is_path_selection_segment_routing_margin_relative = value;
        is_path_selection_segment_routing_margin_relative.value_namespace = name_space;
        is_path_selection_segment_routing_margin_relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-margin-configured")
    {
        is_path_selection_segment_routing_margin_configured = value;
        is_path_selection_segment_routing_margin_configured.value_namespace = name_space;
        is_path_selection_segment_routing_margin_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-segment-limit")
    {
        path_selection_segment_routing_segment_limit = value;
        path_selection_segment_routing_segment_limit.value_namespace = name_space;
        path_selection_segment_routing_segment_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-segment-limit-configured")
    {
        is_path_selection_segment_routing_segment_limit_configured = value;
        is_path_selection_segment_routing_segment_limit_configured.value_namespace = name_space;
        is_path_selection_segment_routing_segment_limit_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-select-configured")
    {
        is_path_select_configured = value;
        is_path_select_configured.value_namespace = name_space;
        is_path_select_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-prepend-list-configured")
    {
        is_prepend_list_configured = value;
        is_prepend_list_configured.value_namespace = name_space;
        is_prepend_list_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
        is_pce_configured.value_namespace = name_space;
        is_pce_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
        is_pce_disj_source_configured.value_namespace = name_space;
        is_pce_disj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
        is_pce_disj_type_configured.value_namespace = name_space;
        is_pce_disj_type_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
        is_pce_disj_group_id_configured.value_namespace = name_space;
        is_pce_disj_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
        pcedp_source_address.value_namespace = name_space;
        pcedp_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
        pcedp_type.value_namespace = name_space;
        pcedp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
        pcedp_group_id.value_namespace = name_space;
        pcedp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
        is_pceb_dj_source_configured.value_namespace = name_space;
        is_pceb_dj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
        is_pcebd_group_id_configured.value_namespace = name_space;
        is_pcebd_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
        pcebd_source_address.value_namespace = name_space;
        pcebd_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
        pcebd_group_id.value_namespace = name_space;
        pcebd_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-adjacency-protection-configured")
    {
        is_path_selection_segment_routing_adjacency_protection_configured.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
    if(value_path == "path-selection-invalidation-action")
    {
        path_selection_invalidation_action.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured.yfilter = yfilter;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-metric-configured")
    {
        is_path_selection_metric_configured.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-margin")
    {
        path_selection_segment_routing_margin.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-margin-relative")
    {
        is_path_selection_segment_routing_margin_relative.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-margin-configured")
    {
        is_path_selection_segment_routing_margin_configured.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-segment-limit")
    {
        path_selection_segment_routing_segment_limit.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-segment-limit-configured")
    {
        is_path_selection_segment_routing_segment_limit_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-select-configured")
    {
        is_path_select_configured.yfilter = yfilter;
    }
    if(value_path == "is-prepend-list-configured")
    {
        is_prepend_list_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address.yfilter = yfilter;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type.yfilter = yfilter;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id.yfilter = yfilter;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address.yfilter = yfilter;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "prepend-list" || name == "tunnel-id" || name == "is-affinity-configured" || name == "path-selection-segment-routing-adjacency-protection" || name == "is-path-selection-segment-routing-adjacency-protection-configured" || name == "path-invalidation-timeout" || name == "path-selection-invalidation-action" || name == "is-path-invalidation-timeout-configured" || name == "is-path-invalidation-action-configured" || name == "path-selection-metric" || name == "is-path-selection-metric-configured" || name == "path-selection-segment-routing-margin" || name == "is-path-selection-segment-routing-margin-relative" || name == "is-path-selection-segment-routing-margin-configured" || name == "path-selection-segment-routing-segment-limit" || name == "is-path-selection-segment-routing-segment-limit-configured" || name == "is-path-select-configured" || name == "is-prepend-list-configured" || name == "is-pce-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pce-disj-group-id-configured" || name == "pcedp-source-address" || name == "pcedp-type" || name == "pcedp-group-id" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "pcebd-source-address" || name == "pcebd-group-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_data() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        for(auto const & c : constraint_extended_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        for(auto const & c : extended_forward_ref_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : constraint_extended_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_forward_ref_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::Logging()
    :
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    all_logging_enabled{YType::boolean, "all-logging-enabled"}
{

    yang_name = "logging"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::~Logging()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_data() const
{
    return lsp_state.is_set
	|| s2l_state.is_set
	|| lsp_re_route.is_set
	|| lsp_re_opt.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| all_logging_enabled.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(s2l_state.yfilter)
	|| ydk::is_set(lsp_re_route.yfilter)
	|| ydk::is_set(lsp_re_opt.yfilter)
	|| ydk::is_set(lsp_insufficient_bw.yfilter)
	|| ydk::is_set(lsp_bandwidth_change.yfilter)
	|| ydk::is_set(lsp_pcalc_failure_logging_enabled.yfilter)
	|| ydk::is_set(all_logging_enabled.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
        s2l_state.value_namespace = name_space;
        s2l_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
        lsp_re_route.value_namespace = name_space;
        lsp_re_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
        lsp_re_opt.value_namespace = name_space;
        lsp_re_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
        lsp_insufficient_bw.value_namespace = name_space;
        lsp_insufficient_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
        lsp_bandwidth_change.value_namespace = name_space;
        lsp_bandwidth_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
        lsp_pcalc_failure_logging_enabled.value_namespace = name_space;
        lsp_pcalc_failure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
        all_logging_enabled.value_namespace = name_space;
        all_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
    if(value_path == "s2l-state")
    {
        s2l_state.yfilter = yfilter;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route.yfilter = yfilter;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt.yfilter = yfilter;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change.yfilter = yfilter;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-state" || name == "s2l-state" || name == "lsp-re-route" || name == "lsp-re-opt" || name == "lsp-insufficient-bw" || name == "lsp-bandwidth-change" || name == "lsp-pcalc-failure-logging-enabled" || name == "all-logging-enabled")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependList()
{

    yang_name = "prepend-list"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::~PrependList()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_data() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_operation() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prepend-entry")
    {
        for(auto const & c : prepend_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry>();
        c->parent = this;
        prepend_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prepend_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepend-entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::PrependEntry()
    :
    type{YType::enumeration, "type"},
    index_{YType::uint32, "index"},
    next_label{YType::uint32, "next-label"}
{

    yang_name = "prepend-entry"; yang_parent_name = "prepend-list"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::~PrependEntry()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_data() const
{
    return type.is_set
	|| index_.is_set
	|| next_label.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(next_label.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (next_label.is_set || is_set(next_label.yfilter)) leaf_name_data.push_back(next_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "next-label")
    {
        next_label = value;
        next_label.value_namespace = name_space;
        next_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "next-label")
    {
        next_label.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "index" || name == "next-label")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::~TunnelId()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::XroAttributeSet()
    :
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_attribute_set_name_crc32{YType::uint32, "tunnel-attribute-set-name-crc32"}
    	,
    attribute_set_union(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion>())
{
    attribute_set_union->parent = this;

    yang_name = "xro-attribute-set"; yang_parent_name = "active-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::~XroAttributeSet()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::has_data() const
{
    return tunnel_attribute_set_name.is_set
	|| tunnel_attribute_set_name_crc32.is_set
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name_crc32.yfilter)
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-attribute-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (tunnel_attribute_set_name_crc32.is_set || is_set(tunnel_attribute_set_name_crc32.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name_crc32.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-union")
    {
        if(attribute_set_union == nullptr)
        {
            attribute_set_union = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion>();
        }
        return attribute_set_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_set_union != nullptr)
    {
        children["attribute-set-union"] = attribute_set_union;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
        tunnel_attribute_set_name.value_namespace = name_space;
        tunnel_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-attribute-set-name-crc32")
    {
        tunnel_attribute_set_name_crc32 = value;
        tunnel_attribute_set_name_crc32.value_namespace = name_space;
        tunnel_attribute_set_name_crc32.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-attribute-set-name-crc32")
    {
        tunnel_attribute_set_name_crc32.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-union" || name == "tunnel-attribute-set-name" || name == "tunnel-attribute-set-name-crc32")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetUnion()
    :
    tunnel_attribute_set_type{YType::enumeration, "tunnel-attribute-set-type"}
    	,
    attribute_set_path_option(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption>())
	,attribute_set_autobackup(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup>())
	,attribute_set_automesh(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh>())
	,attribute_set_xro(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro>())
	,attribute_set_p2mpte(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte>())
	,attribute_set_aps_pp(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp>())
	,attribute_set_p2p_te(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe>())
{
    attribute_set_path_option->parent = this;
    attribute_set_autobackup->parent = this;
    attribute_set_automesh->parent = this;
    attribute_set_xro->parent = this;
    attribute_set_p2mpte->parent = this;
    attribute_set_aps_pp->parent = this;
    attribute_set_p2p_te->parent = this;

    yang_name = "attribute-set-union"; yang_parent_name = "xro-attribute-set"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::~AttributeSetUnion()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::has_data() const
{
    return tunnel_attribute_set_type.is_set
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_data())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_data())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_data())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_data())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_data())
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_data())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_attribute_set_type.yfilter)
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_operation())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_operation())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_operation())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_operation())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_operation())
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_operation())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_type.is_set || is_set(tunnel_attribute_set_type.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-path-option")
    {
        if(attribute_set_path_option == nullptr)
        {
            attribute_set_path_option = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption>();
        }
        return attribute_set_path_option;
    }

    if(child_yang_name == "attribute-set-autobackup")
    {
        if(attribute_set_autobackup == nullptr)
        {
            attribute_set_autobackup = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup>();
        }
        return attribute_set_autobackup;
    }

    if(child_yang_name == "attribute-set-automesh")
    {
        if(attribute_set_automesh == nullptr)
        {
            attribute_set_automesh = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh>();
        }
        return attribute_set_automesh;
    }

    if(child_yang_name == "attribute-set-xro")
    {
        if(attribute_set_xro == nullptr)
        {
            attribute_set_xro = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro>();
        }
        return attribute_set_xro;
    }

    if(child_yang_name == "attribute-set-p2mpte")
    {
        if(attribute_set_p2mpte == nullptr)
        {
            attribute_set_p2mpte = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte>();
        }
        return attribute_set_p2mpte;
    }

    if(child_yang_name == "attribute-set-aps-pp")
    {
        if(attribute_set_aps_pp == nullptr)
        {
            attribute_set_aps_pp = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp>();
        }
        return attribute_set_aps_pp;
    }

    if(child_yang_name == "attribute-set-p2p-te")
    {
        if(attribute_set_p2p_te == nullptr)
        {
            attribute_set_p2p_te = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe>();
        }
        return attribute_set_p2p_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_set_path_option != nullptr)
    {
        children["attribute-set-path-option"] = attribute_set_path_option;
    }

    if(attribute_set_autobackup != nullptr)
    {
        children["attribute-set-autobackup"] = attribute_set_autobackup;
    }

    if(attribute_set_automesh != nullptr)
    {
        children["attribute-set-automesh"] = attribute_set_automesh;
    }

    if(attribute_set_xro != nullptr)
    {
        children["attribute-set-xro"] = attribute_set_xro;
    }

    if(attribute_set_p2mpte != nullptr)
    {
        children["attribute-set-p2mpte"] = attribute_set_p2mpte;
    }

    if(attribute_set_aps_pp != nullptr)
    {
        children["attribute-set-aps-pp"] = attribute_set_aps_pp;
    }

    if(attribute_set_p2p_te != nullptr)
    {
        children["attribute-set-p2p-te"] = attribute_set_p2p_te;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type = value;
        tunnel_attribute_set_type.value_namespace = name_space;
        tunnel_attribute_set_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-path-option" || name == "attribute-set-autobackup" || name == "attribute-set-automesh" || name == "attribute-set-xro" || name == "attribute-set-p2mpte" || name == "attribute-set-aps-pp" || name == "attribute-set-p2p-te" || name == "tunnel-attribute-set-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::AttributeSetPathOption()
    :
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    cost_limit{YType::uint32, "cost-limit"},
    dste_class_type{YType::uint8, "dste-class-type"},
    bandwidth_type{YType::enumeration, "bandwidth-type"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_cost_limit_configured{YType::boolean, "is-cost-limit-configured"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    generation{YType::uint32, "generation"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_invalidation_action{YType::uint32, "path-invalidation-action"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    exclude_list_name{YType::str, "exclude-list-name"},
    is_exclude_list_name_configured{YType::boolean, "is-exclude-list-name-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"},
    is_bfd_reverse_pat_configured{YType::boolean, "is-bfd-reverse-pat-configured"}
    	,
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>())
	,bfd_reverse_path(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>())
{
    affinity->parent = this;
    bfd_reverse_path->parent = this;

    yang_name = "attribute-set-path-option"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::~AttributeSetPathOption()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::has_data() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<version_info.size(); index++)
    {
        if(version_info[index]->has_data())
            return true;
    }
    return configured_bandwidth.is_set
	|| cost_limit.is_set
	|| dste_class_type.is_set
	|| bandwidth_type.is_set
	|| is_bandwidth_configured.is_set
	|| is_cost_limit_configured.is_set
	|| is_affinity_configured.is_set
	|| generation.is_set
	|| path_invalidation_timeout.is_set
	|| path_invalidation_action.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| exclude_list_name.is_set
	|| is_exclude_list_name_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| pcedp_group_id.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| pcebd_source_address.is_set
	|| pcebd_group_id.is_set
	|| is_bfd_reverse_pat_configured.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<version_info.size(); index++)
    {
        if(version_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(cost_limit.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(is_cost_limit_configured.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter)
	|| ydk::is_set(path_invalidation_action.yfilter)
	|| ydk::is_set(is_path_invalidation_timeout_configured.yfilter)
	|| ydk::is_set(is_path_invalidation_action_configured.yfilter)
	|| ydk::is_set(exclude_list_name.yfilter)
	|| ydk::is_set(is_exclude_list_name_configured.yfilter)
	|| ydk::is_set(is_pce_configured.yfilter)
	|| ydk::is_set(is_pce_disj_source_configured.yfilter)
	|| ydk::is_set(is_pce_disj_type_configured.yfilter)
	|| ydk::is_set(is_pce_disj_group_id_configured.yfilter)
	|| ydk::is_set(pcedp_source_address.yfilter)
	|| ydk::is_set(pcedp_type.yfilter)
	|| ydk::is_set(pcedp_group_id.yfilter)
	|| ydk::is_set(is_pceb_dj_source_configured.yfilter)
	|| ydk::is_set(is_pcebd_group_id_configured.yfilter)
	|| ydk::is_set(pcebd_source_address.yfilter)
	|| ydk::is_set(pcebd_group_id.yfilter)
	|| ydk::is_set(is_bfd_reverse_pat_configured.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-path-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (cost_limit.is_set || is_set(cost_limit.yfilter)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_cost_limit_configured.is_set || is_set(is_cost_limit_configured.yfilter)) leaf_name_data.push_back(is_cost_limit_configured.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_invalidation_action.is_set || is_set(path_invalidation_action.yfilter)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (exclude_list_name.is_set || is_set(exclude_list_name.yfilter)) leaf_name_data.push_back(exclude_list_name.get_name_leafdata());
    if (is_exclude_list_name_configured.is_set || is_set(is_exclude_list_name_configured.yfilter)) leaf_name_data.push_back(is_exclude_list_name_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.yfilter)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.yfilter)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.yfilter)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.yfilter)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.yfilter)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.yfilter)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.yfilter)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.yfilter)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());
    if (is_bfd_reverse_pat_configured.is_set || is_set(is_bfd_reverse_pat_configured.yfilter)) leaf_name_data.push_back(is_bfd_reverse_pat_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path == nullptr)
        {
            bfd_reverse_path = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>();
        }
        return bfd_reverse_path;
    }

    if(child_yang_name == "tunnel-id")
    {
        for(auto const & c : tunnel_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    if(child_yang_name == "version-info")
    {
        for(auto const & c : version_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo>();
        c->parent = this;
        version_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(bfd_reverse_path != nullptr)
    {
        children["bfd-reverse-path"] = bfd_reverse_path;
    }

    for (auto const & c : tunnel_id)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : version_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-limit")
    {
        cost_limit = value;
        cost_limit.value_namespace = name_space;
        cost_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured = value;
        is_cost_limit_configured.value_namespace = name_space;
        is_cost_limit_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation")
    {
        generation = value;
        generation.value_namespace = name_space;
        generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
        path_invalidation_action.value_namespace = name_space;
        path_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
        is_path_invalidation_timeout_configured.value_namespace = name_space;
        is_path_invalidation_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
        is_path_invalidation_action_configured.value_namespace = name_space;
        is_path_invalidation_action_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name = value;
        exclude_list_name.value_namespace = name_space;
        exclude_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured = value;
        is_exclude_list_name_configured.value_namespace = name_space;
        is_exclude_list_name_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
        is_pce_configured.value_namespace = name_space;
        is_pce_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
        is_pce_disj_source_configured.value_namespace = name_space;
        is_pce_disj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
        is_pce_disj_type_configured.value_namespace = name_space;
        is_pce_disj_type_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
        is_pce_disj_group_id_configured.value_namespace = name_space;
        is_pce_disj_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
        pcedp_source_address.value_namespace = name_space;
        pcedp_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
        pcedp_type.value_namespace = name_space;
        pcedp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
        pcedp_group_id.value_namespace = name_space;
        pcedp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
        is_pceb_dj_source_configured.value_namespace = name_space;
        is_pceb_dj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
        is_pcebd_group_id_configured.value_namespace = name_space;
        is_pcebd_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
        pcebd_source_address.value_namespace = name_space;
        pcebd_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
        pcebd_group_id.value_namespace = name_space;
        pcebd_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured = value;
        is_bfd_reverse_pat_configured.value_namespace = name_space;
        is_bfd_reverse_pat_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "cost-limit")
    {
        cost_limit.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "generation")
    {
        generation.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured.yfilter = yfilter;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name.yfilter = yfilter;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address.yfilter = yfilter;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type.yfilter = yfilter;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id.yfilter = yfilter;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address.yfilter = yfilter;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id.yfilter = yfilter;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "bfd-reverse-path" || name == "tunnel-id" || name == "version-info" || name == "configured-bandwidth" || name == "cost-limit" || name == "dste-class-type" || name == "bandwidth-type" || name == "is-bandwidth-configured" || name == "is-cost-limit-configured" || name == "is-affinity-configured" || name == "generation" || name == "path-invalidation-timeout" || name == "path-invalidation-action" || name == "is-path-invalidation-timeout-configured" || name == "is-path-invalidation-action-configured" || name == "exclude-list-name" || name == "is-exclude-list-name-configured" || name == "is-pce-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pce-disj-group-id-configured" || name == "pcedp-source-address" || name == "pcedp-type" || name == "pcedp-group-id" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "pcebd-source-address" || name == "pcebd-group-id" || name == "is-bfd-reverse-pat-configured")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_data() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        for(auto const & c : constraint_extended_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        for(auto const & c : extended_forward_ref_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : constraint_extended_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_forward_ref_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::BfdReversePath()
    :
    path_type{YType::enumeration, "path-type"},
    binding_label{YType::uint32, "binding-label"}
{

    yang_name = "bfd-reverse-path"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::~BfdReversePath()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_data() const
{
    return path_type.is_set
	|| binding_label.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(binding_label.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-type" || name == "binding-label")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::~TunnelId()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::VersionInfo()
    :
    attribute_type{YType::str, "attribute-type"},
    generation{YType::uint32, "generation"},
    is_default{YType::boolean, "is-default"}
{

    yang_name = "version-info"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::~VersionInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_data() const
{
    return attribute_type.is_set
	|| generation.is_set
	|| is_default.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_type.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(is_default.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.yfilter)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.yfilter)) leaf_name_data.push_back(is_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-type")
    {
        attribute_type = value;
        attribute_type.value_namespace = name_space;
        attribute_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation")
    {
        generation = value;
        generation.value_namespace = name_space;
        generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default")
    {
        is_default = value;
        is_default.value_namespace = name_space;
        is_default.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-type")
    {
        attribute_type.yfilter = yfilter;
    }
    if(value_path == "generation")
    {
        generation.yfilter = yfilter;
    }
    if(value_path == "is-default")
    {
        is_default.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-type" || name == "generation" || name == "is-default")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::AttributeSetAutobackup()
    :
    is_signalled_name_configured{YType::boolean, "is-signalled-name-configured"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    policy_class{YType::uint8, "policy-class"},
    is_policyclass_configured{YType::boolean, "is-policyclass-configured"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    record_route{YType::boolean, "record-route"}
    	,
    signalled_name(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>())
	,affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>())
	,logging(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>())
{
    signalled_name->parent = this;
    affinity->parent = this;
    logging->parent = this;

    yang_name = "attribute-set-autobackup"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::~AttributeSetAutobackup()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_data() const
{
    for (std::size_t index=0; index<policy_class_entry.size(); index++)
    {
        if(policy_class_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<protected_interface.size(); index++)
    {
        if(protected_interface[index]->has_data())
            return true;
    }
    return is_signalled_name_configured.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| is_priority_configured.is_set
	|| policy_class.is_set
	|| is_policyclass_configured.is_set
	|| is_affinity_configured.is_set
	|| record_route.is_set
	|| (signalled_name !=  nullptr && signalled_name->has_data())
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_operation() const
{
    for (std::size_t index=0; index<policy_class_entry.size(); index++)
    {
        if(policy_class_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<protected_interface.size(); index++)
    {
        if(protected_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_signalled_name_configured.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_priority_configured.yfilter)
	|| ydk::is_set(policy_class.yfilter)
	|| ydk::is_set(is_policyclass_configured.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| (signalled_name !=  nullptr && signalled_name->has_operation())
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-autobackup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_signalled_name_configured.is_set || is_set(is_signalled_name_configured.yfilter)) leaf_name_data.push_back(is_signalled_name_configured.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.yfilter)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.yfilter)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signalled-name")
    {
        if(signalled_name == nullptr)
        {
            signalled_name = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>();
        }
        return signalled_name;
    }

    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "policy-class-entry")
    {
        for(auto const & c : policy_class_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry>();
        c->parent = this;
        policy_class_entry.push_back(c);
        return c;
    }

    if(child_yang_name == "tunnel-id")
    {
        for(auto const & c : tunnel_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    if(child_yang_name == "protected-interface")
    {
        for(auto const & c : protected_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface>();
        c->parent = this;
        protected_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(signalled_name != nullptr)
    {
        children["signalled-name"] = signalled_name;
    }

    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    for (auto const & c : policy_class_entry)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tunnel_id)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : protected_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-signalled-name-configured")
    {
        is_signalled_name_configured = value;
        is_signalled_name_configured.value_namespace = name_space;
        is_signalled_name_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
        is_priority_configured.value_namespace = name_space;
        is_priority_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-class")
    {
        policy_class = value;
        policy_class.value_namespace = name_space;
        policy_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured = value;
        is_policyclass_configured.value_namespace = name_space;
        is_policyclass_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-signalled-name-configured")
    {
        is_signalled_name_configured.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured.yfilter = yfilter;
    }
    if(value_path == "policy-class")
    {
        policy_class.yfilter = yfilter;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signalled-name" || name == "affinity" || name == "logging" || name == "policy-class-entry" || name == "tunnel-id" || name == "protected-interface" || name == "is-signalled-name-configured" || name == "setup-priority" || name == "hold-priority" || name == "is-priority-configured" || name == "policy-class" || name == "is-policyclass-configured" || name == "is-affinity-configured" || name == "record-route")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::SignalledName()
    :
    name{YType::str, "name"},
    source_type{YType::enumeration, "source-type"},
    protected_interface_type{YType::enumeration, "protected-interface-type"},
    is_mp_addresses{YType::boolean, "is-mp-addresses"}
{

    yang_name = "signalled-name"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::~SignalledName()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_data() const
{
    return name.is_set
	|| source_type.is_set
	|| protected_interface_type.is_set
	|| is_mp_addresses.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(source_type.yfilter)
	|| ydk::is_set(protected_interface_type.yfilter)
	|| ydk::is_set(is_mp_addresses.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalled-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (source_type.is_set || is_set(source_type.yfilter)) leaf_name_data.push_back(source_type.get_name_leafdata());
    if (protected_interface_type.is_set || is_set(protected_interface_type.yfilter)) leaf_name_data.push_back(protected_interface_type.get_name_leafdata());
    if (is_mp_addresses.is_set || is_set(is_mp_addresses.yfilter)) leaf_name_data.push_back(is_mp_addresses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-type")
    {
        source_type = value;
        source_type.value_namespace = name_space;
        source_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-interface-type")
    {
        protected_interface_type = value;
        protected_interface_type.value_namespace = name_space;
        protected_interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mp-addresses")
    {
        is_mp_addresses = value;
        is_mp_addresses.value_namespace = name_space;
        is_mp_addresses.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "source-type")
    {
        source_type.yfilter = yfilter;
    }
    if(value_path == "protected-interface-type")
    {
        protected_interface_type.yfilter = yfilter;
    }
    if(value_path == "is-mp-addresses")
    {
        is_mp_addresses.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "source-type" || name == "protected-interface-type" || name == "is-mp-addresses")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_data() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        for(auto const & c : constraint_extended_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        for(auto const & c : extended_forward_ref_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : constraint_extended_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_forward_ref_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::Logging()
    :
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    all_logging_enabled{YType::boolean, "all-logging-enabled"}
{

    yang_name = "logging"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::~Logging()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_data() const
{
    return lsp_state.is_set
	|| s2l_state.is_set
	|| lsp_re_route.is_set
	|| lsp_re_opt.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| all_logging_enabled.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(s2l_state.yfilter)
	|| ydk::is_set(lsp_re_route.yfilter)
	|| ydk::is_set(lsp_re_opt.yfilter)
	|| ydk::is_set(lsp_insufficient_bw.yfilter)
	|| ydk::is_set(lsp_bandwidth_change.yfilter)
	|| ydk::is_set(lsp_pcalc_failure_logging_enabled.yfilter)
	|| ydk::is_set(all_logging_enabled.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
        s2l_state.value_namespace = name_space;
        s2l_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
        lsp_re_route.value_namespace = name_space;
        lsp_re_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
        lsp_re_opt.value_namespace = name_space;
        lsp_re_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
        lsp_insufficient_bw.value_namespace = name_space;
        lsp_insufficient_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
        lsp_bandwidth_change.value_namespace = name_space;
        lsp_bandwidth_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
        lsp_pcalc_failure_logging_enabled.value_namespace = name_space;
        lsp_pcalc_failure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
        all_logging_enabled.value_namespace = name_space;
        all_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
    if(value_path == "s2l-state")
    {
        s2l_state.yfilter = yfilter;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route.yfilter = yfilter;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt.yfilter = yfilter;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change.yfilter = yfilter;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-state" || name == "s2l-state" || name == "lsp-re-route" || name == "lsp-re-opt" || name == "lsp-insufficient-bw" || name == "lsp-bandwidth-change" || name == "lsp-pcalc-failure-logging-enabled" || name == "all-logging-enabled")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::PolicyClassEntry()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "policy-class-entry"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::~PolicyClassEntry()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-class-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::~TunnelId()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::ProtectedInterface()
    :
    protected_interface{YType::str, "protected-interface"}
{

    yang_name = "protected-interface"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::~ProtectedInterface()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_data() const
{
    return protected_interface.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protected_interface.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protected_interface.is_set || is_set(protected_interface.yfilter)) leaf_name_data.push_back(protected_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protected-interface")
    {
        protected_interface = value;
        protected_interface.value_namespace = name_space;
        protected_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protected-interface")
    {
        protected_interface.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected-interface")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::AttributeSetAutomesh()
    :
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    policy_class{YType::uint8, "policy-class"},
    is_policyclass_configured{YType::boolean, "is-policyclass-configured"},
    forward_class{YType::uint32, "forward-class"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    fast_reroute{YType::boolean, "fast-reroute"},
    frr_node_protection{YType::boolean, "frr-node-protection"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    record_route{YType::boolean, "record-route"},
    auto_bandwidth_collect{YType::boolean, "auto-bandwidth-collect"},
    auto_route_announce{YType::boolean, "auto-route-announce"},
    soft_preemption_configured{YType::boolean, "soft-preemption-configured"},
    bandwidth{YType::uint32, "bandwidth"},
    load_share{YType::uint32, "load-share"},
    is_interface_bw_configured{YType::boolean, "is-interface-bw-configured"}
    	,
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>())
	,logging(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>())
{
    affinity->parent = this;
    logging->parent = this;

    yang_name = "attribute-set-automesh"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::~AttributeSetAutomesh()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_data() const
{
    for (std::size_t index=0; index<policy_class_entry.size(); index++)
    {
        if(policy_class_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mesh_group_id.size(); index++)
    {
        if(mesh_group_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    return configured_bandwidth.is_set
	|| dste_class_type.is_set
	|| is_bandwidth_configured.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| is_priority_configured.is_set
	|| policy_class.is_set
	|| is_policyclass_configured.is_set
	|| forward_class.is_set
	|| is_affinity_configured.is_set
	|| fast_reroute.is_set
	|| frr_node_protection.is_set
	|| frr_bandwidth_protection.is_set
	|| record_route.is_set
	|| auto_bandwidth_collect.is_set
	|| auto_route_announce.is_set
	|| soft_preemption_configured.is_set
	|| bandwidth.is_set
	|| load_share.is_set
	|| is_interface_bw_configured.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_operation() const
{
    for (std::size_t index=0; index<policy_class_entry.size(); index++)
    {
        if(policy_class_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mesh_group_id.size(); index++)
    {
        if(mesh_group_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_priority_configured.yfilter)
	|| ydk::is_set(policy_class.yfilter)
	|| ydk::is_set(is_policyclass_configured.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(fast_reroute.yfilter)
	|| ydk::is_set(frr_node_protection.yfilter)
	|| ydk::is_set(frr_bandwidth_protection.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| ydk::is_set(auto_bandwidth_collect.yfilter)
	|| ydk::is_set(auto_route_announce.yfilter)
	|| ydk::is_set(soft_preemption_configured.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(load_share.yfilter)
	|| ydk::is_set(is_interface_bw_configured.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-automesh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.yfilter)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.yfilter)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (fast_reroute.is_set || is_set(fast_reroute.yfilter)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (frr_node_protection.is_set || is_set(frr_node_protection.yfilter)) leaf_name_data.push_back(frr_node_protection.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.yfilter)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (auto_bandwidth_collect.is_set || is_set(auto_bandwidth_collect.yfilter)) leaf_name_data.push_back(auto_bandwidth_collect.get_name_leafdata());
    if (auto_route_announce.is_set || is_set(auto_route_announce.yfilter)) leaf_name_data.push_back(auto_route_announce.get_name_leafdata());
    if (soft_preemption_configured.is_set || is_set(soft_preemption_configured.yfilter)) leaf_name_data.push_back(soft_preemption_configured.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (is_interface_bw_configured.is_set || is_set(is_interface_bw_configured.yfilter)) leaf_name_data.push_back(is_interface_bw_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "policy-class-entry")
    {
        for(auto const & c : policy_class_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry>();
        c->parent = this;
        policy_class_entry.push_back(c);
        return c;
    }

    if(child_yang_name == "mesh-group-id")
    {
        for(auto const & c : mesh_group_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId>();
        c->parent = this;
        mesh_group_id.push_back(c);
        return c;
    }

    if(child_yang_name == "tunnel-id")
    {
        for(auto const & c : tunnel_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    for (auto const & c : policy_class_entry)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : mesh_group_id)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tunnel_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
        is_priority_configured.value_namespace = name_space;
        is_priority_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-class")
    {
        policy_class = value;
        policy_class.value_namespace = name_space;
        policy_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured = value;
        is_policyclass_configured.value_namespace = name_space;
        is_policyclass_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
        fast_reroute.value_namespace = name_space;
        fast_reroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-node-protection")
    {
        frr_node_protection = value;
        frr_node_protection.value_namespace = name_space;
        frr_node_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
        frr_bandwidth_protection.value_namespace = name_space;
        frr_bandwidth_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-bandwidth-collect")
    {
        auto_bandwidth_collect = value;
        auto_bandwidth_collect.value_namespace = name_space;
        auto_bandwidth_collect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-route-announce")
    {
        auto_route_announce = value;
        auto_route_announce.value_namespace = name_space;
        auto_route_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-configured")
    {
        soft_preemption_configured = value;
        soft_preemption_configured.value_namespace = name_space;
        soft_preemption_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-share")
    {
        load_share = value;
        load_share.value_namespace = name_space;
        load_share.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface-bw-configured")
    {
        is_interface_bw_configured = value;
        is_interface_bw_configured.value_namespace = name_space;
        is_interface_bw_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured.yfilter = yfilter;
    }
    if(value_path == "policy-class")
    {
        policy_class.yfilter = yfilter;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute.yfilter = yfilter;
    }
    if(value_path == "frr-node-protection")
    {
        frr_node_protection.yfilter = yfilter;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
    if(value_path == "auto-bandwidth-collect")
    {
        auto_bandwidth_collect.yfilter = yfilter;
    }
    if(value_path == "auto-route-announce")
    {
        auto_route_announce.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-configured")
    {
        soft_preemption_configured.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "load-share")
    {
        load_share.yfilter = yfilter;
    }
    if(value_path == "is-interface-bw-configured")
    {
        is_interface_bw_configured.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "policy-class-entry" || name == "mesh-group-id" || name == "tunnel-id" || name == "configured-bandwidth" || name == "dste-class-type" || name == "is-bandwidth-configured" || name == "setup-priority" || name == "hold-priority" || name == "is-priority-configured" || name == "policy-class" || name == "is-policyclass-configured" || name == "forward-class" || name == "is-affinity-configured" || name == "fast-reroute" || name == "frr-node-protection" || name == "frr-bandwidth-protection" || name == "record-route" || name == "auto-bandwidth-collect" || name == "auto-route-announce" || name == "soft-preemption-configured" || name == "bandwidth" || name == "load-share" || name == "is-interface-bw-configured")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_data() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        for(auto const & c : constraint_extended_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        for(auto const & c : extended_forward_ref_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : constraint_extended_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_forward_ref_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::Logging()
    :
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    all_logging_enabled{YType::boolean, "all-logging-enabled"}
{

    yang_name = "logging"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::~Logging()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_data() const
{
    return lsp_state.is_set
	|| s2l_state.is_set
	|| lsp_re_route.is_set
	|| lsp_re_opt.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| all_logging_enabled.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(s2l_state.yfilter)
	|| ydk::is_set(lsp_re_route.yfilter)
	|| ydk::is_set(lsp_re_opt.yfilter)
	|| ydk::is_set(lsp_insufficient_bw.yfilter)
	|| ydk::is_set(lsp_bandwidth_change.yfilter)
	|| ydk::is_set(lsp_pcalc_failure_logging_enabled.yfilter)
	|| ydk::is_set(all_logging_enabled.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
        s2l_state.value_namespace = name_space;
        s2l_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
        lsp_re_route.value_namespace = name_space;
        lsp_re_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
        lsp_re_opt.value_namespace = name_space;
        lsp_re_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
        lsp_insufficient_bw.value_namespace = name_space;
        lsp_insufficient_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
        lsp_bandwidth_change.value_namespace = name_space;
        lsp_bandwidth_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
        lsp_pcalc_failure_logging_enabled.value_namespace = name_space;
        lsp_pcalc_failure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
        all_logging_enabled.value_namespace = name_space;
        all_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
    if(value_path == "s2l-state")
    {
        s2l_state.yfilter = yfilter;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route.yfilter = yfilter;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt.yfilter = yfilter;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change.yfilter = yfilter;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-state" || name == "s2l-state" || name == "lsp-re-route" || name == "lsp-re-opt" || name == "lsp-insufficient-bw" || name == "lsp-bandwidth-change" || name == "lsp-pcalc-failure-logging-enabled" || name == "all-logging-enabled")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::PolicyClassEntry()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "policy-class-entry"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::~PolicyClassEntry()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-class-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::MeshGroupId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mesh-group-id"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::~MeshGroupId()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::~TunnelId()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::AttributeSetXro()
    :
    xro(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro>())
{
    xro->parent = this;

    yang_name = "attribute-set-xro"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::~AttributeSetXro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::has_data() const
{
    return (xro !=  nullptr && xro->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::has_operation() const
{
    return is_set(yfilter)
	|| (xro !=  nullptr && xro->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-xro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro")
    {
        if(xro == nullptr)
        {
            xro = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro>();
        }
        return xro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xro != nullptr)
    {
        children["xro"] = xro;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::Xro()
    :
    mutual_diversity_flag{YType::boolean, "mutual-diversity-flag"}
{

    yang_name = "xro"; yang_parent_name = "attribute-set-xro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::~Xro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_data() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_data())
            return true;
    }
    return mutual_diversity_flag.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_operation() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mutual_diversity_flag.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mutual_diversity_flag.is_set || is_set(mutual_diversity_flag.yfilter)) leaf_name_data.push_back(mutual_diversity_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro-subobject")
    {
        for(auto const & c : xro_subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject>();
        c->parent = this;
        xro_subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xro_subobject)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag = value;
        mutual_diversity_flag.value_namespace = name_space;
        mutual_diversity_flag.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro-subobject" || name == "mutual-diversity-flag")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::XroSubobject()
    :
    type{YType::enumeration, "type"}
    	,
    ipv4_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>())
	,ipv6_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>())
	,unnumbered_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>())
	,as_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>())
	,srlg_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>())
	,lsp_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>())
{
    ipv4_subobject->parent = this;
    ipv6_subobject->parent = this;
    unnumbered_subobject->parent = this;
    as_subobject->parent = this;
    srlg_subobject->parent = this;
    lsp_subobject->parent = this;

    yang_name = "xro-subobject"; yang_parent_name = "xro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::~XroSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_data() const
{
    return type.is_set
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_data())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_data())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_data())
	|| (as_subobject !=  nullptr && as_subobject->has_data())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_data())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_operation())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_operation())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_operation())
	|| (as_subobject !=  nullptr && as_subobject->has_operation())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_operation())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-subobject")
    {
        if(ipv4_subobject == nullptr)
        {
            ipv4_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>();
        }
        return ipv4_subobject;
    }

    if(child_yang_name == "ipv6-subobject")
    {
        if(ipv6_subobject == nullptr)
        {
            ipv6_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>();
        }
        return ipv6_subobject;
    }

    if(child_yang_name == "unnumbered-subobject")
    {
        if(unnumbered_subobject == nullptr)
        {
            unnumbered_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>();
        }
        return unnumbered_subobject;
    }

    if(child_yang_name == "as-subobject")
    {
        if(as_subobject == nullptr)
        {
            as_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>();
        }
        return as_subobject;
    }

    if(child_yang_name == "srlg-subobject")
    {
        if(srlg_subobject == nullptr)
        {
            srlg_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>();
        }
        return srlg_subobject;
    }

    if(child_yang_name == "lsp-subobject")
    {
        if(lsp_subobject == nullptr)
        {
            lsp_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>();
        }
        return lsp_subobject;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_subobject != nullptr)
    {
        children["ipv4-subobject"] = ipv4_subobject;
    }

    if(ipv6_subobject != nullptr)
    {
        children["ipv6-subobject"] = ipv6_subobject;
    }

    if(unnumbered_subobject != nullptr)
    {
        children["unnumbered-subobject"] = unnumbered_subobject;
    }

    if(as_subobject != nullptr)
    {
        children["as-subobject"] = as_subobject;
    }

    if(srlg_subobject != nullptr)
    {
        children["srlg-subobject"] = srlg_subobject;
    }

    if(lsp_subobject != nullptr)
    {
        children["lsp-subobject"] = lsp_subobject;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-subobject" || name == "ipv6-subobject" || name == "unnumbered-subobject" || name == "as-subobject" || name == "srlg-subobject" || name == "lsp-subobject" || name == "type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::Ipv4Subobject()
    :
    address{YType::str, "address"},
    prefix_len{YType::uint8, "prefix-len"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "ipv4-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::~Ipv4Subobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_data() const
{
    return address.is_set
	|| prefix_len.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-len" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::Ipv6Subobject()
    :
    address{YType::str, "address"},
    prefix_len{YType::uint8, "prefix-len"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "ipv6-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::~Ipv6Subobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_data() const
{
    return address.is_set
	|| prefix_len.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-len" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::UnnumberedSubobject()
    :
    te_router_id{YType::str, "te-router-id"},
    interface_id{YType::uint32, "interface-id"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "unnumbered-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::~UnnumberedSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_data() const
{
    return te_router_id.is_set
	|| interface_id.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_router_id.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_router_id.is_set || is_set(te_router_id.yfilter)) leaf_name_data.push_back(te_router_id.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-router-id")
    {
        te_router_id = value;
        te_router_id.value_namespace = name_space;
        te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-router-id")
    {
        te_router_id.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-router-id" || name == "interface-id" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::AsSubobject()
    :
    as_number{YType::uint16, "as-number"}
{

    yang_name = "as-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::~AsSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_data() const
{
    return as_number.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::SrlgSubobject()
    :
    srlg_id{YType::uint32, "srlg-id"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "srlg-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::~SrlgSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_data() const
{
    return srlg_id.is_set
	|| exclusion_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_id.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_id.is_set || is_set(srlg_id.yfilter)) leaf_name_data.push_back(srlg_id.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-id")
    {
        srlg_id = value;
        srlg_id.value_namespace = name_space;
        srlg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-id")
    {
        srlg_id.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-id" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::LspSubobject()
    :
    ignore_lsp_id{YType::boolean, "ignore-lsp-id"},
    processing_node_exception{YType::boolean, "processing-node-exception"},
    penultimate_node_exception{YType::boolean, "penultimate-node-exception"},
    destination_node_exception{YType::boolean, "destination-node-exception"},
    exclusion_type{YType::enumeration, "exclusion-type"}
    	,
    fec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>())
{
    fec->parent = this;

    yang_name = "lsp-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::~LspSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_data() const
{
    return ignore_lsp_id.is_set
	|| processing_node_exception.is_set
	|| penultimate_node_exception.is_set
	|| destination_node_exception.is_set
	|| exclusion_type.is_set
	|| (fec !=  nullptr && fec->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_lsp_id.yfilter)
	|| ydk::is_set(processing_node_exception.yfilter)
	|| ydk::is_set(penultimate_node_exception.yfilter)
	|| ydk::is_set(destination_node_exception.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| (fec !=  nullptr && fec->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_lsp_id.is_set || is_set(ignore_lsp_id.yfilter)) leaf_name_data.push_back(ignore_lsp_id.get_name_leafdata());
    if (processing_node_exception.is_set || is_set(processing_node_exception.yfilter)) leaf_name_data.push_back(processing_node_exception.get_name_leafdata());
    if (penultimate_node_exception.is_set || is_set(penultimate_node_exception.yfilter)) leaf_name_data.push_back(penultimate_node_exception.get_name_leafdata());
    if (destination_node_exception.is_set || is_set(destination_node_exception.yfilter)) leaf_name_data.push_back(destination_node_exception.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec")
    {
        if(fec == nullptr)
        {
            fec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>();
        }
        return fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec != nullptr)
    {
        children["fec"] = fec;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id = value;
        ignore_lsp_id.value_namespace = name_space;
        ignore_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception = value;
        processing_node_exception.value_namespace = name_space;
        processing_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception = value;
        penultimate_node_exception.value_namespace = name_space;
        penultimate_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-node-exception")
    {
        destination_node_exception = value;
        destination_node_exception.value_namespace = name_space;
        destination_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id.yfilter = yfilter;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception.yfilter = yfilter;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception.yfilter = yfilter;
    }
    if(value_path == "destination-node-exception")
    {
        destination_node_exception.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec" || name == "ignore-lsp-id" || name == "processing-node-exception" || name == "penultimate-node-exception" || name == "destination-node-exception" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::Fec()
    :
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "fec"; yang_parent_name = "lsp-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::~Fec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_data() const
{
    return fec_lsp_id.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
        fec_lsp_id.value_namespace = name_space;
        fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
        fec_vrf.value_namespace = name_space;
        fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-lsp-id" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-vrf")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "fec"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| p2p_lsp_destination.is_set
	|| fec_destination_p2mp_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
        p2p_lsp_destination.value_namespace = name_space;
        p2p_lsp_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
        fec_destination_p2mp_id.value_namespace = name_space;
        fec_destination_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination.yfilter = yfilter;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "p2p-lsp-destination" || name == "fec-destination-p2mp-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::AttributeSetP2Mpte()
    :
    fast_reroute{YType::boolean, "fast-reroute"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"}
    	,
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>())
{
    affinity->parent = this;

    yang_name = "attribute-set-p2mpte"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::~AttributeSetP2Mpte()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_data() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    return fast_reroute.is_set
	|| frr_bandwidth_protection.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| is_priority_configured.is_set
	|| configured_bandwidth.is_set
	|| dste_class_type.is_set
	|| is_bandwidth_configured.is_set
	|| is_affinity_configured.is_set
	|| (affinity !=  nullptr && affinity->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute.yfilter)
	|| ydk::is_set(frr_bandwidth_protection.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_priority_configured.yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2mpte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute.is_set || is_set(fast_reroute.yfilter)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.yfilter)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "tunnel-id")
    {
        for(auto const & c : tunnel_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    for (auto const & c : tunnel_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
        fast_reroute.value_namespace = name_space;
        fast_reroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
        frr_bandwidth_protection.value_namespace = name_space;
        frr_bandwidth_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
        is_priority_configured.value_namespace = name_space;
        is_priority_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute")
    {
        fast_reroute.yfilter = yfilter;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured.yfilter = yfilter;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "tunnel-id" || name == "fast-reroute" || name == "frr-bandwidth-protection" || name == "setup-priority" || name == "hold-priority" || name == "is-priority-configured" || name == "configured-bandwidth" || name == "dste-class-type" || name == "is-bandwidth-configured" || name == "is-affinity-configured")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-p2mpte"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_data() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        for(auto const & c : constraint_extended_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        for(auto const & c : extended_forward_ref_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : constraint_extended_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_forward_ref_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-p2mpte"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::~TunnelId()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::AttributeSetApsPp()
    :
    snc_mode{YType::enumeration, "snc-mode"},
    tcm_id{YType::uint32, "tcm-id"},
    protection_type{YType::enumeration, "protection-type"},
    protection_mode{YType::enumeration, "protection-mode"},
    wait_to_restore_time{YType::uint32, "wait-to-restore-time"},
    hold_off_time{YType::uint32, "hold-off-time"},
    path_prot_profile_type{YType::enumeration, "path-prot-profile-type"},
    restoration_style{YType::enumeration, "restoration-style"}
    	,
    revert_schedule(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>())
{
    revert_schedule->parent = this;

    yang_name = "attribute-set-aps-pp"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::~AttributeSetApsPp()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::has_data() const
{
    return snc_mode.is_set
	|| tcm_id.is_set
	|| protection_type.is_set
	|| protection_mode.is_set
	|| wait_to_restore_time.is_set
	|| hold_off_time.is_set
	|| path_prot_profile_type.is_set
	|| restoration_style.is_set
	|| (revert_schedule !=  nullptr && revert_schedule->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snc_mode.yfilter)
	|| ydk::is_set(tcm_id.yfilter)
	|| ydk::is_set(protection_type.yfilter)
	|| ydk::is_set(protection_mode.yfilter)
	|| ydk::is_set(wait_to_restore_time.yfilter)
	|| ydk::is_set(hold_off_time.yfilter)
	|| ydk::is_set(path_prot_profile_type.yfilter)
	|| ydk::is_set(restoration_style.yfilter)
	|| (revert_schedule !=  nullptr && revert_schedule->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-aps-pp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snc_mode.is_set || is_set(snc_mode.yfilter)) leaf_name_data.push_back(snc_mode.get_name_leafdata());
    if (tcm_id.is_set || is_set(tcm_id.yfilter)) leaf_name_data.push_back(tcm_id.get_name_leafdata());
    if (protection_type.is_set || is_set(protection_type.yfilter)) leaf_name_data.push_back(protection_type.get_name_leafdata());
    if (protection_mode.is_set || is_set(protection_mode.yfilter)) leaf_name_data.push_back(protection_mode.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());
    if (hold_off_time.is_set || is_set(hold_off_time.yfilter)) leaf_name_data.push_back(hold_off_time.get_name_leafdata());
    if (path_prot_profile_type.is_set || is_set(path_prot_profile_type.yfilter)) leaf_name_data.push_back(path_prot_profile_type.get_name_leafdata());
    if (restoration_style.is_set || is_set(restoration_style.yfilter)) leaf_name_data.push_back(restoration_style.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "revert-schedule")
    {
        if(revert_schedule == nullptr)
        {
            revert_schedule = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>();
        }
        return revert_schedule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(revert_schedule != nullptr)
    {
        children["revert-schedule"] = revert_schedule;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snc-mode")
    {
        snc_mode = value;
        snc_mode.value_namespace = name_space;
        snc_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcm-id")
    {
        tcm_id = value;
        tcm_id.value_namespace = name_space;
        tcm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-type")
    {
        protection_type = value;
        protection_type.value_namespace = name_space;
        protection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-mode")
    {
        protection_mode = value;
        protection_mode.value_namespace = name_space;
        protection_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
        wait_to_restore_time.value_namespace = name_space;
        wait_to_restore_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-off-time")
    {
        hold_off_time = value;
        hold_off_time.value_namespace = name_space;
        hold_off_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type = value;
        path_prot_profile_type.value_namespace = name_space;
        path_prot_profile_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restoration-style")
    {
        restoration_style = value;
        restoration_style.value_namespace = name_space;
        restoration_style.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snc-mode")
    {
        snc_mode.yfilter = yfilter;
    }
    if(value_path == "tcm-id")
    {
        tcm_id.yfilter = yfilter;
    }
    if(value_path == "protection-type")
    {
        protection_type.yfilter = yfilter;
    }
    if(value_path == "protection-mode")
    {
        protection_mode.yfilter = yfilter;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time.yfilter = yfilter;
    }
    if(value_path == "hold-off-time")
    {
        hold_off_time.yfilter = yfilter;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type.yfilter = yfilter;
    }
    if(value_path == "restoration-style")
    {
        restoration_style.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "revert-schedule" || name == "snc-mode" || name == "tcm-id" || name == "protection-type" || name == "protection-mode" || name == "wait-to-restore-time" || name == "hold-off-time" || name == "path-prot-profile-type" || name == "restoration-style")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::RevertSchedule()
    :
    schedulename{YType::str, "schedulename"},
    schedule_date{YType::uint32, "schedule-date"},
    schedule_frequency{YType::enumeration, "schedule-frequency"},
    duration{YType::uint32, "duration"},
    max_tries{YType::uint32, "max-tries"}
{

    yang_name = "revert-schedule"; yang_parent_name = "attribute-set-aps-pp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::~RevertSchedule()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_data() const
{
    return schedulename.is_set
	|| schedule_date.is_set
	|| schedule_frequency.is_set
	|| duration.is_set
	|| max_tries.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(schedulename.yfilter)
	|| ydk::is_set(schedule_date.yfilter)
	|| ydk::is_set(schedule_frequency.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(max_tries.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schedulename.is_set || is_set(schedulename.yfilter)) leaf_name_data.push_back(schedulename.get_name_leafdata());
    if (schedule_date.is_set || is_set(schedule_date.yfilter)) leaf_name_data.push_back(schedule_date.get_name_leafdata());
    if (schedule_frequency.is_set || is_set(schedule_frequency.yfilter)) leaf_name_data.push_back(schedule_frequency.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (max_tries.is_set || is_set(max_tries.yfilter)) leaf_name_data.push_back(max_tries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "schedulename")
    {
        schedulename = value;
        schedulename.value_namespace = name_space;
        schedulename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedule-date")
    {
        schedule_date = value;
        schedule_date.value_namespace = name_space;
        schedule_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedule-frequency")
    {
        schedule_frequency = value;
        schedule_frequency.value_namespace = name_space;
        schedule_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-tries")
    {
        max_tries = value;
        max_tries.value_namespace = name_space;
        max_tries.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "schedulename")
    {
        schedulename.yfilter = yfilter;
    }
    if(value_path == "schedule-date")
    {
        schedule_date.yfilter = yfilter;
    }
    if(value_path == "schedule-frequency")
    {
        schedule_frequency.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "max-tries")
    {
        max_tries.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedulename" || name == "schedule-date" || name == "schedule-frequency" || name == "duration" || name == "max-tries")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::AttributeSetP2PTe()
    :
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    path_selection_segment_routing_adjacency_protection{YType::enumeration, "path-selection-segment-routing-adjacency-protection"},
    is_path_selection_segment_routing_adjacency_protection_configured{YType::boolean, "is-path-selection-segment-routing-adjacency-protection-configured"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_selection_invalidation_action{YType::enumeration, "path-selection-invalidation-action"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    is_path_selection_metric_configured{YType::boolean, "is-path-selection-metric-configured"},
    path_selection_segment_routing_margin{YType::uint32, "path-selection-segment-routing-margin"},
    is_path_selection_segment_routing_margin_relative{YType::boolean, "is-path-selection-segment-routing-margin-relative"},
    is_path_selection_segment_routing_margin_configured{YType::boolean, "is-path-selection-segment-routing-margin-configured"},
    path_selection_segment_routing_segment_limit{YType::uint32, "path-selection-segment-routing-segment-limit"},
    is_path_selection_segment_routing_segment_limit_configured{YType::boolean, "is-path-selection-segment-routing-segment-limit-configured"},
    is_path_select_configured{YType::boolean, "is-path-select-configured"},
    is_prepend_list_configured{YType::boolean, "is-prepend-list-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"}
    	,
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>())
	,logging(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>())
	,prepend_list(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>())
{
    affinity->parent = this;
    logging->parent = this;
    prepend_list->parent = this;

    yang_name = "attribute-set-p2p-te"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::~AttributeSetP2PTe()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_data() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    return is_affinity_configured.is_set
	|| path_selection_segment_routing_adjacency_protection.is_set
	|| is_path_selection_segment_routing_adjacency_protection_configured.is_set
	|| path_invalidation_timeout.is_set
	|| path_selection_invalidation_action.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| path_selection_metric.is_set
	|| is_path_selection_metric_configured.is_set
	|| path_selection_segment_routing_margin.is_set
	|| is_path_selection_segment_routing_margin_relative.is_set
	|| is_path_selection_segment_routing_margin_configured.is_set
	|| path_selection_segment_routing_segment_limit.is_set
	|| is_path_selection_segment_routing_segment_limit_configured.is_set
	|| is_path_select_configured.is_set
	|| is_prepend_list_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| pcedp_group_id.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| pcebd_source_address.is_set
	|| pcebd_group_id.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (prepend_list !=  nullptr && prepend_list->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(path_selection_segment_routing_adjacency_protection.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_adjacency_protection_configured.yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter)
	|| ydk::is_set(path_selection_invalidation_action.yfilter)
	|| ydk::is_set(is_path_invalidation_timeout_configured.yfilter)
	|| ydk::is_set(is_path_invalidation_action_configured.yfilter)
	|| ydk::is_set(path_selection_metric.yfilter)
	|| ydk::is_set(is_path_selection_metric_configured.yfilter)
	|| ydk::is_set(path_selection_segment_routing_margin.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_margin_relative.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_margin_configured.yfilter)
	|| ydk::is_set(path_selection_segment_routing_segment_limit.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_segment_limit_configured.yfilter)
	|| ydk::is_set(is_path_select_configured.yfilter)
	|| ydk::is_set(is_prepend_list_configured.yfilter)
	|| ydk::is_set(is_pce_configured.yfilter)
	|| ydk::is_set(is_pce_disj_source_configured.yfilter)
	|| ydk::is_set(is_pce_disj_type_configured.yfilter)
	|| ydk::is_set(is_pce_disj_group_id_configured.yfilter)
	|| ydk::is_set(pcedp_source_address.yfilter)
	|| ydk::is_set(pcedp_type.yfilter)
	|| ydk::is_set(pcedp_group_id.yfilter)
	|| ydk::is_set(is_pceb_dj_source_configured.yfilter)
	|| ydk::is_set(is_pcebd_group_id_configured.yfilter)
	|| ydk::is_set(pcebd_source_address.yfilter)
	|| ydk::is_set(pcebd_group_id.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (prepend_list !=  nullptr && prepend_list->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2p-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (path_selection_segment_routing_adjacency_protection.is_set || is_set(path_selection_segment_routing_adjacency_protection.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_adjacency_protection.get_name_leafdata());
    if (is_path_selection_segment_routing_adjacency_protection_configured.is_set || is_set(is_path_selection_segment_routing_adjacency_protection_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_adjacency_protection_configured.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_selection_invalidation_action.is_set || is_set(path_selection_invalidation_action.yfilter)) leaf_name_data.push_back(path_selection_invalidation_action.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.yfilter)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (is_path_selection_metric_configured.is_set || is_set(is_path_selection_metric_configured.yfilter)) leaf_name_data.push_back(is_path_selection_metric_configured.get_name_leafdata());
    if (path_selection_segment_routing_margin.is_set || is_set(path_selection_segment_routing_margin.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_margin.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_relative.is_set || is_set(is_path_selection_segment_routing_margin_relative.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_relative.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_configured.is_set || is_set(is_path_selection_segment_routing_margin_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_configured.get_name_leafdata());
    if (path_selection_segment_routing_segment_limit.is_set || is_set(path_selection_segment_routing_segment_limit.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_segment_limit.get_name_leafdata());
    if (is_path_selection_segment_routing_segment_limit_configured.is_set || is_set(is_path_selection_segment_routing_segment_limit_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_segment_limit_configured.get_name_leafdata());
    if (is_path_select_configured.is_set || is_set(is_path_select_configured.yfilter)) leaf_name_data.push_back(is_path_select_configured.get_name_leafdata());
    if (is_prepend_list_configured.is_set || is_set(is_prepend_list_configured.yfilter)) leaf_name_data.push_back(is_prepend_list_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.yfilter)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.yfilter)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.yfilter)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.yfilter)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.yfilter)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.yfilter)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.yfilter)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.yfilter)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "prepend-list")
    {
        if(prepend_list == nullptr)
        {
            prepend_list = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>();
        }
        return prepend_list;
    }

    if(child_yang_name == "tunnel-id")
    {
        for(auto const & c : tunnel_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(prepend_list != nullptr)
    {
        children["prepend-list"] = prepend_list;
    }

    for (auto const & c : tunnel_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection = value;
        path_selection_segment_routing_adjacency_protection.value_namespace = name_space;
        path_selection_segment_routing_adjacency_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-adjacency-protection-configured")
    {
        is_path_selection_segment_routing_adjacency_protection_configured = value;
        is_path_selection_segment_routing_adjacency_protection_configured.value_namespace = name_space;
        is_path_selection_segment_routing_adjacency_protection_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-invalidation-action")
    {
        path_selection_invalidation_action = value;
        path_selection_invalidation_action.value_namespace = name_space;
        path_selection_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
        is_path_invalidation_timeout_configured.value_namespace = name_space;
        is_path_invalidation_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
        is_path_invalidation_action_configured.value_namespace = name_space;
        is_path_invalidation_action_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
        path_selection_metric.value_namespace = name_space;
        path_selection_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-metric-configured")
    {
        is_path_selection_metric_configured = value;
        is_path_selection_metric_configured.value_namespace = name_space;
        is_path_selection_metric_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-margin")
    {
        path_selection_segment_routing_margin = value;
        path_selection_segment_routing_margin.value_namespace = name_space;
        path_selection_segment_routing_margin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-margin-relative")
    {
        is_path_selection_segment_routing_margin_relative = value;
        is_path_selection_segment_routing_margin_relative.value_namespace = name_space;
        is_path_selection_segment_routing_margin_relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-margin-configured")
    {
        is_path_selection_segment_routing_margin_configured = value;
        is_path_selection_segment_routing_margin_configured.value_namespace = name_space;
        is_path_selection_segment_routing_margin_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-segment-limit")
    {
        path_selection_segment_routing_segment_limit = value;
        path_selection_segment_routing_segment_limit.value_namespace = name_space;
        path_selection_segment_routing_segment_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-segment-limit-configured")
    {
        is_path_selection_segment_routing_segment_limit_configured = value;
        is_path_selection_segment_routing_segment_limit_configured.value_namespace = name_space;
        is_path_selection_segment_routing_segment_limit_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-select-configured")
    {
        is_path_select_configured = value;
        is_path_select_configured.value_namespace = name_space;
        is_path_select_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-prepend-list-configured")
    {
        is_prepend_list_configured = value;
        is_prepend_list_configured.value_namespace = name_space;
        is_prepend_list_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
        is_pce_configured.value_namespace = name_space;
        is_pce_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
        is_pce_disj_source_configured.value_namespace = name_space;
        is_pce_disj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
        is_pce_disj_type_configured.value_namespace = name_space;
        is_pce_disj_type_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
        is_pce_disj_group_id_configured.value_namespace = name_space;
        is_pce_disj_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
        pcedp_source_address.value_namespace = name_space;
        pcedp_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
        pcedp_type.value_namespace = name_space;
        pcedp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
        pcedp_group_id.value_namespace = name_space;
        pcedp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
        is_pceb_dj_source_configured.value_namespace = name_space;
        is_pceb_dj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
        is_pcebd_group_id_configured.value_namespace = name_space;
        is_pcebd_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
        pcebd_source_address.value_namespace = name_space;
        pcebd_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
        pcebd_group_id.value_namespace = name_space;
        pcebd_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-adjacency-protection-configured")
    {
        is_path_selection_segment_routing_adjacency_protection_configured.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
    if(value_path == "path-selection-invalidation-action")
    {
        path_selection_invalidation_action.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured.yfilter = yfilter;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-metric-configured")
    {
        is_path_selection_metric_configured.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-margin")
    {
        path_selection_segment_routing_margin.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-margin-relative")
    {
        is_path_selection_segment_routing_margin_relative.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-margin-configured")
    {
        is_path_selection_segment_routing_margin_configured.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-segment-limit")
    {
        path_selection_segment_routing_segment_limit.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-segment-limit-configured")
    {
        is_path_selection_segment_routing_segment_limit_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-select-configured")
    {
        is_path_select_configured.yfilter = yfilter;
    }
    if(value_path == "is-prepend-list-configured")
    {
        is_prepend_list_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address.yfilter = yfilter;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type.yfilter = yfilter;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id.yfilter = yfilter;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address.yfilter = yfilter;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "prepend-list" || name == "tunnel-id" || name == "is-affinity-configured" || name == "path-selection-segment-routing-adjacency-protection" || name == "is-path-selection-segment-routing-adjacency-protection-configured" || name == "path-invalidation-timeout" || name == "path-selection-invalidation-action" || name == "is-path-invalidation-timeout-configured" || name == "is-path-invalidation-action-configured" || name == "path-selection-metric" || name == "is-path-selection-metric-configured" || name == "path-selection-segment-routing-margin" || name == "is-path-selection-segment-routing-margin-relative" || name == "is-path-selection-segment-routing-margin-configured" || name == "path-selection-segment-routing-segment-limit" || name == "is-path-selection-segment-routing-segment-limit-configured" || name == "is-path-select-configured" || name == "is-prepend-list-configured" || name == "is-pce-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pce-disj-group-id-configured" || name == "pcedp-source-address" || name == "pcedp-type" || name == "pcedp-group-id" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "pcebd-source-address" || name == "pcebd-group-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_data() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        for(auto const & c : constraint_extended_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        for(auto const & c : extended_forward_ref_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : constraint_extended_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_forward_ref_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}


}
}

