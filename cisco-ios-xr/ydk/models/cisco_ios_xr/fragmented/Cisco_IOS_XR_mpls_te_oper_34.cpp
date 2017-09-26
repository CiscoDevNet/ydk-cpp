
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_34.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_35.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap::BitMap()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "bit-map"; yang_parent_name = "otn"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap::~BitMap()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bit-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::Wdm()
    :
    channel{YType::int16, "channel"},
    channel_spacing{YType::enumeration, "channel-spacing"},
    grid{YType::enumeration, "grid"},
    identifier{YType::uint16, "identifier"},
    label_set{YType::boolean, "label-set"}
{

    yang_name = "wdm"; yang_parent_name = "resv-ingress-label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::~Wdm()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::has_data() const
{
    return channel.is_set
	|| channel_spacing.is_set
	|| grid.is_set
	|| identifier.is_set
	|| label_set.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(channel.yfilter)
	|| ydk::is_set(channel_spacing.yfilter)
	|| ydk::is_set(grid.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(label_set.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (channel.is_set || is_set(channel.yfilter)) leaf_name_data.push_back(channel.get_name_leafdata());
    if (channel_spacing.is_set || is_set(channel_spacing.yfilter)) leaf_name_data.push_back(channel_spacing.get_name_leafdata());
    if (grid.is_set || is_set(grid.yfilter)) leaf_name_data.push_back(grid.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (label_set.is_set || is_set(label_set.yfilter)) leaf_name_data.push_back(label_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "channel")
    {
        channel = value;
        channel.value_namespace = name_space;
        channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing = value;
        channel_spacing.value_namespace = name_space;
        channel_spacing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grid")
    {
        grid = value;
        grid.value_namespace = name_space;
        grid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-set")
    {
        label_set = value;
        label_set.value_namespace = name_space;
        label_set.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "channel")
    {
        channel.yfilter = yfilter;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing.yfilter = yfilter;
    }
    if(value_path == "grid")
    {
        grid.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "label-set")
    {
        label_set.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "channel" || name == "channel-spacing" || name == "grid" || name == "identifier" || name == "label-set")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::OutEro()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "out-ero"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::~OutEro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-ero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::Ipv4EroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    ero_address{YType::str, "ero-address"},
    is_strict_route{YType::boolean, "is-strict-route"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "out-ero"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::Ipv4EroSubObject::has_data() const
{
    return ero_address.is_set
	|| is_strict_route.is_set
	|| prefix_length.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::Ipv4EroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::Ipv4EroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::Ipv4EroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::Ipv4EroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::Ipv4EroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::Ipv4EroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero-address" || name == "is-strict-route" || name == "prefix-length")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    is_strict_route{YType::boolean, "is-strict-route"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "out-ero"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::UnnumberedEroSubObject::has_data() const
{
    return ero_interface_id.is_set
	|| ero_router_id.is_set
	|| is_strict_route.is_set
	|| status.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero-interface-id" || name == "ero-router-id" || name == "is-strict-route" || name == "status")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::OutXro()
    :
    mutual_diversity_flag{YType::boolean, "mutual-diversity-flag"}
{

    yang_name = "out-xro"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::~OutXro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::has_data() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_data())
            return true;
    }
    return mutual_diversity_flag.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::has_operation() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mutual_diversity_flag.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-xro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mutual_diversity_flag.is_set || is_set(mutual_diversity_flag.yfilter)) leaf_name_data.push_back(mutual_diversity_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject>();
        c->parent = this;
        xro_subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xro_subobject)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag = value;
        mutual_diversity_flag.value_namespace = name_space;
        mutual_diversity_flag.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro-subobject" || name == "mutual-diversity-flag")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::XroSubobject()
    :
    type{YType::enumeration, "type"}
    	,
    as_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject>())
	,ipv4_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject>())
	,ipv6_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject>())
	,lsp_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject>())
	,srlg_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject>())
	,unnumbered_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject>())
{
    as_subobject->parent = this;
    ipv4_subobject->parent = this;
    ipv6_subobject->parent = this;
    lsp_subobject->parent = this;
    srlg_subobject->parent = this;
    unnumbered_subobject->parent = this;

    yang_name = "xro-subobject"; yang_parent_name = "out-xro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::~XroSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::has_data() const
{
    return type.is_set
	|| (as_subobject !=  nullptr && as_subobject->has_data())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_data())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_data())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_data())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_data())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (as_subobject !=  nullptr && as_subobject->has_operation())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_operation())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_operation())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_operation())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_operation())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-subobject")
    {
        if(as_subobject == nullptr)
        {
            as_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject>();
        }
        return as_subobject;
    }

    if(child_yang_name == "ipv4-subobject")
    {
        if(ipv4_subobject == nullptr)
        {
            ipv4_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject>();
        }
        return ipv4_subobject;
    }

    if(child_yang_name == "ipv6-subobject")
    {
        if(ipv6_subobject == nullptr)
        {
            ipv6_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject>();
        }
        return ipv6_subobject;
    }

    if(child_yang_name == "lsp-subobject")
    {
        if(lsp_subobject == nullptr)
        {
            lsp_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject>();
        }
        return lsp_subobject;
    }

    if(child_yang_name == "srlg-subobject")
    {
        if(srlg_subobject == nullptr)
        {
            srlg_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject>();
        }
        return srlg_subobject;
    }

    if(child_yang_name == "unnumbered-subobject")
    {
        if(unnumbered_subobject == nullptr)
        {
            unnumbered_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject>();
        }
        return unnumbered_subobject;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(as_subobject != nullptr)
    {
        children["as-subobject"] = as_subobject;
    }

    if(ipv4_subobject != nullptr)
    {
        children["ipv4-subobject"] = ipv4_subobject;
    }

    if(ipv6_subobject != nullptr)
    {
        children["ipv6-subobject"] = ipv6_subobject;
    }

    if(lsp_subobject != nullptr)
    {
        children["lsp-subobject"] = lsp_subobject;
    }

    if(srlg_subobject != nullptr)
    {
        children["srlg-subobject"] = srlg_subobject;
    }

    if(unnumbered_subobject != nullptr)
    {
        children["unnumbered-subobject"] = unnumbered_subobject;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-subobject" || name == "ipv4-subobject" || name == "ipv6-subobject" || name == "lsp-subobject" || name == "srlg-subobject" || name == "unnumbered-subobject" || name == "type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject::AsSubobject()
    :
    as_number{YType::uint16, "as-number"}
{

    yang_name = "as-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject::~AsSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject::has_data() const
{
    return as_number.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject::Ipv4Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{

    yang_name = "ipv4-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject::~Ipv4Subobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(prefix_len.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "attribute" || name == "exclusion-type" || name == "prefix-len")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject::Ipv6Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{

    yang_name = "ipv6-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject::~Ipv6Subobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(prefix_len.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "attribute" || name == "exclusion-type" || name == "prefix-len")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::LspSubobject()
    :
    destination_node_exception{YType::boolean, "destination-node-exception"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    ignore_lsp_id{YType::boolean, "ignore-lsp-id"},
    penultimate_node_exception{YType::boolean, "penultimate-node-exception"},
    processing_node_exception{YType::boolean, "processing-node-exception"}
    	,
    fec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec>())
{
    fec->parent = this;

    yang_name = "lsp-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::~LspSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::has_data() const
{
    return destination_node_exception.is_set
	|| exclusion_type.is_set
	|| ignore_lsp_id.is_set
	|| penultimate_node_exception.is_set
	|| processing_node_exception.is_set
	|| (fec !=  nullptr && fec->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_node_exception.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(ignore_lsp_id.yfilter)
	|| ydk::is_set(penultimate_node_exception.yfilter)
	|| ydk::is_set(processing_node_exception.yfilter)
	|| (fec !=  nullptr && fec->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_node_exception.is_set || is_set(destination_node_exception.yfilter)) leaf_name_data.push_back(destination_node_exception.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (ignore_lsp_id.is_set || is_set(ignore_lsp_id.yfilter)) leaf_name_data.push_back(ignore_lsp_id.get_name_leafdata());
    if (penultimate_node_exception.is_set || is_set(penultimate_node_exception.yfilter)) leaf_name_data.push_back(penultimate_node_exception.get_name_leafdata());
    if (processing_node_exception.is_set || is_set(processing_node_exception.yfilter)) leaf_name_data.push_back(processing_node_exception.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec")
    {
        if(fec == nullptr)
        {
            fec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec>();
        }
        return fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec != nullptr)
    {
        children["fec"] = fec;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id = value;
        ignore_lsp_id.value_namespace = name_space;
        ignore_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception = value;
        penultimate_node_exception.value_namespace = name_space;
        penultimate_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception = value;
        processing_node_exception.value_namespace = name_space;
        processing_node_exception.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-node-exception")
    {
        destination_node_exception.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id.yfilter = yfilter;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception.yfilter = yfilter;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec" || name == "destination-node-exception" || name == "exclusion-type" || name == "ignore-lsp-id" || name == "penultimate-node-exception" || name == "processing-node-exception")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::Fec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "fec"; yang_parent_name = "lsp-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::~Fec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
        fec_lsp_id.value_namespace = name_space;
        fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
        fec_vrf.value_namespace = name_space;
        fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-extended-tunnel-id" || name == "fec-lsp-id" || name == "fec-source" || name == "fec-tunnel-id" || name == "fec-vrf")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "fec"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
        fec_destination_p2mp_id.value_namespace = name_space;
        fec_destination_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
        p2p_lsp_destination.value_namespace = name_space;
        p2p_lsp_destination.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "fec-destination-p2mp-id" || name == "p2p-lsp-destination")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject::SrlgSubobject()
    :
    exclusion_type{YType::enumeration, "exclusion-type"},
    srlg_id{YType::uint32, "srlg-id"}
{

    yang_name = "srlg-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject::~SrlgSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject::has_data() const
{
    return exclusion_type.is_set
	|| srlg_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(srlg_id.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (srlg_id.is_set || is_set(srlg_id.yfilter)) leaf_name_data.push_back(srlg_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-id")
    {
        srlg_id = value;
        srlg_id.value_namespace = name_space;
        srlg_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
    if(value_path == "srlg-id")
    {
        srlg_id.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclusion-type" || name == "srlg-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject::UnnumberedSubobject()
    :
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    interface_id{YType::uint32, "interface-id"},
    te_router_id{YType::str, "te-router-id"}
{

    yang_name = "unnumbered-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject::~UnnumberedSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject::has_data() const
{
    return attribute.is_set
	|| exclusion_type.is_set
	|| interface_id.is_set
	|| te_router_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(te_router_id.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (te_router_id.is_set || is_set(te_router_id.yfilter)) leaf_name_data.push_back(te_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-router-id")
    {
        te_router_id = value;
        te_router_id.value_namespace = name_space;
        te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "te-router-id")
    {
        te_router_id.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute" || name == "exclusion-type" || name == "interface-id" || name == "te-router-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::PathAffinityArray()
    :
    hop_address{YType::str, "hop-address"},
    hop_affinity{YType::uint32, "hop-affinity"}
{

    yang_name = "path-affinity-array"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::~PathAffinityArray()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::has_data() const
{
    for (std::size_t index=0; index<hop_extended_affinity.size(); index++)
    {
        if(hop_extended_affinity[index]->has_data())
            return true;
    }
    return hop_address.is_set
	|| hop_affinity.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-affinity-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_address.is_set || is_set(hop_address.yfilter)) leaf_name_data.push_back(hop_address.get_name_leafdata());
    if (hop_affinity.is_set || is_set(hop_affinity.yfilter)) leaf_name_data.push_back(hop_affinity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::HopExtendedAffinity>();
        c->parent = this;
        hop_extended_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hop_extended_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hop-extended-affinity" || name == "hop-address" || name == "hop-affinity")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::HopExtendedAffinity::HopExtendedAffinity()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "hop-extended-affinity"; yang_parent_name = "path-affinity-array"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::HopExtendedAffinity::~HopExtendedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::HopExtendedAffinity::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::HopExtendedAffinity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::HopExtendedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop-extended-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::HopExtendedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::HopExtendedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::HopExtendedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::HopExtendedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::HopExtendedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray::HopExtendedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::PathRro()
    :
    rro_type{YType::enumeration, "rro-type"}
    	,
    ipv4rro_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject>())
	,label_rro_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject>())
	,srlg_rro_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject>())
	,unnumbered_rro_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject>())
{
    ipv4rro_sub_object->parent = this;
    label_rro_sub_object->parent = this;
    srlg_rro_sub_object->parent = this;
    unnumbered_rro_sub_object->parent = this;

    yang_name = "path-rro"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::~PathRro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::has_data() const
{
    return rro_type.is_set
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_data())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_data())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_data())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_type.yfilter)
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_operation())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_operation())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_operation())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-rro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_type.is_set || is_set(rro_type.yfilter)) leaf_name_data.push_back(rro_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4rro-sub-object")
    {
        if(ipv4rro_sub_object == nullptr)
        {
            ipv4rro_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject>();
        }
        return ipv4rro_sub_object;
    }

    if(child_yang_name == "label-rro-sub-object")
    {
        if(label_rro_sub_object == nullptr)
        {
            label_rro_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject>();
        }
        return label_rro_sub_object;
    }

    if(child_yang_name == "srlg-rro-sub-object")
    {
        if(srlg_rro_sub_object == nullptr)
        {
            srlg_rro_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject>();
        }
        return srlg_rro_sub_object;
    }

    if(child_yang_name == "unnumbered-rro-sub-object")
    {
        if(unnumbered_rro_sub_object == nullptr)
        {
            unnumbered_rro_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject>();
        }
        return unnumbered_rro_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::get_children() const
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

    if(srlg_rro_sub_object != nullptr)
    {
        children["srlg-rro-sub-object"] = srlg_rro_sub_object;
    }

    if(unnumbered_rro_sub_object != nullptr)
    {
        children["unnumbered-rro-sub-object"] = unnumbered_rro_sub_object;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-type")
    {
        rro_type = value;
        rro_type.value_namespace = name_space;
        rro_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-type")
    {
        rro_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4rro-sub-object" || name == "label-rro-sub-object" || name == "srlg-rro-sub-object" || name == "unnumbered-rro-sub-object" || name == "rro-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::Ipv4RroSubObject()
    :
    rro_address{YType::str, "rro-address"}
    	,
    flags(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "ipv4rro-sub-object"; yang_parent_name = "path-rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::~Ipv4RroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::has_data() const
{
    return rro_address.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_address.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_address.is_set || is_set(rro_address.yfilter)) leaf_name_data.push_back(rro_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-address")
    {
        rro_address = value;
        rro_address.value_namespace = name_space;
        rro_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-address")
    {
        rro_address.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "rro-address")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::Flags::Flags()
    :
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_id{YType::boolean, "is-node-id"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"}
{

    yang_name = "flags"; yang_parent_name = "ipv4rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::Flags::~Flags()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::Flags::has_data() const
{
    return is_bandwidth_protected.is_set
	|| is_node_id.is_set
	|| is_node_protection_available.is_set
	|| is_protection_available.is_set
	|| is_protection_in_use.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_id.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
        is_bandwidth_protected.value_namespace = name_space;
        is_bandwidth_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
        is_node_id.value_namespace = name_space;
        is_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
        is_node_protection_available.value_namespace = name_space;
        is_node_protection_available.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected.yfilter = yfilter;
    }
    if(value_path == "is-node-id")
    {
        is_node_id.yfilter = yfilter;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-available")
    {
        is_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::Ipv4RroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-bandwidth-protected" || name == "is-node-id" || name == "is-node-protection-available" || name == "is-protection-available" || name == "is-protection-in-use")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::LabelRroSubObject()
    :
    is_label_variable_length{YType::boolean, "is-label-variable-length"},
    label{YType::uint32, "label"}
    	,
    flags(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "label-rro-sub-object"; yang_parent_name = "path-rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::~LabelRroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::has_data() const
{
    for (std::size_t index=0; index<variable_length_label.size(); index++)
    {
        if(variable_length_label[index]->has_data())
            return true;
    }
    return is_label_variable_length.is_set
	|| label.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::has_operation() const
{
    for (std::size_t index=0; index<variable_length_label.size(); index++)
    {
        if(variable_length_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_label_variable_length.yfilter)
	|| ydk::is_set(label.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_label_variable_length.is_set || is_set(is_label_variable_length.yfilter)) leaf_name_data.push_back(is_label_variable_length.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::Flags>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::VariableLengthLabel>();
        c->parent = this;
        variable_length_label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-label-variable-length")
    {
        is_label_variable_length = value;
        is_label_variable_length.value_namespace = name_space;
        is_label_variable_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-label-variable-length")
    {
        is_label_variable_length.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "variable-length-label" || name == "is-label-variable-length" || name == "label")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::Flags::Flags()
    :
    is_global_label{YType::boolean, "is-global-label"}
{

    yang_name = "flags"; yang_parent_name = "label-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::Flags::~Flags()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::Flags::has_data() const
{
    return is_global_label.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_global_label.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_global_label.is_set || is_set(is_global_label.yfilter)) leaf_name_data.push_back(is_global_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-global-label")
    {
        is_global_label = value;
        is_global_label.value_namespace = name_space;
        is_global_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-global-label")
    {
        is_global_label.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-global-label")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::VariableLengthLabel()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "variable-length-label"; yang_parent_name = "label-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::~VariableLengthLabel()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "variable-length-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::SrlgRroSubObject()
{

    yang_name = "srlg-rro-sub-object"; yang_parent_name = "path-rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::~SrlgRroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::has_data() const
{
    for (std::size_t index=0; index<srl_gs.size(); index++)
    {
        if(srl_gs[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::has_operation() const
{
    for (std::size_t index=0; index<srl_gs.size(); index++)
    {
        if(srl_gs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::SrlGs>();
        c->parent = this;
        srl_gs.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : srl_gs)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srl-gs")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::SrlGs::SrlGs()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "srl-gs"; yang_parent_name = "srlg-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::SrlGs::~SrlGs()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::SrlGs::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::SrlGs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::SrlGs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srl-gs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::SrlGs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::SrlGs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::SrlGs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::SrlGs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::SrlGs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::SrlgRroSubObject::SrlGs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::UnnumberedRroSubObject()
    :
    interface_address{YType::str, "interface-address"},
    interface_id{YType::uint32, "interface-id"}
    	,
    flags(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "unnumbered-rro-sub-object"; yang_parent_name = "path-rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::~UnnumberedRroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::has_data() const
{
    return interface_address.is_set
	|| interface_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_address.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_address.is_set || is_set(interface_address.yfilter)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "interface-address" || name == "interface-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::Flags::Flags()
    :
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_id{YType::boolean, "is-node-id"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"}
{

    yang_name = "flags"; yang_parent_name = "unnumbered-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::Flags::~Flags()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::Flags::has_data() const
{
    return is_bandwidth_protected.is_set
	|| is_node_id.is_set
	|| is_node_protection_available.is_set
	|| is_protection_available.is_set
	|| is_protection_in_use.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_id.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
        is_bandwidth_protected.value_namespace = name_space;
        is_bandwidth_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
        is_node_id.value_namespace = name_space;
        is_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
        is_node_protection_available.value_namespace = name_space;
        is_node_protection_available.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected.yfilter = yfilter;
    }
    if(value_path == "is-node-id")
    {
        is_node_id.yfilter = yfilter;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-available")
    {
        is_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro::UnnumberedRroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-bandwidth-protected" || name == "is-node-id" || name == "is-node-protection-available" || name == "is-protection-available" || name == "is-protection-in-use")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::PreviousHopAddressGeneric()
    :
    te_addr(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr>())
{
    te_addr->parent = this;

    yang_name = "previous-hop-address-generic"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::~PreviousHopAddressGeneric()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::has_data() const
{
    return (te_addr !=  nullptr && te_addr->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::has_operation() const
{
    return is_set(yfilter)
	|| (te_addr !=  nullptr && te_addr->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-hop-address-generic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-addr")
    {
        if(te_addr == nullptr)
        {
            te_addr = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr>();
        }
        return te_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(te_addr != nullptr)
    {
        children["te-addr"] = te_addr;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-addr")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::TeAddr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    type{YType::enumeration, "type"}
    	,
    ipv4_unnumbered_address(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress>())
{
    ipv4_unnumbered_address->parent = this;

    yang_name = "te-addr"; yang_parent_name = "previous-hop-address-generic"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::~TeAddr()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::has_data() const
{
    return ipv4_address.is_set
	|| type.is_set
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unnumbered-address")
    {
        if(ipv4_unnumbered_address == nullptr)
        {
            ipv4_unnumbered_address = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress>();
        }
        return ipv4_unnumbered_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_unnumbered_address != nullptr)
    {
        children["ipv4-unnumbered-address"] = ipv4_unnumbered_address;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unnumbered-address" || name == "ipv4-address" || name == "type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::Ipv4UnnumberedAddress()
    :
    interface_index{YType::uint32, "interface-index"},
    router_id{YType::str, "router-id"}
{

    yang_name = "ipv4-unnumbered-address"; yang_parent_name = "te-addr"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::~Ipv4UnnumberedAddress()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::has_data() const
{
    return interface_index.is_set
	|| router_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_index.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unnumbered-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-index" || name == "router-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Protection::Protection()
    :
    any{YType::boolean, "any"},
    ded1_plus1{YType::boolean, "ded1-plus1"},
    ded1_to1{YType::boolean, "ded1-to1"},
    enhanced{YType::boolean, "enhanced"},
    extra_traffic{YType::boolean, "extra-traffic"},
    link_unprotected{YType::boolean, "link-unprotected"},
    lsp_unprotected{YType::boolean, "lsp-unprotected"},
    one_plus_one_bi{YType::boolean, "one-plus-one-bi"},
    one_plus_one_uni{YType::boolean, "one-plus-one-uni"},
    one_to_n_protection_et{YType::boolean, "one-to-n-protection-et"},
    rerouting{YType::boolean, "rerouting"},
    rerouting_no_et{YType::boolean, "rerouting-no-et"},
    s2l_notification{YType::boolean, "s2l-notification"},
    s2l_operational{YType::boolean, "s2l-operational"},
    s2l_protecting{YType::boolean, "s2l-protecting"},
    s2l_secondary{YType::boolean, "s2l-secondary"},
    shared{YType::boolean, "shared"}
{

    yang_name = "protection"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Protection::~Protection()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Protection::has_data() const
{
    return any.is_set
	|| ded1_plus1.is_set
	|| ded1_to1.is_set
	|| enhanced.is_set
	|| extra_traffic.is_set
	|| link_unprotected.is_set
	|| lsp_unprotected.is_set
	|| one_plus_one_bi.is_set
	|| one_plus_one_uni.is_set
	|| one_to_n_protection_et.is_set
	|| rerouting.is_set
	|| rerouting_no_et.is_set
	|| s2l_notification.is_set
	|| s2l_operational.is_set
	|| s2l_protecting.is_set
	|| s2l_secondary.is_set
	|| shared.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(ded1_plus1.yfilter)
	|| ydk::is_set(ded1_to1.yfilter)
	|| ydk::is_set(enhanced.yfilter)
	|| ydk::is_set(extra_traffic.yfilter)
	|| ydk::is_set(link_unprotected.yfilter)
	|| ydk::is_set(lsp_unprotected.yfilter)
	|| ydk::is_set(one_plus_one_bi.yfilter)
	|| ydk::is_set(one_plus_one_uni.yfilter)
	|| ydk::is_set(one_to_n_protection_et.yfilter)
	|| ydk::is_set(rerouting.yfilter)
	|| ydk::is_set(rerouting_no_et.yfilter)
	|| ydk::is_set(s2l_notification.yfilter)
	|| ydk::is_set(s2l_operational.yfilter)
	|| ydk::is_set(s2l_protecting.yfilter)
	|| ydk::is_set(s2l_secondary.yfilter)
	|| ydk::is_set(shared.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (ded1_plus1.is_set || is_set(ded1_plus1.yfilter)) leaf_name_data.push_back(ded1_plus1.get_name_leafdata());
    if (ded1_to1.is_set || is_set(ded1_to1.yfilter)) leaf_name_data.push_back(ded1_to1.get_name_leafdata());
    if (enhanced.is_set || is_set(enhanced.yfilter)) leaf_name_data.push_back(enhanced.get_name_leafdata());
    if (extra_traffic.is_set || is_set(extra_traffic.yfilter)) leaf_name_data.push_back(extra_traffic.get_name_leafdata());
    if (link_unprotected.is_set || is_set(link_unprotected.yfilter)) leaf_name_data.push_back(link_unprotected.get_name_leafdata());
    if (lsp_unprotected.is_set || is_set(lsp_unprotected.yfilter)) leaf_name_data.push_back(lsp_unprotected.get_name_leafdata());
    if (one_plus_one_bi.is_set || is_set(one_plus_one_bi.yfilter)) leaf_name_data.push_back(one_plus_one_bi.get_name_leafdata());
    if (one_plus_one_uni.is_set || is_set(one_plus_one_uni.yfilter)) leaf_name_data.push_back(one_plus_one_uni.get_name_leafdata());
    if (one_to_n_protection_et.is_set || is_set(one_to_n_protection_et.yfilter)) leaf_name_data.push_back(one_to_n_protection_et.get_name_leafdata());
    if (rerouting.is_set || is_set(rerouting.yfilter)) leaf_name_data.push_back(rerouting.get_name_leafdata());
    if (rerouting_no_et.is_set || is_set(rerouting_no_et.yfilter)) leaf_name_data.push_back(rerouting_no_et.get_name_leafdata());
    if (s2l_notification.is_set || is_set(s2l_notification.yfilter)) leaf_name_data.push_back(s2l_notification.get_name_leafdata());
    if (s2l_operational.is_set || is_set(s2l_operational.yfilter)) leaf_name_data.push_back(s2l_operational.get_name_leafdata());
    if (s2l_protecting.is_set || is_set(s2l_protecting.yfilter)) leaf_name_data.push_back(s2l_protecting.get_name_leafdata());
    if (s2l_secondary.is_set || is_set(s2l_secondary.yfilter)) leaf_name_data.push_back(s2l_secondary.get_name_leafdata());
    if (shared.is_set || is_set(shared.yfilter)) leaf_name_data.push_back(shared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1 = value;
        ded1_plus1.value_namespace = name_space;
        ded1_plus1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1 = value;
        ded1_to1.value_namespace = name_space;
        ded1_to1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enhanced")
    {
        enhanced = value;
        enhanced.value_namespace = name_space;
        enhanced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic = value;
        extra_traffic.value_namespace = name_space;
        extra_traffic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected = value;
        link_unprotected.value_namespace = name_space;
        link_unprotected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected = value;
        lsp_unprotected.value_namespace = name_space;
        lsp_unprotected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi = value;
        one_plus_one_bi.value_namespace = name_space;
        one_plus_one_bi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni = value;
        one_plus_one_uni.value_namespace = name_space;
        one_plus_one_uni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et = value;
        one_to_n_protection_et.value_namespace = name_space;
        one_to_n_protection_et.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouting")
    {
        rerouting = value;
        rerouting.value_namespace = name_space;
        rerouting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et = value;
        rerouting_no_et.value_namespace = name_space;
        rerouting_no_et.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification = value;
        s2l_notification.value_namespace = name_space;
        s2l_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational = value;
        s2l_operational.value_namespace = name_space;
        s2l_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting = value;
        s2l_protecting.value_namespace = name_space;
        s2l_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-secondary")
    {
        s2l_secondary = value;
        s2l_secondary.value_namespace = name_space;
        s2l_secondary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shared")
    {
        shared = value;
        shared.value_namespace = name_space;
        shared.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1.yfilter = yfilter;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1.yfilter = yfilter;
    }
    if(value_path == "enhanced")
    {
        enhanced.yfilter = yfilter;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic.yfilter = yfilter;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected.yfilter = yfilter;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected.yfilter = yfilter;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi.yfilter = yfilter;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni.yfilter = yfilter;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et.yfilter = yfilter;
    }
    if(value_path == "rerouting")
    {
        rerouting.yfilter = yfilter;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et.yfilter = yfilter;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification.yfilter = yfilter;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational.yfilter = yfilter;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting.yfilter = yfilter;
    }
    if(value_path == "s2l-secondary")
    {
        s2l_secondary.yfilter = yfilter;
    }
    if(value_path == "shared")
    {
        shared.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "ded1-plus1" || name == "ded1-to1" || name == "enhanced" || name == "extra-traffic" || name == "link-unprotected" || name == "lsp-unprotected" || name == "one-plus-one-bi" || name == "one-plus-one-uni" || name == "one-to-n-protection-et" || name == "rerouting" || name == "rerouting-no-et" || name == "s2l-notification" || name == "s2l-operational" || name == "s2l-protecting" || name == "s2l-secondary" || name == "shared")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::ResvRro()
    :
    rro_type{YType::enumeration, "rro-type"}
    	,
    ipv4rro_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject>())
	,label_rro_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject>())
	,srlg_rro_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject>())
	,unnumbered_rro_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject>())
{
    ipv4rro_sub_object->parent = this;
    label_rro_sub_object->parent = this;
    srlg_rro_sub_object->parent = this;
    unnumbered_rro_sub_object->parent = this;

    yang_name = "resv-rro"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::~ResvRro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::has_data() const
{
    return rro_type.is_set
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_data())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_data())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_data())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_type.yfilter)
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_operation())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_operation())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_operation())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resv-rro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_type.is_set || is_set(rro_type.yfilter)) leaf_name_data.push_back(rro_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4rro-sub-object")
    {
        if(ipv4rro_sub_object == nullptr)
        {
            ipv4rro_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject>();
        }
        return ipv4rro_sub_object;
    }

    if(child_yang_name == "label-rro-sub-object")
    {
        if(label_rro_sub_object == nullptr)
        {
            label_rro_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject>();
        }
        return label_rro_sub_object;
    }

    if(child_yang_name == "srlg-rro-sub-object")
    {
        if(srlg_rro_sub_object == nullptr)
        {
            srlg_rro_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject>();
        }
        return srlg_rro_sub_object;
    }

    if(child_yang_name == "unnumbered-rro-sub-object")
    {
        if(unnumbered_rro_sub_object == nullptr)
        {
            unnumbered_rro_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject>();
        }
        return unnumbered_rro_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::get_children() const
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

    if(srlg_rro_sub_object != nullptr)
    {
        children["srlg-rro-sub-object"] = srlg_rro_sub_object;
    }

    if(unnumbered_rro_sub_object != nullptr)
    {
        children["unnumbered-rro-sub-object"] = unnumbered_rro_sub_object;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-type")
    {
        rro_type = value;
        rro_type.value_namespace = name_space;
        rro_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-type")
    {
        rro_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4rro-sub-object" || name == "label-rro-sub-object" || name == "srlg-rro-sub-object" || name == "unnumbered-rro-sub-object" || name == "rro-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::Ipv4RroSubObject()
    :
    rro_address{YType::str, "rro-address"}
    	,
    flags(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "ipv4rro-sub-object"; yang_parent_name = "resv-rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::~Ipv4RroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::has_data() const
{
    return rro_address.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_address.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_address.is_set || is_set(rro_address.yfilter)) leaf_name_data.push_back(rro_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-address")
    {
        rro_address = value;
        rro_address.value_namespace = name_space;
        rro_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-address")
    {
        rro_address.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "rro-address")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::Flags::Flags()
    :
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_id{YType::boolean, "is-node-id"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"}
{

    yang_name = "flags"; yang_parent_name = "ipv4rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::Flags::~Flags()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::Flags::has_data() const
{
    return is_bandwidth_protected.is_set
	|| is_node_id.is_set
	|| is_node_protection_available.is_set
	|| is_protection_available.is_set
	|| is_protection_in_use.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_id.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
        is_bandwidth_protected.value_namespace = name_space;
        is_bandwidth_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
        is_node_id.value_namespace = name_space;
        is_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
        is_node_protection_available.value_namespace = name_space;
        is_node_protection_available.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected.yfilter = yfilter;
    }
    if(value_path == "is-node-id")
    {
        is_node_id.yfilter = yfilter;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-available")
    {
        is_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::Ipv4RroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-bandwidth-protected" || name == "is-node-id" || name == "is-node-protection-available" || name == "is-protection-available" || name == "is-protection-in-use")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::LabelRroSubObject()
    :
    is_label_variable_length{YType::boolean, "is-label-variable-length"},
    label{YType::uint32, "label"}
    	,
    flags(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "label-rro-sub-object"; yang_parent_name = "resv-rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::~LabelRroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::has_data() const
{
    for (std::size_t index=0; index<variable_length_label.size(); index++)
    {
        if(variable_length_label[index]->has_data())
            return true;
    }
    return is_label_variable_length.is_set
	|| label.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::has_operation() const
{
    for (std::size_t index=0; index<variable_length_label.size(); index++)
    {
        if(variable_length_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_label_variable_length.yfilter)
	|| ydk::is_set(label.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_label_variable_length.is_set || is_set(is_label_variable_length.yfilter)) leaf_name_data.push_back(is_label_variable_length.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::Flags>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel>();
        c->parent = this;
        variable_length_label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-label-variable-length")
    {
        is_label_variable_length = value;
        is_label_variable_length.value_namespace = name_space;
        is_label_variable_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-label-variable-length")
    {
        is_label_variable_length.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "variable-length-label" || name == "is-label-variable-length" || name == "label")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::Flags::Flags()
    :
    is_global_label{YType::boolean, "is-global-label"}
{

    yang_name = "flags"; yang_parent_name = "label-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::Flags::~Flags()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::Flags::has_data() const
{
    return is_global_label.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_global_label.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_global_label.is_set || is_set(is_global_label.yfilter)) leaf_name_data.push_back(is_global_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-global-label")
    {
        is_global_label = value;
        is_global_label.value_namespace = name_space;
        is_global_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-global-label")
    {
        is_global_label.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-global-label")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::VariableLengthLabel()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "variable-length-label"; yang_parent_name = "label-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::~VariableLengthLabel()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "variable-length-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::SrlgRroSubObject()
{

    yang_name = "srlg-rro-sub-object"; yang_parent_name = "resv-rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::~SrlgRroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::has_data() const
{
    for (std::size_t index=0; index<srl_gs.size(); index++)
    {
        if(srl_gs[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::has_operation() const
{
    for (std::size_t index=0; index<srl_gs.size(); index++)
    {
        if(srl_gs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::SrlGs>();
        c->parent = this;
        srl_gs.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : srl_gs)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srl-gs")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::SrlGs::SrlGs()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "srl-gs"; yang_parent_name = "srlg-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::SrlGs::~SrlGs()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::SrlGs::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::SrlGs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::SrlGs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srl-gs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::SrlGs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::SrlGs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::SrlGs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::SrlGs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::SrlGs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::SrlgRroSubObject::SrlGs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::UnnumberedRroSubObject()
    :
    interface_address{YType::str, "interface-address"},
    interface_id{YType::uint32, "interface-id"}
    	,
    flags(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "unnumbered-rro-sub-object"; yang_parent_name = "resv-rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::~UnnumberedRroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::has_data() const
{
    return interface_address.is_set
	|| interface_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_address.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_address.is_set || is_set(interface_address.yfilter)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "interface-address" || name == "interface-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::Flags::Flags()
    :
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_id{YType::boolean, "is-node-id"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"}
{

    yang_name = "flags"; yang_parent_name = "unnumbered-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::Flags::~Flags()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::Flags::has_data() const
{
    return is_bandwidth_protected.is_set
	|| is_node_id.is_set
	|| is_node_protection_available.is_set
	|| is_protection_available.is_set
	|| is_protection_in_use.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_id.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
        is_bandwidth_protected.value_namespace = name_space;
        is_bandwidth_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
        is_node_id.value_namespace = name_space;
        is_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
        is_node_protection_available.value_namespace = name_space;
        is_node_protection_available.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected.yfilter = yfilter;
    }
    if(value_path == "is-node-id")
    {
        is_node_id.yfilter = yfilter;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-available")
    {
        is_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro::UnnumberedRroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-bandwidth-protected" || name == "is-node-id" || name == "is-node-protection-available" || name == "is-protection-available" || name == "is-protection-in-use")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::ReverseEroIn()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "reverse-ero-in"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::~ReverseEroIn()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-ero-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::Ipv4EroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    ero_address{YType::str, "ero-address"},
    is_strict_route{YType::boolean, "is-strict-route"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "reverse-ero-in"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::Ipv4EroSubObject::has_data() const
{
    return ero_address.is_set
	|| is_strict_route.is_set
	|| prefix_length.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::Ipv4EroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::Ipv4EroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::Ipv4EroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::Ipv4EroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::Ipv4EroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::Ipv4EroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero-address" || name == "is-strict-route" || name == "prefix-length")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    is_strict_route{YType::boolean, "is-strict-route"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "reverse-ero-in"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::UnnumberedEroSubObject::has_data() const
{
    return ero_interface_id.is_set
	|| ero_router_id.is_set
	|| is_strict_route.is_set
	|| status.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero-interface-id" || name == "ero-router-id" || name == "is-strict-route" || name == "status")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::ReverseLspFec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "reverse-lsp-fec"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::~ReverseLspFec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-lsp-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
        fec_lsp_id.value_namespace = name_space;
        fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
        fec_vrf.value_namespace = name_space;
        fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-extended-tunnel-id" || name == "fec-lsp-id" || name == "fec-source" || name == "fec-tunnel-id" || name == "fec-vrf")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "reverse-lsp-fec"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
        fec_destination_p2mp_id.value_namespace = name_space;
        fec_destination_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
        p2p_lsp_destination.value_namespace = name_space;
        p2p_lsp_destination.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "fec-destination-p2mp-id" || name == "p2p-lsp-destination")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseTspec::ReverseTspec()
    :
    average_rate{YType::uint64, "average-rate"},
    maximum_burst{YType::uint64, "maximum-burst"},
    peak_rate{YType::uint64, "peak-rate"}
{

    yang_name = "reverse-tspec"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseTspec::~ReverseTspec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseTspec::has_data() const
{
    return average_rate.is_set
	|| maximum_burst.is_set
	|| peak_rate.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_rate.yfilter)
	|| ydk::is_set(maximum_burst.yfilter)
	|| ydk::is_set(peak_rate.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseTspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_rate.is_set || is_set(average_rate.yfilter)) leaf_name_data.push_back(average_rate.get_name_leafdata());
    if (maximum_burst.is_set || is_set(maximum_burst.yfilter)) leaf_name_data.push_back(maximum_burst.get_name_leafdata());
    if (peak_rate.is_set || is_set(peak_rate.yfilter)) leaf_name_data.push_back(peak_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseTspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-rate")
    {
        average_rate = value;
        average_rate.value_namespace = name_space;
        average_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-burst")
    {
        maximum_burst = value;
        maximum_burst.value_namespace = name_space;
        maximum_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-rate")
    {
        peak_rate = value;
        peak_rate.value_namespace = name_space;
        peak_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseTspec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-rate")
    {
        average_rate.yfilter = yfilter;
    }
    if(value_path == "maximum-burst")
    {
        maximum_burst.yfilter = yfilter;
    }
    if(value_path == "peak-rate")
    {
        peak_rate.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-rate" || name == "maximum-burst" || name == "peak-rate")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LConvergence::S2LConvergence()
    :
    creation_time{YType::uint64, "creation-time"},
    label_rewrite{YType::uint64, "label-rewrite"},
    path_in{YType::uint64, "path-in"},
    path_out{YType::uint64, "path-out"},
    resv_in{YType::uint64, "resv-in"},
    resv_out{YType::uint64, "resv-out"},
    tunnel_rewrite{YType::uint64, "tunnel-rewrite"}
{

    yang_name = "s2l-convergence"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LConvergence::~S2LConvergence()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LConvergence::has_data() const
{
    return creation_time.is_set
	|| label_rewrite.is_set
	|| path_in.is_set
	|| path_out.is_set
	|| resv_in.is_set
	|| resv_out.is_set
	|| tunnel_rewrite.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LConvergence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(creation_time.yfilter)
	|| ydk::is_set(label_rewrite.yfilter)
	|| ydk::is_set(path_in.yfilter)
	|| ydk::is_set(path_out.yfilter)
	|| ydk::is_set(resv_in.yfilter)
	|| ydk::is_set(resv_out.yfilter)
	|| ydk::is_set(tunnel_rewrite.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LConvergence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-convergence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LConvergence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (creation_time.is_set || is_set(creation_time.yfilter)) leaf_name_data.push_back(creation_time.get_name_leafdata());
    if (label_rewrite.is_set || is_set(label_rewrite.yfilter)) leaf_name_data.push_back(label_rewrite.get_name_leafdata());
    if (path_in.is_set || is_set(path_in.yfilter)) leaf_name_data.push_back(path_in.get_name_leafdata());
    if (path_out.is_set || is_set(path_out.yfilter)) leaf_name_data.push_back(path_out.get_name_leafdata());
    if (resv_in.is_set || is_set(resv_in.yfilter)) leaf_name_data.push_back(resv_in.get_name_leafdata());
    if (resv_out.is_set || is_set(resv_out.yfilter)) leaf_name_data.push_back(resv_out.get_name_leafdata());
    if (tunnel_rewrite.is_set || is_set(tunnel_rewrite.yfilter)) leaf_name_data.push_back(tunnel_rewrite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LConvergence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LConvergence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LConvergence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "creation-time")
    {
        creation_time = value;
        creation_time.value_namespace = name_space;
        creation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-rewrite")
    {
        label_rewrite = value;
        label_rewrite.value_namespace = name_space;
        label_rewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-in")
    {
        path_in = value;
        path_in.value_namespace = name_space;
        path_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-out")
    {
        path_out = value;
        path_out.value_namespace = name_space;
        path_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resv-in")
    {
        resv_in = value;
        resv_in.value_namespace = name_space;
        resv_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resv-out")
    {
        resv_out = value;
        resv_out.value_namespace = name_space;
        resv_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-rewrite")
    {
        tunnel_rewrite = value;
        tunnel_rewrite.value_namespace = name_space;
        tunnel_rewrite.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LConvergence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "creation-time")
    {
        creation_time.yfilter = yfilter;
    }
    if(value_path == "label-rewrite")
    {
        label_rewrite.yfilter = yfilter;
    }
    if(value_path == "path-in")
    {
        path_in.yfilter = yfilter;
    }
    if(value_path == "path-out")
    {
        path_out.yfilter = yfilter;
    }
    if(value_path == "resv-in")
    {
        resv_in.yfilter = yfilter;
    }
    if(value_path == "resv-out")
    {
        resv_out.yfilter = yfilter;
    }
    if(value_path == "tunnel-rewrite")
    {
        tunnel_rewrite.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LConvergence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "creation-time" || name == "label-rewrite" || name == "path-in" || name == "path-out" || name == "resv-in" || name == "resv-out" || name == "tunnel-rewrite")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec::S2LFec()
    :
    s2l_fec_ctype{YType::enumeration, "s2l-fec-ctype"},
    s2l_fec_dest{YType::str, "s2l-fec-dest"},
    s2l_fec_extended_tunnel_id{YType::str, "s2l-fec-extended-tunnel-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    s2l_fec_source{YType::str, "s2l-fec-source"},
    s2l_fec_subgroup_id{YType::uint16, "s2l-fec-subgroup-id"},
    s2l_fec_subgroup_originator{YType::str, "s2l-fec-subgroup-originator"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    s2l_fec_vrf{YType::str, "s2l-fec-vrf"}
{

    yang_name = "s2l-fec"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec::~S2LFec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec::has_data() const
{
    return s2l_fec_ctype.is_set
	|| s2l_fec_dest.is_set
	|| s2l_fec_extended_tunnel_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_p2mp_id.is_set
	|| s2l_fec_source.is_set
	|| s2l_fec_subgroup_id.is_set
	|| s2l_fec_subgroup_originator.is_set
	|| s2l_fec_tunnel_id.is_set
	|| s2l_fec_vrf.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_fec_ctype.yfilter)
	|| ydk::is_set(s2l_fec_dest.yfilter)
	|| ydk::is_set(s2l_fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(s2l_fec_lsp_id.yfilter)
	|| ydk::is_set(s2l_fec_p2mp_id.yfilter)
	|| ydk::is_set(s2l_fec_source.yfilter)
	|| ydk::is_set(s2l_fec_subgroup_id.yfilter)
	|| ydk::is_set(s2l_fec_subgroup_originator.yfilter)
	|| ydk::is_set(s2l_fec_tunnel_id.yfilter)
	|| ydk::is_set(s2l_fec_vrf.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_ctype.is_set || is_set(s2l_fec_ctype.yfilter)) leaf_name_data.push_back(s2l_fec_ctype.get_name_leafdata());
    if (s2l_fec_dest.is_set || is_set(s2l_fec_dest.yfilter)) leaf_name_data.push_back(s2l_fec_dest.get_name_leafdata());
    if (s2l_fec_extended_tunnel_id.is_set || is_set(s2l_fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(s2l_fec_extended_tunnel_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.yfilter)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.yfilter)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (s2l_fec_source.is_set || is_set(s2l_fec_source.yfilter)) leaf_name_data.push_back(s2l_fec_source.get_name_leafdata());
    if (s2l_fec_subgroup_id.is_set || is_set(s2l_fec_subgroup_id.yfilter)) leaf_name_data.push_back(s2l_fec_subgroup_id.get_name_leafdata());
    if (s2l_fec_subgroup_originator.is_set || is_set(s2l_fec_subgroup_originator.yfilter)) leaf_name_data.push_back(s2l_fec_subgroup_originator.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.yfilter)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (s2l_fec_vrf.is_set || is_set(s2l_fec_vrf.yfilter)) leaf_name_data.push_back(s2l_fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype = value;
        s2l_fec_ctype.value_namespace = name_space;
        s2l_fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest = value;
        s2l_fec_dest.value_namespace = name_space;
        s2l_fec_dest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id = value;
        s2l_fec_extended_tunnel_id.value_namespace = name_space;
        s2l_fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
        s2l_fec_lsp_id.value_namespace = name_space;
        s2l_fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
        s2l_fec_p2mp_id.value_namespace = name_space;
        s2l_fec_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source = value;
        s2l_fec_source.value_namespace = name_space;
        s2l_fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id = value;
        s2l_fec_subgroup_id.value_namespace = name_space;
        s2l_fec_subgroup_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator = value;
        s2l_fec_subgroup_originator.value_namespace = name_space;
        s2l_fec_subgroup_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
        s2l_fec_tunnel_id.value_namespace = name_space;
        s2l_fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf = value;
        s2l_fec_vrf.value_namespace = name_space;
        s2l_fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-fec-ctype" || name == "s2l-fec-dest" || name == "s2l-fec-extended-tunnel-id" || name == "s2l-fec-lsp-id" || name == "s2l-fec-p2mp-id" || name == "s2l-fec-source" || name == "s2l-fec-subgroup-id" || name == "s2l-fec-subgroup-originator" || name == "s2l-fec-tunnel-id" || name == "s2l-fec-vrf")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LReverseLspSubObj::S2LReverseLspSubObj()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "s2l-reverse-lsp-sub-obj"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LReverseLspSubObj::~S2LReverseLspSubObj()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LReverseLspSubObj::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LReverseLspSubObj::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LReverseLspSubObj::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-reverse-lsp-sub-obj";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LReverseLspSubObj::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LReverseLspSubObj::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LReverseLspSubObj::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LReverseLspSubObj::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LReverseLspSubObj::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LReverseLspSubObj::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LSegmentRoutingPath::S2LSegmentRoutingPath()
    :
    has_entropy_label{YType::boolean, "has-entropy-label"},
    has_ip_addresses{YType::boolean, "has-ip-addresses"},
    has_mpls_label{YType::boolean, "has-mpls-label"},
    local_addr{YType::str, "local-addr"},
    mpls_label_value{YType::uint32, "mpls-label-value"},
    remote_addr{YType::str, "remote-addr"},
    sid_type{YType::enumeration, "sid-type"}
{

    yang_name = "s2l-segment-routing-path"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LSegmentRoutingPath::~S2LSegmentRoutingPath()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LSegmentRoutingPath::has_data() const
{
    return has_entropy_label.is_set
	|| has_ip_addresses.is_set
	|| has_mpls_label.is_set
	|| local_addr.is_set
	|| mpls_label_value.is_set
	|| remote_addr.is_set
	|| sid_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LSegmentRoutingPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(has_entropy_label.yfilter)
	|| ydk::is_set(has_ip_addresses.yfilter)
	|| ydk::is_set(has_mpls_label.yfilter)
	|| ydk::is_set(local_addr.yfilter)
	|| ydk::is_set(mpls_label_value.yfilter)
	|| ydk::is_set(remote_addr.yfilter)
	|| ydk::is_set(sid_type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LSegmentRoutingPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-segment-routing-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LSegmentRoutingPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_entropy_label.is_set || is_set(has_entropy_label.yfilter)) leaf_name_data.push_back(has_entropy_label.get_name_leafdata());
    if (has_ip_addresses.is_set || is_set(has_ip_addresses.yfilter)) leaf_name_data.push_back(has_ip_addresses.get_name_leafdata());
    if (has_mpls_label.is_set || is_set(has_mpls_label.yfilter)) leaf_name_data.push_back(has_mpls_label.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.yfilter)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (mpls_label_value.is_set || is_set(mpls_label_value.yfilter)) leaf_name_data.push_back(mpls_label_value.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.yfilter)) leaf_name_data.push_back(remote_addr.get_name_leafdata());
    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LSegmentRoutingPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LSegmentRoutingPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LSegmentRoutingPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "has-entropy-label")
    {
        has_entropy_label = value;
        has_entropy_label.value_namespace = name_space;
        has_entropy_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-ip-addresses")
    {
        has_ip_addresses = value;
        has_ip_addresses.value_namespace = name_space;
        has_ip_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-mpls-label")
    {
        has_mpls_label = value;
        has_mpls_label.value_namespace = name_space;
        has_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
        local_addr.value_namespace = name_space;
        local_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label-value")
    {
        mpls_label_value = value;
        mpls_label_value.value_namespace = name_space;
        mpls_label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
        remote_addr.value_namespace = name_space;
        remote_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LSegmentRoutingPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "has-entropy-label")
    {
        has_entropy_label.yfilter = yfilter;
    }
    if(value_path == "has-ip-addresses")
    {
        has_ip_addresses.yfilter = yfilter;
    }
    if(value_path == "has-mpls-label")
    {
        has_mpls_label.yfilter = yfilter;
    }
    if(value_path == "local-addr")
    {
        local_addr.yfilter = yfilter;
    }
    if(value_path == "mpls-label-value")
    {
        mpls_label_value.yfilter = yfilter;
    }
    if(value_path == "remote-addr")
    {
        remote_addr.yfilter = yfilter;
    }
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LSegmentRoutingPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "has-entropy-label" || name == "has-ip-addresses" || name == "has-mpls-label" || name == "local-addr" || name == "mpls-label-value" || name == "remote-addr" || name == "sid-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "shared-risk-link-group"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SharedRiskLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SoftPreemption::SoftPreemption()
    :
    fr_rrewrite{YType::boolean, "fr-rrewrite"},
    fr_rrewrite_tunnel_name{YType::str, "fr-rrewrite-tunnel-name"},
    preempting_link_address{YType::str, "preempting-link-address"},
    soft_preemption_link{YType::str, "soft-preemption-link"},
    soft_preemption_timestamp{YType::uint32, "soft-preemption-timestamp"},
    status{YType::enumeration, "status"},
    time_to_hard_preemption{YType::uint16, "time-to-hard-preemption"}
{

    yang_name = "soft-preemption"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SoftPreemption::~SoftPreemption()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SoftPreemption::has_data() const
{
    return fr_rrewrite.is_set
	|| fr_rrewrite_tunnel_name.is_set
	|| preempting_link_address.is_set
	|| soft_preemption_link.is_set
	|| soft_preemption_timestamp.is_set
	|| status.is_set
	|| time_to_hard_preemption.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SoftPreemption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fr_rrewrite.yfilter)
	|| ydk::is_set(fr_rrewrite_tunnel_name.yfilter)
	|| ydk::is_set(preempting_link_address.yfilter)
	|| ydk::is_set(soft_preemption_link.yfilter)
	|| ydk::is_set(soft_preemption_timestamp.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(time_to_hard_preemption.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SoftPreemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SoftPreemption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fr_rrewrite.is_set || is_set(fr_rrewrite.yfilter)) leaf_name_data.push_back(fr_rrewrite.get_name_leafdata());
    if (fr_rrewrite_tunnel_name.is_set || is_set(fr_rrewrite_tunnel_name.yfilter)) leaf_name_data.push_back(fr_rrewrite_tunnel_name.get_name_leafdata());
    if (preempting_link_address.is_set || is_set(preempting_link_address.yfilter)) leaf_name_data.push_back(preempting_link_address.get_name_leafdata());
    if (soft_preemption_link.is_set || is_set(soft_preemption_link.yfilter)) leaf_name_data.push_back(soft_preemption_link.get_name_leafdata());
    if (soft_preemption_timestamp.is_set || is_set(soft_preemption_timestamp.yfilter)) leaf_name_data.push_back(soft_preemption_timestamp.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (time_to_hard_preemption.is_set || is_set(time_to_hard_preemption.yfilter)) leaf_name_data.push_back(time_to_hard_preemption.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SoftPreemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SoftPreemption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SoftPreemption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fr-rrewrite")
    {
        fr_rrewrite = value;
        fr_rrewrite.value_namespace = name_space;
        fr_rrewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fr-rrewrite-tunnel-name")
    {
        fr_rrewrite_tunnel_name = value;
        fr_rrewrite_tunnel_name.value_namespace = name_space;
        fr_rrewrite_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempting-link-address")
    {
        preempting_link_address = value;
        preempting_link_address.value_namespace = name_space;
        preempting_link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-link")
    {
        soft_preemption_link = value;
        soft_preemption_link.value_namespace = name_space;
        soft_preemption_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-timestamp")
    {
        soft_preemption_timestamp = value;
        soft_preemption_timestamp.value_namespace = name_space;
        soft_preemption_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-to-hard-preemption")
    {
        time_to_hard_preemption = value;
        time_to_hard_preemption.value_namespace = name_space;
        time_to_hard_preemption.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SoftPreemption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fr-rrewrite")
    {
        fr_rrewrite.yfilter = yfilter;
    }
    if(value_path == "fr-rrewrite-tunnel-name")
    {
        fr_rrewrite_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "preempting-link-address")
    {
        preempting_link_address.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-link")
    {
        soft_preemption_link.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-timestamp")
    {
        soft_preemption_timestamp.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "time-to-hard-preemption")
    {
        time_to_hard_preemption.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SoftPreemption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fr-rrewrite" || name == "fr-rrewrite-tunnel-name" || name == "preempting-link-address" || name == "soft-preemption-link" || name == "soft-preemption-timestamp" || name == "status" || name == "time-to-hard-preemption")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::SrlgCollection()
    :
    srlg_collect_type{YType::enumeration, "srlg-collect-type"}
{

    yang_name = "srlg-collection"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::~SrlgCollection()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::has_data() const
{
    for (std::size_t index=0; index<discovered_srlg.size(); index++)
    {
        if(discovered_srlg[index]->has_data())
            return true;
    }
    return srlg_collect_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::has_operation() const
{
    for (std::size_t index=0; index<discovered_srlg.size(); index++)
    {
        if(discovered_srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(srlg_collect_type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-collection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_collect_type.is_set || is_set(srlg_collect_type.yfilter)) leaf_name_data.push_back(srlg_collect_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovered-srlg")
    {
        for(auto const & c : discovered_srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::DiscoveredSrlg>();
        c->parent = this;
        discovered_srlg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : discovered_srlg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-collect-type")
    {
        srlg_collect_type = value;
        srlg_collect_type.value_namespace = name_space;
        srlg_collect_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-collect-type")
    {
        srlg_collect_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovered-srlg" || name == "srlg-collect-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::DiscoveredSrlg::DiscoveredSrlg()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "discovered-srlg"; yang_parent_name = "srlg-collection"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::DiscoveredSrlg::~DiscoveredSrlg()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::DiscoveredSrlg::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::DiscoveredSrlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::DiscoveredSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovered-srlg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::DiscoveredSrlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::DiscoveredSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::DiscoveredSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::DiscoveredSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::DiscoveredSrlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection::DiscoveredSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::TailEndBfdInfo()
    :
    failure_diagnostic_code{YType::uint32, "failure-diagnostic-code"},
    failure_reason{YType::str, "failure-reason"},
    local_discriminator{YType::uint32, "local-discriminator"},
    min_interval{YType::uint32, "min-interval"},
    min_interval_default{YType::boolean, "min-interval-default"},
    multiplier{YType::uint8, "multiplier"},
    multiplier_default{YType::boolean, "multiplier-default"},
    remote_discriminator{YType::uint32, "remote-discriminator"}
    	,
    session_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::SessionInfo>())
{
    session_info->parent = this;

    yang_name = "tail-end-bfd-info"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::~TailEndBfdInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::has_data() const
{
    return failure_diagnostic_code.is_set
	|| failure_reason.is_set
	|| local_discriminator.is_set
	|| min_interval.is_set
	|| min_interval_default.is_set
	|| multiplier.is_set
	|| multiplier_default.is_set
	|| remote_discriminator.is_set
	|| (session_info !=  nullptr && session_info->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure_diagnostic_code.yfilter)
	|| ydk::is_set(failure_reason.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(min_interval.yfilter)
	|| ydk::is_set(min_interval_default.yfilter)
	|| ydk::is_set(multiplier.yfilter)
	|| ydk::is_set(multiplier_default.yfilter)
	|| ydk::is_set(remote_discriminator.yfilter)
	|| (session_info !=  nullptr && session_info->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tail-end-bfd-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure_diagnostic_code.is_set || is_set(failure_diagnostic_code.yfilter)) leaf_name_data.push_back(failure_diagnostic_code.get_name_leafdata());
    if (failure_reason.is_set || is_set(failure_reason.yfilter)) leaf_name_data.push_back(failure_reason.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (min_interval.is_set || is_set(min_interval.yfilter)) leaf_name_data.push_back(min_interval.get_name_leafdata());
    if (min_interval_default.is_set || is_set(min_interval_default.yfilter)) leaf_name_data.push_back(min_interval_default.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());
    if (multiplier_default.is_set || is_set(multiplier_default.yfilter)) leaf_name_data.push_back(multiplier_default.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.yfilter)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-info")
    {
        if(session_info == nullptr)
        {
            session_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::SessionInfo>();
        }
        return session_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_info != nullptr)
    {
        children["session-info"] = session_info;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failure-diagnostic-code")
    {
        failure_diagnostic_code = value;
        failure_diagnostic_code.value_namespace = name_space;
        failure_diagnostic_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure-reason")
    {
        failure_reason = value;
        failure_reason.value_namespace = name_space;
        failure_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-interval")
    {
        min_interval = value;
        min_interval.value_namespace = name_space;
        min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-interval-default")
    {
        min_interval_default = value;
        min_interval_default.value_namespace = name_space;
        min_interval_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-default")
    {
        multiplier_default = value;
        multiplier_default.value_namespace = name_space;
        multiplier_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
        remote_discriminator.value_namespace = name_space;
        remote_discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failure-diagnostic-code")
    {
        failure_diagnostic_code.yfilter = yfilter;
    }
    if(value_path == "failure-reason")
    {
        failure_reason.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "min-interval")
    {
        min_interval.yfilter = yfilter;
    }
    if(value_path == "min-interval-default")
    {
        min_interval_default.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
    if(value_path == "multiplier-default")
    {
        multiplier_default.yfilter = yfilter;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-info" || name == "failure-diagnostic-code" || name == "failure-reason" || name == "local-discriminator" || name == "min-interval" || name == "min-interval-default" || name == "multiplier" || name == "multiplier-default" || name == "remote-discriminator")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::SessionInfo::SessionInfo()
    :
    state{YType::enumeration, "state"},
    state_change_time{YType::uint32, "state-change-time"}
{

    yang_name = "session-info"; yang_parent_name = "tail-end-bfd-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::SessionInfo::~SessionInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::SessionInfo::has_data() const
{
    return state.is_set
	|| state_change_time.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::SessionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(state_change_time.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::SessionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::SessionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_change_time.is_set || is_set(state_change_time.yfilter)) leaf_name_data.push_back(state_change_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::SessionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::SessionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::SessionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-change-time")
    {
        state_change_time = value;
        state_change_time.value_namespace = name_space;
        state_change_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::SessionInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "state-change-time")
    {
        state_change_time.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo::SessionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "state-change-time")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Tspec::Tspec()
    :
    average_rate{YType::uint64, "average-rate"},
    maximum_burst{YType::uint64, "maximum-burst"},
    peak_rate{YType::uint64, "peak-rate"}
{

    yang_name = "tspec"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Tspec::~Tspec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Tspec::has_data() const
{
    return average_rate.is_set
	|| maximum_burst.is_set
	|| peak_rate.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Tspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_rate.yfilter)
	|| ydk::is_set(maximum_burst.yfilter)
	|| ydk::is_set(peak_rate.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Tspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Tspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_rate.is_set || is_set(average_rate.yfilter)) leaf_name_data.push_back(average_rate.get_name_leafdata());
    if (maximum_burst.is_set || is_set(maximum_burst.yfilter)) leaf_name_data.push_back(maximum_burst.get_name_leafdata());
    if (peak_rate.is_set || is_set(peak_rate.yfilter)) leaf_name_data.push_back(peak_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Tspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Tspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Tspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-rate")
    {
        average_rate = value;
        average_rate.value_namespace = name_space;
        average_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-burst")
    {
        maximum_burst = value;
        maximum_burst.value_namespace = name_space;
        maximum_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-rate")
    {
        peak_rate = value;
        peak_rate.value_namespace = name_space;
        peak_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Tspec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-rate")
    {
        average_rate.yfilter = yfilter;
    }
    if(value_path == "maximum-burst")
    {
        maximum_burst.yfilter = yfilter;
    }
    if(value_path == "peak-rate")
    {
        peak_rate.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Tspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-rate" || name == "maximum-burst" || name == "peak-rate")
        return true;
    return false;
}

MplsTe::PathProtection::PathProtection()
    :
    switchover_log(std::make_shared<MplsTe::PathProtection::SwitchoverLog>())
{
    switchover_log->parent = this;

    yang_name = "path-protection"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::PathProtection::~PathProtection()
{
}

bool MplsTe::PathProtection::has_data() const
{
    return (switchover_log !=  nullptr && switchover_log->has_data());
}

bool MplsTe::PathProtection::has_operation() const
{
    return is_set(yfilter)
	|| (switchover_log !=  nullptr && switchover_log->has_operation());
}

std::string MplsTe::PathProtection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::PathProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::PathProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::PathProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switchover-log")
    {
        if(switchover_log == nullptr)
        {
            switchover_log = std::make_shared<MplsTe::PathProtection::SwitchoverLog>();
        }
        return switchover_log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::PathProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(switchover_log != nullptr)
    {
        children["switchover-log"] = switchover_log;
    }

    return children;
}

void MplsTe::PathProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::PathProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::PathProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchover-log")
        return true;
    return false;
}

MplsTe::PathProtection::SwitchoverLog::SwitchoverLog()
    :
    average_switchover_millisec{YType::uint32, "average-switchover-millisec"},
    maximum_switchover_millisec{YType::uint32, "maximum-switchover-millisec"},
    path_protection_switchovers{YType::uint32, "path-protection-switchovers"}
{

    yang_name = "switchover-log"; yang_parent_name = "path-protection"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::PathProtection::SwitchoverLog::~SwitchoverLog()
{
}

bool MplsTe::PathProtection::SwitchoverLog::has_data() const
{
    for (std::size_t index=0; index<path_protection_switchover_entry.size(); index++)
    {
        if(path_protection_switchover_entry[index]->has_data())
            return true;
    }
    return average_switchover_millisec.is_set
	|| maximum_switchover_millisec.is_set
	|| path_protection_switchovers.is_set;
}

bool MplsTe::PathProtection::SwitchoverLog::has_operation() const
{
    for (std::size_t index=0; index<path_protection_switchover_entry.size(); index++)
    {
        if(path_protection_switchover_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(average_switchover_millisec.yfilter)
	|| ydk::is_set(maximum_switchover_millisec.yfilter)
	|| ydk::is_set(path_protection_switchovers.yfilter);
}

std::string MplsTe::PathProtection::SwitchoverLog::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/path-protection/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::PathProtection::SwitchoverLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchover-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::PathProtection::SwitchoverLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_switchover_millisec.is_set || is_set(average_switchover_millisec.yfilter)) leaf_name_data.push_back(average_switchover_millisec.get_name_leafdata());
    if (maximum_switchover_millisec.is_set || is_set(maximum_switchover_millisec.yfilter)) leaf_name_data.push_back(maximum_switchover_millisec.get_name_leafdata());
    if (path_protection_switchovers.is_set || is_set(path_protection_switchovers.yfilter)) leaf_name_data.push_back(path_protection_switchovers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::PathProtection::SwitchoverLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-protection-switchover-entry")
    {
        for(auto const & c : path_protection_switchover_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry>();
        c->parent = this;
        path_protection_switchover_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::PathProtection::SwitchoverLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_protection_switchover_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::PathProtection::SwitchoverLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-switchover-millisec")
    {
        average_switchover_millisec = value;
        average_switchover_millisec.value_namespace = name_space;
        average_switchover_millisec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-switchover-millisec")
    {
        maximum_switchover_millisec = value;
        maximum_switchover_millisec.value_namespace = name_space;
        maximum_switchover_millisec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection-switchovers")
    {
        path_protection_switchovers = value;
        path_protection_switchovers.value_namespace = name_space;
        path_protection_switchovers.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::PathProtection::SwitchoverLog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-switchover-millisec")
    {
        average_switchover_millisec.yfilter = yfilter;
    }
    if(value_path == "maximum-switchover-millisec")
    {
        maximum_switchover_millisec.yfilter = yfilter;
    }
    if(value_path == "path-protection-switchovers")
    {
        path_protection_switchovers.yfilter = yfilter;
    }
}

bool MplsTe::PathProtection::SwitchoverLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-protection-switchover-entry" || name == "average-switchover-millisec" || name == "maximum-switchover-millisec" || name == "path-protection-switchovers")
        return true;
    return false;
}

MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry::PathProtectionSwitchoverEntry()
    :
    date_of_error_detection{YType::uint32, "date-of-error-detection"},
    date_of_error_detection_millisec{YType::uint32, "date-of-error-detection-millisec"},
    from_lsp_id{YType::uint16, "from-lsp-id"},
    path_protection_switchover_event_index{YType::uint32, "path-protection-switchover-event-index"},
    path_protection_switchover_reason{YType::enumeration, "path-protection-switchover-reason"},
    path_protection_tunnel_id{YType::uint16, "path-protection-tunnel-id"},
    switchover_duration_millisec{YType::uint32, "switchover-duration-millisec"},
    to_lsp_id{YType::uint16, "to-lsp-id"}
{

    yang_name = "path-protection-switchover-entry"; yang_parent_name = "switchover-log"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry::~PathProtectionSwitchoverEntry()
{
}

bool MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry::has_data() const
{
    return date_of_error_detection.is_set
	|| date_of_error_detection_millisec.is_set
	|| from_lsp_id.is_set
	|| path_protection_switchover_event_index.is_set
	|| path_protection_switchover_reason.is_set
	|| path_protection_tunnel_id.is_set
	|| switchover_duration_millisec.is_set
	|| to_lsp_id.is_set;
}

bool MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(date_of_error_detection.yfilter)
	|| ydk::is_set(date_of_error_detection_millisec.yfilter)
	|| ydk::is_set(from_lsp_id.yfilter)
	|| ydk::is_set(path_protection_switchover_event_index.yfilter)
	|| ydk::is_set(path_protection_switchover_reason.yfilter)
	|| ydk::is_set(path_protection_tunnel_id.yfilter)
	|| ydk::is_set(switchover_duration_millisec.yfilter)
	|| ydk::is_set(to_lsp_id.yfilter);
}

std::string MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/path-protection/switchover-log/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-protection-switchover-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date_of_error_detection.is_set || is_set(date_of_error_detection.yfilter)) leaf_name_data.push_back(date_of_error_detection.get_name_leafdata());
    if (date_of_error_detection_millisec.is_set || is_set(date_of_error_detection_millisec.yfilter)) leaf_name_data.push_back(date_of_error_detection_millisec.get_name_leafdata());
    if (from_lsp_id.is_set || is_set(from_lsp_id.yfilter)) leaf_name_data.push_back(from_lsp_id.get_name_leafdata());
    if (path_protection_switchover_event_index.is_set || is_set(path_protection_switchover_event_index.yfilter)) leaf_name_data.push_back(path_protection_switchover_event_index.get_name_leafdata());
    if (path_protection_switchover_reason.is_set || is_set(path_protection_switchover_reason.yfilter)) leaf_name_data.push_back(path_protection_switchover_reason.get_name_leafdata());
    if (path_protection_tunnel_id.is_set || is_set(path_protection_tunnel_id.yfilter)) leaf_name_data.push_back(path_protection_tunnel_id.get_name_leafdata());
    if (switchover_duration_millisec.is_set || is_set(switchover_duration_millisec.yfilter)) leaf_name_data.push_back(switchover_duration_millisec.get_name_leafdata());
    if (to_lsp_id.is_set || is_set(to_lsp_id.yfilter)) leaf_name_data.push_back(to_lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "date-of-error-detection")
    {
        date_of_error_detection = value;
        date_of_error_detection.value_namespace = name_space;
        date_of_error_detection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date-of-error-detection-millisec")
    {
        date_of_error_detection_millisec = value;
        date_of_error_detection_millisec.value_namespace = name_space;
        date_of_error_detection_millisec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "from-lsp-id")
    {
        from_lsp_id = value;
        from_lsp_id.value_namespace = name_space;
        from_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection-switchover-event-index")
    {
        path_protection_switchover_event_index = value;
        path_protection_switchover_event_index.value_namespace = name_space;
        path_protection_switchover_event_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection-switchover-reason")
    {
        path_protection_switchover_reason = value;
        path_protection_switchover_reason.value_namespace = name_space;
        path_protection_switchover_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection-tunnel-id")
    {
        path_protection_tunnel_id = value;
        path_protection_tunnel_id.value_namespace = name_space;
        path_protection_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-duration-millisec")
    {
        switchover_duration_millisec = value;
        switchover_duration_millisec.value_namespace = name_space;
        switchover_duration_millisec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-lsp-id")
    {
        to_lsp_id = value;
        to_lsp_id.value_namespace = name_space;
        to_lsp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "date-of-error-detection")
    {
        date_of_error_detection.yfilter = yfilter;
    }
    if(value_path == "date-of-error-detection-millisec")
    {
        date_of_error_detection_millisec.yfilter = yfilter;
    }
    if(value_path == "from-lsp-id")
    {
        from_lsp_id.yfilter = yfilter;
    }
    if(value_path == "path-protection-switchover-event-index")
    {
        path_protection_switchover_event_index.yfilter = yfilter;
    }
    if(value_path == "path-protection-switchover-reason")
    {
        path_protection_switchover_reason.yfilter = yfilter;
    }
    if(value_path == "path-protection-tunnel-id")
    {
        path_protection_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "switchover-duration-millisec")
    {
        switchover_duration_millisec.yfilter = yfilter;
    }
    if(value_path == "to-lsp-id")
    {
        to_lsp_id.yfilter = yfilter;
    }
}

bool MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "date-of-error-detection" || name == "date-of-error-detection-millisec" || name == "from-lsp-id" || name == "path-protection-switchover-event-index" || name == "path-protection-switchover-reason" || name == "path-protection-tunnel-id" || name == "switchover-duration-millisec" || name == "to-lsp-id")
        return true;
    return false;
}

MplsTe::SegmentRouting::SegmentRouting()
    :
    sr_node_infos(std::make_shared<MplsTe::SegmentRouting::SrNodeInfos>())
	,sr_prefix_infos(std::make_shared<MplsTe::SegmentRouting::SrPrefixInfos>())
	,srigp_area_infos(std::make_shared<MplsTe::SegmentRouting::SrigpAreaInfos>())
{
    sr_node_infos->parent = this;
    sr_prefix_infos->parent = this;
    srigp_area_infos->parent = this;

    yang_name = "segment-routing"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::SegmentRouting::~SegmentRouting()
{
}

bool MplsTe::SegmentRouting::has_data() const
{
    return (sr_node_infos !=  nullptr && sr_node_infos->has_data())
	|| (sr_prefix_infos !=  nullptr && sr_prefix_infos->has_data())
	|| (srigp_area_infos !=  nullptr && srigp_area_infos->has_data());
}

bool MplsTe::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| (sr_node_infos !=  nullptr && sr_node_infos->has_operation())
	|| (sr_prefix_infos !=  nullptr && sr_prefix_infos->has_operation())
	|| (srigp_area_infos !=  nullptr && srigp_area_infos->has_operation());
}

std::string MplsTe::SegmentRouting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-node-infos")
    {
        if(sr_node_infos == nullptr)
        {
            sr_node_infos = std::make_shared<MplsTe::SegmentRouting::SrNodeInfos>();
        }
        return sr_node_infos;
    }

    if(child_yang_name == "sr-prefix-infos")
    {
        if(sr_prefix_infos == nullptr)
        {
            sr_prefix_infos = std::make_shared<MplsTe::SegmentRouting::SrPrefixInfos>();
        }
        return sr_prefix_infos;
    }

    if(child_yang_name == "srigp-area-infos")
    {
        if(srigp_area_infos == nullptr)
        {
            srigp_area_infos = std::make_shared<MplsTe::SegmentRouting::SrigpAreaInfos>();
        }
        return srigp_area_infos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_node_infos != nullptr)
    {
        children["sr-node-infos"] = sr_node_infos;
    }

    if(sr_prefix_infos != nullptr)
    {
        children["sr-prefix-infos"] = sr_prefix_infos;
    }

    if(srigp_area_infos != nullptr)
    {
        children["srigp-area-infos"] = srigp_area_infos;
    }

    return children;
}

void MplsTe::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-node-infos" || name == "sr-prefix-infos" || name == "srigp-area-infos")
        return true;
    return false;
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfos()
{

    yang_name = "sr-node-infos"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::SegmentRouting::SrNodeInfos::~SrNodeInfos()
{
}

bool MplsTe::SegmentRouting::SrNodeInfos::has_data() const
{
    for (std::size_t index=0; index<sr_node_info.size(); index++)
    {
        if(sr_node_info[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::SegmentRouting::SrNodeInfos::has_operation() const
{
    for (std::size_t index=0; index<sr_node_info.size(); index++)
    {
        if(sr_node_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::SegmentRouting::SrNodeInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/segment-routing/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SegmentRouting::SrNodeInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-node-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SegmentRouting::SrNodeInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrNodeInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-node-info")
    {
        for(auto const & c : sr_node_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo>();
        c->parent = this;
        sr_node_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SegmentRouting::SrNodeInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sr_node_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::SegmentRouting::SrNodeInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::SegmentRouting::SrNodeInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::SegmentRouting::SrNodeInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-node-info")
        return true;
    return false;
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo()
    :
    protocol{YType::enumeration, "protocol"},
    igp_instance{YType::str, "igp-instance"},
    area{YType::int32, "area"},
    igp_node_id{YType::str, "igp-node-id"},
    local_node_igp_id{YType::str, "local-node-igp-id"},
    local_node_te_router_id{YType::str, "local-node-te-router-id"},
    topology_node_is_router{YType::boolean, "topology-node-is-router"},
    topology_node_overloaded{YType::boolean, "topology-node-overloaded"}
    	,
    igp_area(std::make_shared<MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea>())
	,sr_node_info(std::make_shared<MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_>())
{
    igp_area->parent = this;
    sr_node_info->parent = this;

    yang_name = "sr-node-info"; yang_parent_name = "sr-node-infos"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::~SrNodeInfo()
{
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::has_data() const
{
    for (std::size_t index=0; index<node_link.size(); index++)
    {
        if(node_link[index]->has_data())
            return true;
    }
    return protocol.is_set
	|| igp_instance.is_set
	|| area.is_set
	|| igp_node_id.is_set
	|| local_node_igp_id.is_set
	|| local_node_te_router_id.is_set
	|| topology_node_is_router.is_set
	|| topology_node_overloaded.is_set
	|| (igp_area !=  nullptr && igp_area->has_data())
	|| (sr_node_info !=  nullptr && sr_node_info->has_data());
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::has_operation() const
{
    for (std::size_t index=0; index<node_link.size(); index++)
    {
        if(node_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(igp_instance.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(igp_node_id.yfilter)
	|| ydk::is_set(local_node_igp_id.yfilter)
	|| ydk::is_set(local_node_te_router_id.yfilter)
	|| ydk::is_set(topology_node_is_router.yfilter)
	|| ydk::is_set(topology_node_overloaded.yfilter)
	|| (igp_area !=  nullptr && igp_area->has_operation())
	|| (sr_node_info !=  nullptr && sr_node_info->has_operation());
}

std::string MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/segment-routing/sr-node-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-node-info" <<"[protocol='" <<protocol <<"']" <<"[igp-instance='" <<igp_instance <<"']" <<"[area='" <<area <<"']" <<"[igp-node-id='" <<igp_node_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.yfilter)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (igp_node_id.is_set || is_set(igp_node_id.yfilter)) leaf_name_data.push_back(igp_node_id.get_name_leafdata());
    if (local_node_igp_id.is_set || is_set(local_node_igp_id.yfilter)) leaf_name_data.push_back(local_node_igp_id.get_name_leafdata());
    if (local_node_te_router_id.is_set || is_set(local_node_te_router_id.yfilter)) leaf_name_data.push_back(local_node_te_router_id.get_name_leafdata());
    if (topology_node_is_router.is_set || is_set(topology_node_is_router.yfilter)) leaf_name_data.push_back(topology_node_is_router.get_name_leafdata());
    if (topology_node_overloaded.is_set || is_set(topology_node_overloaded.yfilter)) leaf_name_data.push_back(topology_node_overloaded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-area")
    {
        if(igp_area == nullptr)
        {
            igp_area = std::make_shared<MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea>();
        }
        return igp_area;
    }

    if(child_yang_name == "node-link")
    {
        for(auto const & c : node_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink>();
        c->parent = this;
        node_link.push_back(c);
        return c;
    }

    if(child_yang_name == "sr-node-info")
    {
        if(sr_node_info == nullptr)
        {
            sr_node_info = std::make_shared<MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_>();
        }
        return sr_node_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igp_area != nullptr)
    {
        children["igp-area"] = igp_area;
    }

    for (auto const & c : node_link)
    {
        children[c->get_segment_path()] = c;
    }

    if(sr_node_info != nullptr)
    {
        children["sr-node-info"] = sr_node_info;
    }

    return children;
}

void MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
        igp_instance.value_namespace = name_space;
        igp_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-node-id")
    {
        igp_node_id = value;
        igp_node_id.value_namespace = name_space;
        igp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-node-igp-id")
    {
        local_node_igp_id = value;
        local_node_igp_id.value_namespace = name_space;
        local_node_igp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-node-te-router-id")
    {
        local_node_te_router_id = value;
        local_node_te_router_id.value_namespace = name_space;
        local_node_te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-node-is-router")
    {
        topology_node_is_router = value;
        topology_node_is_router.value_namespace = name_space;
        topology_node_is_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-node-overloaded")
    {
        topology_node_overloaded = value;
        topology_node_overloaded.value_namespace = name_space;
        topology_node_overloaded.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "igp-instance")
    {
        igp_instance.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "igp-node-id")
    {
        igp_node_id.yfilter = yfilter;
    }
    if(value_path == "local-node-igp-id")
    {
        local_node_igp_id.yfilter = yfilter;
    }
    if(value_path == "local-node-te-router-id")
    {
        local_node_te_router_id.yfilter = yfilter;
    }
    if(value_path == "topology-node-is-router")
    {
        topology_node_is_router.yfilter = yfilter;
    }
    if(value_path == "topology-node-overloaded")
    {
        topology_node_overloaded.yfilter = yfilter;
    }
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-area" || name == "node-link" || name == "sr-node-info" || name == "protocol" || name == "igp-instance" || name == "area" || name == "igp-node-id" || name == "local-node-igp-id" || name == "local-node-te-router-id" || name == "topology-node-is-router" || name == "topology-node-overloaded")
        return true;
    return false;
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea::IgpArea()
    :
    igp_area{YType::uint32, "igp-area"},
    igp_area_format{YType::enumeration, "igp-area-format"},
    igp_instance_xr{YType::str, "igp-instance-xr"},
    igp_type{YType::enumeration, "igp-type"},
    segment_routing_enabled{YType::boolean, "segment-routing-enabled"},
    strict_spf_enabled{YType::boolean, "strict-spf-enabled"}
{

    yang_name = "igp-area"; yang_parent_name = "sr-node-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea::~IgpArea()
{
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea::has_data() const
{
    return igp_area.is_set
	|| igp_area_format.is_set
	|| igp_instance_xr.is_set
	|| igp_type.is_set
	|| segment_routing_enabled.is_set
	|| strict_spf_enabled.is_set;
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_area.yfilter)
	|| ydk::is_set(igp_area_format.yfilter)
	|| ydk::is_set(igp_instance_xr.yfilter)
	|| ydk::is_set(igp_type.yfilter)
	|| ydk::is_set(segment_routing_enabled.yfilter)
	|| ydk::is_set(strict_spf_enabled.yfilter);
}

std::string MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_area.is_set || is_set(igp_area.yfilter)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (igp_area_format.is_set || is_set(igp_area_format.yfilter)) leaf_name_data.push_back(igp_area_format.get_name_leafdata());
    if (igp_instance_xr.is_set || is_set(igp_instance_xr.yfilter)) leaf_name_data.push_back(igp_instance_xr.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (segment_routing_enabled.is_set || is_set(segment_routing_enabled.yfilter)) leaf_name_data.push_back(segment_routing_enabled.get_name_leafdata());
    if (strict_spf_enabled.is_set || is_set(strict_spf_enabled.yfilter)) leaf_name_data.push_back(strict_spf_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-area")
    {
        igp_area = value;
        igp_area.value_namespace = name_space;
        igp_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area-format")
    {
        igp_area_format = value;
        igp_area_format.value_namespace = name_space;
        igp_area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-instance-xr")
    {
        igp_instance_xr = value;
        igp_instance_xr.value_namespace = name_space;
        igp_instance_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-enabled")
    {
        segment_routing_enabled = value;
        segment_routing_enabled.value_namespace = name_space;
        segment_routing_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict-spf-enabled")
    {
        strict_spf_enabled = value;
        strict_spf_enabled.value_namespace = name_space;
        strict_spf_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-area")
    {
        igp_area.yfilter = yfilter;
    }
    if(value_path == "igp-area-format")
    {
        igp_area_format.yfilter = yfilter;
    }
    if(value_path == "igp-instance-xr")
    {
        igp_instance_xr.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
    if(value_path == "segment-routing-enabled")
    {
        segment_routing_enabled.yfilter = yfilter;
    }
    if(value_path == "strict-spf-enabled")
    {
        strict_spf_enabled.yfilter = yfilter;
    }
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-area" || name == "igp-area-format" || name == "igp-instance-xr" || name == "igp-type" || name == "segment-routing-enabled" || name == "strict-spf-enabled")
        return true;
    return false;
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::NodeLink()
    :
    topology_link_fragment_id{YType::uint32, "topology-link-fragment-id"},
    topology_link_igp_metric{YType::uint32, "topology-link-igp-metric"},
    topology_link_interface_address{YType::str, "topology-link-interface-address"},
    topology_link_interface_id{YType::uint32, "topology-link-interface-id"},
    topology_link_neighbor_address{YType::str, "topology-link-neighbor-address"},
    topology_link_neighbor_generation{YType::uint32, "topology-link-neighbor-generation"},
    topology_link_neighbor_id{YType::uint32, "topology-link-neighbor-id"},
    topology_link_neighbor_node_id{YType::uint32, "topology-link-neighbor-node-id"},
    topology_link_neighbor_system_id{YType::str, "topology-link-neighbor-system-id"},
    topology_link_te_metric{YType::uint32, "topology-link-te-metric"},
    topology_link_type{YType::enumeration, "topology-link-type"}
{

    yang_name = "node-link"; yang_parent_name = "sr-node-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::~NodeLink()
{
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::has_data() const
{
    for (std::size_t index=0; index<adjacency_sids.size(); index++)
    {
        if(adjacency_sids[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<topology_link_extended_affinity_bit.size(); index++)
    {
        if(topology_link_extended_affinity_bit[index]->has_data())
            return true;
    }
    return topology_link_fragment_id.is_set
	|| topology_link_igp_metric.is_set
	|| topology_link_interface_address.is_set
	|| topology_link_interface_id.is_set
	|| topology_link_neighbor_address.is_set
	|| topology_link_neighbor_generation.is_set
	|| topology_link_neighbor_id.is_set
	|| topology_link_neighbor_node_id.is_set
	|| topology_link_neighbor_system_id.is_set
	|| topology_link_te_metric.is_set
	|| topology_link_type.is_set;
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::has_operation() const
{
    for (std::size_t index=0; index<adjacency_sids.size(); index++)
    {
        if(adjacency_sids[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<topology_link_extended_affinity_bit.size(); index++)
    {
        if(topology_link_extended_affinity_bit[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(topology_link_fragment_id.yfilter)
	|| ydk::is_set(topology_link_igp_metric.yfilter)
	|| ydk::is_set(topology_link_interface_address.yfilter)
	|| ydk::is_set(topology_link_interface_id.yfilter)
	|| ydk::is_set(topology_link_neighbor_address.yfilter)
	|| ydk::is_set(topology_link_neighbor_generation.yfilter)
	|| ydk::is_set(topology_link_neighbor_id.yfilter)
	|| ydk::is_set(topology_link_neighbor_node_id.yfilter)
	|| ydk::is_set(topology_link_neighbor_system_id.yfilter)
	|| ydk::is_set(topology_link_te_metric.yfilter)
	|| ydk::is_set(topology_link_type.yfilter);
}

std::string MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_link_fragment_id.is_set || is_set(topology_link_fragment_id.yfilter)) leaf_name_data.push_back(topology_link_fragment_id.get_name_leafdata());
    if (topology_link_igp_metric.is_set || is_set(topology_link_igp_metric.yfilter)) leaf_name_data.push_back(topology_link_igp_metric.get_name_leafdata());
    if (topology_link_interface_address.is_set || is_set(topology_link_interface_address.yfilter)) leaf_name_data.push_back(topology_link_interface_address.get_name_leafdata());
    if (topology_link_interface_id.is_set || is_set(topology_link_interface_id.yfilter)) leaf_name_data.push_back(topology_link_interface_id.get_name_leafdata());
    if (topology_link_neighbor_address.is_set || is_set(topology_link_neighbor_address.yfilter)) leaf_name_data.push_back(topology_link_neighbor_address.get_name_leafdata());
    if (topology_link_neighbor_generation.is_set || is_set(topology_link_neighbor_generation.yfilter)) leaf_name_data.push_back(topology_link_neighbor_generation.get_name_leafdata());
    if (topology_link_neighbor_id.is_set || is_set(topology_link_neighbor_id.yfilter)) leaf_name_data.push_back(topology_link_neighbor_id.get_name_leafdata());
    if (topology_link_neighbor_node_id.is_set || is_set(topology_link_neighbor_node_id.yfilter)) leaf_name_data.push_back(topology_link_neighbor_node_id.get_name_leafdata());
    if (topology_link_neighbor_system_id.is_set || is_set(topology_link_neighbor_system_id.yfilter)) leaf_name_data.push_back(topology_link_neighbor_system_id.get_name_leafdata());
    if (topology_link_te_metric.is_set || is_set(topology_link_te_metric.yfilter)) leaf_name_data.push_back(topology_link_te_metric.get_name_leafdata());
    if (topology_link_type.is_set || is_set(topology_link_type.yfilter)) leaf_name_data.push_back(topology_link_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sids")
    {
        for(auto const & c : adjacency_sids)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids>();
        c->parent = this;
        adjacency_sids.push_back(c);
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
        auto c = std::make_shared<MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(c);
        return c;
    }

    if(child_yang_name == "topology-link-extended-affinity-bit")
    {
        for(auto const & c : topology_link_extended_affinity_bit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::TopologyLinkExtendedAffinityBit>();
        c->parent = this;
        topology_link_extended_affinity_bit.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : adjacency_sids)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : shared_risk_link_group)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : topology_link_extended_affinity_bit)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-link-fragment-id")
    {
        topology_link_fragment_id = value;
        topology_link_fragment_id.value_namespace = name_space;
        topology_link_fragment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-igp-metric")
    {
        topology_link_igp_metric = value;
        topology_link_igp_metric.value_namespace = name_space;
        topology_link_igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-interface-address")
    {
        topology_link_interface_address = value;
        topology_link_interface_address.value_namespace = name_space;
        topology_link_interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-interface-id")
    {
        topology_link_interface_id = value;
        topology_link_interface_id.value_namespace = name_space;
        topology_link_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-neighbor-address")
    {
        topology_link_neighbor_address = value;
        topology_link_neighbor_address.value_namespace = name_space;
        topology_link_neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-neighbor-generation")
    {
        topology_link_neighbor_generation = value;
        topology_link_neighbor_generation.value_namespace = name_space;
        topology_link_neighbor_generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-neighbor-id")
    {
        topology_link_neighbor_id = value;
        topology_link_neighbor_id.value_namespace = name_space;
        topology_link_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-neighbor-node-id")
    {
        topology_link_neighbor_node_id = value;
        topology_link_neighbor_node_id.value_namespace = name_space;
        topology_link_neighbor_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-neighbor-system-id")
    {
        topology_link_neighbor_system_id = value;
        topology_link_neighbor_system_id.value_namespace = name_space;
        topology_link_neighbor_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-te-metric")
    {
        topology_link_te_metric = value;
        topology_link_te_metric.value_namespace = name_space;
        topology_link_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-type")
    {
        topology_link_type = value;
        topology_link_type.value_namespace = name_space;
        topology_link_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-link-fragment-id")
    {
        topology_link_fragment_id.yfilter = yfilter;
    }
    if(value_path == "topology-link-igp-metric")
    {
        topology_link_igp_metric.yfilter = yfilter;
    }
    if(value_path == "topology-link-interface-address")
    {
        topology_link_interface_address.yfilter = yfilter;
    }
    if(value_path == "topology-link-interface-id")
    {
        topology_link_interface_id.yfilter = yfilter;
    }
    if(value_path == "topology-link-neighbor-address")
    {
        topology_link_neighbor_address.yfilter = yfilter;
    }
    if(value_path == "topology-link-neighbor-generation")
    {
        topology_link_neighbor_generation.yfilter = yfilter;
    }
    if(value_path == "topology-link-neighbor-id")
    {
        topology_link_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "topology-link-neighbor-node-id")
    {
        topology_link_neighbor_node_id.yfilter = yfilter;
    }
    if(value_path == "topology-link-neighbor-system-id")
    {
        topology_link_neighbor_system_id.yfilter = yfilter;
    }
    if(value_path == "topology-link-te-metric")
    {
        topology_link_te_metric.yfilter = yfilter;
    }
    if(value_path == "topology-link-type")
    {
        topology_link_type.yfilter = yfilter;
    }
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sids" || name == "shared-risk-link-group" || name == "topology-link-extended-affinity-bit" || name == "topology-link-fragment-id" || name == "topology-link-igp-metric" || name == "topology-link-interface-address" || name == "topology-link-interface-id" || name == "topology-link-neighbor-address" || name == "topology-link-neighbor-generation" || name == "topology-link-neighbor-id" || name == "topology-link-neighbor-node-id" || name == "topology-link-neighbor-system-id" || name == "topology-link-te-metric" || name == "topology-link-type")
        return true;
    return false;
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids::AdjacencySids()
    :
    adjacency_sid{YType::uint32, "adjacency-sid"},
    flag_b{YType::boolean, "flag-b"},
    flag_f{YType::boolean, "flag-f"},
    flag_l{YType::boolean, "flag-l"},
    flag_s{YType::boolean, "flag-s"},
    flag_v{YType::boolean, "flag-v"},
    link_type{YType::enumeration, "link-type"},
    local_addr{YType::str, "local-addr"},
    nbr_node_igpid{YType::str, "nbr-node-igpid"},
    nbr_node_te_router_id{YType::str, "nbr-node-te-router-id"},
    remote_addr{YType::str, "remote-addr"}
{

    yang_name = "adjacency-sids"; yang_parent_name = "node-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids::~AdjacencySids()
{
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids::has_data() const
{
    return adjacency_sid.is_set
	|| flag_b.is_set
	|| flag_f.is_set
	|| flag_l.is_set
	|| flag_s.is_set
	|| flag_v.is_set
	|| link_type.is_set
	|| local_addr.is_set
	|| nbr_node_igpid.is_set
	|| nbr_node_te_router_id.is_set
	|| remote_addr.is_set;
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_sid.yfilter)
	|| ydk::is_set(flag_b.yfilter)
	|| ydk::is_set(flag_f.yfilter)
	|| ydk::is_set(flag_l.yfilter)
	|| ydk::is_set(flag_s.yfilter)
	|| ydk::is_set(flag_v.yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(local_addr.yfilter)
	|| ydk::is_set(nbr_node_igpid.yfilter)
	|| ydk::is_set(nbr_node_te_router_id.yfilter)
	|| ydk::is_set(remote_addr.yfilter);
}

std::string MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid.is_set || is_set(adjacency_sid.yfilter)) leaf_name_data.push_back(adjacency_sid.get_name_leafdata());
    if (flag_b.is_set || is_set(flag_b.yfilter)) leaf_name_data.push_back(flag_b.get_name_leafdata());
    if (flag_f.is_set || is_set(flag_f.yfilter)) leaf_name_data.push_back(flag_f.get_name_leafdata());
    if (flag_l.is_set || is_set(flag_l.yfilter)) leaf_name_data.push_back(flag_l.get_name_leafdata());
    if (flag_s.is_set || is_set(flag_s.yfilter)) leaf_name_data.push_back(flag_s.get_name_leafdata());
    if (flag_v.is_set || is_set(flag_v.yfilter)) leaf_name_data.push_back(flag_v.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.yfilter)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (nbr_node_igpid.is_set || is_set(nbr_node_igpid.yfilter)) leaf_name_data.push_back(nbr_node_igpid.get_name_leafdata());
    if (nbr_node_te_router_id.is_set || is_set(nbr_node_te_router_id.yfilter)) leaf_name_data.push_back(nbr_node_te_router_id.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.yfilter)) leaf_name_data.push_back(remote_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-sid")
    {
        adjacency_sid = value;
        adjacency_sid.value_namespace = name_space;
        adjacency_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-b")
    {
        flag_b = value;
        flag_b.value_namespace = name_space;
        flag_b.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-f")
    {
        flag_f = value;
        flag_f.value_namespace = name_space;
        flag_f.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-l")
    {
        flag_l = value;
        flag_l.value_namespace = name_space;
        flag_l.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-s")
    {
        flag_s = value;
        flag_s.value_namespace = name_space;
        flag_s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-v")
    {
        flag_v = value;
        flag_v.value_namespace = name_space;
        flag_v.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
        local_addr.value_namespace = name_space;
        local_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-node-igpid")
    {
        nbr_node_igpid = value;
        nbr_node_igpid.value_namespace = name_space;
        nbr_node_igpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-node-te-router-id")
    {
        nbr_node_te_router_id = value;
        nbr_node_te_router_id.value_namespace = name_space;
        nbr_node_te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
        remote_addr.value_namespace = name_space;
        remote_addr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-sid")
    {
        adjacency_sid.yfilter = yfilter;
    }
    if(value_path == "flag-b")
    {
        flag_b.yfilter = yfilter;
    }
    if(value_path == "flag-f")
    {
        flag_f.yfilter = yfilter;
    }
    if(value_path == "flag-l")
    {
        flag_l.yfilter = yfilter;
    }
    if(value_path == "flag-s")
    {
        flag_s.yfilter = yfilter;
    }
    if(value_path == "flag-v")
    {
        flag_v.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "local-addr")
    {
        local_addr.yfilter = yfilter;
    }
    if(value_path == "nbr-node-igpid")
    {
        nbr_node_igpid.yfilter = yfilter;
    }
    if(value_path == "nbr-node-te-router-id")
    {
        nbr_node_te_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-addr")
    {
        remote_addr.yfilter = yfilter;
    }
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid" || name == "flag-b" || name == "flag-f" || name == "flag-l" || name == "flag-s" || name == "flag-v" || name == "link-type" || name == "local-addr" || name == "nbr-node-igpid" || name == "nbr-node-te-router-id" || name == "remote-addr")
        return true;
    return false;
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "shared-risk-link-group"; yang_parent_name = "node-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::TopologyLinkExtendedAffinityBit::TopologyLinkExtendedAffinityBit()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "topology-link-extended-affinity-bit"; yang_parent_name = "node-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::TopologyLinkExtendedAffinityBit::~TopologyLinkExtendedAffinityBit()
{
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::TopologyLinkExtendedAffinityBit::has_data() const
{
    return entry.is_set;
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::TopologyLinkExtendedAffinityBit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::TopologyLinkExtendedAffinityBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-extended-affinity-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::TopologyLinkExtendedAffinityBit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::TopologyLinkExtendedAffinityBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::TopologyLinkExtendedAffinityBit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::TopologyLinkExtendedAffinityBit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::TopologyLinkExtendedAffinityBit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::TopologyLinkExtendedAffinityBit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_::SrNodeInfo_()
    :
    segment_id{YType::uint32, "segment-id"},
    segment_id_local_absolute_value{YType::uint32, "segment-id-local-absolute-value"},
    srgb_size{YType::uint32, "srgb-size"},
    srgb_start{YType::uint32, "srgb-start"}
{

    yang_name = "sr-node-info"; yang_parent_name = "sr-node-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_::~SrNodeInfo_()
{
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_::has_data() const
{
    return segment_id.is_set
	|| segment_id_local_absolute_value.is_set
	|| srgb_size.is_set
	|| srgb_start.is_set;
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment_id.yfilter)
	|| ydk::is_set(segment_id_local_absolute_value.yfilter)
	|| ydk::is_set(srgb_size.yfilter)
	|| ydk::is_set(srgb_start.yfilter);
}

std::string MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-node-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_id.is_set || is_set(segment_id.yfilter)) leaf_name_data.push_back(segment_id.get_name_leafdata());
    if (segment_id_local_absolute_value.is_set || is_set(segment_id_local_absolute_value.yfilter)) leaf_name_data.push_back(segment_id_local_absolute_value.get_name_leafdata());
    if (srgb_size.is_set || is_set(srgb_size.yfilter)) leaf_name_data.push_back(srgb_size.get_name_leafdata());
    if (srgb_start.is_set || is_set(srgb_start.yfilter)) leaf_name_data.push_back(srgb_start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "segment-id")
    {
        segment_id = value;
        segment_id.value_namespace = name_space;
        segment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-local-absolute-value")
    {
        segment_id_local_absolute_value = value;
        segment_id_local_absolute_value.value_namespace = name_space;
        segment_id_local_absolute_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-size")
    {
        srgb_size = value;
        srgb_size.value_namespace = name_space;
        srgb_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-start")
    {
        srgb_start = value;
        srgb_start.value_namespace = name_space;
        srgb_start.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "segment-id")
    {
        segment_id.yfilter = yfilter;
    }
    if(value_path == "segment-id-local-absolute-value")
    {
        segment_id_local_absolute_value.yfilter = yfilter;
    }
    if(value_path == "srgb-size")
    {
        srgb_size.yfilter = yfilter;
    }
    if(value_path == "srgb-start")
    {
        srgb_start.yfilter = yfilter;
    }
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-id" || name == "segment-id-local-absolute-value" || name == "srgb-size" || name == "srgb-start")
        return true;
    return false;
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfos()
{

    yang_name = "sr-prefix-infos"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::SegmentRouting::SrPrefixInfos::~SrPrefixInfos()
{
}

bool MplsTe::SegmentRouting::SrPrefixInfos::has_data() const
{
    for (std::size_t index=0; index<sr_prefix_info.size(); index++)
    {
        if(sr_prefix_info[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::SegmentRouting::SrPrefixInfos::has_operation() const
{
    for (std::size_t index=0; index<sr_prefix_info.size(); index++)
    {
        if(sr_prefix_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::SegmentRouting::SrPrefixInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/segment-routing/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SegmentRouting::SrPrefixInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-prefix-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SegmentRouting::SrPrefixInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrPrefixInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-prefix-info")
    {
        for(auto const & c : sr_prefix_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo>();
        c->parent = this;
        sr_prefix_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SegmentRouting::SrPrefixInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sr_prefix_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::SegmentRouting::SrPrefixInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::SegmentRouting::SrPrefixInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::SegmentRouting::SrPrefixInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-prefix-info")
        return true;
    return false;
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPrefixInfo()
    :
    protocol{YType::enumeration, "protocol"},
    igp_instance{YType::str, "igp-instance"},
    area{YType::int32, "area"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::int32, "prefix-length"},
    flag_e{YType::boolean, "flag-e"},
    flag_l{YType::boolean, "flag-l"},
    flag_n{YType::boolean, "flag-n"},
    flag_p{YType::boolean, "flag-p"},
    flag_r{YType::boolean, "flag-r"},
    flag_v{YType::boolean, "flag-v"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    prefix_sid{YType::uint32, "prefix-sid"},
    prefix_strict_sid{YType::uint32, "prefix-strict-sid"},
    prefix_xr{YType::str, "prefix-xr"},
    strict_flag_e{YType::boolean, "strict-flag-e"},
    strict_flag_l{YType::boolean, "strict-flag-l"},
    strict_flag_p{YType::boolean, "strict-flag-p"},
    strict_flag_v{YType::boolean, "strict-flag-v"}
    	,
    igp_area(std::make_shared<MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea>())
{
    igp_area->parent = this;

    yang_name = "sr-prefix-info"; yang_parent_name = "sr-prefix-infos"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::~SrPrefixInfo()
{
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::has_data() const
{
    for (std::size_t index=0; index<advertizing_node.size(); index++)
    {
        if(advertizing_node[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_path.size(); index++)
    {
        if(sr_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<strict_advertizing_node.size(); index++)
    {
        if(strict_advertizing_node[index]->has_data())
            return true;
    }
    return protocol.is_set
	|| igp_instance.is_set
	|| area.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| flag_e.is_set
	|| flag_l.is_set
	|| flag_n.is_set
	|| flag_p.is_set
	|| flag_r.is_set
	|| flag_v.is_set
	|| prefix_length_xr.is_set
	|| prefix_sid.is_set
	|| prefix_strict_sid.is_set
	|| prefix_xr.is_set
	|| strict_flag_e.is_set
	|| strict_flag_l.is_set
	|| strict_flag_p.is_set
	|| strict_flag_v.is_set
	|| (igp_area !=  nullptr && igp_area->has_data());
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::has_operation() const
{
    for (std::size_t index=0; index<advertizing_node.size(); index++)
    {
        if(advertizing_node[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_path.size(); index++)
    {
        if(sr_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<strict_advertizing_node.size(); index++)
    {
        if(strict_advertizing_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(igp_instance.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(flag_e.yfilter)
	|| ydk::is_set(flag_l.yfilter)
	|| ydk::is_set(flag_n.yfilter)
	|| ydk::is_set(flag_p.yfilter)
	|| ydk::is_set(flag_r.yfilter)
	|| ydk::is_set(flag_v.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| ydk::is_set(prefix_sid.yfilter)
	|| ydk::is_set(prefix_strict_sid.yfilter)
	|| ydk::is_set(prefix_xr.yfilter)
	|| ydk::is_set(strict_flag_e.yfilter)
	|| ydk::is_set(strict_flag_l.yfilter)
	|| ydk::is_set(strict_flag_p.yfilter)
	|| ydk::is_set(strict_flag_v.yfilter)
	|| (igp_area !=  nullptr && igp_area->has_operation());
}

std::string MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/segment-routing/sr-prefix-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-prefix-info" <<"[protocol='" <<protocol <<"']" <<"[igp-instance='" <<igp_instance <<"']" <<"[area='" <<area <<"']" <<"[prefix='" <<prefix <<"']" <<"[prefix-length='" <<prefix_length <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.yfilter)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (flag_e.is_set || is_set(flag_e.yfilter)) leaf_name_data.push_back(flag_e.get_name_leafdata());
    if (flag_l.is_set || is_set(flag_l.yfilter)) leaf_name_data.push_back(flag_l.get_name_leafdata());
    if (flag_n.is_set || is_set(flag_n.yfilter)) leaf_name_data.push_back(flag_n.get_name_leafdata());
    if (flag_p.is_set || is_set(flag_p.yfilter)) leaf_name_data.push_back(flag_p.get_name_leafdata());
    if (flag_r.is_set || is_set(flag_r.yfilter)) leaf_name_data.push_back(flag_r.get_name_leafdata());
    if (flag_v.is_set || is_set(flag_v.yfilter)) leaf_name_data.push_back(flag_v.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (prefix_sid.is_set || is_set(prefix_sid.yfilter)) leaf_name_data.push_back(prefix_sid.get_name_leafdata());
    if (prefix_strict_sid.is_set || is_set(prefix_strict_sid.yfilter)) leaf_name_data.push_back(prefix_strict_sid.get_name_leafdata());
    if (prefix_xr.is_set || is_set(prefix_xr.yfilter)) leaf_name_data.push_back(prefix_xr.get_name_leafdata());
    if (strict_flag_e.is_set || is_set(strict_flag_e.yfilter)) leaf_name_data.push_back(strict_flag_e.get_name_leafdata());
    if (strict_flag_l.is_set || is_set(strict_flag_l.yfilter)) leaf_name_data.push_back(strict_flag_l.get_name_leafdata());
    if (strict_flag_p.is_set || is_set(strict_flag_p.yfilter)) leaf_name_data.push_back(strict_flag_p.get_name_leafdata());
    if (strict_flag_v.is_set || is_set(strict_flag_v.yfilter)) leaf_name_data.push_back(strict_flag_v.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertizing-node")
    {
        for(auto const & c : advertizing_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode>();
        c->parent = this;
        advertizing_node.push_back(c);
        return c;
    }

    if(child_yang_name == "igp-area")
    {
        if(igp_area == nullptr)
        {
            igp_area = std::make_shared<MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea>();
        }
        return igp_area;
    }

    if(child_yang_name == "sr-path")
    {
        for(auto const & c : sr_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath>();
        c->parent = this;
        sr_path.push_back(c);
        return c;
    }

    if(child_yang_name == "strict-advertizing-node")
    {
        for(auto const & c : strict_advertizing_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode>();
        c->parent = this;
        strict_advertizing_node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : advertizing_node)
    {
        children[c->get_segment_path()] = c;
    }

    if(igp_area != nullptr)
    {
        children["igp-area"] = igp_area;
    }

    for (auto const & c : sr_path)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : strict_advertizing_node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
        igp_instance.value_namespace = name_space;
        igp_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "flag-e")
    {
        flag_e = value;
        flag_e.value_namespace = name_space;
        flag_e.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-l")
    {
        flag_l = value;
        flag_l.value_namespace = name_space;
        flag_l.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-n")
    {
        flag_n = value;
        flag_n.value_namespace = name_space;
        flag_n.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-p")
    {
        flag_p = value;
        flag_p.value_namespace = name_space;
        flag_p.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-r")
    {
        flag_r = value;
        flag_r.value_namespace = name_space;
        flag_r.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-v")
    {
        flag_v = value;
        flag_v.value_namespace = name_space;
        flag_v.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-sid")
    {
        prefix_sid = value;
        prefix_sid.value_namespace = name_space;
        prefix_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-strict-sid")
    {
        prefix_strict_sid = value;
        prefix_strict_sid.value_namespace = name_space;
        prefix_strict_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-xr")
    {
        prefix_xr = value;
        prefix_xr.value_namespace = name_space;
        prefix_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict-flag-e")
    {
        strict_flag_e = value;
        strict_flag_e.value_namespace = name_space;
        strict_flag_e.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict-flag-l")
    {
        strict_flag_l = value;
        strict_flag_l.value_namespace = name_space;
        strict_flag_l.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict-flag-p")
    {
        strict_flag_p = value;
        strict_flag_p.value_namespace = name_space;
        strict_flag_p.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict-flag-v")
    {
        strict_flag_v = value;
        strict_flag_v.value_namespace = name_space;
        strict_flag_v.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "igp-instance")
    {
        igp_instance.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "flag-e")
    {
        flag_e.yfilter = yfilter;
    }
    if(value_path == "flag-l")
    {
        flag_l.yfilter = yfilter;
    }
    if(value_path == "flag-n")
    {
        flag_n.yfilter = yfilter;
    }
    if(value_path == "flag-p")
    {
        flag_p.yfilter = yfilter;
    }
    if(value_path == "flag-r")
    {
        flag_r.yfilter = yfilter;
    }
    if(value_path == "flag-v")
    {
        flag_v.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
    if(value_path == "prefix-sid")
    {
        prefix_sid.yfilter = yfilter;
    }
    if(value_path == "prefix-strict-sid")
    {
        prefix_strict_sid.yfilter = yfilter;
    }
    if(value_path == "prefix-xr")
    {
        prefix_xr.yfilter = yfilter;
    }
    if(value_path == "strict-flag-e")
    {
        strict_flag_e.yfilter = yfilter;
    }
    if(value_path == "strict-flag-l")
    {
        strict_flag_l.yfilter = yfilter;
    }
    if(value_path == "strict-flag-p")
    {
        strict_flag_p.yfilter = yfilter;
    }
    if(value_path == "strict-flag-v")
    {
        strict_flag_v.yfilter = yfilter;
    }
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertizing-node" || name == "igp-area" || name == "sr-path" || name == "strict-advertizing-node" || name == "protocol" || name == "igp-instance" || name == "area" || name == "prefix" || name == "prefix-length" || name == "flag-e" || name == "flag-l" || name == "flag-n" || name == "flag-p" || name == "flag-r" || name == "flag-v" || name == "prefix-length-xr" || name == "prefix-sid" || name == "prefix-strict-sid" || name == "prefix-xr" || name == "strict-flag-e" || name == "strict-flag-l" || name == "strict-flag-p" || name == "strict-flag-v")
        return true;
    return false;
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode::AdvertizingNode()
    :
    node_id{YType::str, "node-id"}
{

    yang_name = "advertizing-node"; yang_parent_name = "sr-prefix-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode::~AdvertizingNode()
{
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode::has_data() const
{
    return node_id.is_set;
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter);
}

std::string MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertizing-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id")
        return true;
    return false;
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea::IgpArea()
    :
    igp_area{YType::uint32, "igp-area"},
    igp_area_format{YType::enumeration, "igp-area-format"},
    igp_instance_xr{YType::str, "igp-instance-xr"},
    igp_type{YType::enumeration, "igp-type"},
    segment_routing_enabled{YType::boolean, "segment-routing-enabled"},
    strict_spf_enabled{YType::boolean, "strict-spf-enabled"}
{

    yang_name = "igp-area"; yang_parent_name = "sr-prefix-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea::~IgpArea()
{
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea::has_data() const
{
    return igp_area.is_set
	|| igp_area_format.is_set
	|| igp_instance_xr.is_set
	|| igp_type.is_set
	|| segment_routing_enabled.is_set
	|| strict_spf_enabled.is_set;
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_area.yfilter)
	|| ydk::is_set(igp_area_format.yfilter)
	|| ydk::is_set(igp_instance_xr.yfilter)
	|| ydk::is_set(igp_type.yfilter)
	|| ydk::is_set(segment_routing_enabled.yfilter)
	|| ydk::is_set(strict_spf_enabled.yfilter);
}

std::string MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_area.is_set || is_set(igp_area.yfilter)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (igp_area_format.is_set || is_set(igp_area_format.yfilter)) leaf_name_data.push_back(igp_area_format.get_name_leafdata());
    if (igp_instance_xr.is_set || is_set(igp_instance_xr.yfilter)) leaf_name_data.push_back(igp_instance_xr.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (segment_routing_enabled.is_set || is_set(segment_routing_enabled.yfilter)) leaf_name_data.push_back(segment_routing_enabled.get_name_leafdata());
    if (strict_spf_enabled.is_set || is_set(strict_spf_enabled.yfilter)) leaf_name_data.push_back(strict_spf_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-area")
    {
        igp_area = value;
        igp_area.value_namespace = name_space;
        igp_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area-format")
    {
        igp_area_format = value;
        igp_area_format.value_namespace = name_space;
        igp_area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-instance-xr")
    {
        igp_instance_xr = value;
        igp_instance_xr.value_namespace = name_space;
        igp_instance_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-enabled")
    {
        segment_routing_enabled = value;
        segment_routing_enabled.value_namespace = name_space;
        segment_routing_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict-spf-enabled")
    {
        strict_spf_enabled = value;
        strict_spf_enabled.value_namespace = name_space;
        strict_spf_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-area")
    {
        igp_area.yfilter = yfilter;
    }
    if(value_path == "igp-area-format")
    {
        igp_area_format.yfilter = yfilter;
    }
    if(value_path == "igp-instance-xr")
    {
        igp_instance_xr.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
    if(value_path == "segment-routing-enabled")
    {
        segment_routing_enabled.yfilter = yfilter;
    }
    if(value_path == "strict-spf-enabled")
    {
        strict_spf_enabled.yfilter = yfilter;
    }
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-area" || name == "igp-area-format" || name == "igp-instance-xr" || name == "igp-type" || name == "segment-routing-enabled" || name == "strict-spf-enabled")
        return true;
    return false;
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::SrPath()
    :
    has_backup_path{YType::boolean, "has-backup-path"}
    	,
    backup_path(std::make_shared<MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath>())
	,primary_path(std::make_shared<MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath>())
{
    backup_path->parent = this;
    primary_path->parent = this;

    yang_name = "sr-path"; yang_parent_name = "sr-prefix-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::~SrPath()
{
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::has_data() const
{
    return has_backup_path.is_set
	|| (backup_path !=  nullptr && backup_path->has_data())
	|| (primary_path !=  nullptr && primary_path->has_data());
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(has_backup_path.yfilter)
	|| (backup_path !=  nullptr && backup_path->has_operation())
	|| (primary_path !=  nullptr && primary_path->has_operation());
}

std::string MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_backup_path.is_set || is_set(has_backup_path.yfilter)) leaf_name_data.push_back(has_backup_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-path")
    {
        if(backup_path == nullptr)
        {
            backup_path = std::make_shared<MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath>();
        }
        return backup_path;
    }

    if(child_yang_name == "primary-path")
    {
        if(primary_path == nullptr)
        {
            primary_path = std::make_shared<MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath>();
        }
        return primary_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_path != nullptr)
    {
        children["backup-path"] = backup_path;
    }

    if(primary_path != nullptr)
    {
        children["primary-path"] = primary_path;
    }

    return children;
}

void MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "has-backup-path")
    {
        has_backup_path = value;
        has_backup_path.value_namespace = name_space;
        has_backup_path.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "has-backup-path")
    {
        has_backup_path.yfilter = yfilter;
    }
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-path" || name == "primary-path" || name == "has-backup-path")
        return true;
    return false;
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::BackupPath()
    :
    next_hop{YType::str, "next-hop"},
    outgoing_interface{YType::str, "outgoing-interface"}
{

    yang_name = "backup-path"; yang_parent_name = "sr-path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::~BackupPath()
{
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::has_data() const
{
    for (std::size_t index=0; index<outgoing_labels_stack.size(); index++)
    {
        if(outgoing_labels_stack[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<outgoing_strict_labels_stack.size(); index++)
    {
        if(outgoing_strict_labels_stack[index]->has_data())
            return true;
    }
    return next_hop.is_set
	|| outgoing_interface.is_set;
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::has_operation() const
{
    for (std::size_t index=0; index<outgoing_labels_stack.size(); index++)
    {
        if(outgoing_labels_stack[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<outgoing_strict_labels_stack.size(); index++)
    {
        if(outgoing_strict_labels_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter);
}

std::string MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "outgoing-labels-stack")
    {
        for(auto const & c : outgoing_labels_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingLabelsStack>();
        c->parent = this;
        outgoing_labels_stack.push_back(c);
        return c;
    }

    if(child_yang_name == "outgoing-strict-labels-stack")
    {
        for(auto const & c : outgoing_strict_labels_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingStrictLabelsStack>();
        c->parent = this;
        outgoing_strict_labels_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : outgoing_labels_stack)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : outgoing_strict_labels_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outgoing-labels-stack" || name == "outgoing-strict-labels-stack" || name == "next-hop" || name == "outgoing-interface")
        return true;
    return false;
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingLabelsStack::OutgoingLabelsStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "outgoing-labels-stack"; yang_parent_name = "backup-path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingLabelsStack::~OutgoingLabelsStack()
{
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingLabelsStack::has_data() const
{
    return entry.is_set;
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingLabelsStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingLabelsStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-labels-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingLabelsStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingLabelsStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingLabelsStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingLabelsStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingLabelsStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingLabelsStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingStrictLabelsStack::OutgoingStrictLabelsStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "outgoing-strict-labels-stack"; yang_parent_name = "backup-path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingStrictLabelsStack::~OutgoingStrictLabelsStack()
{
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingStrictLabelsStack::has_data() const
{
    return entry.is_set;
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingStrictLabelsStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingStrictLabelsStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-strict-labels-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingStrictLabelsStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingStrictLabelsStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingStrictLabelsStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingStrictLabelsStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingStrictLabelsStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingStrictLabelsStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath::PrimaryPath()
    :
    backup_path_id{YType::uint32, "backup-path-id"},
    next_hop{YType::str, "next-hop"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_label{YType::uint32, "outgoing-label"},
    outgoing_strict_label{YType::uint32, "outgoing-strict-label"},
    path_id{YType::uint32, "path-id"}
{

    yang_name = "primary-path"; yang_parent_name = "sr-path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath::~PrimaryPath()
{
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath::has_data() const
{
    return backup_path_id.is_set
	|| next_hop.is_set
	|| outgoing_interface.is_set
	|| outgoing_label.is_set
	|| outgoing_strict_label.is_set
	|| path_id.is_set;
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup_path_id.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(outgoing_strict_label.yfilter)
	|| ydk::is_set(path_id.yfilter);
}

std::string MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_path_id.is_set || is_set(backup_path_id.yfilter)) leaf_name_data.push_back(backup_path_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (outgoing_strict_label.is_set || is_set(outgoing_strict_label.yfilter)) leaf_name_data.push_back(outgoing_strict_label.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-path-id")
    {
        backup_path_id = value;
        backup_path_id.value_namespace = name_space;
        backup_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-strict-label")
    {
        outgoing_strict_label = value;
        outgoing_strict_label.value_namespace = name_space;
        outgoing_strict_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-path-id")
    {
        backup_path_id.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-strict-label")
    {
        outgoing_strict_label.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-path-id" || name == "next-hop" || name == "outgoing-interface" || name == "outgoing-label" || name == "outgoing-strict-label" || name == "path-id")
        return true;
    return false;
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode::StrictAdvertizingNode()
    :
    node_id{YType::str, "node-id"}
{

    yang_name = "strict-advertizing-node"; yang_parent_name = "sr-prefix-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode::~StrictAdvertizingNode()
{
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode::has_data() const
{
    return node_id.is_set;
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter);
}

std::string MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "strict-advertizing-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id")
        return true;
    return false;
}

MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfos()
{

    yang_name = "srigp-area-infos"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::SegmentRouting::SrigpAreaInfos::~SrigpAreaInfos()
{
}

bool MplsTe::SegmentRouting::SrigpAreaInfos::has_data() const
{
    for (std::size_t index=0; index<srigp_area_info.size(); index++)
    {
        if(srigp_area_info[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::SegmentRouting::SrigpAreaInfos::has_operation() const
{
    for (std::size_t index=0; index<srigp_area_info.size(); index++)
    {
        if(srigp_area_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::SegmentRouting::SrigpAreaInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/segment-routing/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SegmentRouting::SrigpAreaInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srigp-area-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SegmentRouting::SrigpAreaInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrigpAreaInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srigp-area-info")
    {
        for(auto const & c : srigp_area_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo>();
        c->parent = this;
        srigp_area_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SegmentRouting::SrigpAreaInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : srigp_area_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::SegmentRouting::SrigpAreaInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::SegmentRouting::SrigpAreaInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::SegmentRouting::SrigpAreaInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srigp-area-info")
        return true;
    return false;
}

MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo::SrigpAreaInfo()
    :
    protocol{YType::enumeration, "protocol"},
    igp_instance{YType::str, "igp-instance"},
    area{YType::int32, "area"},
    igp_area{YType::uint32, "igp-area"},
    igp_area_format{YType::enumeration, "igp-area-format"},
    igp_instance_xr{YType::str, "igp-instance-xr"},
    igp_type{YType::enumeration, "igp-type"},
    segment_routing_enabled{YType::boolean, "segment-routing-enabled"},
    strict_spf_enabled{YType::boolean, "strict-spf-enabled"}
{

    yang_name = "srigp-area-info"; yang_parent_name = "srigp-area-infos"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo::~SrigpAreaInfo()
{
}

bool MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo::has_data() const
{
    return protocol.is_set
	|| igp_instance.is_set
	|| area.is_set
	|| igp_area.is_set
	|| igp_area_format.is_set
	|| igp_instance_xr.is_set
	|| igp_type.is_set
	|| segment_routing_enabled.is_set
	|| strict_spf_enabled.is_set;
}

bool MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(igp_instance.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(igp_area.yfilter)
	|| ydk::is_set(igp_area_format.yfilter)
	|| ydk::is_set(igp_instance_xr.yfilter)
	|| ydk::is_set(igp_type.yfilter)
	|| ydk::is_set(segment_routing_enabled.yfilter)
	|| ydk::is_set(strict_spf_enabled.yfilter);
}

std::string MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/segment-routing/srigp-area-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srigp-area-info" <<"[protocol='" <<protocol <<"']" <<"[igp-instance='" <<igp_instance <<"']" <<"[area='" <<area <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.yfilter)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (igp_area.is_set || is_set(igp_area.yfilter)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (igp_area_format.is_set || is_set(igp_area_format.yfilter)) leaf_name_data.push_back(igp_area_format.get_name_leafdata());
    if (igp_instance_xr.is_set || is_set(igp_instance_xr.yfilter)) leaf_name_data.push_back(igp_instance_xr.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (segment_routing_enabled.is_set || is_set(segment_routing_enabled.yfilter)) leaf_name_data.push_back(segment_routing_enabled.get_name_leafdata());
    if (strict_spf_enabled.is_set || is_set(strict_spf_enabled.yfilter)) leaf_name_data.push_back(strict_spf_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
        igp_instance.value_namespace = name_space;
        igp_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area")
    {
        igp_area = value;
        igp_area.value_namespace = name_space;
        igp_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area-format")
    {
        igp_area_format = value;
        igp_area_format.value_namespace = name_space;
        igp_area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-instance-xr")
    {
        igp_instance_xr = value;
        igp_instance_xr.value_namespace = name_space;
        igp_instance_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-enabled")
    {
        segment_routing_enabled = value;
        segment_routing_enabled.value_namespace = name_space;
        segment_routing_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict-spf-enabled")
    {
        strict_spf_enabled = value;
        strict_spf_enabled.value_namespace = name_space;
        strict_spf_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "igp-instance")
    {
        igp_instance.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "igp-area")
    {
        igp_area.yfilter = yfilter;
    }
    if(value_path == "igp-area-format")
    {
        igp_area_format.yfilter = yfilter;
    }
    if(value_path == "igp-instance-xr")
    {
        igp_instance_xr.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
    if(value_path == "segment-routing-enabled")
    {
        segment_routing_enabled.yfilter = yfilter;
    }
    if(value_path == "strict-spf-enabled")
    {
        strict_spf_enabled.yfilter = yfilter;
    }
}

bool MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "igp-instance" || name == "area" || name == "igp-area" || name == "igp-area-format" || name == "igp-instance-xr" || name == "igp-type" || name == "segment-routing-enabled" || name == "strict-spf-enabled")
        return true;
    return false;
}

MplsTe::SignallingCounters::SignallingCounters()
    :
    head_signalling_counters(std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters>())
	,issu(std::make_shared<MplsTe::SignallingCounters::Issu>())
	,remote_signalling_counters(std::make_shared<MplsTe::SignallingCounters::RemoteSignallingCounters>())
	,signalling_summary(std::make_shared<MplsTe::SignallingCounters::SignallingSummary>())
	,signallings(std::make_shared<MplsTe::SignallingCounters::Signallings>())
{
    head_signalling_counters->parent = this;
    issu->parent = this;
    remote_signalling_counters->parent = this;
    signalling_summary->parent = this;
    signallings->parent = this;

    yang_name = "signalling-counters"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::SignallingCounters::~SignallingCounters()
{
}

bool MplsTe::SignallingCounters::has_data() const
{
    return (head_signalling_counters !=  nullptr && head_signalling_counters->has_data())
	|| (issu !=  nullptr && issu->has_data())
	|| (remote_signalling_counters !=  nullptr && remote_signalling_counters->has_data())
	|| (signalling_summary !=  nullptr && signalling_summary->has_data())
	|| (signallings !=  nullptr && signallings->has_data());
}

bool MplsTe::SignallingCounters::has_operation() const
{
    return is_set(yfilter)
	|| (head_signalling_counters !=  nullptr && head_signalling_counters->has_operation())
	|| (issu !=  nullptr && issu->has_operation())
	|| (remote_signalling_counters !=  nullptr && remote_signalling_counters->has_operation())
	|| (signalling_summary !=  nullptr && signalling_summary->has_operation())
	|| (signallings !=  nullptr && signallings->has_operation());
}

std::string MplsTe::SignallingCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SignallingCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head-signalling-counters")
    {
        if(head_signalling_counters == nullptr)
        {
            head_signalling_counters = std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters>();
        }
        return head_signalling_counters;
    }

    if(child_yang_name == "issu")
    {
        if(issu == nullptr)
        {
            issu = std::make_shared<MplsTe::SignallingCounters::Issu>();
        }
        return issu;
    }

    if(child_yang_name == "remote-signalling-counters")
    {
        if(remote_signalling_counters == nullptr)
        {
            remote_signalling_counters = std::make_shared<MplsTe::SignallingCounters::RemoteSignallingCounters>();
        }
        return remote_signalling_counters;
    }

    if(child_yang_name == "signalling-summary")
    {
        if(signalling_summary == nullptr)
        {
            signalling_summary = std::make_shared<MplsTe::SignallingCounters::SignallingSummary>();
        }
        return signalling_summary;
    }

    if(child_yang_name == "signallings")
    {
        if(signallings == nullptr)
        {
            signallings = std::make_shared<MplsTe::SignallingCounters::Signallings>();
        }
        return signallings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(head_signalling_counters != nullptr)
    {
        children["head-signalling-counters"] = head_signalling_counters;
    }

    if(issu != nullptr)
    {
        children["issu"] = issu;
    }

    if(remote_signalling_counters != nullptr)
    {
        children["remote-signalling-counters"] = remote_signalling_counters;
    }

    if(signalling_summary != nullptr)
    {
        children["signalling-summary"] = signalling_summary;
    }

    if(signallings != nullptr)
    {
        children["signallings"] = signallings;
    }

    return children;
}

void MplsTe::SignallingCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::SignallingCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::SignallingCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head-signalling-counters" || name == "issu" || name == "remote-signalling-counters" || name == "signalling-summary" || name == "signallings")
        return true;
    return false;
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounters()
{

    yang_name = "head-signalling-counters"; yang_parent_name = "signalling-counters"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::SignallingCounters::HeadSignallingCounters::~HeadSignallingCounters()
{
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::has_data() const
{
    for (std::size_t index=0; index<head_signalling_counter.size(); index++)
    {
        if(head_signalling_counter[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::has_operation() const
{
    for (std::size_t index=0; index<head_signalling_counter.size(); index++)
    {
        if(head_signalling_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::SignallingCounters::HeadSignallingCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SignallingCounters::HeadSignallingCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-signalling-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::HeadSignallingCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadSignallingCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head-signalling-counter")
    {
        for(auto const & c : head_signalling_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter>();
        c->parent = this;
        head_signalling_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::HeadSignallingCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : head_signalling_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::SignallingCounters::HeadSignallingCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::SignallingCounters::HeadSignallingCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head-signalling-counter")
        return true;
    return false;
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::HeadSignallingCounter()
    :
    ctype{YType::enumeration, "ctype"},
    tunnel_id{YType::int32, "tunnel-id"},
    lsp_id{YType::uint16, "lsp-id"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_sig_name{YType::str, "tunnel-sig-name"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics>())
{
    statistics->parent = this;

    yang_name = "head-signalling-counter"; yang_parent_name = "head-signalling-counters"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::~HeadSignallingCounter()
{
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::has_data() const
{
    for (std::size_t index=0; index<destination_statistic.size(); index++)
    {
        if(destination_statistic[index]->has_data())
            return true;
    }
    return ctype.is_set
	|| tunnel_id.is_set
	|| lsp_id.is_set
	|| tunnel_name.is_set
	|| tunnel_sig_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::has_operation() const
{
    for (std::size_t index=0; index<destination_statistic.size(); index++)
    {
        if(destination_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_sig_name.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/head-signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-signalling-counter" <<"[ctype='" <<ctype <<"']" <<"[tunnel-id='" <<tunnel_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_sig_name.is_set || is_set(tunnel_sig_name.yfilter)) leaf_name_data.push_back(tunnel_sig_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-statistic")
    {
        for(auto const & c : destination_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic>();
        c->parent = this;
        destination_statistic.push_back(c);
        return c;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : destination_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name = value;
        tunnel_sig_name.value_namespace = name_space;
        tunnel_sig_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-statistic" || name == "statistics" || name == "ctype" || name == "tunnel-id" || name == "lsp-id" || name == "tunnel-name" || name == "tunnel-sig-name")
        return true;
    return false;
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::DestinationStatistic()
    :
    destination_address{YType::str, "destination-address"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "destination-statistic"; yang_parent_name = "head-signalling-counter"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::~DestinationStatistic()
{
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::has_data() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-statistic")
    {
        for(auto const & c : s2l_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic>();
        c->parent = this;
        s2l_statistic.push_back(c);
        return c;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : s2l_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-statistic" || name == "statistics" || name == "destination-address")
        return true;
    return false;
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::S2LStatistic()
    :
    destination_address{YType::str, "destination-address"},
    sub_group_id{YType::uint16, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "s2l-statistic"; yang_parent_name = "destination-statistic"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::~S2LStatistic()
{
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::has_data() const
{
    return destination_address.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "destination-address" || name == "sub-group-id" || name == "sub-group-originator")
        return true;
    return false;
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{

    yang_name = "statistics"; yang_parent_name = "s2l-statistic"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(events_count.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter);
}

std::string MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-count" || name == "events-total-count" || name == "rx-backup-assign-err-event" || name == "rx-event-unknown" || name == "rx-path-change-event" || name == "rx-path-create-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-path-reeval-query-event" || name == "rx-resv-change-event" || name == "rx-resv-create-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "tx-backup-assign-event" || name == "tx-event-unknown" || name == "tx-path-change-event" || name == "tx-path-create-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-path-reeval-query-event" || name == "tx-resv-change-event" || name == "tx-resv-create-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event")
        return true;
    return false;
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{

    yang_name = "statistics"; yang_parent_name = "destination-statistic"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(events_count.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter);
}

std::string MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-count" || name == "events-total-count" || name == "rx-backup-assign-err-event" || name == "rx-event-unknown" || name == "rx-path-change-event" || name == "rx-path-create-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-path-reeval-query-event" || name == "rx-resv-change-event" || name == "rx-resv-create-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "tx-backup-assign-event" || name == "tx-event-unknown" || name == "tx-path-change-event" || name == "tx-path-create-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-path-reeval-query-event" || name == "tx-resv-change-event" || name == "tx-resv-create-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event")
        return true;
    return false;
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{

    yang_name = "statistics"; yang_parent_name = "head-signalling-counter"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(events_count.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter);
}

std::string MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-count" || name == "events-total-count" || name == "rx-backup-assign-err-event" || name == "rx-event-unknown" || name == "rx-path-change-event" || name == "rx-path-create-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-path-reeval-query-event" || name == "rx-resv-change-event" || name == "rx-resv-create-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "tx-backup-assign-event" || name == "tx-event-unknown" || name == "tx-path-change-event" || name == "tx-path-create-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-path-reeval-query-event" || name == "tx-resv-change-event" || name == "tx-resv-create-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event")
        return true;
    return false;
}

MplsTe::SignallingCounters::Issu::Issu()
    :
    last_cleared_timestamp{YType::uint32, "last-cleared-timestamp"},
    last_idt_states{YType::uint32, "last-idt-states"},
    role{YType::enumeration, "role"},
    total_deletions{YType::uint32, "total-deletions"},
    total_id_ts{YType::uint32, "total-id-ts"},
    total_nac_ks{YType::uint64, "total-nac-ks"},
    total_states{YType::uint32, "total-states"}
{

    yang_name = "issu"; yang_parent_name = "signalling-counters"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::SignallingCounters::Issu::~Issu()
{
}

bool MplsTe::SignallingCounters::Issu::has_data() const
{
    return last_cleared_timestamp.is_set
	|| last_idt_states.is_set
	|| role.is_set
	|| total_deletions.is_set
	|| total_id_ts.is_set
	|| total_nac_ks.is_set
	|| total_states.is_set;
}

bool MplsTe::SignallingCounters::Issu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_cleared_timestamp.yfilter)
	|| ydk::is_set(last_idt_states.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(total_deletions.yfilter)
	|| ydk::is_set(total_id_ts.yfilter)
	|| ydk::is_set(total_nac_ks.yfilter)
	|| ydk::is_set(total_states.yfilter);
}

std::string MplsTe::SignallingCounters::Issu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SignallingCounters::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Issu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_timestamp.is_set || is_set(last_cleared_timestamp.yfilter)) leaf_name_data.push_back(last_cleared_timestamp.get_name_leafdata());
    if (last_idt_states.is_set || is_set(last_idt_states.yfilter)) leaf_name_data.push_back(last_idt_states.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (total_deletions.is_set || is_set(total_deletions.yfilter)) leaf_name_data.push_back(total_deletions.get_name_leafdata());
    if (total_id_ts.is_set || is_set(total_id_ts.yfilter)) leaf_name_data.push_back(total_id_ts.get_name_leafdata());
    if (total_nac_ks.is_set || is_set(total_nac_ks.yfilter)) leaf_name_data.push_back(total_nac_ks.get_name_leafdata());
    if (total_states.is_set || is_set(total_states.yfilter)) leaf_name_data.push_back(total_states.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Issu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::SignallingCounters::Issu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp = value;
        last_cleared_timestamp.value_namespace = name_space;
        last_cleared_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-idt-states")
    {
        last_idt_states = value;
        last_idt_states.value_namespace = name_space;
        last_idt_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-deletions")
    {
        total_deletions = value;
        total_deletions.value_namespace = name_space;
        total_deletions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-id-ts")
    {
        total_id_ts = value;
        total_id_ts.value_namespace = name_space;
        total_id_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-nac-ks")
    {
        total_nac_ks = value;
        total_nac_ks.value_namespace = name_space;
        total_nac_ks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-states")
    {
        total_states = value;
        total_states.value_namespace = name_space;
        total_states.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::Issu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp.yfilter = yfilter;
    }
    if(value_path == "last-idt-states")
    {
        last_idt_states.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "total-deletions")
    {
        total_deletions.yfilter = yfilter;
    }
    if(value_path == "total-id-ts")
    {
        total_id_ts.yfilter = yfilter;
    }
    if(value_path == "total-nac-ks")
    {
        total_nac_ks.yfilter = yfilter;
    }
    if(value_path == "total-states")
    {
        total_states.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::Issu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-cleared-timestamp" || name == "last-idt-states" || name == "role" || name == "total-deletions" || name == "total-id-ts" || name == "total-nac-ks" || name == "total-states")
        return true;
    return false;
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounters()
{

    yang_name = "remote-signalling-counters"; yang_parent_name = "signalling-counters"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::SignallingCounters::RemoteSignallingCounters::~RemoteSignallingCounters()
{
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::has_data() const
{
    for (std::size_t index=0; index<remote_signalling_counter.size(); index++)
    {
        if(remote_signalling_counter[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::has_operation() const
{
    for (std::size_t index=0; index<remote_signalling_counter.size(); index++)
    {
        if(remote_signalling_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::SignallingCounters::RemoteSignallingCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SignallingCounters::RemoteSignallingCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-signalling-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::RemoteSignallingCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::RemoteSignallingCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-signalling-counter")
    {
        for(auto const & c : remote_signalling_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter>();
        c->parent = this;
        remote_signalling_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::RemoteSignallingCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : remote_signalling_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::SignallingCounters::RemoteSignallingCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::SignallingCounters::RemoteSignallingCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-signalling-counter")
        return true;
    return false;
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::RemoteSignallingCounter()
    :
    ctype{YType::enumeration, "ctype"},
    tunnel_id{YType::int32, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::int32, "p2mp-id"},
    lsp_id{YType::int32, "lsp-id"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    sub_group_originator{YType::str, "sub-group-originator"},
    sub_group_id{YType::int32, "sub-group-id"},
    tunnel_name{YType::str, "tunnel-name"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics>())
{
    statistics->parent = this;

    yang_name = "remote-signalling-counter"; yang_parent_name = "remote-signalling-counters"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::~RemoteSignallingCounter()
{
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::has_data() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return ctype.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| lsp_id.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| sub_group_originator.is_set
	|| sub_group_id.is_set
	|| tunnel_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/remote-signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-signalling-counter" <<"[ctype='" <<ctype <<"']" <<"[tunnel-id='" <<tunnel_id <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[p2mp-id='" <<p2mp_id <<"']" <<"[lsp-id='" <<lsp_id <<"']" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[sub-group-originator='" <<sub_group_originator <<"']" <<"[sub-group-id='" <<sub_group_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-statistic")
    {
        for(auto const & c : s2l_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic>();
        c->parent = this;
        s2l_statistic.push_back(c);
        return c;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : s2l_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-statistic" || name == "statistics" || name == "ctype" || name == "tunnel-id" || name == "extended-tunnel-id" || name == "p2mp-id" || name == "lsp-id" || name == "source-address" || name == "destination-address" || name == "sub-group-originator" || name == "sub-group-id" || name == "tunnel-name")
        return true;
    return false;
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::S2LStatistic()
    :
    destination_address{YType::str, "destination-address"},
    sub_group_id{YType::uint16, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "s2l-statistic"; yang_parent_name = "remote-signalling-counter"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::~S2LStatistic()
{
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::has_data() const
{
    return destination_address.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "destination-address" || name == "sub-group-id" || name == "sub-group-originator")
        return true;
    return false;
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{

    yang_name = "statistics"; yang_parent_name = "s2l-statistic"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(events_count.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter);
}

std::string MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-count" || name == "events-total-count" || name == "rx-backup-assign-err-event" || name == "rx-event-unknown" || name == "rx-path-change-event" || name == "rx-path-create-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-path-reeval-query-event" || name == "rx-resv-change-event" || name == "rx-resv-create-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "tx-backup-assign-event" || name == "tx-event-unknown" || name == "tx-path-change-event" || name == "tx-path-create-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-path-reeval-query-event" || name == "tx-resv-change-event" || name == "tx-resv-create-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event")
        return true;
    return false;
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{

    yang_name = "statistics"; yang_parent_name = "remote-signalling-counter"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(events_count.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter);
}

std::string MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-count" || name == "events-total-count" || name == "rx-backup-assign-err-event" || name == "rx-event-unknown" || name == "rx-path-change-event" || name == "rx-path-create-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-path-reeval-query-event" || name == "rx-resv-change-event" || name == "rx-resv-create-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "tx-backup-assign-event" || name == "tx-event-unknown" || name == "tx-path-change-event" || name == "tx-path-create-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-path-reeval-query-event" || name == "tx-resv-change-event" || name == "tx-resv-create-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event")
        return true;
    return false;
}

MplsTe::SignallingCounters::SignallingSummary::SignallingSummary()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{

    yang_name = "signalling-summary"; yang_parent_name = "signalling-counters"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::SignallingCounters::SignallingSummary::~SignallingSummary()
{
}

bool MplsTe::SignallingCounters::SignallingSummary::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::SignallingSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(events_count.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter);
}

std::string MplsTe::SignallingCounters::SignallingSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SignallingCounters::SignallingSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::SignallingSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::SignallingSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::SignallingSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::SignallingCounters::SignallingSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::SignallingSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::SignallingSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-count" || name == "events-total-count" || name == "rx-backup-assign-err-event" || name == "rx-event-unknown" || name == "rx-path-change-event" || name == "rx-path-create-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-path-reeval-query-event" || name == "rx-resv-change-event" || name == "rx-resv-create-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "tx-backup-assign-event" || name == "tx-event-unknown" || name == "tx-path-change-event" || name == "tx-path-create-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-path-reeval-query-event" || name == "tx-resv-change-event" || name == "tx-resv-create-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event")
        return true;
    return false;
}

MplsTe::SignallingCounters::Signallings::Signallings()
{

    yang_name = "signallings"; yang_parent_name = "signalling-counters"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::SignallingCounters::Signallings::~Signallings()
{
}

bool MplsTe::SignallingCounters::Signallings::has_data() const
{
    for (std::size_t index=0; index<signalling.size(); index++)
    {
        if(signalling[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::SignallingCounters::Signallings::has_operation() const
{
    for (std::size_t index=0; index<signalling.size(); index++)
    {
        if(signalling[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::SignallingCounters::Signallings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SignallingCounters::Signallings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signallings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Signallings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signalling")
    {
        for(auto const & c : signalling)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling>();
        c->parent = this;
        signalling.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Signallings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : signalling)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::SignallingCounters::Signallings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::SignallingCounters::Signallings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::SignallingCounters::Signallings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signalling")
        return true;
    return false;
}

MplsTe::SignallingCounters::Signallings::Signalling::Signalling()
    :
    ctype{YType::enumeration, "ctype"},
    tunnel_id{YType::int32, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::int32, "p2mp-id"},
    lsp_id{YType::int32, "lsp-id"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    sub_group_originator{YType::str, "sub-group-originator"},
    sub_group_id{YType::int32, "sub-group-id"}
    	,
    te_signalling_filter_data(std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData>())
{
    te_signalling_filter_data->parent = this;

    yang_name = "signalling"; yang_parent_name = "signallings"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::SignallingCounters::Signallings::Signalling::~Signalling()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::has_data() const
{
    return ctype.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| lsp_id.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| sub_group_originator.is_set
	|| sub_group_id.is_set
	|| (te_signalling_filter_data !=  nullptr && te_signalling_filter_data->has_data());
}

bool MplsTe::SignallingCounters::Signallings::Signalling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| (te_signalling_filter_data !=  nullptr && te_signalling_filter_data->has_operation());
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/signallings/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling" <<"[ctype='" <<ctype <<"']" <<"[tunnel-id='" <<tunnel_id <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[p2mp-id='" <<p2mp_id <<"']" <<"[lsp-id='" <<lsp_id <<"']" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[sub-group-originator='" <<sub_group_originator <<"']" <<"[sub-group-id='" <<sub_group_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Signallings::Signalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-signalling-filter-data")
    {
        if(te_signalling_filter_data == nullptr)
        {
            te_signalling_filter_data = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData>();
        }
        return te_signalling_filter_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Signallings::Signalling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(te_signalling_filter_data != nullptr)
    {
        children["te-signalling-filter-data"] = te_signalling_filter_data;
    }

    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::Signallings::Signalling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::Signallings::Signalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-signalling-filter-data" || name == "ctype" || name == "tunnel-id" || name == "extended-tunnel-id" || name == "p2mp-id" || name == "lsp-id" || name == "source-address" || name == "destination-address" || name == "sub-group-originator" || name == "sub-group-id")
        return true;
    return false;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterData()
    :
    statistics_filter{YType::enumeration, "statistics-filter"}
    	,
    te_signalling_filter_lsp(std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp>())
	,te_signalling_filter_vif(std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif>())
{
    te_signalling_filter_lsp->parent = this;
    te_signalling_filter_vif->parent = this;

    yang_name = "te-signalling-filter-data"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::~TeSignallingFilterData()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::has_data() const
{
    return statistics_filter.is_set
	|| (te_signalling_filter_lsp !=  nullptr && te_signalling_filter_lsp->has_data())
	|| (te_signalling_filter_vif !=  nullptr && te_signalling_filter_vif->has_data());
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(statistics_filter.yfilter)
	|| (te_signalling_filter_lsp !=  nullptr && te_signalling_filter_lsp->has_operation())
	|| (te_signalling_filter_vif !=  nullptr && te_signalling_filter_vif->has_operation());
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-signalling-filter-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (statistics_filter.is_set || is_set(statistics_filter.yfilter)) leaf_name_data.push_back(statistics_filter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-signalling-filter-lsp")
    {
        if(te_signalling_filter_lsp == nullptr)
        {
            te_signalling_filter_lsp = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp>();
        }
        return te_signalling_filter_lsp;
    }

    if(child_yang_name == "te-signalling-filter-vif")
    {
        if(te_signalling_filter_vif == nullptr)
        {
            te_signalling_filter_vif = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif>();
        }
        return te_signalling_filter_vif;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(te_signalling_filter_lsp != nullptr)
    {
        children["te-signalling-filter-lsp"] = te_signalling_filter_lsp;
    }

    if(te_signalling_filter_vif != nullptr)
    {
        children["te-signalling-filter-vif"] = te_signalling_filter_vif;
    }

    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "statistics-filter")
    {
        statistics_filter = value;
        statistics_filter.value_namespace = name_space;
        statistics_filter.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "statistics-filter")
    {
        statistics_filter.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-signalling-filter-lsp" || name == "te-signalling-filter-vif" || name == "statistics-filter")
        return true;
    return false;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::TeSignallingFilterLsp()
    :
    tunnel_name{YType::str, "tunnel-name"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics>())
{
    statistics->parent = this;

    yang_name = "te-signalling-filter-lsp"; yang_parent_name = "te-signalling-filter-data"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::~TeSignallingFilterLsp()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::has_data() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return tunnel_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-signalling-filter-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-statistic")
    {
        for(auto const & c : s2l_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic>();
        c->parent = this;
        s2l_statistic.push_back(c);
        return c;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : s2l_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-statistic" || name == "statistics" || name == "tunnel-name")
        return true;
    return false;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::S2LStatistic()
    :
    destination_address{YType::str, "destination-address"},
    sub_group_id{YType::uint16, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "s2l-statistic"; yang_parent_name = "te-signalling-filter-lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::~S2LStatistic()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::has_data() const
{
    return destination_address.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "destination-address" || name == "sub-group-id" || name == "sub-group-originator")
        return true;
    return false;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{

    yang_name = "statistics"; yang_parent_name = "s2l-statistic"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(events_count.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter);
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-count" || name == "events-total-count" || name == "rx-backup-assign-err-event" || name == "rx-event-unknown" || name == "rx-path-change-event" || name == "rx-path-create-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-path-reeval-query-event" || name == "rx-resv-change-event" || name == "rx-resv-create-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "tx-backup-assign-event" || name == "tx-event-unknown" || name == "tx-path-change-event" || name == "tx-path-create-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-path-reeval-query-event" || name == "tx-resv-change-event" || name == "tx-resv-create-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event")
        return true;
    return false;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{

    yang_name = "statistics"; yang_parent_name = "te-signalling-filter-lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(events_count.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter);
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-count" || name == "events-total-count" || name == "rx-backup-assign-err-event" || name == "rx-event-unknown" || name == "rx-path-change-event" || name == "rx-path-create-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-path-reeval-query-event" || name == "rx-resv-change-event" || name == "rx-resv-create-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "tx-backup-assign-event" || name == "tx-event-unknown" || name == "tx-path-change-event" || name == "tx-path-create-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-path-reeval-query-event" || name == "tx-resv-change-event" || name == "tx-resv-create-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event")
        return true;
    return false;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::TeSignallingFilterVif()
    :
    lsp_id{YType::uint16, "lsp-id"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_sig_name{YType::str, "tunnel-sig-name"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics>())
{
    statistics->parent = this;

    yang_name = "te-signalling-filter-vif"; yang_parent_name = "te-signalling-filter-data"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::~TeSignallingFilterVif()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::has_data() const
{
    for (std::size_t index=0; index<destination_statistic.size(); index++)
    {
        if(destination_statistic[index]->has_data())
            return true;
    }
    return lsp_id.is_set
	|| tunnel_name.is_set
	|| tunnel_sig_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::has_operation() const
{
    for (std::size_t index=0; index<destination_statistic.size(); index++)
    {
        if(destination_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_sig_name.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-signalling-filter-vif";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_sig_name.is_set || is_set(tunnel_sig_name.yfilter)) leaf_name_data.push_back(tunnel_sig_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-statistic")
    {
        for(auto const & c : destination_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic>();
        c->parent = this;
        destination_statistic.push_back(c);
        return c;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : destination_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name = value;
        tunnel_sig_name.value_namespace = name_space;
        tunnel_sig_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-statistic" || name == "statistics" || name == "lsp-id" || name == "tunnel-name" || name == "tunnel-sig-name")
        return true;
    return false;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::DestinationStatistic()
    :
    destination_address{YType::str, "destination-address"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "destination-statistic"; yang_parent_name = "te-signalling-filter-vif"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::~DestinationStatistic()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::has_data() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-statistic")
    {
        for(auto const & c : s2l_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic>();
        c->parent = this;
        s2l_statistic.push_back(c);
        return c;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : s2l_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-statistic" || name == "statistics" || name == "destination-address")
        return true;
    return false;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::S2LStatistic()
    :
    destination_address{YType::str, "destination-address"},
    sub_group_id{YType::uint16, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "s2l-statistic"; yang_parent_name = "destination-statistic"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::~S2LStatistic()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::has_data() const
{
    return destination_address.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "destination-address" || name == "sub-group-id" || name == "sub-group-originator")
        return true;
    return false;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{

    yang_name = "statistics"; yang_parent_name = "s2l-statistic"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(events_count.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter);
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-count" || name == "events-total-count" || name == "rx-backup-assign-err-event" || name == "rx-event-unknown" || name == "rx-path-change-event" || name == "rx-path-create-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-path-reeval-query-event" || name == "rx-resv-change-event" || name == "rx-resv-create-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "tx-backup-assign-event" || name == "tx-event-unknown" || name == "tx-path-change-event" || name == "tx-path-create-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-path-reeval-query-event" || name == "tx-resv-change-event" || name == "tx-resv-create-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event")
        return true;
    return false;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{

    yang_name = "statistics"; yang_parent_name = "destination-statistic"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(events_count.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter);
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-count" || name == "events-total-count" || name == "rx-backup-assign-err-event" || name == "rx-event-unknown" || name == "rx-path-change-event" || name == "rx-path-create-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-path-reeval-query-event" || name == "rx-resv-change-event" || name == "rx-resv-create-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "tx-backup-assign-event" || name == "tx-event-unknown" || name == "tx-path-change-event" || name == "tx-path-create-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-path-reeval-query-event" || name == "tx-resv-change-event" || name == "tx-resv-create-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event")
        return true;
    return false;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{

    yang_name = "statistics"; yang_parent_name = "te-signalling-filter-vif"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(events_count.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter);
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-count" || name == "events-total-count" || name == "rx-backup-assign-err-event" || name == "rx-event-unknown" || name == "rx-path-change-event" || name == "rx-path-create-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-path-reeval-query-event" || name == "rx-resv-change-event" || name == "rx-resv-create-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "tx-backup-assign-event" || name == "tx-event-unknown" || name == "tx-path-change-event" || name == "tx-path-create-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-path-reeval-query-event" || name == "tx-resv-change-event" || name == "tx-resv-create-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event")
        return true;
    return false;
}

MplsTe::SoftPreemption::SoftPreemption()
    :
    statistics(std::make_shared<MplsTe::SoftPreemption::Statistics>())
{
    statistics->parent = this;

    yang_name = "soft-preemption"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::SoftPreemption::~SoftPreemption()
{
}

bool MplsTe::SoftPreemption::has_data() const
{
    return (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SoftPreemption::has_operation() const
{
    return is_set(yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SoftPreemption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SoftPreemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SoftPreemption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SoftPreemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::SoftPreemption::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SoftPreemption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTe::SoftPreemption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::SoftPreemption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::SoftPreemption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics")
        return true;
    return false;
}

MplsTe::SoftPreemption::Statistics::Statistics()
    :
    frr_triggered_soft_preempted_lsp_ss{YType::uint32, "frr-triggered-soft-preempted-lsp-ss"},
    last_cleared_timestamp{YType::uint32, "last-cleared-timestamp"},
    minimum_time_in_soft_preempted_state{YType::uint16, "minimum-time-in-soft-preempted-state"},
    path_protected_switchover_soft_preempted_ls_ps{YType::uint32, "path-protected-switchover-soft-preempted-ls-ps"},
    reoptimized_soft_preempted_ls_ps{YType::uint32, "reoptimized-soft-preempted-ls-ps"},
    soft_preempted_head_ls_ps{YType::uint32, "soft-preempted-head-ls-ps"},
    soft_preempted_ls_ps{YType::uint32, "soft-preempted-ls-ps"},
    soft_preemption_events{YType::uint32, "soft-preemption-events"},
    time_in_soft_preempted_state_avg{YType::uint16, "time-in-soft-preempted-state-avg"},
    time_in_soft_preempted_state_max{YType::uint16, "time-in-soft-preempted-state-max"},
    timed_out_soft_preempted_lsp_ss{YType::uint32, "timed-out-soft-preempted-lsp-ss"},
    torn_down_soft_preempted_ls_ps{YType::uint32, "torn-down-soft-preempted-ls-ps"},
    torndown_soft_preempted_ls_ps{YType::uint32, "torndown-soft-preempted-ls-ps"}
{

    yang_name = "statistics"; yang_parent_name = "soft-preemption"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::SoftPreemption::Statistics::~Statistics()
{
}

bool MplsTe::SoftPreemption::Statistics::has_data() const
{
    return frr_triggered_soft_preempted_lsp_ss.is_set
	|| last_cleared_timestamp.is_set
	|| minimum_time_in_soft_preempted_state.is_set
	|| path_protected_switchover_soft_preempted_ls_ps.is_set
	|| reoptimized_soft_preempted_ls_ps.is_set
	|| soft_preempted_head_ls_ps.is_set
	|| soft_preempted_ls_ps.is_set
	|| soft_preemption_events.is_set
	|| time_in_soft_preempted_state_avg.is_set
	|| time_in_soft_preempted_state_max.is_set
	|| timed_out_soft_preempted_lsp_ss.is_set
	|| torn_down_soft_preempted_ls_ps.is_set
	|| torndown_soft_preempted_ls_ps.is_set;
}

bool MplsTe::SoftPreemption::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frr_triggered_soft_preempted_lsp_ss.yfilter)
	|| ydk::is_set(last_cleared_timestamp.yfilter)
	|| ydk::is_set(minimum_time_in_soft_preempted_state.yfilter)
	|| ydk::is_set(path_protected_switchover_soft_preempted_ls_ps.yfilter)
	|| ydk::is_set(reoptimized_soft_preempted_ls_ps.yfilter)
	|| ydk::is_set(soft_preempted_head_ls_ps.yfilter)
	|| ydk::is_set(soft_preempted_ls_ps.yfilter)
	|| ydk::is_set(soft_preemption_events.yfilter)
	|| ydk::is_set(time_in_soft_preempted_state_avg.yfilter)
	|| ydk::is_set(time_in_soft_preempted_state_max.yfilter)
	|| ydk::is_set(timed_out_soft_preempted_lsp_ss.yfilter)
	|| ydk::is_set(torn_down_soft_preempted_ls_ps.yfilter)
	|| ydk::is_set(torndown_soft_preempted_ls_ps.yfilter);
}

std::string MplsTe::SoftPreemption::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/soft-preemption/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SoftPreemption::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SoftPreemption::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_triggered_soft_preempted_lsp_ss.is_set || is_set(frr_triggered_soft_preempted_lsp_ss.yfilter)) leaf_name_data.push_back(frr_triggered_soft_preempted_lsp_ss.get_name_leafdata());
    if (last_cleared_timestamp.is_set || is_set(last_cleared_timestamp.yfilter)) leaf_name_data.push_back(last_cleared_timestamp.get_name_leafdata());
    if (minimum_time_in_soft_preempted_state.is_set || is_set(minimum_time_in_soft_preempted_state.yfilter)) leaf_name_data.push_back(minimum_time_in_soft_preempted_state.get_name_leafdata());
    if (path_protected_switchover_soft_preempted_ls_ps.is_set || is_set(path_protected_switchover_soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(path_protected_switchover_soft_preempted_ls_ps.get_name_leafdata());
    if (reoptimized_soft_preempted_ls_ps.is_set || is_set(reoptimized_soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(reoptimized_soft_preempted_ls_ps.get_name_leafdata());
    if (soft_preempted_head_ls_ps.is_set || is_set(soft_preempted_head_ls_ps.yfilter)) leaf_name_data.push_back(soft_preempted_head_ls_ps.get_name_leafdata());
    if (soft_preempted_ls_ps.is_set || is_set(soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(soft_preempted_ls_ps.get_name_leafdata());
    if (soft_preemption_events.is_set || is_set(soft_preemption_events.yfilter)) leaf_name_data.push_back(soft_preemption_events.get_name_leafdata());
    if (time_in_soft_preempted_state_avg.is_set || is_set(time_in_soft_preempted_state_avg.yfilter)) leaf_name_data.push_back(time_in_soft_preempted_state_avg.get_name_leafdata());
    if (time_in_soft_preempted_state_max.is_set || is_set(time_in_soft_preempted_state_max.yfilter)) leaf_name_data.push_back(time_in_soft_preempted_state_max.get_name_leafdata());
    if (timed_out_soft_preempted_lsp_ss.is_set || is_set(timed_out_soft_preempted_lsp_ss.yfilter)) leaf_name_data.push_back(timed_out_soft_preempted_lsp_ss.get_name_leafdata());
    if (torn_down_soft_preempted_ls_ps.is_set || is_set(torn_down_soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(torn_down_soft_preempted_ls_ps.get_name_leafdata());
    if (torndown_soft_preempted_ls_ps.is_set || is_set(torndown_soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(torndown_soft_preempted_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SoftPreemption::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SoftPreemption::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::SoftPreemption::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frr-triggered-soft-preempted-lsp-ss")
    {
        frr_triggered_soft_preempted_lsp_ss = value;
        frr_triggered_soft_preempted_lsp_ss.value_namespace = name_space;
        frr_triggered_soft_preempted_lsp_ss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp = value;
        last_cleared_timestamp.value_namespace = name_space;
        last_cleared_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time-in-soft-preempted-state")
    {
        minimum_time_in_soft_preempted_state = value;
        minimum_time_in_soft_preempted_state.value_namespace = name_space;
        minimum_time_in_soft_preempted_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protected-switchover-soft-preempted-ls-ps")
    {
        path_protected_switchover_soft_preempted_ls_ps = value;
        path_protected_switchover_soft_preempted_ls_ps.value_namespace = name_space;
        path_protected_switchover_soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-soft-preempted-ls-ps")
    {
        reoptimized_soft_preempted_ls_ps = value;
        reoptimized_soft_preempted_ls_ps.value_namespace = name_space;
        reoptimized_soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-head-ls-ps")
    {
        soft_preempted_head_ls_ps = value;
        soft_preempted_head_ls_ps.value_namespace = name_space;
        soft_preempted_head_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-ls-ps")
    {
        soft_preempted_ls_ps = value;
        soft_preempted_ls_ps.value_namespace = name_space;
        soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-events")
    {
        soft_preemption_events = value;
        soft_preemption_events.value_namespace = name_space;
        soft_preemption_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-soft-preempted-state-avg")
    {
        time_in_soft_preempted_state_avg = value;
        time_in_soft_preempted_state_avg.value_namespace = name_space;
        time_in_soft_preempted_state_avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-soft-preempted-state-max")
    {
        time_in_soft_preempted_state_max = value;
        time_in_soft_preempted_state_max.value_namespace = name_space;
        time_in_soft_preempted_state_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timed-out-soft-preempted-lsp-ss")
    {
        timed_out_soft_preempted_lsp_ss = value;
        timed_out_soft_preempted_lsp_ss.value_namespace = name_space;
        timed_out_soft_preempted_lsp_ss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "torn-down-soft-preempted-ls-ps")
    {
        torn_down_soft_preempted_ls_ps = value;
        torn_down_soft_preempted_ls_ps.value_namespace = name_space;
        torn_down_soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "torndown-soft-preempted-ls-ps")
    {
        torndown_soft_preempted_ls_ps = value;
        torndown_soft_preempted_ls_ps.value_namespace = name_space;
        torndown_soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SoftPreemption::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frr-triggered-soft-preempted-lsp-ss")
    {
        frr_triggered_soft_preempted_lsp_ss.yfilter = yfilter;
    }
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp.yfilter = yfilter;
    }
    if(value_path == "minimum-time-in-soft-preempted-state")
    {
        minimum_time_in_soft_preempted_state.yfilter = yfilter;
    }
    if(value_path == "path-protected-switchover-soft-preempted-ls-ps")
    {
        path_protected_switchover_soft_preempted_ls_ps.yfilter = yfilter;
    }
    if(value_path == "reoptimized-soft-preempted-ls-ps")
    {
        reoptimized_soft_preempted_ls_ps.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-head-ls-ps")
    {
        soft_preempted_head_ls_ps.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-ls-ps")
    {
        soft_preempted_ls_ps.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-events")
    {
        soft_preemption_events.yfilter = yfilter;
    }
    if(value_path == "time-in-soft-preempted-state-avg")
    {
        time_in_soft_preempted_state_avg.yfilter = yfilter;
    }
    if(value_path == "time-in-soft-preempted-state-max")
    {
        time_in_soft_preempted_state_max.yfilter = yfilter;
    }
    if(value_path == "timed-out-soft-preempted-lsp-ss")
    {
        timed_out_soft_preempted_lsp_ss.yfilter = yfilter;
    }
    if(value_path == "torn-down-soft-preempted-ls-ps")
    {
        torn_down_soft_preempted_ls_ps.yfilter = yfilter;
    }
    if(value_path == "torndown-soft-preempted-ls-ps")
    {
        torndown_soft_preempted_ls_ps.yfilter = yfilter;
    }
}

bool MplsTe::SoftPreemption::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-triggered-soft-preempted-lsp-ss" || name == "last-cleared-timestamp" || name == "minimum-time-in-soft-preempted-state" || name == "path-protected-switchover-soft-preempted-ls-ps" || name == "reoptimized-soft-preempted-ls-ps" || name == "soft-preempted-head-ls-ps" || name == "soft-preempted-ls-ps" || name == "soft-preemption-events" || name == "time-in-soft-preempted-state-avg" || name == "time-in-soft-preempted-state-max" || name == "timed-out-soft-preempted-lsp-ss" || name == "torn-down-soft-preempted-ls-ps" || name == "torndown-soft-preempted-ls-ps")
        return true;
    return false;
}

MplsTe::TeMib::TeMib()
    :
    scalars(std::make_shared<MplsTe::TeMib::Scalars>())
{
    scalars->parent = this;

    yang_name = "te-mib"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TeMib::~TeMib()
{
}

bool MplsTe::TeMib::has_data() const
{
    return (scalars !=  nullptr && scalars->has_data());
}

bool MplsTe::TeMib::has_operation() const
{
    return is_set(yfilter)
	|| (scalars !=  nullptr && scalars->has_operation());
}

std::string MplsTe::TeMib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TeMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TeMib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TeMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scalars")
    {
        if(scalars == nullptr)
        {
            scalars = std::make_shared<MplsTe::TeMib::Scalars>();
        }
        return scalars;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TeMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scalars != nullptr)
    {
        children["scalars"] = scalars;
    }

    return children;
}

void MplsTe::TeMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::TeMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::TeMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scalars")
        return true;
    return false;
}

MplsTe::TeMib::Scalars::Scalars()
    :
    mpls_tunnel_active{YType::uint32, "mpls-tunnel-active"},
    mpls_tunnel_configured{YType::uint32, "mpls-tunnel-configured"},
    mpls_tunnel_max_hops{YType::uint32, "mpls-tunnel-max-hops"},
    mpls_tunnel_notification_max_rate{YType::uint32, "mpls-tunnel-notification-max-rate"},
    mpls_tunnel_te_dist_proto{YType::uint8, "mpls-tunnel-te-dist-proto"}
{

    yang_name = "scalars"; yang_parent_name = "te-mib"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TeMib::Scalars::~Scalars()
{
}

bool MplsTe::TeMib::Scalars::has_data() const
{
    return mpls_tunnel_active.is_set
	|| mpls_tunnel_configured.is_set
	|| mpls_tunnel_max_hops.is_set
	|| mpls_tunnel_notification_max_rate.is_set
	|| mpls_tunnel_te_dist_proto.is_set;
}

bool MplsTe::TeMib::Scalars::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls_tunnel_active.yfilter)
	|| ydk::is_set(mpls_tunnel_configured.yfilter)
	|| ydk::is_set(mpls_tunnel_max_hops.yfilter)
	|| ydk::is_set(mpls_tunnel_notification_max_rate.yfilter)
	|| ydk::is_set(mpls_tunnel_te_dist_proto.yfilter);
}

std::string MplsTe::TeMib::Scalars::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/te-mib/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TeMib::Scalars::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scalars";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TeMib::Scalars::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_tunnel_active.is_set || is_set(mpls_tunnel_active.yfilter)) leaf_name_data.push_back(mpls_tunnel_active.get_name_leafdata());
    if (mpls_tunnel_configured.is_set || is_set(mpls_tunnel_configured.yfilter)) leaf_name_data.push_back(mpls_tunnel_configured.get_name_leafdata());
    if (mpls_tunnel_max_hops.is_set || is_set(mpls_tunnel_max_hops.yfilter)) leaf_name_data.push_back(mpls_tunnel_max_hops.get_name_leafdata());
    if (mpls_tunnel_notification_max_rate.is_set || is_set(mpls_tunnel_notification_max_rate.yfilter)) leaf_name_data.push_back(mpls_tunnel_notification_max_rate.get_name_leafdata());
    if (mpls_tunnel_te_dist_proto.is_set || is_set(mpls_tunnel_te_dist_proto.yfilter)) leaf_name_data.push_back(mpls_tunnel_te_dist_proto.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TeMib::Scalars::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TeMib::Scalars::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::TeMib::Scalars::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls-tunnel-active")
    {
        mpls_tunnel_active = value;
        mpls_tunnel_active.value_namespace = name_space;
        mpls_tunnel_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-tunnel-configured")
    {
        mpls_tunnel_configured = value;
        mpls_tunnel_configured.value_namespace = name_space;
        mpls_tunnel_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-tunnel-max-hops")
    {
        mpls_tunnel_max_hops = value;
        mpls_tunnel_max_hops.value_namespace = name_space;
        mpls_tunnel_max_hops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-tunnel-notification-max-rate")
    {
        mpls_tunnel_notification_max_rate = value;
        mpls_tunnel_notification_max_rate.value_namespace = name_space;
        mpls_tunnel_notification_max_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-tunnel-te-dist-proto")
    {
        mpls_tunnel_te_dist_proto = value;
        mpls_tunnel_te_dist_proto.value_namespace = name_space;
        mpls_tunnel_te_dist_proto.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TeMib::Scalars::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls-tunnel-active")
    {
        mpls_tunnel_active.yfilter = yfilter;
    }
    if(value_path == "mpls-tunnel-configured")
    {
        mpls_tunnel_configured.yfilter = yfilter;
    }
    if(value_path == "mpls-tunnel-max-hops")
    {
        mpls_tunnel_max_hops.yfilter = yfilter;
    }
    if(value_path == "mpls-tunnel-notification-max-rate")
    {
        mpls_tunnel_notification_max_rate.yfilter = yfilter;
    }
    if(value_path == "mpls-tunnel-te-dist-proto")
    {
        mpls_tunnel_te_dist_proto.yfilter = yfilter;
    }
}

bool MplsTe::TeMib::Scalars::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-tunnel-active" || name == "mpls-tunnel-configured" || name == "mpls-tunnel-max-hops" || name == "mpls-tunnel-notification-max-rate" || name == "mpls-tunnel-te-dist-proto")
        return true;
    return false;
}

MplsTe::Topology::Topology()
    :
    configured_srlgs(std::make_shared<MplsTe::Topology::ConfiguredSrlgs>())
	,destination_paths(std::make_shared<MplsTe::Topology::DestinationPaths>())
	,global(std::make_shared<MplsTe::Topology::Global>())
	,path_tunnels(std::make_shared<MplsTe::Topology::PathTunnels>())
	,srlgs(std::make_shared<MplsTe::Topology::Srlgs>())
{
    configured_srlgs->parent = this;
    destination_paths->parent = this;
    global->parent = this;
    path_tunnels->parent = this;
    srlgs->parent = this;

    yang_name = "topology"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Topology::~Topology()
{
}

bool MplsTe::Topology::has_data() const
{
    return (configured_srlgs !=  nullptr && configured_srlgs->has_data())
	|| (destination_paths !=  nullptr && destination_paths->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (path_tunnels !=  nullptr && path_tunnels->has_data())
	|| (srlgs !=  nullptr && srlgs->has_data());
}

bool MplsTe::Topology::has_operation() const
{
    return is_set(yfilter)
	|| (configured_srlgs !=  nullptr && configured_srlgs->has_operation())
	|| (destination_paths !=  nullptr && destination_paths->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (path_tunnels !=  nullptr && path_tunnels->has_operation())
	|| (srlgs !=  nullptr && srlgs->has_operation());
}

std::string MplsTe::Topology::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configured-srlgs")
    {
        if(configured_srlgs == nullptr)
        {
            configured_srlgs = std::make_shared<MplsTe::Topology::ConfiguredSrlgs>();
        }
        return configured_srlgs;
    }

    if(child_yang_name == "destination-paths")
    {
        if(destination_paths == nullptr)
        {
            destination_paths = std::make_shared<MplsTe::Topology::DestinationPaths>();
        }
        return destination_paths;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsTe::Topology::Global>();
        }
        return global;
    }

    if(child_yang_name == "path-tunnels")
    {
        if(path_tunnels == nullptr)
        {
            path_tunnels = std::make_shared<MplsTe::Topology::PathTunnels>();
        }
        return path_tunnels;
    }

    if(child_yang_name == "srlgs")
    {
        if(srlgs == nullptr)
        {
            srlgs = std::make_shared<MplsTe::Topology::Srlgs>();
        }
        return srlgs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configured_srlgs != nullptr)
    {
        children["configured-srlgs"] = configured_srlgs;
    }

    if(destination_paths != nullptr)
    {
        children["destination-paths"] = destination_paths;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(path_tunnels != nullptr)
    {
        children["path-tunnels"] = path_tunnels;
    }

    if(srlgs != nullptr)
    {
        children["srlgs"] = srlgs;
    }

    return children;
}

void MplsTe::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-srlgs" || name == "destination-paths" || name == "global" || name == "path-tunnels" || name == "srlgs")
        return true;
    return false;
}

MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlgs()
{

    yang_name = "configured-srlgs"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Topology::ConfiguredSrlgs::~ConfiguredSrlgs()
{
}

bool MplsTe::Topology::ConfiguredSrlgs::has_data() const
{
    for (std::size_t index=0; index<configured_srlg.size(); index++)
    {
        if(configured_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Topology::ConfiguredSrlgs::has_operation() const
{
    for (std::size_t index=0; index<configured_srlg.size(); index++)
    {
        if(configured_srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Topology::ConfiguredSrlgs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::ConfiguredSrlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-srlgs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::ConfiguredSrlgs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::ConfiguredSrlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configured-srlg")
    {
        for(auto const & c : configured_srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg>();
        c->parent = this;
        configured_srlg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::ConfiguredSrlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : configured_srlg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::Topology::ConfiguredSrlgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Topology::ConfiguredSrlgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Topology::ConfiguredSrlgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-srlg")
        return true;
    return false;
}

MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::ConfiguredSrlg()
    :
    srlg_number{YType::int32, "srlg-number"},
    admin_weight{YType::uint32, "admin-weight"},
    is_admin_weight_configured{YType::boolean, "is-admin-weight-configured"},
    srlg_name{YType::str, "srlg-name"},
    srlg_number_xr{YType::uint32, "srlg-number-xr"}
{

    yang_name = "configured-srlg"; yang_parent_name = "configured-srlgs"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::~ConfiguredSrlg()
{
}

bool MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::has_data() const
{
    for (std::size_t index=0; index<srlg_link.size(); index++)
    {
        if(srlg_link[index]->has_data())
            return true;
    }
    return srlg_number.is_set
	|| admin_weight.is_set
	|| is_admin_weight_configured.is_set
	|| srlg_name.is_set
	|| srlg_number_xr.is_set;
}

bool MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::has_operation() const
{
    for (std::size_t index=0; index<srlg_link.size(); index++)
    {
        if(srlg_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(srlg_number.yfilter)
	|| ydk::is_set(admin_weight.yfilter)
	|| ydk::is_set(is_admin_weight_configured.yfilter)
	|| ydk::is_set(srlg_name.yfilter)
	|| ydk::is_set(srlg_number_xr.yfilter);
}

std::string MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/configured-srlgs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-srlg" <<"[srlg-number='" <<srlg_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_number.is_set || is_set(srlg_number.yfilter)) leaf_name_data.push_back(srlg_number.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (is_admin_weight_configured.is_set || is_set(is_admin_weight_configured.yfilter)) leaf_name_data.push_back(is_admin_weight_configured.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (srlg_number_xr.is_set || is_set(srlg_number_xr.yfilter)) leaf_name_data.push_back(srlg_number_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-link")
    {
        for(auto const & c : srlg_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink>();
        c->parent = this;
        srlg_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : srlg_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-number")
    {
        srlg_number = value;
        srlg_number.value_namespace = name_space;
        srlg_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-admin-weight-configured")
    {
        is_admin_weight_configured = value;
        is_admin_weight_configured.value_namespace = name_space;
        is_admin_weight_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-number-xr")
    {
        srlg_number_xr = value;
        srlg_number_xr.value_namespace = name_space;
        srlg_number_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-number")
    {
        srlg_number.yfilter = yfilter;
    }
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
    if(value_path == "is-admin-weight-configured")
    {
        is_admin_weight_configured.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
    if(value_path == "srlg-number-xr")
    {
        srlg_number_xr.yfilter = yfilter;
    }
}

bool MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-link" || name == "srlg-number" || name == "admin-weight" || name == "is-admin-weight-configured" || name == "srlg-name" || name == "srlg-number-xr")
        return true;
    return false;
}

MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::SrlgLink()
    :
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"}
{

    yang_name = "srlg-link"; yang_parent_name = "configured-srlg"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::~SrlgLink()
{
}

bool MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::has_data() const
{
    return local_address.is_set
	|| remote_address.is_set;
}

bool MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter);
}

std::string MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-address" || name == "remote-address")
        return true;
    return false;
}

MplsTe::Topology::DestinationPaths::DestinationPaths()
{

    yang_name = "destination-paths"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Topology::DestinationPaths::~DestinationPaths()
{
}

bool MplsTe::Topology::DestinationPaths::has_data() const
{
    for (std::size_t index=0; index<destination_path.size(); index++)
    {
        if(destination_path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Topology::DestinationPaths::has_operation() const
{
    for (std::size_t index=0; index<destination_path.size(); index++)
    {
        if(destination_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Topology::DestinationPaths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::DestinationPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::DestinationPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::DestinationPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-path")
    {
        for(auto const & c : destination_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::Topology::DestinationPaths::DestinationPath>();
        c->parent = this;
        destination_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::DestinationPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : destination_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::Topology::DestinationPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Topology::DestinationPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Topology::DestinationPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-path")
        return true;
    return false;
}

MplsTe::Topology::DestinationPaths::DestinationPath::DestinationPath()
    :
    accumulated_admin_weight{YType::uint64, "accumulated-admin-weight"},
    affinity_bits{YType::int32, "affinity-bits"},
    affinity_mask{YType::int32, "affinity-mask"},
    bandwidth{YType::int32, "bandwidth"},
    bandwidth_type{YType::uint64, "bandwidth-type"},
    cost_limit{YType::int32, "cost-limit"},
    destination_address{YType::str, "destination-address"},
    destination_address_xr{YType::str, "destination-address-xr"},
    exclude_srlg_address{YType::str, "exclude-srlg-address"},
    exclude_srlg_ip_address{YType::str, "exclude-srlg-ip-address"},
    hold_priority{YType::int32, "hold-priority"},
    hold_priority_xr{YType::uint32, "hold-priority-xr"},
    hop_limit{YType::int32, "hop-limit"},
    igp_area{YType::int32, "igp-area"},
    igp_instance{YType::str, "igp-instance"},
    igp_type{YType::enumeration, "igp-type"},
    is_full_path{YType::boolean, "is-full-path"},
    is_partial_path{YType::boolean, "is-partial-path"},
    is_segment_routing_db_checked{YType::boolean, "is-segment-routing-db-checked"},
    is_topology_checked{YType::boolean, "is-topology-checked"},
    mininum_bandwidth{YType::uint64, "mininum-bandwidth"},
    node_hop_count{YType::uint8, "node-hop-count"},
    path_id{YType::int32, "path-id"},
    path_name{YType::str, "path-name"},
    path_type{YType::enumeration, "path-type"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    setup_priority{YType::int32, "setup-priority"},
    setup_priority_xr{YType::uint32, "setup-priority-xr"},
    tunnel_id_xr{YType::uint32, "tunnel-id-xr"}
    	,
    affinity(std::make_shared<MplsTe::Topology::DestinationPaths::DestinationPath::Affinity>())
{
    affinity->parent = this;

    yang_name = "destination-path"; yang_parent_name = "destination-paths"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Topology::DestinationPaths::DestinationPath::~DestinationPath()
{
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::has_data() const
{
    for (std::size_t index=0; index<hop.size(); index++)
    {
        if(hop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_segment.size(); index++)
    {
        if(sr_segment[index]->has_data())
            return true;
    }
    return accumulated_admin_weight.is_set
	|| affinity_bits.is_set
	|| affinity_mask.is_set
	|| bandwidth.is_set
	|| bandwidth_type.is_set
	|| cost_limit.is_set
	|| destination_address.is_set
	|| destination_address_xr.is_set
	|| exclude_srlg_address.is_set
	|| exclude_srlg_ip_address.is_set
	|| hold_priority.is_set
	|| hold_priority_xr.is_set
	|| hop_limit.is_set
	|| igp_area.is_set
	|| igp_instance.is_set
	|| igp_type.is_set
	|| is_full_path.is_set
	|| is_partial_path.is_set
	|| is_segment_routing_db_checked.is_set
	|| is_topology_checked.is_set
	|| mininum_bandwidth.is_set
	|| node_hop_count.is_set
	|| path_id.is_set
	|| path_name.is_set
	|| path_type.is_set
	|| requested_bandwidth.is_set
	|| setup_priority.is_set
	|| setup_priority_xr.is_set
	|| tunnel_id_xr.is_set
	|| (affinity !=  nullptr && affinity->has_data());
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::has_operation() const
{
    for (std::size_t index=0; index<hop.size(); index++)
    {
        if(hop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_segment.size(); index++)
    {
        if(sr_segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(accumulated_admin_weight.yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(cost_limit.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(exclude_srlg_address.yfilter)
	|| ydk::is_set(exclude_srlg_ip_address.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(hold_priority_xr.yfilter)
	|| ydk::is_set(hop_limit.yfilter)
	|| ydk::is_set(igp_area.yfilter)
	|| ydk::is_set(igp_instance.yfilter)
	|| ydk::is_set(igp_type.yfilter)
	|| ydk::is_set(is_full_path.yfilter)
	|| ydk::is_set(is_partial_path.yfilter)
	|| ydk::is_set(is_segment_routing_db_checked.yfilter)
	|| ydk::is_set(is_topology_checked.yfilter)
	|| ydk::is_set(mininum_bandwidth.yfilter)
	|| ydk::is_set(node_hop_count.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_name.yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(requested_bandwidth.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(setup_priority_xr.yfilter)
	|| ydk::is_set(tunnel_id_xr.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation());
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/destination-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::DestinationPaths::DestinationPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accumulated_admin_weight.is_set || is_set(accumulated_admin_weight.yfilter)) leaf_name_data.push_back(accumulated_admin_weight.get_name_leafdata());
    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (cost_limit.is_set || is_set(cost_limit.yfilter)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (exclude_srlg_address.is_set || is_set(exclude_srlg_address.yfilter)) leaf_name_data.push_back(exclude_srlg_address.get_name_leafdata());
    if (exclude_srlg_ip_address.is_set || is_set(exclude_srlg_ip_address.yfilter)) leaf_name_data.push_back(exclude_srlg_ip_address.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (hold_priority_xr.is_set || is_set(hold_priority_xr.yfilter)) leaf_name_data.push_back(hold_priority_xr.get_name_leafdata());
    if (hop_limit.is_set || is_set(hop_limit.yfilter)) leaf_name_data.push_back(hop_limit.get_name_leafdata());
    if (igp_area.is_set || is_set(igp_area.yfilter)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.yfilter)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (is_full_path.is_set || is_set(is_full_path.yfilter)) leaf_name_data.push_back(is_full_path.get_name_leafdata());
    if (is_partial_path.is_set || is_set(is_partial_path.yfilter)) leaf_name_data.push_back(is_partial_path.get_name_leafdata());
    if (is_segment_routing_db_checked.is_set || is_set(is_segment_routing_db_checked.yfilter)) leaf_name_data.push_back(is_segment_routing_db_checked.get_name_leafdata());
    if (is_topology_checked.is_set || is_set(is_topology_checked.yfilter)) leaf_name_data.push_back(is_topology_checked.get_name_leafdata());
    if (mininum_bandwidth.is_set || is_set(mininum_bandwidth.yfilter)) leaf_name_data.push_back(mininum_bandwidth.get_name_leafdata());
    if (node_hop_count.is_set || is_set(node_hop_count.yfilter)) leaf_name_data.push_back(node_hop_count.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_name.is_set || is_set(path_name.yfilter)) leaf_name_data.push_back(path_name.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.yfilter)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (setup_priority_xr.is_set || is_set(setup_priority_xr.yfilter)) leaf_name_data.push_back(setup_priority_xr.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.yfilter)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::DestinationPaths::DestinationPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::Topology::DestinationPaths::DestinationPath::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "hop")
    {
        for(auto const & c : hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::Topology::DestinationPaths::DestinationPath::Hop>();
        c->parent = this;
        hop.push_back(c);
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
        auto c = std::make_shared<MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(c);
        return c;
    }

    if(child_yang_name == "sr-segment")
    {
        for(auto const & c : sr_segment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment>();
        c->parent = this;
        sr_segment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::DestinationPaths::DestinationPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    for (auto const & c : hop)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : shared_risk_link_group)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sr_segment)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::Topology::DestinationPaths::DestinationPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accumulated-admin-weight")
    {
        accumulated_admin_weight = value;
        accumulated_admin_weight.value_namespace = name_space;
        accumulated_admin_weight.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-limit")
    {
        cost_limit = value;
        cost_limit.value_namespace = name_space;
        cost_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-srlg-address")
    {
        exclude_srlg_address = value;
        exclude_srlg_address.value_namespace = name_space;
        exclude_srlg_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-srlg-ip-address")
    {
        exclude_srlg_ip_address = value;
        exclude_srlg_ip_address.value_namespace = name_space;
        exclude_srlg_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority-xr")
    {
        hold_priority_xr = value;
        hold_priority_xr.value_namespace = name_space;
        hold_priority_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-limit")
    {
        hop_limit = value;
        hop_limit.value_namespace = name_space;
        hop_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area")
    {
        igp_area = value;
        igp_area.value_namespace = name_space;
        igp_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
        igp_instance.value_namespace = name_space;
        igp_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-full-path")
    {
        is_full_path = value;
        is_full_path.value_namespace = name_space;
        is_full_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-partial-path")
    {
        is_partial_path = value;
        is_partial_path.value_namespace = name_space;
        is_partial_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-segment-routing-db-checked")
    {
        is_segment_routing_db_checked = value;
        is_segment_routing_db_checked.value_namespace = name_space;
        is_segment_routing_db_checked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-topology-checked")
    {
        is_topology_checked = value;
        is_topology_checked.value_namespace = name_space;
        is_topology_checked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mininum-bandwidth")
    {
        mininum_bandwidth = value;
        mininum_bandwidth.value_namespace = name_space;
        mininum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count = value;
        node_hop_count.value_namespace = name_space;
        node_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-name")
    {
        path_name = value;
        path_name.value_namespace = name_space;
        path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
        requested_bandwidth.value_namespace = name_space;
        requested_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority-xr")
    {
        setup_priority_xr = value;
        setup_priority_xr.value_namespace = name_space;
        setup_priority_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
        tunnel_id_xr.value_namespace = name_space;
        tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::DestinationPaths::DestinationPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accumulated-admin-weight")
    {
        accumulated_admin_weight.yfilter = yfilter;
    }
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "cost-limit")
    {
        cost_limit.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "exclude-srlg-address")
    {
        exclude_srlg_address.yfilter = yfilter;
    }
    if(value_path == "exclude-srlg-ip-address")
    {
        exclude_srlg_ip_address.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority-xr")
    {
        hold_priority_xr.yfilter = yfilter;
    }
    if(value_path == "hop-limit")
    {
        hop_limit.yfilter = yfilter;
    }
    if(value_path == "igp-area")
    {
        igp_area.yfilter = yfilter;
    }
    if(value_path == "igp-instance")
    {
        igp_instance.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
    if(value_path == "is-full-path")
    {
        is_full_path.yfilter = yfilter;
    }
    if(value_path == "is-partial-path")
    {
        is_partial_path.yfilter = yfilter;
    }
    if(value_path == "is-segment-routing-db-checked")
    {
        is_segment_routing_db_checked.yfilter = yfilter;
    }
    if(value_path == "is-topology-checked")
    {
        is_topology_checked.yfilter = yfilter;
    }
    if(value_path == "mininum-bandwidth")
    {
        mininum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-name")
    {
        path_name.yfilter = yfilter;
    }
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "setup-priority-xr")
    {
        setup_priority_xr.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr.yfilter = yfilter;
    }
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "hop" || name == "shared-risk-link-group" || name == "sr-segment" || name == "accumulated-admin-weight" || name == "affinity-bits" || name == "affinity-mask" || name == "bandwidth" || name == "bandwidth-type" || name == "cost-limit" || name == "destination-address" || name == "destination-address-xr" || name == "exclude-srlg-address" || name == "exclude-srlg-ip-address" || name == "hold-priority" || name == "hold-priority-xr" || name == "hop-limit" || name == "igp-area" || name == "igp-instance" || name == "igp-type" || name == "is-full-path" || name == "is-partial-path" || name == "is-segment-routing-db-checked" || name == "is-topology-checked" || name == "mininum-bandwidth" || name == "node-hop-count" || name == "path-id" || name == "path-name" || name == "path-type" || name == "requested-bandwidth" || name == "setup-priority" || name == "setup-priority-xr" || name == "tunnel-id-xr")
        return true;
    return false;
}

MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "destination-path"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::~Affinity()
{
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::has_operation() const
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

std::string MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/destination-paths/destination-path/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::has_data() const
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

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/destination-paths/destination-path/affinity/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue>();
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
        auto c = std::make_shared<MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::get_children() const
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

void MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/destination-paths/destination-path/affinity/named-affinity/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/destination-paths/destination-path/affinity/named-affinity/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::Topology::DestinationPaths::DestinationPath::Hop::Hop()
    :
    entry{YType::str, "entry"}
{

    yang_name = "hop"; yang_parent_name = "destination-path"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Topology::DestinationPaths::DestinationPath::Hop::~Hop()
{
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Hop::has_data() const
{
    return entry.is_set;
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Hop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::Hop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/destination-paths/destination-path/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::DestinationPaths::DestinationPath::Hop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::DestinationPaths::DestinationPath::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::DestinationPaths::DestinationPath::Hop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Topology::DestinationPaths::DestinationPath::Hop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::DestinationPaths::DestinationPath::Hop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Hop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "shared-risk-link-group"; yang_parent_name = "destination-path"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/destination-paths/destination-path/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::SrSegment()
    :
    has_entropy_label{YType::boolean, "has-entropy-label"},
    has_ip_addresses{YType::boolean, "has-ip-addresses"},
    has_mpls_label{YType::boolean, "has-mpls-label"},
    local_addr{YType::str, "local-addr"},
    mpls_label_value{YType::uint32, "mpls-label-value"},
    remote_addr{YType::str, "remote-addr"},
    sid_type{YType::enumeration, "sid-type"}
{

    yang_name = "sr-segment"; yang_parent_name = "destination-path"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::~SrSegment()
{
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::has_data() const
{
    return has_entropy_label.is_set
	|| has_ip_addresses.is_set
	|| has_mpls_label.is_set
	|| local_addr.is_set
	|| mpls_label_value.is_set
	|| remote_addr.is_set
	|| sid_type.is_set;
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(has_entropy_label.yfilter)
	|| ydk::is_set(has_ip_addresses.yfilter)
	|| ydk::is_set(has_mpls_label.yfilter)
	|| ydk::is_set(local_addr.yfilter)
	|| ydk::is_set(mpls_label_value.yfilter)
	|| ydk::is_set(remote_addr.yfilter)
	|| ydk::is_set(sid_type.yfilter);
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/destination-paths/destination-path/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_entropy_label.is_set || is_set(has_entropy_label.yfilter)) leaf_name_data.push_back(has_entropy_label.get_name_leafdata());
    if (has_ip_addresses.is_set || is_set(has_ip_addresses.yfilter)) leaf_name_data.push_back(has_ip_addresses.get_name_leafdata());
    if (has_mpls_label.is_set || is_set(has_mpls_label.yfilter)) leaf_name_data.push_back(has_mpls_label.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.yfilter)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (mpls_label_value.is_set || is_set(mpls_label_value.yfilter)) leaf_name_data.push_back(mpls_label_value.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.yfilter)) leaf_name_data.push_back(remote_addr.get_name_leafdata());
    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "has-entropy-label")
    {
        has_entropy_label = value;
        has_entropy_label.value_namespace = name_space;
        has_entropy_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-ip-addresses")
    {
        has_ip_addresses = value;
        has_ip_addresses.value_namespace = name_space;
        has_ip_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-mpls-label")
    {
        has_mpls_label = value;
        has_mpls_label.value_namespace = name_space;
        has_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
        local_addr.value_namespace = name_space;
        local_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label-value")
    {
        mpls_label_value = value;
        mpls_label_value.value_namespace = name_space;
        mpls_label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
        remote_addr.value_namespace = name_space;
        remote_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "has-entropy-label")
    {
        has_entropy_label.yfilter = yfilter;
    }
    if(value_path == "has-ip-addresses")
    {
        has_ip_addresses.yfilter = yfilter;
    }
    if(value_path == "has-mpls-label")
    {
        has_mpls_label.yfilter = yfilter;
    }
    if(value_path == "local-addr")
    {
        local_addr.yfilter = yfilter;
    }
    if(value_path == "mpls-label-value")
    {
        mpls_label_value.yfilter = yfilter;
    }
    if(value_path == "remote-addr")
    {
        remote_addr.yfilter = yfilter;
    }
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "has-entropy-label" || name == "has-ip-addresses" || name == "has-mpls-label" || name == "local-addr" || name == "mpls-label-value" || name == "remote-addr" || name == "sid-type")
        return true;
    return false;
}

MplsTe::Topology::Global::Global()
    :
    hold_down_interval{YType::uint32, "hold-down-interval"},
    link_add_remove_count{YType::uint32, "link-add-remove-count"},
    local_model_id{YType::uint32, "local-model-id"}
{

    yang_name = "global"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Topology::Global::~Global()
{
}

bool MplsTe::Topology::Global::has_data() const
{
    for (std::size_t index=0; index<areas.size(); index++)
    {
        if(areas[index]->has_data())
            return true;
    }
    return hold_down_interval.is_set
	|| link_add_remove_count.is_set
	|| local_model_id.is_set;
}

bool MplsTe::Topology::Global::has_operation() const
{
    for (std::size_t index=0; index<areas.size(); index++)
    {
        if(areas[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hold_down_interval.yfilter)
	|| ydk::is_set(link_add_remove_count.yfilter)
	|| ydk::is_set(local_model_id.yfilter);
}

std::string MplsTe::Topology::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_down_interval.is_set || is_set(hold_down_interval.yfilter)) leaf_name_data.push_back(hold_down_interval.get_name_leafdata());
    if (link_add_remove_count.is_set || is_set(link_add_remove_count.yfilter)) leaf_name_data.push_back(link_add_remove_count.get_name_leafdata());
    if (local_model_id.is_set || is_set(local_model_id.yfilter)) leaf_name_data.push_back(local_model_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "areas")
    {
        for(auto const & c : areas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::Topology::Global::Areas>();
        c->parent = this;
        areas.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : areas)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::Topology::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-down-interval")
    {
        hold_down_interval = value;
        hold_down_interval.value_namespace = name_space;
        hold_down_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-add-remove-count")
    {
        link_add_remove_count = value;
        link_add_remove_count.value_namespace = name_space;
        link_add_remove_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-model-id")
    {
        local_model_id = value;
        local_model_id.value_namespace = name_space;
        local_model_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-down-interval")
    {
        hold_down_interval.yfilter = yfilter;
    }
    if(value_path == "link-add-remove-count")
    {
        link_add_remove_count.yfilter = yfilter;
    }
    if(value_path == "local-model-id")
    {
        local_model_id.yfilter = yfilter;
    }
}

bool MplsTe::Topology::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "areas" || name == "hold-down-interval" || name == "link-add-remove-count" || name == "local-model-id")
        return true;
    return false;
}

MplsTe::Topology::Global::Areas::Areas()
    :
    area_id{YType::str, "area-id"},
    node_id{YType::str, "node-id"},
    protocol{YType::enumeration, "protocol"}
    	,
    local_sid_and_srbg(std::make_shared<MplsTe::Topology::Global::Areas::LocalSidAndSrbg>())
{
    local_sid_and_srbg->parent = this;

    yang_name = "areas"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Topology::Global::Areas::~Areas()
{
}

bool MplsTe::Topology::Global::Areas::has_data() const
{
    return area_id.is_set
	|| node_id.is_set
	|| protocol.is_set
	|| (local_sid_and_srbg !=  nullptr && local_sid_and_srbg->has_data());
}

bool MplsTe::Topology::Global::Areas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| (local_sid_and_srbg !=  nullptr && local_sid_and_srbg->has_operation());
}

std::string MplsTe::Topology::Global::Areas::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/global/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::Global::Areas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::Global::Areas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::Global::Areas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-sid-and-srbg")
    {
        if(local_sid_and_srbg == nullptr)
        {
            local_sid_and_srbg = std::make_shared<MplsTe::Topology::Global::Areas::LocalSidAndSrbg>();
        }
        return local_sid_and_srbg;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::Global::Areas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local_sid_and_srbg != nullptr)
    {
        children["local-sid-and-srbg"] = local_sid_and_srbg;
    }

    return children;
}

void MplsTe::Topology::Global::Areas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::Global::Areas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool MplsTe::Topology::Global::Areas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-sid-and-srbg" || name == "area-id" || name == "node-id" || name == "protocol")
        return true;
    return false;
}

MplsTe::Topology::Global::Areas::LocalSidAndSrbg::LocalSidAndSrbg()
    :
    segment_id{YType::uint32, "segment-id"},
    segment_id_local_absolute_value{YType::uint32, "segment-id-local-absolute-value"},
    srgb_size{YType::uint32, "srgb-size"},
    srgb_start{YType::uint32, "srgb-start"}
{

    yang_name = "local-sid-and-srbg"; yang_parent_name = "areas"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Topology::Global::Areas::LocalSidAndSrbg::~LocalSidAndSrbg()
{
}

bool MplsTe::Topology::Global::Areas::LocalSidAndSrbg::has_data() const
{
    return segment_id.is_set
	|| segment_id_local_absolute_value.is_set
	|| srgb_size.is_set
	|| srgb_start.is_set;
}

bool MplsTe::Topology::Global::Areas::LocalSidAndSrbg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment_id.yfilter)
	|| ydk::is_set(segment_id_local_absolute_value.yfilter)
	|| ydk::is_set(srgb_size.yfilter)
	|| ydk::is_set(srgb_start.yfilter);
}

std::string MplsTe::Topology::Global::Areas::LocalSidAndSrbg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/global/areas/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::Global::Areas::LocalSidAndSrbg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-sid-and-srbg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::Global::Areas::LocalSidAndSrbg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_id.is_set || is_set(segment_id.yfilter)) leaf_name_data.push_back(segment_id.get_name_leafdata());
    if (segment_id_local_absolute_value.is_set || is_set(segment_id_local_absolute_value.yfilter)) leaf_name_data.push_back(segment_id_local_absolute_value.get_name_leafdata());
    if (srgb_size.is_set || is_set(srgb_size.yfilter)) leaf_name_data.push_back(srgb_size.get_name_leafdata());
    if (srgb_start.is_set || is_set(srgb_start.yfilter)) leaf_name_data.push_back(srgb_start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::Global::Areas::LocalSidAndSrbg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::Global::Areas::LocalSidAndSrbg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Topology::Global::Areas::LocalSidAndSrbg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "segment-id")
    {
        segment_id = value;
        segment_id.value_namespace = name_space;
        segment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-local-absolute-value")
    {
        segment_id_local_absolute_value = value;
        segment_id_local_absolute_value.value_namespace = name_space;
        segment_id_local_absolute_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-size")
    {
        srgb_size = value;
        srgb_size.value_namespace = name_space;
        srgb_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-start")
    {
        srgb_start = value;
        srgb_start.value_namespace = name_space;
        srgb_start.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::Global::Areas::LocalSidAndSrbg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "segment-id")
    {
        segment_id.yfilter = yfilter;
    }
    if(value_path == "segment-id-local-absolute-value")
    {
        segment_id_local_absolute_value.yfilter = yfilter;
    }
    if(value_path == "srgb-size")
    {
        srgb_size.yfilter = yfilter;
    }
    if(value_path == "srgb-start")
    {
        srgb_start.yfilter = yfilter;
    }
}

bool MplsTe::Topology::Global::Areas::LocalSidAndSrbg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-id" || name == "segment-id-local-absolute-value" || name == "srgb-size" || name == "srgb-start")
        return true;
    return false;
}

MplsTe::Topology::PathTunnels::PathTunnels()
{

    yang_name = "path-tunnels"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Topology::PathTunnels::~PathTunnels()
{
}

bool MplsTe::Topology::PathTunnels::has_data() const
{
    for (std::size_t index=0; index<path_tunnel.size(); index++)
    {
        if(path_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Topology::PathTunnels::has_operation() const
{
    for (std::size_t index=0; index<path_tunnel.size(); index++)
    {
        if(path_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Topology::PathTunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::PathTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::PathTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::PathTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-tunnel")
    {
        for(auto const & c : path_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::Topology::PathTunnels::PathTunnel>();
        c->parent = this;
        path_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::PathTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::Topology::PathTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Topology::PathTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Topology::PathTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-tunnel")
        return true;
    return false;
}

MplsTe::Topology::PathTunnels::PathTunnel::PathTunnel()
    :
    accumulated_admin_weight{YType::uint64, "accumulated-admin-weight"},
    bandwidth_type{YType::uint64, "bandwidth-type"},
    destination_address_xr{YType::str, "destination-address-xr"},
    exclude_srlg_address{YType::str, "exclude-srlg-address"},
    hold_priority_xr{YType::uint32, "hold-priority-xr"},
    is_full_path{YType::boolean, "is-full-path"},
    is_partial_path{YType::boolean, "is-partial-path"},
    is_segment_routing_db_checked{YType::boolean, "is-segment-routing-db-checked"},
    is_topology_checked{YType::boolean, "is-topology-checked"},
    mininum_bandwidth{YType::uint64, "mininum-bandwidth"},
    node_hop_count{YType::uint8, "node-hop-count"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    setup_priority_xr{YType::uint32, "setup-priority-xr"},
    tunnel_id{YType::int32, "tunnel-id"},
    tunnel_id_xr{YType::uint32, "tunnel-id-xr"},
    tunnel_name{YType::str, "tunnel-name"}
    	,
    affinity(std::make_shared<MplsTe::Topology::PathTunnels::PathTunnel::Affinity>())
{
    affinity->parent = this;

    yang_name = "path-tunnel"; yang_parent_name = "path-tunnels"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Topology::PathTunnels::PathTunnel::~PathTunnel()
{
}

bool MplsTe::Topology::PathTunnels::PathTunnel::has_data() const
{
    for (std::size_t index=0; index<hop.size(); index++)
    {
        if(hop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_segment.size(); index++)
    {
        if(sr_segment[index]->has_data())
            return true;
    }
    return accumulated_admin_weight.is_set
	|| bandwidth_type.is_set
	|| destination_address_xr.is_set
	|| exclude_srlg_address.is_set
	|| hold_priority_xr.is_set
	|| is_full_path.is_set
	|| is_partial_path.is_set
	|| is_segment_routing_db_checked.is_set
	|| is_topology_checked.is_set
	|| mininum_bandwidth.is_set
	|| node_hop_count.is_set
	|| requested_bandwidth.is_set
	|| setup_priority_xr.is_set
	|| tunnel_id.is_set
	|| tunnel_id_xr.is_set
	|| tunnel_name.is_set
	|| (affinity !=  nullptr && affinity->has_data());
}

bool MplsTe::Topology::PathTunnels::PathTunnel::has_operation() const
{
    for (std::size_t index=0; index<hop.size(); index++)
    {
        if(hop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_segment.size(); index++)
    {
        if(sr_segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(accumulated_admin_weight.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(exclude_srlg_address.yfilter)
	|| ydk::is_set(hold_priority_xr.yfilter)
	|| ydk::is_set(is_full_path.yfilter)
	|| ydk::is_set(is_partial_path.yfilter)
	|| ydk::is_set(is_segment_routing_db_checked.yfilter)
	|| ydk::is_set(is_topology_checked.yfilter)
	|| ydk::is_set(mininum_bandwidth.yfilter)
	|| ydk::is_set(node_hop_count.yfilter)
	|| ydk::is_set(requested_bandwidth.yfilter)
	|| ydk::is_set(setup_priority_xr.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id_xr.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation());
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/path-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::PathTunnels::PathTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accumulated_admin_weight.is_set || is_set(accumulated_admin_weight.yfilter)) leaf_name_data.push_back(accumulated_admin_weight.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (exclude_srlg_address.is_set || is_set(exclude_srlg_address.yfilter)) leaf_name_data.push_back(exclude_srlg_address.get_name_leafdata());
    if (hold_priority_xr.is_set || is_set(hold_priority_xr.yfilter)) leaf_name_data.push_back(hold_priority_xr.get_name_leafdata());
    if (is_full_path.is_set || is_set(is_full_path.yfilter)) leaf_name_data.push_back(is_full_path.get_name_leafdata());
    if (is_partial_path.is_set || is_set(is_partial_path.yfilter)) leaf_name_data.push_back(is_partial_path.get_name_leafdata());
    if (is_segment_routing_db_checked.is_set || is_set(is_segment_routing_db_checked.yfilter)) leaf_name_data.push_back(is_segment_routing_db_checked.get_name_leafdata());
    if (is_topology_checked.is_set || is_set(is_topology_checked.yfilter)) leaf_name_data.push_back(is_topology_checked.get_name_leafdata());
    if (mininum_bandwidth.is_set || is_set(mininum_bandwidth.yfilter)) leaf_name_data.push_back(mininum_bandwidth.get_name_leafdata());
    if (node_hop_count.is_set || is_set(node_hop_count.yfilter)) leaf_name_data.push_back(node_hop_count.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.yfilter)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (setup_priority_xr.is_set || is_set(setup_priority_xr.yfilter)) leaf_name_data.push_back(setup_priority_xr.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.yfilter)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::PathTunnels::PathTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::Topology::PathTunnels::PathTunnel::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "hop")
    {
        for(auto const & c : hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::Topology::PathTunnels::PathTunnel::Hop>();
        c->parent = this;
        hop.push_back(c);
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
        auto c = std::make_shared<MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(c);
        return c;
    }

    if(child_yang_name == "sr-segment")
    {
        for(auto const & c : sr_segment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::Topology::PathTunnels::PathTunnel::SrSegment>();
        c->parent = this;
        sr_segment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::PathTunnels::PathTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    for (auto const & c : hop)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : shared_risk_link_group)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sr_segment)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::Topology::PathTunnels::PathTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accumulated-admin-weight")
    {
        accumulated_admin_weight = value;
        accumulated_admin_weight.value_namespace = name_space;
        accumulated_admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-srlg-address")
    {
        exclude_srlg_address = value;
        exclude_srlg_address.value_namespace = name_space;
        exclude_srlg_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority-xr")
    {
        hold_priority_xr = value;
        hold_priority_xr.value_namespace = name_space;
        hold_priority_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-full-path")
    {
        is_full_path = value;
        is_full_path.value_namespace = name_space;
        is_full_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-partial-path")
    {
        is_partial_path = value;
        is_partial_path.value_namespace = name_space;
        is_partial_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-segment-routing-db-checked")
    {
        is_segment_routing_db_checked = value;
        is_segment_routing_db_checked.value_namespace = name_space;
        is_segment_routing_db_checked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-topology-checked")
    {
        is_topology_checked = value;
        is_topology_checked.value_namespace = name_space;
        is_topology_checked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mininum-bandwidth")
    {
        mininum_bandwidth = value;
        mininum_bandwidth.value_namespace = name_space;
        mininum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count = value;
        node_hop_count.value_namespace = name_space;
        node_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
        requested_bandwidth.value_namespace = name_space;
        requested_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority-xr")
    {
        setup_priority_xr = value;
        setup_priority_xr.value_namespace = name_space;
        setup_priority_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
        tunnel_id_xr.value_namespace = name_space;
        tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::PathTunnels::PathTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accumulated-admin-weight")
    {
        accumulated_admin_weight.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "exclude-srlg-address")
    {
        exclude_srlg_address.yfilter = yfilter;
    }
    if(value_path == "hold-priority-xr")
    {
        hold_priority_xr.yfilter = yfilter;
    }
    if(value_path == "is-full-path")
    {
        is_full_path.yfilter = yfilter;
    }
    if(value_path == "is-partial-path")
    {
        is_partial_path.yfilter = yfilter;
    }
    if(value_path == "is-segment-routing-db-checked")
    {
        is_segment_routing_db_checked.yfilter = yfilter;
    }
    if(value_path == "is-topology-checked")
    {
        is_topology_checked.yfilter = yfilter;
    }
    if(value_path == "mininum-bandwidth")
    {
        mininum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count.yfilter = yfilter;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth.yfilter = yfilter;
    }
    if(value_path == "setup-priority-xr")
    {
        setup_priority_xr.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTe::Topology::PathTunnels::PathTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "hop" || name == "shared-risk-link-group" || name == "sr-segment" || name == "accumulated-admin-weight" || name == "bandwidth-type" || name == "destination-address-xr" || name == "exclude-srlg-address" || name == "hold-priority-xr" || name == "is-full-path" || name == "is-partial-path" || name == "is-segment-routing-db-checked" || name == "is-topology-checked" || name == "mininum-bandwidth" || name == "node-hop-count" || name == "requested-bandwidth" || name == "setup-priority-xr" || name == "tunnel-id" || name == "tunnel-id-xr" || name == "tunnel-name")
        return true;
    return false;
}

MplsTe::Topology::PathTunnels::PathTunnel::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "path-tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Topology::PathTunnels::PathTunnel::Affinity::~Affinity()
{
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::has_operation() const
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

std::string MplsTe::Topology::PathTunnels::PathTunnel::Affinity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/path-tunnels/path-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::PathTunnels::PathTunnel::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::PathTunnels::PathTunnel::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::PathTunnels::PathTunnel::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::Topology::PathTunnels::PathTunnel::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Topology::PathTunnels::PathTunnel::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::has_data() const
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

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/path-tunnels/path-tunnel/affinity/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue>();
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
        auto c = std::make_shared<MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_children() const
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

void MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/path-tunnels/path-tunnel/affinity/named-affinity/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/path-tunnels/path-tunnel/affinity/named-affinity/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::Topology::PathTunnels::PathTunnel::Hop::Hop()
    :
    entry{YType::str, "entry"}
{

    yang_name = "hop"; yang_parent_name = "path-tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Topology::PathTunnels::PathTunnel::Hop::~Hop()
{
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Hop::has_data() const
{
    return entry.is_set;
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Hop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::Hop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/path-tunnels/path-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::PathTunnels::PathTunnel::Hop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::PathTunnels::PathTunnel::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::PathTunnels::PathTunnel::Hop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Topology::PathTunnels::PathTunnel::Hop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::PathTunnels::PathTunnel::Hop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Hop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "shared-risk-link-group"; yang_parent_name = "path-tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/path-tunnels/path-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::SrSegment()
    :
    has_entropy_label{YType::boolean, "has-entropy-label"},
    has_ip_addresses{YType::boolean, "has-ip-addresses"},
    has_mpls_label{YType::boolean, "has-mpls-label"},
    local_addr{YType::str, "local-addr"},
    mpls_label_value{YType::uint32, "mpls-label-value"},
    remote_addr{YType::str, "remote-addr"},
    sid_type{YType::enumeration, "sid-type"}
{

    yang_name = "sr-segment"; yang_parent_name = "path-tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::~SrSegment()
{
}

bool MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::has_data() const
{
    return has_entropy_label.is_set
	|| has_ip_addresses.is_set
	|| has_mpls_label.is_set
	|| local_addr.is_set
	|| mpls_label_value.is_set
	|| remote_addr.is_set
	|| sid_type.is_set;
}

bool MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(has_entropy_label.yfilter)
	|| ydk::is_set(has_ip_addresses.yfilter)
	|| ydk::is_set(has_mpls_label.yfilter)
	|| ydk::is_set(local_addr.yfilter)
	|| ydk::is_set(mpls_label_value.yfilter)
	|| ydk::is_set(remote_addr.yfilter)
	|| ydk::is_set(sid_type.yfilter);
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/path-tunnels/path-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_entropy_label.is_set || is_set(has_entropy_label.yfilter)) leaf_name_data.push_back(has_entropy_label.get_name_leafdata());
    if (has_ip_addresses.is_set || is_set(has_ip_addresses.yfilter)) leaf_name_data.push_back(has_ip_addresses.get_name_leafdata());
    if (has_mpls_label.is_set || is_set(has_mpls_label.yfilter)) leaf_name_data.push_back(has_mpls_label.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.yfilter)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (mpls_label_value.is_set || is_set(mpls_label_value.yfilter)) leaf_name_data.push_back(mpls_label_value.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.yfilter)) leaf_name_data.push_back(remote_addr.get_name_leafdata());
    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "has-entropy-label")
    {
        has_entropy_label = value;
        has_entropy_label.value_namespace = name_space;
        has_entropy_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-ip-addresses")
    {
        has_ip_addresses = value;
        has_ip_addresses.value_namespace = name_space;
        has_ip_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-mpls-label")
    {
        has_mpls_label = value;
        has_mpls_label.value_namespace = name_space;
        has_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
        local_addr.value_namespace = name_space;
        local_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label-value")
    {
        mpls_label_value = value;
        mpls_label_value.value_namespace = name_space;
        mpls_label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
        remote_addr.value_namespace = name_space;
        remote_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "has-entropy-label")
    {
        has_entropy_label.yfilter = yfilter;
    }
    if(value_path == "has-ip-addresses")
    {
        has_ip_addresses.yfilter = yfilter;
    }
    if(value_path == "has-mpls-label")
    {
        has_mpls_label.yfilter = yfilter;
    }
    if(value_path == "local-addr")
    {
        local_addr.yfilter = yfilter;
    }
    if(value_path == "mpls-label-value")
    {
        mpls_label_value.yfilter = yfilter;
    }
    if(value_path == "remote-addr")
    {
        remote_addr.yfilter = yfilter;
    }
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
}

bool MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "has-entropy-label" || name == "has-ip-addresses" || name == "has-mpls-label" || name == "local-addr" || name == "mpls-label-value" || name == "remote-addr" || name == "sid-type")
        return true;
    return false;
}

MplsTe::Topology::Srlgs::Srlgs()
{

    yang_name = "srlgs"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Topology::Srlgs::~Srlgs()
{
}

bool MplsTe::Topology::Srlgs::has_data() const
{
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Topology::Srlgs::has_operation() const
{
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Topology::Srlgs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::Srlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::Srlgs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::Srlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg")
    {
        for(auto const & c : srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::Topology::Srlgs::Srlg>();
        c->parent = this;
        srlg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::Srlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : srlg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::Topology::Srlgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Topology::Srlgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Topology::Srlgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg")
        return true;
    return false;
}

MplsTe::Topology::Srlgs::Srlg::Srlg()
    :
    srlg_number{YType::int32, "srlg-number"},
    admin_weight{YType::uint32, "admin-weight"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "srlg"; yang_parent_name = "srlgs"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Topology::Srlgs::Srlg::~Srlg()
{
}

bool MplsTe::Topology::Srlgs::Srlg::has_data() const
{
    for (std::size_t index=0; index<srlg_areas.size(); index++)
    {
        if(srlg_areas[index]->has_data())
            return true;
    }
    return srlg_number.is_set
	|| admin_weight.is_set
	|| srlg_name.is_set;
}

bool MplsTe::Topology::Srlgs::Srlg::has_operation() const
{
    for (std::size_t index=0; index<srlg_areas.size(); index++)
    {
        if(srlg_areas[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(srlg_number.yfilter)
	|| ydk::is_set(admin_weight.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsTe::Topology::Srlgs::Srlg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/srlgs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::Srlgs::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg" <<"[srlg-number='" <<srlg_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::Srlgs::Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_number.is_set || is_set(srlg_number.yfilter)) leaf_name_data.push_back(srlg_number.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::Srlgs::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-areas")
    {
        for(auto const & c : srlg_areas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::Topology::Srlgs::Srlg::SrlgAreas>();
        c->parent = this;
        srlg_areas.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::Srlgs::Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : srlg_areas)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::Topology::Srlgs::Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-number")
    {
        srlg_number = value;
        srlg_number.value_namespace = name_space;
        srlg_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::Srlgs::Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-number")
    {
        srlg_number.yfilter = yfilter;
    }
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
}

bool MplsTe::Topology::Srlgs::Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-areas" || name == "srlg-number" || name == "admin-weight" || name == "srlg-name")
        return true;
    return false;
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgAreas()
    :
    igp_area{YType::uint32, "igp-area"},
    igp_area_format{YType::enumeration, "igp-area-format"},
    igp_instance{YType::str, "igp-instance"},
    igp_type{YType::enumeration, "igp-type"}
{

    yang_name = "srlg-areas"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::~SrlgAreas()
{
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::has_data() const
{
    for (std::size_t index=0; index<srlg_link.size(); index++)
    {
        if(srlg_link[index]->has_data())
            return true;
    }
    return igp_area.is_set
	|| igp_area_format.is_set
	|| igp_instance.is_set
	|| igp_type.is_set;
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::has_operation() const
{
    for (std::size_t index=0; index<srlg_link.size(); index++)
    {
        if(srlg_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(igp_area.yfilter)
	|| ydk::is_set(igp_area_format.yfilter)
	|| ydk::is_set(igp_instance.yfilter)
	|| ydk::is_set(igp_type.yfilter);
}

std::string MplsTe::Topology::Srlgs::Srlg::SrlgAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::Srlgs::Srlg::SrlgAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_area.is_set || is_set(igp_area.yfilter)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (igp_area_format.is_set || is_set(igp_area_format.yfilter)) leaf_name_data.push_back(igp_area_format.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.yfilter)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::Srlgs::Srlg::SrlgAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-link")
    {
        for(auto const & c : srlg_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink>();
        c->parent = this;
        srlg_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::Srlgs::Srlg::SrlgAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : srlg_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::Topology::Srlgs::Srlg::SrlgAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-area")
    {
        igp_area = value;
        igp_area.value_namespace = name_space;
        igp_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area-format")
    {
        igp_area_format = value;
        igp_area_format.value_namespace = name_space;
        igp_area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
        igp_instance.value_namespace = name_space;
        igp_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::Srlgs::Srlg::SrlgAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-area")
    {
        igp_area.yfilter = yfilter;
    }
    if(value_path == "igp-area-format")
    {
        igp_area_format.yfilter = yfilter;
    }
    if(value_path == "igp-instance")
    {
        igp_instance.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-link" || name == "igp-area" || name == "igp-area-format" || name == "igp-instance" || name == "igp-type")
        return true;
    return false;
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::SrlgLink()
    :
    link_address{YType::str, "link-address"},
    te_router_id{YType::str, "te-router-id"}
    	,
    link_address_generic(std::make_shared<MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric>())
{
    link_address_generic->parent = this;

    yang_name = "srlg-link"; yang_parent_name = "srlg-areas"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::~SrlgLink()
{
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::has_data() const
{
    return link_address.is_set
	|| te_router_id.is_set
	|| (link_address_generic !=  nullptr && link_address_generic->has_data());
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(te_router_id.yfilter)
	|| (link_address_generic !=  nullptr && link_address_generic->has_operation());
}

std::string MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (te_router_id.is_set || is_set(te_router_id.yfilter)) leaf_name_data.push_back(te_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-address-generic")
    {
        if(link_address_generic == nullptr)
        {
            link_address_generic = std::make_shared<MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric>();
        }
        return link_address_generic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_address_generic != nullptr)
    {
        children["link-address-generic"] = link_address_generic;
    }

    return children;
}

void MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-router-id")
    {
        te_router_id = value;
        te_router_id.value_namespace = name_space;
        te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
    if(value_path == "te-router-id")
    {
        te_router_id.yfilter = yfilter;
    }
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-address-generic" || name == "link-address" || name == "te-router-id")
        return true;
    return false;
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::LinkAddressGeneric()
    :
    te_addr(std::make_shared<MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr>())
{
    te_addr->parent = this;

    yang_name = "link-address-generic"; yang_parent_name = "srlg-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::~LinkAddressGeneric()
{
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::has_data() const
{
    return (te_addr !=  nullptr && te_addr->has_data());
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::has_operation() const
{
    return is_set(yfilter)
	|| (te_addr !=  nullptr && te_addr->has_operation());
}

std::string MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-address-generic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-addr")
    {
        if(te_addr == nullptr)
        {
            te_addr = std::make_shared<MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr>();
        }
        return te_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(te_addr != nullptr)
    {
        children["te-addr"] = te_addr;
    }

    return children;
}

void MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-addr")
        return true;
    return false;
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::TeAddr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    type{YType::enumeration, "type"}
    	,
    ipv4_unnumbered_address(std::make_shared<MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress>())
{
    ipv4_unnumbered_address->parent = this;

    yang_name = "te-addr"; yang_parent_name = "link-address-generic"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::~TeAddr()
{
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::has_data() const
{
    return ipv4_address.is_set
	|| type.is_set
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_data());
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_operation());
}

std::string MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unnumbered-address")
    {
        if(ipv4_unnumbered_address == nullptr)
        {
            ipv4_unnumbered_address = std::make_shared<MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress>();
        }
        return ipv4_unnumbered_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_unnumbered_address != nullptr)
    {
        children["ipv4-unnumbered-address"] = ipv4_unnumbered_address;
    }

    return children;
}

void MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unnumbered-address" || name == "ipv4-address" || name == "type")
        return true;
    return false;
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::Ipv4UnnumberedAddress()
    :
    interface_index{YType::uint32, "interface-index"},
    router_id{YType::str, "router-id"}
{

    yang_name = "ipv4-unnumbered-address"; yang_parent_name = "te-addr"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::~Ipv4UnnumberedAddress()
{
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::has_data() const
{
    return interface_index.is_set
	|| router_id.is_set;
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_index.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unnumbered-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-index" || name == "router-id")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBriefs()
{

    yang_name = "topology-briefs"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TopologyBriefs::~TopologyBriefs()
{
}

bool MplsTe::TopologyBriefs::has_data() const
{
    for (std::size_t index=0; index<topology_brief.size(); index++)
    {
        if(topology_brief[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::TopologyBriefs::has_operation() const
{
    for (std::size_t index=0; index<topology_brief.size(); index++)
    {
        if(topology_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::TopologyBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TopologyBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-brief")
    {
        for(auto const & c : topology_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief>();
        c->parent = this;
        topology_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::TopologyBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::TopologyBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::TopologyBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-brief")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyBrief()
    :
    protocol{YType::enumeration, "protocol"},
    igp_id{YType::str, "igp-id"},
    area{YType::int32, "area"},
    topology_node_type{YType::enumeration, "topology-node-type"},
    igp_node_id{YType::str, "igp-node-id"},
    topology_node_overloaded{YType::boolean, "topology-node-overloaded"},
    topology_node_te_router_id{YType::str, "topology-node-te-router-id"}
    	,
    topology_node_sid_and_srbg(std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg>())
{
    topology_node_sid_and_srbg->parent = this;

    yang_name = "topology-brief"; yang_parent_name = "topology-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TopologyBriefs::TopologyBrief::~TopologyBrief()
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::has_data() const
{
    for (std::size_t index=0; index<topology_node_link.size(); index++)
    {
        if(topology_node_link[index]->has_data())
            return true;
    }
    return protocol.is_set
	|| igp_id.is_set
	|| area.is_set
	|| topology_node_type.is_set
	|| igp_node_id.is_set
	|| topology_node_overloaded.is_set
	|| topology_node_te_router_id.is_set
	|| (topology_node_sid_and_srbg !=  nullptr && topology_node_sid_and_srbg->has_data());
}

bool MplsTe::TopologyBriefs::TopologyBrief::has_operation() const
{
    for (std::size_t index=0; index<topology_node_link.size(); index++)
    {
        if(topology_node_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(topology_node_type.yfilter)
	|| ydk::is_set(igp_node_id.yfilter)
	|| ydk::is_set(topology_node_overloaded.yfilter)
	|| ydk::is_set(topology_node_te_router_id.yfilter)
	|| (topology_node_sid_and_srbg !=  nullptr && topology_node_sid_and_srbg->has_operation());
}

std::string MplsTe::TopologyBriefs::TopologyBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TopologyBriefs::TopologyBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-brief" <<"[protocol='" <<protocol <<"']" <<"[igp-id='" <<igp_id <<"']" <<"[area='" <<area <<"']" <<"[topology-node-type='" <<topology_node_type <<"']" <<"[igp-node-id='" <<igp_node_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::TopologyBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (topology_node_type.is_set || is_set(topology_node_type.yfilter)) leaf_name_data.push_back(topology_node_type.get_name_leafdata());
    if (igp_node_id.is_set || is_set(igp_node_id.yfilter)) leaf_name_data.push_back(igp_node_id.get_name_leafdata());
    if (topology_node_overloaded.is_set || is_set(topology_node_overloaded.yfilter)) leaf_name_data.push_back(topology_node_overloaded.get_name_leafdata());
    if (topology_node_te_router_id.is_set || is_set(topology_node_te_router_id.yfilter)) leaf_name_data.push_back(topology_node_te_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::TopologyBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-node-link")
    {
        for(auto const & c : topology_node_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink>();
        c->parent = this;
        topology_node_link.push_back(c);
        return c;
    }

    if(child_yang_name == "topology-node-sid-and-srbg")
    {
        if(topology_node_sid_and_srbg == nullptr)
        {
            topology_node_sid_and_srbg = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg>();
        }
        return topology_node_sid_and_srbg;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::TopologyBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology_node_link)
    {
        children[c->get_segment_path()] = c;
    }

    if(topology_node_sid_and_srbg != nullptr)
    {
        children["topology-node-sid-and-srbg"] = topology_node_sid_and_srbg;
    }

    return children;
}

void MplsTe::TopologyBriefs::TopologyBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-node-type")
    {
        topology_node_type = value;
        topology_node_type.value_namespace = name_space;
        topology_node_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-node-id")
    {
        igp_node_id = value;
        igp_node_id.value_namespace = name_space;
        igp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-node-overloaded")
    {
        topology_node_overloaded = value;
        topology_node_overloaded.value_namespace = name_space;
        topology_node_overloaded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-node-te-router-id")
    {
        topology_node_te_router_id = value;
        topology_node_te_router_id.value_namespace = name_space;
        topology_node_te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyBriefs::TopologyBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "topology-node-type")
    {
        topology_node_type.yfilter = yfilter;
    }
    if(value_path == "igp-node-id")
    {
        igp_node_id.yfilter = yfilter;
    }
    if(value_path == "topology-node-overloaded")
    {
        topology_node_overloaded.yfilter = yfilter;
    }
    if(value_path == "topology-node-te-router-id")
    {
        topology_node_te_router_id.yfilter = yfilter;
    }
}

bool MplsTe::TopologyBriefs::TopologyBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-node-link" || name == "topology-node-sid-and-srbg" || name == "protocol" || name == "igp-id" || name == "area" || name == "topology-node-type" || name == "igp-node-id" || name == "topology-node-overloaded" || name == "topology-node-te-router-id")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyNodeLink()
    :
    topology_link_affinity_bits{YType::uint32, "topology-link-affinity-bits"},
    topology_link_bandwidth_model{YType::enumeration, "topology-link-bandwidth-model"},
    topology_link_encoding{YType::uint8, "topology-link-encoding"},
    topology_link_fragment_id{YType::uint32, "topology-link-fragment-id"},
    topology_link_igp_metric{YType::uint32, "topology-link-igp-metric"},
    topology_link_interface_address{YType::str, "topology-link-interface-address"},
    topology_link_interface_id{YType::uint32, "topology-link-interface-id"},
    topology_link_neighbor_address{YType::str, "topology-link-neighbor-address"},
    topology_link_neighbor_generation{YType::uint32, "topology-link-neighbor-generation"},
    topology_link_neighbor_id{YType::uint32, "topology-link-neighbor-id"},
    topology_link_neighbor_node_id{YType::uint32, "topology-link-neighbor-node-id"},
    topology_link_neighbor_system_id{YType::str, "topology-link-neighbor-system-id"},
    topology_link_switching_capability{YType::uint8, "topology-link-switching-capability"},
    topology_link_te_metric{YType::uint32, "topology-link-te-metric"},
    topology_link_type{YType::enumeration, "topology-link-type"},
    topology_link_uni_delay{YType::uint32, "topology-link-uni-delay"}
    	,
    odu_link_capabilities(std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities>())
	,topology_link_bandwidth(std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth>())
{
    odu_link_capabilities->parent = this;
    topology_link_bandwidth->parent = this;

    yang_name = "topology-node-link"; yang_parent_name = "topology-brief"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::~TopologyNodeLink()
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::has_data() const
{
    for (std::size_t index=0; index<adjacency_sid.size(); index++)
    {
        if(adjacency_sid[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<topology_link_extended_affinity_bit.size(); index++)
    {
        if(topology_link_extended_affinity_bit[index]->has_data())
            return true;
    }
    return topology_link_affinity_bits.is_set
	|| topology_link_bandwidth_model.is_set
	|| topology_link_encoding.is_set
	|| topology_link_fragment_id.is_set
	|| topology_link_igp_metric.is_set
	|| topology_link_interface_address.is_set
	|| topology_link_interface_id.is_set
	|| topology_link_neighbor_address.is_set
	|| topology_link_neighbor_generation.is_set
	|| topology_link_neighbor_id.is_set
	|| topology_link_neighbor_node_id.is_set
	|| topology_link_neighbor_system_id.is_set
	|| topology_link_switching_capability.is_set
	|| topology_link_te_metric.is_set
	|| topology_link_type.is_set
	|| topology_link_uni_delay.is_set
	|| (odu_link_capabilities !=  nullptr && odu_link_capabilities->has_data())
	|| (topology_link_bandwidth !=  nullptr && topology_link_bandwidth->has_data());
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::has_operation() const
{
    for (std::size_t index=0; index<adjacency_sid.size(); index++)
    {
        if(adjacency_sid[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<topology_link_extended_affinity_bit.size(); index++)
    {
        if(topology_link_extended_affinity_bit[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(topology_link_affinity_bits.yfilter)
	|| ydk::is_set(topology_link_bandwidth_model.yfilter)
	|| ydk::is_set(topology_link_encoding.yfilter)
	|| ydk::is_set(topology_link_fragment_id.yfilter)
	|| ydk::is_set(topology_link_igp_metric.yfilter)
	|| ydk::is_set(topology_link_interface_address.yfilter)
	|| ydk::is_set(topology_link_interface_id.yfilter)
	|| ydk::is_set(topology_link_neighbor_address.yfilter)
	|| ydk::is_set(topology_link_neighbor_generation.yfilter)
	|| ydk::is_set(topology_link_neighbor_id.yfilter)
	|| ydk::is_set(topology_link_neighbor_node_id.yfilter)
	|| ydk::is_set(topology_link_neighbor_system_id.yfilter)
	|| ydk::is_set(topology_link_switching_capability.yfilter)
	|| ydk::is_set(topology_link_te_metric.yfilter)
	|| ydk::is_set(topology_link_type.yfilter)
	|| ydk::is_set(topology_link_uni_delay.yfilter)
	|| (odu_link_capabilities !=  nullptr && odu_link_capabilities->has_operation())
	|| (topology_link_bandwidth !=  nullptr && topology_link_bandwidth->has_operation());
}

std::string MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-node-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_link_affinity_bits.is_set || is_set(topology_link_affinity_bits.yfilter)) leaf_name_data.push_back(topology_link_affinity_bits.get_name_leafdata());
    if (topology_link_bandwidth_model.is_set || is_set(topology_link_bandwidth_model.yfilter)) leaf_name_data.push_back(topology_link_bandwidth_model.get_name_leafdata());
    if (topology_link_encoding.is_set || is_set(topology_link_encoding.yfilter)) leaf_name_data.push_back(topology_link_encoding.get_name_leafdata());
    if (topology_link_fragment_id.is_set || is_set(topology_link_fragment_id.yfilter)) leaf_name_data.push_back(topology_link_fragment_id.get_name_leafdata());
    if (topology_link_igp_metric.is_set || is_set(topology_link_igp_metric.yfilter)) leaf_name_data.push_back(topology_link_igp_metric.get_name_leafdata());
    if (topology_link_interface_address.is_set || is_set(topology_link_interface_address.yfilter)) leaf_name_data.push_back(topology_link_interface_address.get_name_leafdata());
    if (topology_link_interface_id.is_set || is_set(topology_link_interface_id.yfilter)) leaf_name_data.push_back(topology_link_interface_id.get_name_leafdata());
    if (topology_link_neighbor_address.is_set || is_set(topology_link_neighbor_address.yfilter)) leaf_name_data.push_back(topology_link_neighbor_address.get_name_leafdata());
    if (topology_link_neighbor_generation.is_set || is_set(topology_link_neighbor_generation.yfilter)) leaf_name_data.push_back(topology_link_neighbor_generation.get_name_leafdata());
    if (topology_link_neighbor_id.is_set || is_set(topology_link_neighbor_id.yfilter)) leaf_name_data.push_back(topology_link_neighbor_id.get_name_leafdata());
    if (topology_link_neighbor_node_id.is_set || is_set(topology_link_neighbor_node_id.yfilter)) leaf_name_data.push_back(topology_link_neighbor_node_id.get_name_leafdata());
    if (topology_link_neighbor_system_id.is_set || is_set(topology_link_neighbor_system_id.yfilter)) leaf_name_data.push_back(topology_link_neighbor_system_id.get_name_leafdata());
    if (topology_link_switching_capability.is_set || is_set(topology_link_switching_capability.yfilter)) leaf_name_data.push_back(topology_link_switching_capability.get_name_leafdata());
    if (topology_link_te_metric.is_set || is_set(topology_link_te_metric.yfilter)) leaf_name_data.push_back(topology_link_te_metric.get_name_leafdata());
    if (topology_link_type.is_set || is_set(topology_link_type.yfilter)) leaf_name_data.push_back(topology_link_type.get_name_leafdata());
    if (topology_link_uni_delay.is_set || is_set(topology_link_uni_delay.yfilter)) leaf_name_data.push_back(topology_link_uni_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid")
    {
        for(auto const & c : adjacency_sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid>();
        c->parent = this;
        adjacency_sid.push_back(c);
        return c;
    }

    if(child_yang_name == "odu-link-capabilities")
    {
        if(odu_link_capabilities == nullptr)
        {
            odu_link_capabilities = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities>();
        }
        return odu_link_capabilities;
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
        auto c = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(c);
        return c;
    }

    if(child_yang_name == "topology-link-bandwidth")
    {
        if(topology_link_bandwidth == nullptr)
        {
            topology_link_bandwidth = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth>();
        }
        return topology_link_bandwidth;
    }

    if(child_yang_name == "topology-link-extended-affinity-bit")
    {
        for(auto const & c : topology_link_extended_affinity_bit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkExtendedAffinityBit>();
        c->parent = this;
        topology_link_extended_affinity_bit.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : adjacency_sid)
    {
        children[c->get_segment_path()] = c;
    }

    if(odu_link_capabilities != nullptr)
    {
        children["odu-link-capabilities"] = odu_link_capabilities;
    }

    for (auto const & c : shared_risk_link_group)
    {
        children[c->get_segment_path()] = c;
    }

    if(topology_link_bandwidth != nullptr)
    {
        children["topology-link-bandwidth"] = topology_link_bandwidth;
    }

    for (auto const & c : topology_link_extended_affinity_bit)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-link-affinity-bits")
    {
        topology_link_affinity_bits = value;
        topology_link_affinity_bits.value_namespace = name_space;
        topology_link_affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-bandwidth-model")
    {
        topology_link_bandwidth_model = value;
        topology_link_bandwidth_model.value_namespace = name_space;
        topology_link_bandwidth_model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-encoding")
    {
        topology_link_encoding = value;
        topology_link_encoding.value_namespace = name_space;
        topology_link_encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-fragment-id")
    {
        topology_link_fragment_id = value;
        topology_link_fragment_id.value_namespace = name_space;
        topology_link_fragment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-igp-metric")
    {
        topology_link_igp_metric = value;
        topology_link_igp_metric.value_namespace = name_space;
        topology_link_igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-interface-address")
    {
        topology_link_interface_address = value;
        topology_link_interface_address.value_namespace = name_space;
        topology_link_interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-interface-id")
    {
        topology_link_interface_id = value;
        topology_link_interface_id.value_namespace = name_space;
        topology_link_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-neighbor-address")
    {
        topology_link_neighbor_address = value;
        topology_link_neighbor_address.value_namespace = name_space;
        topology_link_neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-neighbor-generation")
    {
        topology_link_neighbor_generation = value;
        topology_link_neighbor_generation.value_namespace = name_space;
        topology_link_neighbor_generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-neighbor-id")
    {
        topology_link_neighbor_id = value;
        topology_link_neighbor_id.value_namespace = name_space;
        topology_link_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-neighbor-node-id")
    {
        topology_link_neighbor_node_id = value;
        topology_link_neighbor_node_id.value_namespace = name_space;
        topology_link_neighbor_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-neighbor-system-id")
    {
        topology_link_neighbor_system_id = value;
        topology_link_neighbor_system_id.value_namespace = name_space;
        topology_link_neighbor_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-switching-capability")
    {
        topology_link_switching_capability = value;
        topology_link_switching_capability.value_namespace = name_space;
        topology_link_switching_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-te-metric")
    {
        topology_link_te_metric = value;
        topology_link_te_metric.value_namespace = name_space;
        topology_link_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-type")
    {
        topology_link_type = value;
        topology_link_type.value_namespace = name_space;
        topology_link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-uni-delay")
    {
        topology_link_uni_delay = value;
        topology_link_uni_delay.value_namespace = name_space;
        topology_link_uni_delay.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-link-affinity-bits")
    {
        topology_link_affinity_bits.yfilter = yfilter;
    }
    if(value_path == "topology-link-bandwidth-model")
    {
        topology_link_bandwidth_model.yfilter = yfilter;
    }
    if(value_path == "topology-link-encoding")
    {
        topology_link_encoding.yfilter = yfilter;
    }
    if(value_path == "topology-link-fragment-id")
    {
        topology_link_fragment_id.yfilter = yfilter;
    }
    if(value_path == "topology-link-igp-metric")
    {
        topology_link_igp_metric.yfilter = yfilter;
    }
    if(value_path == "topology-link-interface-address")
    {
        topology_link_interface_address.yfilter = yfilter;
    }
    if(value_path == "topology-link-interface-id")
    {
        topology_link_interface_id.yfilter = yfilter;
    }
    if(value_path == "topology-link-neighbor-address")
    {
        topology_link_neighbor_address.yfilter = yfilter;
    }
    if(value_path == "topology-link-neighbor-generation")
    {
        topology_link_neighbor_generation.yfilter = yfilter;
    }
    if(value_path == "topology-link-neighbor-id")
    {
        topology_link_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "topology-link-neighbor-node-id")
    {
        topology_link_neighbor_node_id.yfilter = yfilter;
    }
    if(value_path == "topology-link-neighbor-system-id")
    {
        topology_link_neighbor_system_id.yfilter = yfilter;
    }
    if(value_path == "topology-link-switching-capability")
    {
        topology_link_switching_capability.yfilter = yfilter;
    }
    if(value_path == "topology-link-te-metric")
    {
        topology_link_te_metric.yfilter = yfilter;
    }
    if(value_path == "topology-link-type")
    {
        topology_link_type.yfilter = yfilter;
    }
    if(value_path == "topology-link-uni-delay")
    {
        topology_link_uni_delay.yfilter = yfilter;
    }
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid" || name == "odu-link-capabilities" || name == "shared-risk-link-group" || name == "topology-link-bandwidth" || name == "topology-link-extended-affinity-bit" || name == "topology-link-affinity-bits" || name == "topology-link-bandwidth-model" || name == "topology-link-encoding" || name == "topology-link-fragment-id" || name == "topology-link-igp-metric" || name == "topology-link-interface-address" || name == "topology-link-interface-id" || name == "topology-link-neighbor-address" || name == "topology-link-neighbor-generation" || name == "topology-link-neighbor-id" || name == "topology-link-neighbor-node-id" || name == "topology-link-neighbor-system-id" || name == "topology-link-switching-capability" || name == "topology-link-te-metric" || name == "topology-link-type" || name == "topology-link-uni-delay")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::AdjacencySid()
    :
    adjacency_sid{YType::uint32, "adjacency-sid"},
    flag_b{YType::boolean, "flag-b"},
    flag_f{YType::boolean, "flag-f"},
    flag_l{YType::boolean, "flag-l"},
    flag_s{YType::boolean, "flag-s"},
    flag_v{YType::boolean, "flag-v"},
    link_type{YType::enumeration, "link-type"},
    local_addr{YType::str, "local-addr"},
    nbr_node_igpid{YType::str, "nbr-node-igpid"},
    nbr_node_te_router_id{YType::str, "nbr-node-te-router-id"},
    remote_addr{YType::str, "remote-addr"}
{

    yang_name = "adjacency-sid"; yang_parent_name = "topology-node-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::~AdjacencySid()
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::has_data() const
{
    return adjacency_sid.is_set
	|| flag_b.is_set
	|| flag_f.is_set
	|| flag_l.is_set
	|| flag_s.is_set
	|| flag_v.is_set
	|| link_type.is_set
	|| local_addr.is_set
	|| nbr_node_igpid.is_set
	|| nbr_node_te_router_id.is_set
	|| remote_addr.is_set;
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_sid.yfilter)
	|| ydk::is_set(flag_b.yfilter)
	|| ydk::is_set(flag_f.yfilter)
	|| ydk::is_set(flag_l.yfilter)
	|| ydk::is_set(flag_s.yfilter)
	|| ydk::is_set(flag_v.yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(local_addr.yfilter)
	|| ydk::is_set(nbr_node_igpid.yfilter)
	|| ydk::is_set(nbr_node_te_router_id.yfilter)
	|| ydk::is_set(remote_addr.yfilter);
}

std::string MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid.is_set || is_set(adjacency_sid.yfilter)) leaf_name_data.push_back(adjacency_sid.get_name_leafdata());
    if (flag_b.is_set || is_set(flag_b.yfilter)) leaf_name_data.push_back(flag_b.get_name_leafdata());
    if (flag_f.is_set || is_set(flag_f.yfilter)) leaf_name_data.push_back(flag_f.get_name_leafdata());
    if (flag_l.is_set || is_set(flag_l.yfilter)) leaf_name_data.push_back(flag_l.get_name_leafdata());
    if (flag_s.is_set || is_set(flag_s.yfilter)) leaf_name_data.push_back(flag_s.get_name_leafdata());
    if (flag_v.is_set || is_set(flag_v.yfilter)) leaf_name_data.push_back(flag_v.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.yfilter)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (nbr_node_igpid.is_set || is_set(nbr_node_igpid.yfilter)) leaf_name_data.push_back(nbr_node_igpid.get_name_leafdata());
    if (nbr_node_te_router_id.is_set || is_set(nbr_node_te_router_id.yfilter)) leaf_name_data.push_back(nbr_node_te_router_id.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.yfilter)) leaf_name_data.push_back(remote_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-sid")
    {
        adjacency_sid = value;
        adjacency_sid.value_namespace = name_space;
        adjacency_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-b")
    {
        flag_b = value;
        flag_b.value_namespace = name_space;
        flag_b.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-f")
    {
        flag_f = value;
        flag_f.value_namespace = name_space;
        flag_f.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-l")
    {
        flag_l = value;
        flag_l.value_namespace = name_space;
        flag_l.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-s")
    {
        flag_s = value;
        flag_s.value_namespace = name_space;
        flag_s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-v")
    {
        flag_v = value;
        flag_v.value_namespace = name_space;
        flag_v.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
        local_addr.value_namespace = name_space;
        local_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-node-igpid")
    {
        nbr_node_igpid = value;
        nbr_node_igpid.value_namespace = name_space;
        nbr_node_igpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-node-te-router-id")
    {
        nbr_node_te_router_id = value;
        nbr_node_te_router_id.value_namespace = name_space;
        nbr_node_te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
        remote_addr.value_namespace = name_space;
        remote_addr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-sid")
    {
        adjacency_sid.yfilter = yfilter;
    }
    if(value_path == "flag-b")
    {
        flag_b.yfilter = yfilter;
    }
    if(value_path == "flag-f")
    {
        flag_f.yfilter = yfilter;
    }
    if(value_path == "flag-l")
    {
        flag_l.yfilter = yfilter;
    }
    if(value_path == "flag-s")
    {
        flag_s.yfilter = yfilter;
    }
    if(value_path == "flag-v")
    {
        flag_v.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "local-addr")
    {
        local_addr.yfilter = yfilter;
    }
    if(value_path == "nbr-node-igpid")
    {
        nbr_node_igpid.yfilter = yfilter;
    }
    if(value_path == "nbr-node-te-router-id")
    {
        nbr_node_te_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-addr")
    {
        remote_addr.yfilter = yfilter;
    }
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid" || name == "flag-b" || name == "flag-f" || name == "flag-l" || name == "flag-s" || name == "flag-v" || name == "link-type" || name == "local-addr" || name == "nbr-node-igpid" || name == "nbr-node-te-router-id" || name == "remote-addr")
        return true;
    return false;
}


}
}

