
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_2.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_5.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_3.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_ldp_oper {

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::RemotePNodeId()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "remote-p-node-id"; yang_parent_name = "remote-lfa"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::~RemotePNodeId()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-p-node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::RemoteQNodeId()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "remote-q-node-id"; yang_parent_name = "remote-lfa"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::~RemoteQNodeId()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-q-node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::Mpls()
    :
    mpls_outgoing_info(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo>())
    , remote_lfa(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa>())
{
    mpls_outgoing_info->parent = this;
    remote_lfa->parent = this;

    yang_name = "mpls"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::~Mpls()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return (mpls_outgoing_info !=  nullptr && mpls_outgoing_info->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (mpls_outgoing_info !=  nullptr && mpls_outgoing_info->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-outgoing-info")
    {
        if(mpls_outgoing_info == nullptr)
        {
            mpls_outgoing_info = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo>();
        }
        return mpls_outgoing_info;
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa == nullptr)
        {
            remote_lfa = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa>();
        }
        return remote_lfa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mpls_outgoing_info != nullptr)
    {
        _children["mpls-outgoing-info"] = mpls_outgoing_info;
    }

    if(remote_lfa != nullptr)
    {
        _children["remote-lfa"] = remote_lfa;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-outgoing-info" || name == "remote-lfa")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::MplsOutgoingInfo()
    :
    out_label{YType::uint32, "out-label"},
    out_label_rsn{YType::enumeration, "out-label-rsn"},
    out_label_type{YType::enumeration, "out-label-type"},
    out_label_owner{YType::enumeration, "out-label-owner"},
    is_from_graceful_restartable_neighbor{YType::boolean, "is-from-graceful-restartable-neighbor"},
    is_stale{YType::boolean, "is-stale"}
        ,
    nexthop_peer_ldp_ident(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent>())
{
    nexthop_peer_ldp_ident->parent = this;

    yang_name = "mpls-outgoing-info"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::~MplsOutgoingInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::has_data() const
{
    if (is_presence_container) return true;
    return out_label.is_set
	|| out_label_rsn.is_set
	|| out_label_type.is_set
	|| out_label_owner.is_set
	|| is_from_graceful_restartable_neighbor.is_set
	|| is_stale.is_set
	|| (nexthop_peer_ldp_ident !=  nullptr && nexthop_peer_ldp_ident->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_label_rsn.yfilter)
	|| ydk::is_set(out_label_type.yfilter)
	|| ydk::is_set(out_label_owner.yfilter)
	|| ydk::is_set(is_from_graceful_restartable_neighbor.yfilter)
	|| ydk::is_set(is_stale.yfilter)
	|| (nexthop_peer_ldp_ident !=  nullptr && nexthop_peer_ldp_ident->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-outgoing-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_rsn.is_set || is_set(out_label_rsn.yfilter)) leaf_name_data.push_back(out_label_rsn.get_name_leafdata());
    if (out_label_type.is_set || is_set(out_label_type.yfilter)) leaf_name_data.push_back(out_label_type.get_name_leafdata());
    if (out_label_owner.is_set || is_set(out_label_owner.yfilter)) leaf_name_data.push_back(out_label_owner.get_name_leafdata());
    if (is_from_graceful_restartable_neighbor.is_set || is_set(is_from_graceful_restartable_neighbor.yfilter)) leaf_name_data.push_back(is_from_graceful_restartable_neighbor.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.yfilter)) leaf_name_data.push_back(is_stale.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop-peer-ldp-ident")
    {
        if(nexthop_peer_ldp_ident == nullptr)
        {
            nexthop_peer_ldp_ident = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent>();
        }
        return nexthop_peer_ldp_ident;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nexthop_peer_ldp_ident != nullptr)
    {
        _children["nexthop-peer-ldp-ident"] = nexthop_peer_ldp_ident;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-rsn")
    {
        out_label_rsn = value;
        out_label_rsn.value_namespace = name_space;
        out_label_rsn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-type")
    {
        out_label_type = value;
        out_label_type.value_namespace = name_space;
        out_label_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-owner")
    {
        out_label_owner = value;
        out_label_owner.value_namespace = name_space;
        out_label_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-from-graceful-restartable-neighbor")
    {
        is_from_graceful_restartable_neighbor = value;
        is_from_graceful_restartable_neighbor.value_namespace = name_space;
        is_from_graceful_restartable_neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
        is_stale.value_namespace = name_space;
        is_stale.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-label-rsn")
    {
        out_label_rsn.yfilter = yfilter;
    }
    if(value_path == "out-label-type")
    {
        out_label_type.yfilter = yfilter;
    }
    if(value_path == "out-label-owner")
    {
        out_label_owner.yfilter = yfilter;
    }
    if(value_path == "is-from-graceful-restartable-neighbor")
    {
        is_from_graceful_restartable_neighbor.yfilter = yfilter;
    }
    if(value_path == "is-stale")
    {
        is_stale.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop-peer-ldp-ident" || name == "out-label" || name == "out-label-rsn" || name == "out-label-type" || name == "out-label-owner" || name == "is-from-graceful-restartable-neighbor" || name == "is-stale")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::NexthopPeerLdpIdent()
    :
    lsr_id{YType::str, "lsr-id"},
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"}
{

    yang_name = "nexthop-peer-ldp-ident"; yang_parent_name = "mpls-outgoing-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::~NexthopPeerLdpIdent()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::has_data() const
{
    if (is_presence_container) return true;
    return lsr_id.is_set
	|| label_space_id.is_set
	|| ldp_id.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(ldp_id.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop-peer-ldp-ident";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.yfilter)) leaf_name_data.push_back(ldp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
        ldp_id.value_namespace = name_space;
        ldp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "ldp-id")
    {
        ldp_id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsr-id" || name == "label-space-id" || name == "ldp-id")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::RemoteLfa()
    :
    has_remote_lfa_bkup{YType::boolean, "has-remote-lfa-bkup"}
        ,
    mpls_outgoing_info(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo>())
{
    mpls_outgoing_info->parent = this;

    yang_name = "remote-lfa"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::~RemoteLfa()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::has_data() const
{
    if (is_presence_container) return true;
    return has_remote_lfa_bkup.is_set
	|| (mpls_outgoing_info !=  nullptr && mpls_outgoing_info->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(has_remote_lfa_bkup.yfilter)
	|| (mpls_outgoing_info !=  nullptr && mpls_outgoing_info->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_remote_lfa_bkup.is_set || is_set(has_remote_lfa_bkup.yfilter)) leaf_name_data.push_back(has_remote_lfa_bkup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-outgoing-info")
    {
        if(mpls_outgoing_info == nullptr)
        {
            mpls_outgoing_info = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo>();
        }
        return mpls_outgoing_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mpls_outgoing_info != nullptr)
    {
        _children["mpls-outgoing-info"] = mpls_outgoing_info;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "has-remote-lfa-bkup")
    {
        has_remote_lfa_bkup = value;
        has_remote_lfa_bkup.value_namespace = name_space;
        has_remote_lfa_bkup.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "has-remote-lfa-bkup")
    {
        has_remote_lfa_bkup.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-outgoing-info" || name == "has-remote-lfa-bkup")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::MplsOutgoingInfo()
    :
    stack(this, {})
{

    yang_name = "mpls-outgoing-info"; yang_parent_name = "remote-lfa"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::~MplsOutgoingInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stack.len(); index++)
    {
        if(stack[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::has_operation() const
{
    for (std::size_t index=0; index<stack.len(); index++)
    {
        if(stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-outgoing-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack>();
        ent_->parent = this;
        stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::Stack()
    :
    out_label{YType::uint32, "out-label"},
    out_label_rsn{YType::enumeration, "out-label-rsn"},
    out_label_type{YType::enumeration, "out-label-type"},
    out_label_owner{YType::enumeration, "out-label-owner"},
    is_from_graceful_restartable_neighbor{YType::boolean, "is-from-graceful-restartable-neighbor"},
    is_stale{YType::boolean, "is-stale"}
        ,
    nexthop_peer_ldp_ident(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent>())
{
    nexthop_peer_ldp_ident->parent = this;

    yang_name = "stack"; yang_parent_name = "mpls-outgoing-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::~Stack()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::has_data() const
{
    if (is_presence_container) return true;
    return out_label.is_set
	|| out_label_rsn.is_set
	|| out_label_type.is_set
	|| out_label_owner.is_set
	|| is_from_graceful_restartable_neighbor.is_set
	|| is_stale.is_set
	|| (nexthop_peer_ldp_ident !=  nullptr && nexthop_peer_ldp_ident->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_label_rsn.yfilter)
	|| ydk::is_set(out_label_type.yfilter)
	|| ydk::is_set(out_label_owner.yfilter)
	|| ydk::is_set(is_from_graceful_restartable_neighbor.yfilter)
	|| ydk::is_set(is_stale.yfilter)
	|| (nexthop_peer_ldp_ident !=  nullptr && nexthop_peer_ldp_ident->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_rsn.is_set || is_set(out_label_rsn.yfilter)) leaf_name_data.push_back(out_label_rsn.get_name_leafdata());
    if (out_label_type.is_set || is_set(out_label_type.yfilter)) leaf_name_data.push_back(out_label_type.get_name_leafdata());
    if (out_label_owner.is_set || is_set(out_label_owner.yfilter)) leaf_name_data.push_back(out_label_owner.get_name_leafdata());
    if (is_from_graceful_restartable_neighbor.is_set || is_set(is_from_graceful_restartable_neighbor.yfilter)) leaf_name_data.push_back(is_from_graceful_restartable_neighbor.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.yfilter)) leaf_name_data.push_back(is_stale.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop-peer-ldp-ident")
    {
        if(nexthop_peer_ldp_ident == nullptr)
        {
            nexthop_peer_ldp_ident = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent>();
        }
        return nexthop_peer_ldp_ident;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nexthop_peer_ldp_ident != nullptr)
    {
        _children["nexthop-peer-ldp-ident"] = nexthop_peer_ldp_ident;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-rsn")
    {
        out_label_rsn = value;
        out_label_rsn.value_namespace = name_space;
        out_label_rsn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-type")
    {
        out_label_type = value;
        out_label_type.value_namespace = name_space;
        out_label_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-owner")
    {
        out_label_owner = value;
        out_label_owner.value_namespace = name_space;
        out_label_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-from-graceful-restartable-neighbor")
    {
        is_from_graceful_restartable_neighbor = value;
        is_from_graceful_restartable_neighbor.value_namespace = name_space;
        is_from_graceful_restartable_neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
        is_stale.value_namespace = name_space;
        is_stale.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-label-rsn")
    {
        out_label_rsn.yfilter = yfilter;
    }
    if(value_path == "out-label-type")
    {
        out_label_type.yfilter = yfilter;
    }
    if(value_path == "out-label-owner")
    {
        out_label_owner.yfilter = yfilter;
    }
    if(value_path == "is-from-graceful-restartable-neighbor")
    {
        is_from_graceful_restartable_neighbor.yfilter = yfilter;
    }
    if(value_path == "is-stale")
    {
        is_stale.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop-peer-ldp-ident" || name == "out-label" || name == "out-label-rsn" || name == "out-label-type" || name == "out-label-owner" || name == "is-from-graceful-restartable-neighbor" || name == "is-stale")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::NexthopPeerLdpIdent()
    :
    lsr_id{YType::str, "lsr-id"},
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"}
{

    yang_name = "nexthop-peer-ldp-ident"; yang_parent_name = "stack"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::~NexthopPeerLdpIdent()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::has_data() const
{
    if (is_presence_container) return true;
    return lsr_id.is_set
	|| label_space_id.is_set
	|| ldp_id.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(ldp_id.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop-peer-ldp-ident";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.yfilter)) leaf_name_data.push_back(ldp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
        ldp_id.value_namespace = name_space;
        ldp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "ldp-id")
    {
        ldp_id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsr-id" || name == "label-space-id" || name == "ldp-id")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::BindingsAdvertiseSpec()
    :
    allocation_acl(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl>())
    , advt_acl(this, {})
{
    allocation_acl->parent = this;

    yang_name = "bindings-advertise-spec"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::~BindingsAdvertiseSpec()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<advt_acl.len(); index++)
    {
        if(advt_acl[index]->has_data())
            return true;
    }
    return (allocation_acl !=  nullptr && allocation_acl->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::has_operation() const
{
    for (std::size_t index=0; index<advt_acl.len(); index++)
    {
        if(advt_acl[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (allocation_acl !=  nullptr && allocation_acl->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindings-advertise-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allocation-acl")
    {
        if(allocation_acl == nullptr)
        {
            allocation_acl = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl>();
        }
        return allocation_acl;
    }

    if(child_yang_name == "advt-acl")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl>();
        ent_->parent = this;
        advt_acl.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(allocation_acl != nullptr)
    {
        _children["allocation-acl"] = allocation_acl;
    }

    count_ = 0;
    for (auto ent_ : advt_acl.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocation-acl" || name == "advt-acl")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::AllocationAcl()
    :
    has_acl{YType::boolean, "has-acl"},
    prefix_acl{YType::str, "prefix-acl"},
    is_host_route_only{YType::boolean, "is-host-route-only"}
{

    yang_name = "allocation-acl"; yang_parent_name = "bindings-advertise-spec"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::~AllocationAcl()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::has_data() const
{
    if (is_presence_container) return true;
    return has_acl.is_set
	|| prefix_acl.is_set
	|| is_host_route_only.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(has_acl.yfilter)
	|| ydk::is_set(prefix_acl.yfilter)
	|| ydk::is_set(is_host_route_only.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocation-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_acl.is_set || is_set(has_acl.yfilter)) leaf_name_data.push_back(has_acl.get_name_leafdata());
    if (prefix_acl.is_set || is_set(prefix_acl.yfilter)) leaf_name_data.push_back(prefix_acl.get_name_leafdata());
    if (is_host_route_only.is_set || is_set(is_host_route_only.yfilter)) leaf_name_data.push_back(is_host_route_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "has-acl")
    {
        has_acl = value;
        has_acl.value_namespace = name_space;
        has_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-acl")
    {
        prefix_acl = value;
        prefix_acl.value_namespace = name_space;
        prefix_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-host-route-only")
    {
        is_host_route_only = value;
        is_host_route_only.value_namespace = name_space;
        is_host_route_only.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "has-acl")
    {
        has_acl.yfilter = yfilter;
    }
    if(value_path == "prefix-acl")
    {
        prefix_acl.yfilter = yfilter;
    }
    if(value_path == "is-host-route-only")
    {
        is_host_route_only.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "has-acl" || name == "prefix-acl" || name == "is-host-route-only")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::AdvtAcl()
    :
    prefix_acl{YType::str, "prefix-acl"},
    peer_acl{YType::str, "peer-acl"}
{

    yang_name = "advt-acl"; yang_parent_name = "bindings-advertise-spec"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::~AdvtAcl()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::has_data() const
{
    if (is_presence_container) return true;
    return prefix_acl.is_set
	|| peer_acl.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_acl.yfilter)
	|| ydk::is_set(peer_acl.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advt-acl";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_acl.is_set || is_set(prefix_acl.yfilter)) leaf_name_data.push_back(prefix_acl.get_name_leafdata());
    if (peer_acl.is_set || is_set(peer_acl.yfilter)) leaf_name_data.push_back(peer_acl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-acl")
    {
        prefix_acl = value;
        prefix_acl.value_namespace = name_space;
        prefix_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-acl")
    {
        peer_acl = value;
        peer_acl.value_namespace = name_space;
        peer_acl.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-acl")
    {
        prefix_acl.yfilter = yfilter;
    }
    if(value_path == "peer-acl")
    {
        peer_acl.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-acl" || name == "peer-acl")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::ForwardingSummary()
    :
    is_lsd_bound{YType::boolean, "is-lsd-bound"},
    fsht{YType::uint16, "fsht"},
    intfs{YType::uint16, "intfs"},
    lbls{YType::uint16, "lbls"}
        ,
    vrf(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_>())
    , rws(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws>())
{
    vrf->parent = this;
    rws->parent = this;

    yang_name = "forwarding-summary"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::~ForwardingSummary()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::has_data() const
{
    if (is_presence_container) return true;
    return is_lsd_bound.is_set
	|| fsht.is_set
	|| intfs.is_set
	|| lbls.is_set
	|| (vrf !=  nullptr && vrf->has_data())
	|| (rws !=  nullptr && rws->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_lsd_bound.yfilter)
	|| ydk::is_set(fsht.yfilter)
	|| ydk::is_set(intfs.yfilter)
	|| ydk::is_set(lbls.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (rws !=  nullptr && rws->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_lsd_bound.is_set || is_set(is_lsd_bound.yfilter)) leaf_name_data.push_back(is_lsd_bound.get_name_leafdata());
    if (fsht.is_set || is_set(fsht.yfilter)) leaf_name_data.push_back(fsht.get_name_leafdata());
    if (intfs.is_set || is_set(intfs.yfilter)) leaf_name_data.push_back(intfs.get_name_leafdata());
    if (lbls.is_set || is_set(lbls.yfilter)) leaf_name_data.push_back(lbls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_>();
        }
        return vrf;
    }

    if(child_yang_name == "rws")
    {
        if(rws == nullptr)
        {
            rws = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws>();
        }
        return rws;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    if(rws != nullptr)
    {
        _children["rws"] = rws;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-lsd-bound")
    {
        is_lsd_bound = value;
        is_lsd_bound.value_namespace = name_space;
        is_lsd_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsht")
    {
        fsht = value;
        fsht.value_namespace = name_space;
        fsht.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intfs")
    {
        intfs = value;
        intfs.value_namespace = name_space;
        intfs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbls")
    {
        lbls = value;
        lbls.value_namespace = name_space;
        lbls.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-lsd-bound")
    {
        is_lsd_bound.yfilter = yfilter;
    }
    if(value_path == "fsht")
    {
        fsht.yfilter = yfilter;
    }
    if(value_path == "intfs")
    {
        intfs.yfilter = yfilter;
    }
    if(value_path == "lbls")
    {
        lbls.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "rws" || name == "is-lsd-bound" || name == "fsht" || name == "intfs" || name == "lbls")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::Vrf_()
    :
    name{YType::str, "name"},
    id{YType::uint32, "id"}
{

    yang_name = "vrf"; yang_parent_name = "forwarding-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| id.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "id")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Rws()
    :
    pfxs(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs>())
    , nhs(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs>())
{
    pfxs->parent = this;
    nhs->parent = this;

    yang_name = "rws"; yang_parent_name = "forwarding-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::~Rws()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::has_data() const
{
    if (is_presence_container) return true;
    return (pfxs !=  nullptr && pfxs->has_data())
	|| (nhs !=  nullptr && nhs->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::has_operation() const
{
    return is_set(yfilter)
	|| (pfxs !=  nullptr && pfxs->has_operation())
	|| (nhs !=  nullptr && nhs->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rws";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfxs")
    {
        if(pfxs == nullptr)
        {
            pfxs = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs>();
        }
        return pfxs;
    }

    if(child_yang_name == "nhs")
    {
        if(nhs == nullptr)
        {
            nhs = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs>();
        }
        return nhs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pfxs != nullptr)
    {
        _children["pfxs"] = pfxs;
    }

    if(nhs != nullptr)
    {
        _children["nhs"] = nhs;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfxs" || name == "nhs")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::Pfxs()
    :
    total_pfxs{YType::uint16, "total-pfxs"},
    ecmp_pfxs{YType::uint16, "ecmp-pfxs"},
    protected_pfxs{YType::uint16, "protected-pfxs"}
        ,
    labeled_pfxs_aggr(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr>())
    , labeled_pfxs_primary(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary>())
    , labeled_pfxs_backup(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup>())
{
    labeled_pfxs_aggr->parent = this;
    labeled_pfxs_primary->parent = this;
    labeled_pfxs_backup->parent = this;

    yang_name = "pfxs"; yang_parent_name = "rws"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::~Pfxs()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::has_data() const
{
    if (is_presence_container) return true;
    return total_pfxs.is_set
	|| ecmp_pfxs.is_set
	|| protected_pfxs.is_set
	|| (labeled_pfxs_aggr !=  nullptr && labeled_pfxs_aggr->has_data())
	|| (labeled_pfxs_primary !=  nullptr && labeled_pfxs_primary->has_data())
	|| (labeled_pfxs_backup !=  nullptr && labeled_pfxs_backup->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_pfxs.yfilter)
	|| ydk::is_set(ecmp_pfxs.yfilter)
	|| ydk::is_set(protected_pfxs.yfilter)
	|| (labeled_pfxs_aggr !=  nullptr && labeled_pfxs_aggr->has_operation())
	|| (labeled_pfxs_primary !=  nullptr && labeled_pfxs_primary->has_operation())
	|| (labeled_pfxs_backup !=  nullptr && labeled_pfxs_backup->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_pfxs.is_set || is_set(total_pfxs.yfilter)) leaf_name_data.push_back(total_pfxs.get_name_leafdata());
    if (ecmp_pfxs.is_set || is_set(ecmp_pfxs.yfilter)) leaf_name_data.push_back(ecmp_pfxs.get_name_leafdata());
    if (protected_pfxs.is_set || is_set(protected_pfxs.yfilter)) leaf_name_data.push_back(protected_pfxs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "labeled-pfxs-aggr")
    {
        if(labeled_pfxs_aggr == nullptr)
        {
            labeled_pfxs_aggr = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr>();
        }
        return labeled_pfxs_aggr;
    }

    if(child_yang_name == "labeled-pfxs-primary")
    {
        if(labeled_pfxs_primary == nullptr)
        {
            labeled_pfxs_primary = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary>();
        }
        return labeled_pfxs_primary;
    }

    if(child_yang_name == "labeled-pfxs-backup")
    {
        if(labeled_pfxs_backup == nullptr)
        {
            labeled_pfxs_backup = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup>();
        }
        return labeled_pfxs_backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(labeled_pfxs_aggr != nullptr)
    {
        _children["labeled-pfxs-aggr"] = labeled_pfxs_aggr;
    }

    if(labeled_pfxs_primary != nullptr)
    {
        _children["labeled-pfxs-primary"] = labeled_pfxs_primary;
    }

    if(labeled_pfxs_backup != nullptr)
    {
        _children["labeled-pfxs-backup"] = labeled_pfxs_backup;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-pfxs")
    {
        total_pfxs = value;
        total_pfxs.value_namespace = name_space;
        total_pfxs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecmp-pfxs")
    {
        ecmp_pfxs = value;
        ecmp_pfxs.value_namespace = name_space;
        ecmp_pfxs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-pfxs")
    {
        protected_pfxs = value;
        protected_pfxs.value_namespace = name_space;
        protected_pfxs.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-pfxs")
    {
        total_pfxs.yfilter = yfilter;
    }
    if(value_path == "ecmp-pfxs")
    {
        ecmp_pfxs.yfilter = yfilter;
    }
    if(value_path == "protected-pfxs")
    {
        protected_pfxs.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled-pfxs-aggr" || name == "labeled-pfxs-primary" || name == "labeled-pfxs-backup" || name == "total-pfxs" || name == "ecmp-pfxs" || name == "protected-pfxs")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::LabeledPfxsAggr()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{

    yang_name = "labeled-pfxs-aggr"; yang_parent_name = "pfxs"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::~LabeledPfxsAggr()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::has_data() const
{
    if (is_presence_container) return true;
    return labeled_pfxs.is_set
	|| labeled_pfxs_partial.is_set
	|| unlabeled_pfxs.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(labeled_pfxs.yfilter)
	|| ydk::is_set(labeled_pfxs_partial.yfilter)
	|| ydk::is_set(unlabeled_pfxs.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-aggr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.yfilter)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.yfilter)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.yfilter)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
        labeled_pfxs.value_namespace = name_space;
        labeled_pfxs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
        labeled_pfxs_partial.value_namespace = name_space;
        labeled_pfxs_partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
        unlabeled_pfxs.value_namespace = name_space;
        unlabeled_pfxs.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs.yfilter = yfilter;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial.yfilter = yfilter;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled-pfxs" || name == "labeled-pfxs-partial" || name == "unlabeled-pfxs")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::LabeledPfxsPrimary()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{

    yang_name = "labeled-pfxs-primary"; yang_parent_name = "pfxs"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::~LabeledPfxsPrimary()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::has_data() const
{
    if (is_presence_container) return true;
    return labeled_pfxs.is_set
	|| labeled_pfxs_partial.is_set
	|| unlabeled_pfxs.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(labeled_pfxs.yfilter)
	|| ydk::is_set(labeled_pfxs_partial.yfilter)
	|| ydk::is_set(unlabeled_pfxs.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.yfilter)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.yfilter)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.yfilter)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
        labeled_pfxs.value_namespace = name_space;
        labeled_pfxs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
        labeled_pfxs_partial.value_namespace = name_space;
        labeled_pfxs_partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
        unlabeled_pfxs.value_namespace = name_space;
        unlabeled_pfxs.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs.yfilter = yfilter;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial.yfilter = yfilter;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled-pfxs" || name == "labeled-pfxs-partial" || name == "unlabeled-pfxs")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::LabeledPfxsBackup()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{

    yang_name = "labeled-pfxs-backup"; yang_parent_name = "pfxs"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::~LabeledPfxsBackup()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::has_data() const
{
    if (is_presence_container) return true;
    return labeled_pfxs.is_set
	|| labeled_pfxs_partial.is_set
	|| unlabeled_pfxs.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(labeled_pfxs.yfilter)
	|| ydk::is_set(labeled_pfxs_partial.yfilter)
	|| ydk::is_set(unlabeled_pfxs.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.yfilter)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.yfilter)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.yfilter)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
        labeled_pfxs.value_namespace = name_space;
        labeled_pfxs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
        labeled_pfxs_partial.value_namespace = name_space;
        labeled_pfxs_partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
        unlabeled_pfxs.value_namespace = name_space;
        unlabeled_pfxs.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs.yfilter = yfilter;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial.yfilter = yfilter;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled-pfxs" || name == "labeled-pfxs-partial" || name == "unlabeled-pfxs")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::Nhs()
    :
    total_paths{YType::uint32, "total-paths"},
    protected_paths{YType::uint32, "protected-paths"},
    backup_paths{YType::uint32, "backup-paths"},
    remote_backup_paths{YType::uint32, "remote-backup-paths"},
    labeled_paths{YType::uint32, "labeled-paths"},
    labeled_backup_paths{YType::uint32, "labeled-backup-paths"}
{

    yang_name = "nhs"; yang_parent_name = "rws"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::~Nhs()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::has_data() const
{
    if (is_presence_container) return true;
    return total_paths.is_set
	|| protected_paths.is_set
	|| backup_paths.is_set
	|| remote_backup_paths.is_set
	|| labeled_paths.is_set
	|| labeled_backup_paths.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(protected_paths.yfilter)
	|| ydk::is_set(backup_paths.yfilter)
	|| ydk::is_set(remote_backup_paths.yfilter)
	|| ydk::is_set(labeled_paths.yfilter)
	|| ydk::is_set(labeled_backup_paths.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (protected_paths.is_set || is_set(protected_paths.yfilter)) leaf_name_data.push_back(protected_paths.get_name_leafdata());
    if (backup_paths.is_set || is_set(backup_paths.yfilter)) leaf_name_data.push_back(backup_paths.get_name_leafdata());
    if (remote_backup_paths.is_set || is_set(remote_backup_paths.yfilter)) leaf_name_data.push_back(remote_backup_paths.get_name_leafdata());
    if (labeled_paths.is_set || is_set(labeled_paths.yfilter)) leaf_name_data.push_back(labeled_paths.get_name_leafdata());
    if (labeled_backup_paths.is_set || is_set(labeled_backup_paths.yfilter)) leaf_name_data.push_back(labeled_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-paths")
    {
        protected_paths = value;
        protected_paths.value_namespace = name_space;
        protected_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-paths")
    {
        backup_paths = value;
        backup_paths.value_namespace = name_space;
        backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-backup-paths")
    {
        remote_backup_paths = value;
        remote_backup_paths.value_namespace = name_space;
        remote_backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labeled-paths")
    {
        labeled_paths = value;
        labeled_paths.value_namespace = name_space;
        labeled_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labeled-backup-paths")
    {
        labeled_backup_paths = value;
        labeled_backup_paths.value_namespace = name_space;
        labeled_backup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
    if(value_path == "protected-paths")
    {
        protected_paths.yfilter = yfilter;
    }
    if(value_path == "backup-paths")
    {
        backup_paths.yfilter = yfilter;
    }
    if(value_path == "remote-backup-paths")
    {
        remote_backup_paths.yfilter = yfilter;
    }
    if(value_path == "labeled-paths")
    {
        labeled_paths.yfilter = yfilter;
    }
    if(value_path == "labeled-backup-paths")
    {
        labeled_backup_paths.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-paths" || name == "protected-paths" || name == "backup-paths" || name == "remote-backup-paths" || name == "labeled-paths" || name == "labeled-backup-paths")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBriefs()
    :
    neighbor_brief(this, {})
{

    yang_name = "neighbor-briefs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::~NeighborBriefs()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_brief.len(); index++)
    {
        if(neighbor_brief[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::has_operation() const
{
    for (std::size_t index=0; index<neighbor_brief.len(); index++)
    {
        if(neighbor_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-brief")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief>();
        ent_->parent = this;
        neighbor_brief.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor_brief.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-brief")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NeighborBrief()
    :
    lsr_id{YType::str, "lsr-id"},
    label_space_id{YType::uint32, "label-space-id"},
    is_graceful_restartable{YType::boolean, "is-graceful-restartable"},
    nsr_state{YType::enumeration, "nsr-state"},
    up_time_seconds{YType::uint32, "up-time-seconds"}
        ,
    vrf(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_>())
    , nbr_br_af_info(this, {})
{
    vrf->parent = this;

    yang_name = "neighbor-brief"; yang_parent_name = "neighbor-briefs"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::~NeighborBrief()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nbr_br_af_info.len(); index++)
    {
        if(nbr_br_af_info[index]->has_data())
            return true;
    }
    return lsr_id.is_set
	|| label_space_id.is_set
	|| is_graceful_restartable.is_set
	|| nsr_state.is_set
	|| up_time_seconds.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::has_operation() const
{
    for (std::size_t index=0; index<nbr_br_af_info.len(); index++)
    {
        if(nbr_br_af_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(is_graceful_restartable.yfilter)
	|| ydk::is_set(nsr_state.yfilter)
	|| ydk::is_set(up_time_seconds.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-brief";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (is_graceful_restartable.is_set || is_set(is_graceful_restartable.yfilter)) leaf_name_data.push_back(is_graceful_restartable.get_name_leafdata());
    if (nsr_state.is_set || is_set(nsr_state.yfilter)) leaf_name_data.push_back(nsr_state.get_name_leafdata());
    if (up_time_seconds.is_set || is_set(up_time_seconds.yfilter)) leaf_name_data.push_back(up_time_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_>();
        }
        return vrf;
    }

    if(child_yang_name == "nbr-br-af-info")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo>();
        ent_->parent = this;
        nbr_br_af_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    count_ = 0;
    for (auto ent_ : nbr_br_af_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-graceful-restartable")
    {
        is_graceful_restartable = value;
        is_graceful_restartable.value_namespace = name_space;
        is_graceful_restartable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state")
    {
        nsr_state = value;
        nsr_state.value_namespace = name_space;
        nsr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-time-seconds")
    {
        up_time_seconds = value;
        up_time_seconds.value_namespace = name_space;
        up_time_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "is-graceful-restartable")
    {
        is_graceful_restartable.yfilter = yfilter;
    }
    if(value_path == "nsr-state")
    {
        nsr_state.yfilter = yfilter;
    }
    if(value_path == "up-time-seconds")
    {
        up_time_seconds.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "nbr-br-af-info" || name == "lsr-id" || name == "label-space-id" || name == "is-graceful-restartable" || name == "nsr-state" || name == "up-time-seconds")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::Vrf_()
    :
    name{YType::str, "name"},
    id{YType::uint32, "id"}
{

    yang_name = "vrf"; yang_parent_name = "neighbor-brief"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| id.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "id")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::NbrBrAfInfo()
    :
    address_family{YType::enumeration, "address-family"},
    num_of_nbr_discovery{YType::uint32, "num-of-nbr-discovery"},
    num_of_nbr_addresses{YType::uint32, "num-of-nbr-addresses"},
    num_of_nbr_lbl{YType::uint32, "num-of-nbr-lbl"}
{

    yang_name = "nbr-br-af-info"; yang_parent_name = "neighbor-brief"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::~NbrBrAfInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| num_of_nbr_discovery.is_set
	|| num_of_nbr_addresses.is_set
	|| num_of_nbr_lbl.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(num_of_nbr_discovery.yfilter)
	|| ydk::is_set(num_of_nbr_addresses.yfilter)
	|| ydk::is_set(num_of_nbr_lbl.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-br-af-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (num_of_nbr_discovery.is_set || is_set(num_of_nbr_discovery.yfilter)) leaf_name_data.push_back(num_of_nbr_discovery.get_name_leafdata());
    if (num_of_nbr_addresses.is_set || is_set(num_of_nbr_addresses.yfilter)) leaf_name_data.push_back(num_of_nbr_addresses.get_name_leafdata());
    if (num_of_nbr_lbl.is_set || is_set(num_of_nbr_lbl.yfilter)) leaf_name_data.push_back(num_of_nbr_lbl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-nbr-discovery")
    {
        num_of_nbr_discovery = value;
        num_of_nbr_discovery.value_namespace = name_space;
        num_of_nbr_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-nbr-addresses")
    {
        num_of_nbr_addresses = value;
        num_of_nbr_addresses.value_namespace = name_space;
        num_of_nbr_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-nbr-lbl")
    {
        num_of_nbr_lbl = value;
        num_of_nbr_lbl.value_namespace = name_space;
        num_of_nbr_lbl.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "num-of-nbr-discovery")
    {
        num_of_nbr_discovery.yfilter = yfilter;
    }
    if(value_path == "num-of-nbr-addresses")
    {
        num_of_nbr_addresses.yfilter = yfilter;
    }
    if(value_path == "num-of-nbr-lbl")
    {
        num_of_nbr_lbl.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "num-of-nbr-discovery" || name == "num-of-nbr-addresses" || name == "num-of-nbr-lbl")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::BackoffParameters::BackoffParameters()
    :
    initial_seconds{YType::uint32, "initial-seconds"},
    maximum_seconds{YType::uint32, "maximum-seconds"}
{

    yang_name = "backoff-parameters"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::BackoffParameters::~BackoffParameters()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::BackoffParameters::has_data() const
{
    if (is_presence_container) return true;
    return initial_seconds.is_set
	|| maximum_seconds.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::BackoffParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initial_seconds.yfilter)
	|| ydk::is_set(maximum_seconds.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::BackoffParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::BackoffParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_seconds.is_set || is_set(initial_seconds.yfilter)) leaf_name_data.push_back(initial_seconds.get_name_leafdata());
    if (maximum_seconds.is_set || is_set(maximum_seconds.yfilter)) leaf_name_data.push_back(maximum_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::BackoffParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::BackoffParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::BackoffParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initial-seconds")
    {
        initial_seconds = value;
        initial_seconds.value_namespace = name_space;
        initial_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-seconds")
    {
        maximum_seconds = value;
        maximum_seconds.value_namespace = name_space;
        maximum_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::BackoffParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initial-seconds")
    {
        initial_seconds.yfilter = yfilter;
    }
    if(value_path == "maximum-seconds")
    {
        maximum_seconds.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::BackoffParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initial-seconds" || name == "maximum-seconds")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::Backoffs()
    :
    backoff(this, {})
{

    yang_name = "backoffs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::~Backoffs()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<backoff.len(); index++)
    {
        if(backoff[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::has_operation() const
{
    for (std::size_t index=0; index<backoff.len(); index++)
    {
        if(backoff[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoffs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backoff")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::Backoff>();
        ent_->parent = this;
        backoff.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : backoff.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backoff")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::Backoff::Backoff()
    :
    lsr_id{YType::str, "lsr-id"},
    label_space_id{YType::uint32, "label-space-id"},
    backoff_seconds{YType::uint32, "backoff-seconds"},
    waiting_seconds{YType::uint32, "waiting-seconds"}
{

    yang_name = "backoff"; yang_parent_name = "backoffs"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::Backoff::~Backoff()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::Backoff::has_data() const
{
    if (is_presence_container) return true;
    return lsr_id.is_set
	|| label_space_id.is_set
	|| backoff_seconds.is_set
	|| waiting_seconds.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::Backoff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(backoff_seconds.yfilter)
	|| ydk::is_set(waiting_seconds.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::Backoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::Backoff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (backoff_seconds.is_set || is_set(backoff_seconds.yfilter)) leaf_name_data.push_back(backoff_seconds.get_name_leafdata());
    if (waiting_seconds.is_set || is_set(waiting_seconds.yfilter)) leaf_name_data.push_back(waiting_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::Backoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::Backoff::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::Backoff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backoff-seconds")
    {
        backoff_seconds = value;
        backoff_seconds.value_namespace = name_space;
        backoff_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waiting-seconds")
    {
        waiting_seconds = value;
        waiting_seconds.value_namespace = name_space;
        waiting_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::Backoff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "backoff-seconds")
    {
        backoff_seconds.yfilter = yfilter;
    }
    if(value_path == "waiting-seconds")
    {
        waiting_seconds.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::Backoff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsr-id" || name == "label-space-id" || name == "backoff-seconds" || name == "waiting-seconds")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::Nsr()
    :
    nsr_pending(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending>())
    , ha_summary(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary>())
    , ha_statistics(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics>())
{
    nsr_pending->parent = this;
    ha_summary->parent = this;
    ha_statistics->parent = this;

    yang_name = "nsr"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::~Nsr()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::has_data() const
{
    if (is_presence_container) return true;
    return (nsr_pending !=  nullptr && nsr_pending->has_data())
	|| (ha_summary !=  nullptr && ha_summary->has_data())
	|| (ha_statistics !=  nullptr && ha_statistics->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::has_operation() const
{
    return is_set(yfilter)
	|| (nsr_pending !=  nullptr && nsr_pending->has_operation())
	|| (ha_summary !=  nullptr && ha_summary->has_operation())
	|| (ha_statistics !=  nullptr && ha_statistics->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-pending")
    {
        if(nsr_pending == nullptr)
        {
            nsr_pending = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending>();
        }
        return nsr_pending;
    }

    if(child_yang_name == "ha-summary")
    {
        if(ha_summary == nullptr)
        {
            ha_summary = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary>();
        }
        return ha_summary;
    }

    if(child_yang_name == "ha-statistics")
    {
        if(ha_statistics == nullptr)
        {
            ha_statistics = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics>();
        }
        return ha_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nsr_pending != nullptr)
    {
        _children["nsr-pending"] = nsr_pending;
    }

    if(ha_summary != nullptr)
    {
        _children["ha-summary"] = ha_summary;
    }

    if(ha_statistics != nullptr)
    {
        _children["ha-statistics"] = ha_statistics;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pending" || name == "ha-summary" || name == "ha-statistics")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::NsrPending()
    :
    ha_neighbors(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors>())
{
    ha_neighbors->parent = this;

    yang_name = "nsr-pending"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::~NsrPending()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::has_data() const
{
    if (is_presence_container) return true;
    return (ha_neighbors !=  nullptr && ha_neighbors->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::has_operation() const
{
    return is_set(yfilter)
	|| (ha_neighbors !=  nullptr && ha_neighbors->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pending";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ha-neighbors")
    {
        if(ha_neighbors == nullptr)
        {
            ha_neighbors = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors>();
        }
        return ha_neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ha_neighbors != nullptr)
    {
        _children["ha-neighbors"] = ha_neighbors;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ha-neighbors")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbors()
    :
    ha_neighbor(this, {})
{

    yang_name = "ha-neighbors"; yang_parent_name = "nsr-pending"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::~HaNeighbors()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ha_neighbor.len(); index++)
    {
        if(ha_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::has_operation() const
{
    for (std::size_t index=0; index<ha_neighbor.len(); index++)
    {
        if(ha_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ha-neighbor")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor>();
        ent_->parent = this;
        ha_neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ha_neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ha-neighbor")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::HaNeighbor()
    :
    lsr_id{YType::str, "lsr-id"},
    label_space_id{YType::uint32, "label-space-id"},
    lsr_id_xr{YType::uint32, "lsr-id-xr"},
    lbl_spc_id{YType::uint16, "lbl-spc-id"},
    nsr_sync_state{YType::int32, "nsr-sync-state"},
    num_msg{YType::uint32, "num-msg"}
        ,
    init_sync_info(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo>())
    , steady_state_sync_info(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo>())
{
    init_sync_info->parent = this;
    steady_state_sync_info->parent = this;

    yang_name = "ha-neighbor"; yang_parent_name = "ha-neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::~HaNeighbor()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return lsr_id.is_set
	|| label_space_id.is_set
	|| lsr_id_xr.is_set
	|| lbl_spc_id.is_set
	|| nsr_sync_state.is_set
	|| num_msg.is_set
	|| (init_sync_info !=  nullptr && init_sync_info->has_data())
	|| (steady_state_sync_info !=  nullptr && steady_state_sync_info->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(lsr_id_xr.yfilter)
	|| ydk::is_set(lbl_spc_id.yfilter)
	|| ydk::is_set(nsr_sync_state.yfilter)
	|| ydk::is_set(num_msg.yfilter)
	|| (init_sync_info !=  nullptr && init_sync_info->has_operation())
	|| (steady_state_sync_info !=  nullptr && steady_state_sync_info->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-neighbor";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id_xr.is_set || is_set(lsr_id_xr.yfilter)) leaf_name_data.push_back(lsr_id_xr.get_name_leafdata());
    if (lbl_spc_id.is_set || is_set(lbl_spc_id.yfilter)) leaf_name_data.push_back(lbl_spc_id.get_name_leafdata());
    if (nsr_sync_state.is_set || is_set(nsr_sync_state.yfilter)) leaf_name_data.push_back(nsr_sync_state.get_name_leafdata());
    if (num_msg.is_set || is_set(num_msg.yfilter)) leaf_name_data.push_back(num_msg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "init-sync-info")
    {
        if(init_sync_info == nullptr)
        {
            init_sync_info = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo>();
        }
        return init_sync_info;
    }

    if(child_yang_name == "steady-state-sync-info")
    {
        if(steady_state_sync_info == nullptr)
        {
            steady_state_sync_info = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo>();
        }
        return steady_state_sync_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(init_sync_info != nullptr)
    {
        _children["init-sync-info"] = init_sync_info;
    }

    if(steady_state_sync_info != nullptr)
    {
        _children["steady-state-sync-info"] = steady_state_sync_info;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-id-xr")
    {
        lsr_id_xr = value;
        lsr_id_xr.value_namespace = name_space;
        lsr_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbl-spc-id")
    {
        lbl_spc_id = value;
        lbl_spc_id.value_namespace = name_space;
        lbl_spc_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sync-state")
    {
        nsr_sync_state = value;
        nsr_sync_state.value_namespace = name_space;
        nsr_sync_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-msg")
    {
        num_msg = value;
        num_msg.value_namespace = name_space;
        num_msg.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "lsr-id-xr")
    {
        lsr_id_xr.yfilter = yfilter;
    }
    if(value_path == "lbl-spc-id")
    {
        lbl_spc_id.yfilter = yfilter;
    }
    if(value_path == "nsr-sync-state")
    {
        nsr_sync_state.yfilter = yfilter;
    }
    if(value_path == "num-msg")
    {
        num_msg.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "init-sync-info" || name == "steady-state-sync-info" || name == "lsr-id" || name == "label-space-id" || name == "lsr-id-xr" || name == "lbl-spc-id" || name == "nsr-sync-state" || name == "num-msg")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::InitSyncInfo()
    :
    init_sync_start{YType::uint32, "init-sync-start"},
    init_sync_end{YType::uint32, "init-sync-end"},
    num_addr{YType::uint32, "num-addr"},
    num_duplicate_addr{YType::uint32, "num-duplicate-addr"},
    num_rx_bytes{YType::uint32, "num-rx-bytes"},
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    num_lbl{YType::uint32, "num-lbl"},
    num_app_bytes{YType::uint32, "num-app-bytes"}
{

    yang_name = "init-sync-info"; yang_parent_name = "ha-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::~InitSyncInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::has_data() const
{
    if (is_presence_container) return true;
    return init_sync_start.is_set
	|| init_sync_end.is_set
	|| num_addr.is_set
	|| num_duplicate_addr.is_set
	|| num_rx_bytes.is_set
	|| num_cap_sent.is_set
	|| num_cap_rcvd.is_set
	|| num_lbl.is_set
	|| num_app_bytes.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(init_sync_start.yfilter)
	|| ydk::is_set(init_sync_end.yfilter)
	|| ydk::is_set(num_addr.yfilter)
	|| ydk::is_set(num_duplicate_addr.yfilter)
	|| ydk::is_set(num_rx_bytes.yfilter)
	|| ydk::is_set(num_cap_sent.yfilter)
	|| ydk::is_set(num_cap_rcvd.yfilter)
	|| ydk::is_set(num_lbl.yfilter)
	|| ydk::is_set(num_app_bytes.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-sync-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (init_sync_start.is_set || is_set(init_sync_start.yfilter)) leaf_name_data.push_back(init_sync_start.get_name_leafdata());
    if (init_sync_end.is_set || is_set(init_sync_end.yfilter)) leaf_name_data.push_back(init_sync_end.get_name_leafdata());
    if (num_addr.is_set || is_set(num_addr.yfilter)) leaf_name_data.push_back(num_addr.get_name_leafdata());
    if (num_duplicate_addr.is_set || is_set(num_duplicate_addr.yfilter)) leaf_name_data.push_back(num_duplicate_addr.get_name_leafdata());
    if (num_rx_bytes.is_set || is_set(num_rx_bytes.yfilter)) leaf_name_data.push_back(num_rx_bytes.get_name_leafdata());
    if (num_cap_sent.is_set || is_set(num_cap_sent.yfilter)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.yfilter)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (num_lbl.is_set || is_set(num_lbl.yfilter)) leaf_name_data.push_back(num_lbl.get_name_leafdata());
    if (num_app_bytes.is_set || is_set(num_app_bytes.yfilter)) leaf_name_data.push_back(num_app_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "init-sync-start")
    {
        init_sync_start = value;
        init_sync_start.value_namespace = name_space;
        init_sync_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sync-end")
    {
        init_sync_end = value;
        init_sync_end.value_namespace = name_space;
        init_sync_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-addr")
    {
        num_addr = value;
        num_addr.value_namespace = name_space;
        num_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-duplicate-addr")
    {
        num_duplicate_addr = value;
        num_duplicate_addr.value_namespace = name_space;
        num_duplicate_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-rx-bytes")
    {
        num_rx_bytes = value;
        num_rx_bytes.value_namespace = name_space;
        num_rx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
        num_cap_sent.value_namespace = name_space;
        num_cap_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
        num_cap_rcvd.value_namespace = name_space;
        num_cap_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-lbl")
    {
        num_lbl = value;
        num_lbl.value_namespace = name_space;
        num_lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-app-bytes")
    {
        num_app_bytes = value;
        num_app_bytes.value_namespace = name_space;
        num_app_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "init-sync-start")
    {
        init_sync_start.yfilter = yfilter;
    }
    if(value_path == "init-sync-end")
    {
        init_sync_end.yfilter = yfilter;
    }
    if(value_path == "num-addr")
    {
        num_addr.yfilter = yfilter;
    }
    if(value_path == "num-duplicate-addr")
    {
        num_duplicate_addr.yfilter = yfilter;
    }
    if(value_path == "num-rx-bytes")
    {
        num_rx_bytes.yfilter = yfilter;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent.yfilter = yfilter;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd.yfilter = yfilter;
    }
    if(value_path == "num-lbl")
    {
        num_lbl.yfilter = yfilter;
    }
    if(value_path == "num-app-bytes")
    {
        num_app_bytes.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "init-sync-start" || name == "init-sync-end" || name == "num-addr" || name == "num-duplicate-addr" || name == "num-rx-bytes" || name == "num-cap-sent" || name == "num-cap-rcvd" || name == "num-lbl" || name == "num-app-bytes")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::SteadyStateSyncInfo()
    :
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    rem_lbl_wd{YType::uint32, "rem-lbl-wd"},
    rem_lbl_rq{YType::uint32, "rem-lbl-rq"},
    num_stdby_adj_join{YType::uint32, "num-stdby-adj-join"},
    num_stdby_adj_leave{YType::uint32, "num-stdby-adj-leave"}
{

    yang_name = "steady-state-sync-info"; yang_parent_name = "ha-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::~SteadyStateSyncInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_data() const
{
    if (is_presence_container) return true;
    return num_cap_sent.is_set
	|| num_cap_rcvd.is_set
	|| rem_lbl_wd.is_set
	|| rem_lbl_rq.is_set
	|| num_stdby_adj_join.is_set
	|| num_stdby_adj_leave.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_cap_sent.yfilter)
	|| ydk::is_set(num_cap_rcvd.yfilter)
	|| ydk::is_set(rem_lbl_wd.yfilter)
	|| ydk::is_set(rem_lbl_rq.yfilter)
	|| ydk::is_set(num_stdby_adj_join.yfilter)
	|| ydk::is_set(num_stdby_adj_leave.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "steady-state-sync-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_cap_sent.is_set || is_set(num_cap_sent.yfilter)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.yfilter)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (rem_lbl_wd.is_set || is_set(rem_lbl_wd.yfilter)) leaf_name_data.push_back(rem_lbl_wd.get_name_leafdata());
    if (rem_lbl_rq.is_set || is_set(rem_lbl_rq.yfilter)) leaf_name_data.push_back(rem_lbl_rq.get_name_leafdata());
    if (num_stdby_adj_join.is_set || is_set(num_stdby_adj_join.yfilter)) leaf_name_data.push_back(num_stdby_adj_join.get_name_leafdata());
    if (num_stdby_adj_leave.is_set || is_set(num_stdby_adj_leave.yfilter)) leaf_name_data.push_back(num_stdby_adj_leave.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
        num_cap_sent.value_namespace = name_space;
        num_cap_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
        num_cap_rcvd.value_namespace = name_space;
        num_cap_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-lbl-wd")
    {
        rem_lbl_wd = value;
        rem_lbl_wd.value_namespace = name_space;
        rem_lbl_wd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-lbl-rq")
    {
        rem_lbl_rq = value;
        rem_lbl_rq.value_namespace = name_space;
        rem_lbl_rq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-stdby-adj-join")
    {
        num_stdby_adj_join = value;
        num_stdby_adj_join.value_namespace = name_space;
        num_stdby_adj_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-stdby-adj-leave")
    {
        num_stdby_adj_leave = value;
        num_stdby_adj_leave.value_namespace = name_space;
        num_stdby_adj_leave.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-cap-sent")
    {
        num_cap_sent.yfilter = yfilter;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd.yfilter = yfilter;
    }
    if(value_path == "rem-lbl-wd")
    {
        rem_lbl_wd.yfilter = yfilter;
    }
    if(value_path == "rem-lbl-rq")
    {
        rem_lbl_rq.yfilter = yfilter;
    }
    if(value_path == "num-stdby-adj-join")
    {
        num_stdby_adj_join.yfilter = yfilter;
    }
    if(value_path == "num-stdby-adj-leave")
    {
        num_stdby_adj_leave.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-cap-sent" || name == "num-cap-rcvd" || name == "rem-lbl-wd" || name == "rem-lbl-rq" || name == "num-stdby-adj-join" || name == "num-stdby-adj-leave")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::HaSummary()
    :
    vrf(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_>())
    , sessions(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions>())
{
    vrf->parent = this;
    sessions->parent = this;

    yang_name = "ha-summary"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::~HaSummary()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::has_data() const
{
    if (is_presence_container) return true;
    return (vrf !=  nullptr && vrf->has_data())
	|| (sessions !=  nullptr && sessions->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::has_operation() const
{
    return is_set(yfilter)
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_>();
        }
        return vrf;
    }

    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions>();
        }
        return sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    if(sessions != nullptr)
    {
        _children["sessions"] = sessions;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "sessions")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_::Vrf_()
    :
    name{YType::str, "name"},
    id{YType::uint32, "id"}
{

    yang_name = "vrf"; yang_parent_name = "ha-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| id.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "id")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions::Sessions()
    :
    total{YType::uint32, "total"},
    nsr_eligible{YType::uint32, "nsr-eligible"},
    nsr_state_none{YType::uint32, "nsr-state-none"},
    nsr_state_wait{YType::uint32, "nsr-state-wait"},
    nsr_state_ready{YType::uint32, "nsr-state-ready"},
    nsr_state_prepare{YType::uint32, "nsr-state-prepare"},
    nsr_state_app_wait{YType::uint32, "nsr-state-app-wait"},
    nsr_state_operational{YType::uint32, "nsr-state-operational"},
    nsr_state_tcp_phase1{YType::uint32, "nsr-state-tcp-phase1"},
    nsr_state_tcp_phase2{YType::uint32, "nsr-state-tcp-phase2"}
{

    yang_name = "sessions"; yang_parent_name = "ha-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions::~Sessions()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions::has_data() const
{
    if (is_presence_container) return true;
    return total.is_set
	|| nsr_eligible.is_set
	|| nsr_state_none.is_set
	|| nsr_state_wait.is_set
	|| nsr_state_ready.is_set
	|| nsr_state_prepare.is_set
	|| nsr_state_app_wait.is_set
	|| nsr_state_operational.is_set
	|| nsr_state_tcp_phase1.is_set
	|| nsr_state_tcp_phase2.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total.yfilter)
	|| ydk::is_set(nsr_eligible.yfilter)
	|| ydk::is_set(nsr_state_none.yfilter)
	|| ydk::is_set(nsr_state_wait.yfilter)
	|| ydk::is_set(nsr_state_ready.yfilter)
	|| ydk::is_set(nsr_state_prepare.yfilter)
	|| ydk::is_set(nsr_state_app_wait.yfilter)
	|| ydk::is_set(nsr_state_operational.yfilter)
	|| ydk::is_set(nsr_state_tcp_phase1.yfilter)
	|| ydk::is_set(nsr_state_tcp_phase2.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());
    if (nsr_eligible.is_set || is_set(nsr_eligible.yfilter)) leaf_name_data.push_back(nsr_eligible.get_name_leafdata());
    if (nsr_state_none.is_set || is_set(nsr_state_none.yfilter)) leaf_name_data.push_back(nsr_state_none.get_name_leafdata());
    if (nsr_state_wait.is_set || is_set(nsr_state_wait.yfilter)) leaf_name_data.push_back(nsr_state_wait.get_name_leafdata());
    if (nsr_state_ready.is_set || is_set(nsr_state_ready.yfilter)) leaf_name_data.push_back(nsr_state_ready.get_name_leafdata());
    if (nsr_state_prepare.is_set || is_set(nsr_state_prepare.yfilter)) leaf_name_data.push_back(nsr_state_prepare.get_name_leafdata());
    if (nsr_state_app_wait.is_set || is_set(nsr_state_app_wait.yfilter)) leaf_name_data.push_back(nsr_state_app_wait.get_name_leafdata());
    if (nsr_state_operational.is_set || is_set(nsr_state_operational.yfilter)) leaf_name_data.push_back(nsr_state_operational.get_name_leafdata());
    if (nsr_state_tcp_phase1.is_set || is_set(nsr_state_tcp_phase1.yfilter)) leaf_name_data.push_back(nsr_state_tcp_phase1.get_name_leafdata());
    if (nsr_state_tcp_phase2.is_set || is_set(nsr_state_tcp_phase2.yfilter)) leaf_name_data.push_back(nsr_state_tcp_phase2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-eligible")
    {
        nsr_eligible = value;
        nsr_eligible.value_namespace = name_space;
        nsr_eligible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-none")
    {
        nsr_state_none = value;
        nsr_state_none.value_namespace = name_space;
        nsr_state_none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-wait")
    {
        nsr_state_wait = value;
        nsr_state_wait.value_namespace = name_space;
        nsr_state_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-ready")
    {
        nsr_state_ready = value;
        nsr_state_ready.value_namespace = name_space;
        nsr_state_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-prepare")
    {
        nsr_state_prepare = value;
        nsr_state_prepare.value_namespace = name_space;
        nsr_state_prepare.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-app-wait")
    {
        nsr_state_app_wait = value;
        nsr_state_app_wait.value_namespace = name_space;
        nsr_state_app_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-operational")
    {
        nsr_state_operational = value;
        nsr_state_operational.value_namespace = name_space;
        nsr_state_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-tcp-phase1")
    {
        nsr_state_tcp_phase1 = value;
        nsr_state_tcp_phase1.value_namespace = name_space;
        nsr_state_tcp_phase1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-tcp-phase2")
    {
        nsr_state_tcp_phase2 = value;
        nsr_state_tcp_phase2.value_namespace = name_space;
        nsr_state_tcp_phase2.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
    if(value_path == "nsr-eligible")
    {
        nsr_eligible.yfilter = yfilter;
    }
    if(value_path == "nsr-state-none")
    {
        nsr_state_none.yfilter = yfilter;
    }
    if(value_path == "nsr-state-wait")
    {
        nsr_state_wait.yfilter = yfilter;
    }
    if(value_path == "nsr-state-ready")
    {
        nsr_state_ready.yfilter = yfilter;
    }
    if(value_path == "nsr-state-prepare")
    {
        nsr_state_prepare.yfilter = yfilter;
    }
    if(value_path == "nsr-state-app-wait")
    {
        nsr_state_app_wait.yfilter = yfilter;
    }
    if(value_path == "nsr-state-operational")
    {
        nsr_state_operational.yfilter = yfilter;
    }
    if(value_path == "nsr-state-tcp-phase1")
    {
        nsr_state_tcp_phase1.yfilter = yfilter;
    }
    if(value_path == "nsr-state-tcp-phase2")
    {
        nsr_state_tcp_phase2.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total" || name == "nsr-eligible" || name == "nsr-state-none" || name == "nsr-state-wait" || name == "nsr-state-ready" || name == "nsr-state-prepare" || name == "nsr-state-app-wait" || name == "nsr-state-operational" || name == "nsr-state-tcp-phase1" || name == "nsr-state-tcp-phase2")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaStatistics()
    :
    ha_global(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal>())
    , ha_neighbors(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors>())
{
    ha_global->parent = this;
    ha_neighbors->parent = this;

    yang_name = "ha-statistics"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::~HaStatistics()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::has_data() const
{
    if (is_presence_container) return true;
    return (ha_global !=  nullptr && ha_global->has_data())
	|| (ha_neighbors !=  nullptr && ha_neighbors->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (ha_global !=  nullptr && ha_global->has_operation())
	|| (ha_neighbors !=  nullptr && ha_neighbors->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ha-global")
    {
        if(ha_global == nullptr)
        {
            ha_global = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal>();
        }
        return ha_global;
    }

    if(child_yang_name == "ha-neighbors")
    {
        if(ha_neighbors == nullptr)
        {
            ha_neighbors = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors>();
        }
        return ha_neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ha_global != nullptr)
    {
        _children["ha-global"] = ha_global;
    }

    if(ha_neighbors != nullptr)
    {
        _children["ha-neighbors"] = ha_neighbors;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ha-global" || name == "ha-neighbors")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::HaGlobal()
    :
    init_sync(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync>())
{
    init_sync->parent = this;

    yang_name = "ha-global"; yang_parent_name = "ha-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::~HaGlobal()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::has_data() const
{
    if (is_presence_container) return true;
    return (init_sync !=  nullptr && init_sync->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::has_operation() const
{
    return is_set(yfilter)
	|| (init_sync !=  nullptr && init_sync->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "init-sync")
    {
        if(init_sync == nullptr)
        {
            init_sync = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync>();
        }
        return init_sync;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(init_sync != nullptr)
    {
        _children["init-sync"] = init_sync;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "init-sync")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::InitSync()
    :
    nsr_cfged{YType::boolean, "nsr-cfged"},
    nsr_synced{YType::boolean, "nsr-synced"},
    init_sync_start{YType::uint32, "init-sync-start"},
    init_sync_end{YType::uint32, "init-sync-end"},
    num_peers{YType::uint32, "num-peers"},
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    num_pfx{YType::uint32, "num-pfx"},
    num_lbl{YType::uint32, "num-lbl"},
    num_lcl_addr_wd{YType::uint32, "num-lcl-addr-wd"},
    num_lbl_adv{YType::uint32, "num-lbl-adv"},
    ipc_msg_tx_cnt{YType::uint32, "ipc-msg-tx-cnt"},
    ipc_msg_tx_bytes{YType::uint32, "ipc-msg-tx-bytes"},
    ipc_msg_rx_cnt{YType::uint32, "ipc-msg-rx-cnt"},
    ipc_msg_rx_bytes{YType::uint32, "ipc-msg-rx-bytes"},
    ipc_max_tx_batch_bytes{YType::uint32, "ipc-max-tx-batch-bytes"},
    ipc_max_rx_batch_bytes{YType::uint32, "ipc-max-rx-batch-bytes"},
    ipc_tx_fail_cnt{YType::uint32, "ipc-tx-fail-cnt"},
    total_ipc_tx_fail_cnt{YType::uint32, "total-ipc-tx-fail-cnt"},
    ipc_restart_cnt{YType::uint32, "ipc-restart-cnt"},
    ipc_default_mtu{YType::uint32, "ipc-default-mtu"},
    ipc_exceeded_mtu_msg_cnt{YType::uint32, "ipc-exceeded-mtu-msg-cnt"}
{

    yang_name = "init-sync"; yang_parent_name = "ha-global"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::~InitSync()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::has_data() const
{
    if (is_presence_container) return true;
    return nsr_cfged.is_set
	|| nsr_synced.is_set
	|| init_sync_start.is_set
	|| init_sync_end.is_set
	|| num_peers.is_set
	|| num_cap_sent.is_set
	|| num_cap_rcvd.is_set
	|| num_pfx.is_set
	|| num_lbl.is_set
	|| num_lcl_addr_wd.is_set
	|| num_lbl_adv.is_set
	|| ipc_msg_tx_cnt.is_set
	|| ipc_msg_tx_bytes.is_set
	|| ipc_msg_rx_cnt.is_set
	|| ipc_msg_rx_bytes.is_set
	|| ipc_max_tx_batch_bytes.is_set
	|| ipc_max_rx_batch_bytes.is_set
	|| ipc_tx_fail_cnt.is_set
	|| total_ipc_tx_fail_cnt.is_set
	|| ipc_restart_cnt.is_set
	|| ipc_default_mtu.is_set
	|| ipc_exceeded_mtu_msg_cnt.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_cfged.yfilter)
	|| ydk::is_set(nsr_synced.yfilter)
	|| ydk::is_set(init_sync_start.yfilter)
	|| ydk::is_set(init_sync_end.yfilter)
	|| ydk::is_set(num_peers.yfilter)
	|| ydk::is_set(num_cap_sent.yfilter)
	|| ydk::is_set(num_cap_rcvd.yfilter)
	|| ydk::is_set(num_pfx.yfilter)
	|| ydk::is_set(num_lbl.yfilter)
	|| ydk::is_set(num_lcl_addr_wd.yfilter)
	|| ydk::is_set(num_lbl_adv.yfilter)
	|| ydk::is_set(ipc_msg_tx_cnt.yfilter)
	|| ydk::is_set(ipc_msg_tx_bytes.yfilter)
	|| ydk::is_set(ipc_msg_rx_cnt.yfilter)
	|| ydk::is_set(ipc_msg_rx_bytes.yfilter)
	|| ydk::is_set(ipc_max_tx_batch_bytes.yfilter)
	|| ydk::is_set(ipc_max_rx_batch_bytes.yfilter)
	|| ydk::is_set(ipc_tx_fail_cnt.yfilter)
	|| ydk::is_set(total_ipc_tx_fail_cnt.yfilter)
	|| ydk::is_set(ipc_restart_cnt.yfilter)
	|| ydk::is_set(ipc_default_mtu.yfilter)
	|| ydk::is_set(ipc_exceeded_mtu_msg_cnt.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-sync";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_cfged.is_set || is_set(nsr_cfged.yfilter)) leaf_name_data.push_back(nsr_cfged.get_name_leafdata());
    if (nsr_synced.is_set || is_set(nsr_synced.yfilter)) leaf_name_data.push_back(nsr_synced.get_name_leafdata());
    if (init_sync_start.is_set || is_set(init_sync_start.yfilter)) leaf_name_data.push_back(init_sync_start.get_name_leafdata());
    if (init_sync_end.is_set || is_set(init_sync_end.yfilter)) leaf_name_data.push_back(init_sync_end.get_name_leafdata());
    if (num_peers.is_set || is_set(num_peers.yfilter)) leaf_name_data.push_back(num_peers.get_name_leafdata());
    if (num_cap_sent.is_set || is_set(num_cap_sent.yfilter)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.yfilter)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (num_pfx.is_set || is_set(num_pfx.yfilter)) leaf_name_data.push_back(num_pfx.get_name_leafdata());
    if (num_lbl.is_set || is_set(num_lbl.yfilter)) leaf_name_data.push_back(num_lbl.get_name_leafdata());
    if (num_lcl_addr_wd.is_set || is_set(num_lcl_addr_wd.yfilter)) leaf_name_data.push_back(num_lcl_addr_wd.get_name_leafdata());
    if (num_lbl_adv.is_set || is_set(num_lbl_adv.yfilter)) leaf_name_data.push_back(num_lbl_adv.get_name_leafdata());
    if (ipc_msg_tx_cnt.is_set || is_set(ipc_msg_tx_cnt.yfilter)) leaf_name_data.push_back(ipc_msg_tx_cnt.get_name_leafdata());
    if (ipc_msg_tx_bytes.is_set || is_set(ipc_msg_tx_bytes.yfilter)) leaf_name_data.push_back(ipc_msg_tx_bytes.get_name_leafdata());
    if (ipc_msg_rx_cnt.is_set || is_set(ipc_msg_rx_cnt.yfilter)) leaf_name_data.push_back(ipc_msg_rx_cnt.get_name_leafdata());
    if (ipc_msg_rx_bytes.is_set || is_set(ipc_msg_rx_bytes.yfilter)) leaf_name_data.push_back(ipc_msg_rx_bytes.get_name_leafdata());
    if (ipc_max_tx_batch_bytes.is_set || is_set(ipc_max_tx_batch_bytes.yfilter)) leaf_name_data.push_back(ipc_max_tx_batch_bytes.get_name_leafdata());
    if (ipc_max_rx_batch_bytes.is_set || is_set(ipc_max_rx_batch_bytes.yfilter)) leaf_name_data.push_back(ipc_max_rx_batch_bytes.get_name_leafdata());
    if (ipc_tx_fail_cnt.is_set || is_set(ipc_tx_fail_cnt.yfilter)) leaf_name_data.push_back(ipc_tx_fail_cnt.get_name_leafdata());
    if (total_ipc_tx_fail_cnt.is_set || is_set(total_ipc_tx_fail_cnt.yfilter)) leaf_name_data.push_back(total_ipc_tx_fail_cnt.get_name_leafdata());
    if (ipc_restart_cnt.is_set || is_set(ipc_restart_cnt.yfilter)) leaf_name_data.push_back(ipc_restart_cnt.get_name_leafdata());
    if (ipc_default_mtu.is_set || is_set(ipc_default_mtu.yfilter)) leaf_name_data.push_back(ipc_default_mtu.get_name_leafdata());
    if (ipc_exceeded_mtu_msg_cnt.is_set || is_set(ipc_exceeded_mtu_msg_cnt.yfilter)) leaf_name_data.push_back(ipc_exceeded_mtu_msg_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-cfged")
    {
        nsr_cfged = value;
        nsr_cfged.value_namespace = name_space;
        nsr_cfged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-synced")
    {
        nsr_synced = value;
        nsr_synced.value_namespace = name_space;
        nsr_synced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sync-start")
    {
        init_sync_start = value;
        init_sync_start.value_namespace = name_space;
        init_sync_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sync-end")
    {
        init_sync_end = value;
        init_sync_end.value_namespace = name_space;
        init_sync_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-peers")
    {
        num_peers = value;
        num_peers.value_namespace = name_space;
        num_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
        num_cap_sent.value_namespace = name_space;
        num_cap_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
        num_cap_rcvd.value_namespace = name_space;
        num_cap_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-pfx")
    {
        num_pfx = value;
        num_pfx.value_namespace = name_space;
        num_pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-lbl")
    {
        num_lbl = value;
        num_lbl.value_namespace = name_space;
        num_lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-lcl-addr-wd")
    {
        num_lcl_addr_wd = value;
        num_lcl_addr_wd.value_namespace = name_space;
        num_lcl_addr_wd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-lbl-adv")
    {
        num_lbl_adv = value;
        num_lbl_adv.value_namespace = name_space;
        num_lbl_adv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-msg-tx-cnt")
    {
        ipc_msg_tx_cnt = value;
        ipc_msg_tx_cnt.value_namespace = name_space;
        ipc_msg_tx_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-msg-tx-bytes")
    {
        ipc_msg_tx_bytes = value;
        ipc_msg_tx_bytes.value_namespace = name_space;
        ipc_msg_tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-msg-rx-cnt")
    {
        ipc_msg_rx_cnt = value;
        ipc_msg_rx_cnt.value_namespace = name_space;
        ipc_msg_rx_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-msg-rx-bytes")
    {
        ipc_msg_rx_bytes = value;
        ipc_msg_rx_bytes.value_namespace = name_space;
        ipc_msg_rx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-max-tx-batch-bytes")
    {
        ipc_max_tx_batch_bytes = value;
        ipc_max_tx_batch_bytes.value_namespace = name_space;
        ipc_max_tx_batch_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-max-rx-batch-bytes")
    {
        ipc_max_rx_batch_bytes = value;
        ipc_max_rx_batch_bytes.value_namespace = name_space;
        ipc_max_rx_batch_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-tx-fail-cnt")
    {
        ipc_tx_fail_cnt = value;
        ipc_tx_fail_cnt.value_namespace = name_space;
        ipc_tx_fail_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-ipc-tx-fail-cnt")
    {
        total_ipc_tx_fail_cnt = value;
        total_ipc_tx_fail_cnt.value_namespace = name_space;
        total_ipc_tx_fail_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-restart-cnt")
    {
        ipc_restart_cnt = value;
        ipc_restart_cnt.value_namespace = name_space;
        ipc_restart_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-default-mtu")
    {
        ipc_default_mtu = value;
        ipc_default_mtu.value_namespace = name_space;
        ipc_default_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-exceeded-mtu-msg-cnt")
    {
        ipc_exceeded_mtu_msg_cnt = value;
        ipc_exceeded_mtu_msg_cnt.value_namespace = name_space;
        ipc_exceeded_mtu_msg_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-cfged")
    {
        nsr_cfged.yfilter = yfilter;
    }
    if(value_path == "nsr-synced")
    {
        nsr_synced.yfilter = yfilter;
    }
    if(value_path == "init-sync-start")
    {
        init_sync_start.yfilter = yfilter;
    }
    if(value_path == "init-sync-end")
    {
        init_sync_end.yfilter = yfilter;
    }
    if(value_path == "num-peers")
    {
        num_peers.yfilter = yfilter;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent.yfilter = yfilter;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd.yfilter = yfilter;
    }
    if(value_path == "num-pfx")
    {
        num_pfx.yfilter = yfilter;
    }
    if(value_path == "num-lbl")
    {
        num_lbl.yfilter = yfilter;
    }
    if(value_path == "num-lcl-addr-wd")
    {
        num_lcl_addr_wd.yfilter = yfilter;
    }
    if(value_path == "num-lbl-adv")
    {
        num_lbl_adv.yfilter = yfilter;
    }
    if(value_path == "ipc-msg-tx-cnt")
    {
        ipc_msg_tx_cnt.yfilter = yfilter;
    }
    if(value_path == "ipc-msg-tx-bytes")
    {
        ipc_msg_tx_bytes.yfilter = yfilter;
    }
    if(value_path == "ipc-msg-rx-cnt")
    {
        ipc_msg_rx_cnt.yfilter = yfilter;
    }
    if(value_path == "ipc-msg-rx-bytes")
    {
        ipc_msg_rx_bytes.yfilter = yfilter;
    }
    if(value_path == "ipc-max-tx-batch-bytes")
    {
        ipc_max_tx_batch_bytes.yfilter = yfilter;
    }
    if(value_path == "ipc-max-rx-batch-bytes")
    {
        ipc_max_rx_batch_bytes.yfilter = yfilter;
    }
    if(value_path == "ipc-tx-fail-cnt")
    {
        ipc_tx_fail_cnt.yfilter = yfilter;
    }
    if(value_path == "total-ipc-tx-fail-cnt")
    {
        total_ipc_tx_fail_cnt.yfilter = yfilter;
    }
    if(value_path == "ipc-restart-cnt")
    {
        ipc_restart_cnt.yfilter = yfilter;
    }
    if(value_path == "ipc-default-mtu")
    {
        ipc_default_mtu.yfilter = yfilter;
    }
    if(value_path == "ipc-exceeded-mtu-msg-cnt")
    {
        ipc_exceeded_mtu_msg_cnt.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-cfged" || name == "nsr-synced" || name == "init-sync-start" || name == "init-sync-end" || name == "num-peers" || name == "num-cap-sent" || name == "num-cap-rcvd" || name == "num-pfx" || name == "num-lbl" || name == "num-lcl-addr-wd" || name == "num-lbl-adv" || name == "ipc-msg-tx-cnt" || name == "ipc-msg-tx-bytes" || name == "ipc-msg-rx-cnt" || name == "ipc-msg-rx-bytes" || name == "ipc-max-tx-batch-bytes" || name == "ipc-max-rx-batch-bytes" || name == "ipc-tx-fail-cnt" || name == "total-ipc-tx-fail-cnt" || name == "ipc-restart-cnt" || name == "ipc-default-mtu" || name == "ipc-exceeded-mtu-msg-cnt")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbors()
    :
    ha_neighbor(this, {})
{

    yang_name = "ha-neighbors"; yang_parent_name = "ha-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::~HaNeighbors()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ha_neighbor.len(); index++)
    {
        if(ha_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::has_operation() const
{
    for (std::size_t index=0; index<ha_neighbor.len(); index++)
    {
        if(ha_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ha-neighbor")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor>();
        ent_->parent = this;
        ha_neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ha_neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ha-neighbor")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::HaNeighbor()
    :
    lsr_id{YType::str, "lsr-id"},
    label_space_id{YType::uint32, "label-space-id"},
    lsr_id_xr{YType::uint32, "lsr-id-xr"},
    lbl_spc_id{YType::uint16, "lbl-spc-id"},
    nsr_sync_state{YType::int32, "nsr-sync-state"},
    num_msg{YType::uint32, "num-msg"}
        ,
    init_sync_info(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo>())
    , steady_state_sync_info(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo>())
{
    init_sync_info->parent = this;
    steady_state_sync_info->parent = this;

    yang_name = "ha-neighbor"; yang_parent_name = "ha-neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::~HaNeighbor()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return lsr_id.is_set
	|| label_space_id.is_set
	|| lsr_id_xr.is_set
	|| lbl_spc_id.is_set
	|| nsr_sync_state.is_set
	|| num_msg.is_set
	|| (init_sync_info !=  nullptr && init_sync_info->has_data())
	|| (steady_state_sync_info !=  nullptr && steady_state_sync_info->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(lsr_id_xr.yfilter)
	|| ydk::is_set(lbl_spc_id.yfilter)
	|| ydk::is_set(nsr_sync_state.yfilter)
	|| ydk::is_set(num_msg.yfilter)
	|| (init_sync_info !=  nullptr && init_sync_info->has_operation())
	|| (steady_state_sync_info !=  nullptr && steady_state_sync_info->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-neighbor";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id_xr.is_set || is_set(lsr_id_xr.yfilter)) leaf_name_data.push_back(lsr_id_xr.get_name_leafdata());
    if (lbl_spc_id.is_set || is_set(lbl_spc_id.yfilter)) leaf_name_data.push_back(lbl_spc_id.get_name_leafdata());
    if (nsr_sync_state.is_set || is_set(nsr_sync_state.yfilter)) leaf_name_data.push_back(nsr_sync_state.get_name_leafdata());
    if (num_msg.is_set || is_set(num_msg.yfilter)) leaf_name_data.push_back(num_msg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "init-sync-info")
    {
        if(init_sync_info == nullptr)
        {
            init_sync_info = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo>();
        }
        return init_sync_info;
    }

    if(child_yang_name == "steady-state-sync-info")
    {
        if(steady_state_sync_info == nullptr)
        {
            steady_state_sync_info = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo>();
        }
        return steady_state_sync_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(init_sync_info != nullptr)
    {
        _children["init-sync-info"] = init_sync_info;
    }

    if(steady_state_sync_info != nullptr)
    {
        _children["steady-state-sync-info"] = steady_state_sync_info;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-id-xr")
    {
        lsr_id_xr = value;
        lsr_id_xr.value_namespace = name_space;
        lsr_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbl-spc-id")
    {
        lbl_spc_id = value;
        lbl_spc_id.value_namespace = name_space;
        lbl_spc_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sync-state")
    {
        nsr_sync_state = value;
        nsr_sync_state.value_namespace = name_space;
        nsr_sync_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-msg")
    {
        num_msg = value;
        num_msg.value_namespace = name_space;
        num_msg.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "lsr-id-xr")
    {
        lsr_id_xr.yfilter = yfilter;
    }
    if(value_path == "lbl-spc-id")
    {
        lbl_spc_id.yfilter = yfilter;
    }
    if(value_path == "nsr-sync-state")
    {
        nsr_sync_state.yfilter = yfilter;
    }
    if(value_path == "num-msg")
    {
        num_msg.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "init-sync-info" || name == "steady-state-sync-info" || name == "lsr-id" || name == "label-space-id" || name == "lsr-id-xr" || name == "lbl-spc-id" || name == "nsr-sync-state" || name == "num-msg")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::InitSyncInfo()
    :
    init_sync_start{YType::uint32, "init-sync-start"},
    init_sync_end{YType::uint32, "init-sync-end"},
    num_addr{YType::uint32, "num-addr"},
    num_duplicate_addr{YType::uint32, "num-duplicate-addr"},
    num_rx_bytes{YType::uint32, "num-rx-bytes"},
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    num_lbl{YType::uint32, "num-lbl"},
    num_app_bytes{YType::uint32, "num-app-bytes"}
{

    yang_name = "init-sync-info"; yang_parent_name = "ha-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::~InitSyncInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::has_data() const
{
    if (is_presence_container) return true;
    return init_sync_start.is_set
	|| init_sync_end.is_set
	|| num_addr.is_set
	|| num_duplicate_addr.is_set
	|| num_rx_bytes.is_set
	|| num_cap_sent.is_set
	|| num_cap_rcvd.is_set
	|| num_lbl.is_set
	|| num_app_bytes.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(init_sync_start.yfilter)
	|| ydk::is_set(init_sync_end.yfilter)
	|| ydk::is_set(num_addr.yfilter)
	|| ydk::is_set(num_duplicate_addr.yfilter)
	|| ydk::is_set(num_rx_bytes.yfilter)
	|| ydk::is_set(num_cap_sent.yfilter)
	|| ydk::is_set(num_cap_rcvd.yfilter)
	|| ydk::is_set(num_lbl.yfilter)
	|| ydk::is_set(num_app_bytes.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-sync-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (init_sync_start.is_set || is_set(init_sync_start.yfilter)) leaf_name_data.push_back(init_sync_start.get_name_leafdata());
    if (init_sync_end.is_set || is_set(init_sync_end.yfilter)) leaf_name_data.push_back(init_sync_end.get_name_leafdata());
    if (num_addr.is_set || is_set(num_addr.yfilter)) leaf_name_data.push_back(num_addr.get_name_leafdata());
    if (num_duplicate_addr.is_set || is_set(num_duplicate_addr.yfilter)) leaf_name_data.push_back(num_duplicate_addr.get_name_leafdata());
    if (num_rx_bytes.is_set || is_set(num_rx_bytes.yfilter)) leaf_name_data.push_back(num_rx_bytes.get_name_leafdata());
    if (num_cap_sent.is_set || is_set(num_cap_sent.yfilter)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.yfilter)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (num_lbl.is_set || is_set(num_lbl.yfilter)) leaf_name_data.push_back(num_lbl.get_name_leafdata());
    if (num_app_bytes.is_set || is_set(num_app_bytes.yfilter)) leaf_name_data.push_back(num_app_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "init-sync-start")
    {
        init_sync_start = value;
        init_sync_start.value_namespace = name_space;
        init_sync_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sync-end")
    {
        init_sync_end = value;
        init_sync_end.value_namespace = name_space;
        init_sync_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-addr")
    {
        num_addr = value;
        num_addr.value_namespace = name_space;
        num_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-duplicate-addr")
    {
        num_duplicate_addr = value;
        num_duplicate_addr.value_namespace = name_space;
        num_duplicate_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-rx-bytes")
    {
        num_rx_bytes = value;
        num_rx_bytes.value_namespace = name_space;
        num_rx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
        num_cap_sent.value_namespace = name_space;
        num_cap_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
        num_cap_rcvd.value_namespace = name_space;
        num_cap_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-lbl")
    {
        num_lbl = value;
        num_lbl.value_namespace = name_space;
        num_lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-app-bytes")
    {
        num_app_bytes = value;
        num_app_bytes.value_namespace = name_space;
        num_app_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "init-sync-start")
    {
        init_sync_start.yfilter = yfilter;
    }
    if(value_path == "init-sync-end")
    {
        init_sync_end.yfilter = yfilter;
    }
    if(value_path == "num-addr")
    {
        num_addr.yfilter = yfilter;
    }
    if(value_path == "num-duplicate-addr")
    {
        num_duplicate_addr.yfilter = yfilter;
    }
    if(value_path == "num-rx-bytes")
    {
        num_rx_bytes.yfilter = yfilter;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent.yfilter = yfilter;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd.yfilter = yfilter;
    }
    if(value_path == "num-lbl")
    {
        num_lbl.yfilter = yfilter;
    }
    if(value_path == "num-app-bytes")
    {
        num_app_bytes.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "init-sync-start" || name == "init-sync-end" || name == "num-addr" || name == "num-duplicate-addr" || name == "num-rx-bytes" || name == "num-cap-sent" || name == "num-cap-rcvd" || name == "num-lbl" || name == "num-app-bytes")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::SteadyStateSyncInfo()
    :
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    rem_lbl_wd{YType::uint32, "rem-lbl-wd"},
    rem_lbl_rq{YType::uint32, "rem-lbl-rq"},
    num_stdby_adj_join{YType::uint32, "num-stdby-adj-join"},
    num_stdby_adj_leave{YType::uint32, "num-stdby-adj-leave"}
{

    yang_name = "steady-state-sync-info"; yang_parent_name = "ha-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::~SteadyStateSyncInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_data() const
{
    if (is_presence_container) return true;
    return num_cap_sent.is_set
	|| num_cap_rcvd.is_set
	|| rem_lbl_wd.is_set
	|| rem_lbl_rq.is_set
	|| num_stdby_adj_join.is_set
	|| num_stdby_adj_leave.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_cap_sent.yfilter)
	|| ydk::is_set(num_cap_rcvd.yfilter)
	|| ydk::is_set(rem_lbl_wd.yfilter)
	|| ydk::is_set(rem_lbl_rq.yfilter)
	|| ydk::is_set(num_stdby_adj_join.yfilter)
	|| ydk::is_set(num_stdby_adj_leave.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "steady-state-sync-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_cap_sent.is_set || is_set(num_cap_sent.yfilter)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.yfilter)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (rem_lbl_wd.is_set || is_set(rem_lbl_wd.yfilter)) leaf_name_data.push_back(rem_lbl_wd.get_name_leafdata());
    if (rem_lbl_rq.is_set || is_set(rem_lbl_rq.yfilter)) leaf_name_data.push_back(rem_lbl_rq.get_name_leafdata());
    if (num_stdby_adj_join.is_set || is_set(num_stdby_adj_join.yfilter)) leaf_name_data.push_back(num_stdby_adj_join.get_name_leafdata());
    if (num_stdby_adj_leave.is_set || is_set(num_stdby_adj_leave.yfilter)) leaf_name_data.push_back(num_stdby_adj_leave.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
        num_cap_sent.value_namespace = name_space;
        num_cap_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
        num_cap_rcvd.value_namespace = name_space;
        num_cap_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-lbl-wd")
    {
        rem_lbl_wd = value;
        rem_lbl_wd.value_namespace = name_space;
        rem_lbl_wd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-lbl-rq")
    {
        rem_lbl_rq = value;
        rem_lbl_rq.value_namespace = name_space;
        rem_lbl_rq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-stdby-adj-join")
    {
        num_stdby_adj_join = value;
        num_stdby_adj_join.value_namespace = name_space;
        num_stdby_adj_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-stdby-adj-leave")
    {
        num_stdby_adj_leave = value;
        num_stdby_adj_leave.value_namespace = name_space;
        num_stdby_adj_leave.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-cap-sent")
    {
        num_cap_sent.yfilter = yfilter;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd.yfilter = yfilter;
    }
    if(value_path == "rem-lbl-wd")
    {
        rem_lbl_wd.yfilter = yfilter;
    }
    if(value_path == "rem-lbl-rq")
    {
        rem_lbl_rq.yfilter = yfilter;
    }
    if(value_path == "num-stdby-adj-join")
    {
        num_stdby_adj_join.yfilter = yfilter;
    }
    if(value_path == "num-stdby-adj-leave")
    {
        num_stdby_adj_leave.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-cap-sent" || name == "num-cap-rcvd" || name == "rem-lbl-wd" || name == "rem-lbl-rq" || name == "num-stdby-adj-join" || name == "num-stdby-adj-leave")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::Parameters()
    :
    role_is_active{YType::boolean, "role-is-active"},
    global_md5_password_enabled{YType::boolean, "global-md5-password-enabled"},
    protocol_version{YType::uint32, "protocol-version"},
    router_id{YType::str, "router-id"},
    keepalive_interval{YType::uint32, "keepalive-interval"},
    hello_hold_time{YType::uint32, "hello-hold-time"},
    hello_interval{YType::uint32, "hello-interval"},
    targeted_hello_hold_time{YType::uint32, "targeted-hello-hold-time"},
    targeted_hello_interval{YType::uint32, "targeted-hello-interval"},
    session_hold_time{YType::uint32, "session-hold-time"},
    housekeeping_timer_interval{YType::uint32, "housekeeping-timer-interval"},
    le_no_route_timeout{YType::uint32, "le-no-route-timeout"},
    ldp_recovery_timeout{YType::uint32, "ldp-recovery-timeout"},
    af_binding_withdraw_delay{YType::uint32, "af-binding-withdraw-delay"},
    max_intf_attached{YType::uint32, "max-intf-attached"},
    max_intf_te{YType::uint32, "max-intf-te"},
    max_peer{YType::uint32, "max-peer"},
    ldp_out_of_mem_state{YType::uint32, "ldp-out-of-mem-state"},
    nsr_enabled{YType::boolean, "nsr-enabled"},
    nsr_synced{YType::boolean, "nsr-synced"},
    igp_sync_delay_time_for_interface{YType::uint32, "igp-sync-delay-time-for-interface"},
    igp_sync_delay_time_on_restart{YType::uint32, "igp-sync-delay-time-on-restart"},
    global_discovery_quick_start_disabled{YType::boolean, "global-discovery-quick-start-disabled"},
    discovery_quick_start_disabled_on_interfaces{YType::boolean, "discovery-quick-start-disabled-on-interfaces"}
        ,
    graceful_restart_information(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation>())
    , address_family_parameter(this, {})
{
    graceful_restart_information->parent = this;

    yang_name = "parameters"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::~Parameters()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address_family_parameter.len(); index++)
    {
        if(address_family_parameter[index]->has_data())
            return true;
    }
    return role_is_active.is_set
	|| global_md5_password_enabled.is_set
	|| protocol_version.is_set
	|| router_id.is_set
	|| keepalive_interval.is_set
	|| hello_hold_time.is_set
	|| hello_interval.is_set
	|| targeted_hello_hold_time.is_set
	|| targeted_hello_interval.is_set
	|| session_hold_time.is_set
	|| housekeeping_timer_interval.is_set
	|| le_no_route_timeout.is_set
	|| ldp_recovery_timeout.is_set
	|| af_binding_withdraw_delay.is_set
	|| max_intf_attached.is_set
	|| max_intf_te.is_set
	|| max_peer.is_set
	|| ldp_out_of_mem_state.is_set
	|| nsr_enabled.is_set
	|| nsr_synced.is_set
	|| igp_sync_delay_time_for_interface.is_set
	|| igp_sync_delay_time_on_restart.is_set
	|| global_discovery_quick_start_disabled.is_set
	|| discovery_quick_start_disabled_on_interfaces.is_set
	|| (graceful_restart_information !=  nullptr && graceful_restart_information->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::has_operation() const
{
    for (std::size_t index=0; index<address_family_parameter.len(); index++)
    {
        if(address_family_parameter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(role_is_active.yfilter)
	|| ydk::is_set(global_md5_password_enabled.yfilter)
	|| ydk::is_set(protocol_version.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(keepalive_interval.yfilter)
	|| ydk::is_set(hello_hold_time.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(targeted_hello_hold_time.yfilter)
	|| ydk::is_set(targeted_hello_interval.yfilter)
	|| ydk::is_set(session_hold_time.yfilter)
	|| ydk::is_set(housekeeping_timer_interval.yfilter)
	|| ydk::is_set(le_no_route_timeout.yfilter)
	|| ydk::is_set(ldp_recovery_timeout.yfilter)
	|| ydk::is_set(af_binding_withdraw_delay.yfilter)
	|| ydk::is_set(max_intf_attached.yfilter)
	|| ydk::is_set(max_intf_te.yfilter)
	|| ydk::is_set(max_peer.yfilter)
	|| ydk::is_set(ldp_out_of_mem_state.yfilter)
	|| ydk::is_set(nsr_enabled.yfilter)
	|| ydk::is_set(nsr_synced.yfilter)
	|| ydk::is_set(igp_sync_delay_time_for_interface.yfilter)
	|| ydk::is_set(igp_sync_delay_time_on_restart.yfilter)
	|| ydk::is_set(global_discovery_quick_start_disabled.yfilter)
	|| ydk::is_set(discovery_quick_start_disabled_on_interfaces.yfilter)
	|| (graceful_restart_information !=  nullptr && graceful_restart_information->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role_is_active.is_set || is_set(role_is_active.yfilter)) leaf_name_data.push_back(role_is_active.get_name_leafdata());
    if (global_md5_password_enabled.is_set || is_set(global_md5_password_enabled.yfilter)) leaf_name_data.push_back(global_md5_password_enabled.get_name_leafdata());
    if (protocol_version.is_set || is_set(protocol_version.yfilter)) leaf_name_data.push_back(protocol_version.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (hello_hold_time.is_set || is_set(hello_hold_time.yfilter)) leaf_name_data.push_back(hello_hold_time.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (targeted_hello_hold_time.is_set || is_set(targeted_hello_hold_time.yfilter)) leaf_name_data.push_back(targeted_hello_hold_time.get_name_leafdata());
    if (targeted_hello_interval.is_set || is_set(targeted_hello_interval.yfilter)) leaf_name_data.push_back(targeted_hello_interval.get_name_leafdata());
    if (session_hold_time.is_set || is_set(session_hold_time.yfilter)) leaf_name_data.push_back(session_hold_time.get_name_leafdata());
    if (housekeeping_timer_interval.is_set || is_set(housekeeping_timer_interval.yfilter)) leaf_name_data.push_back(housekeeping_timer_interval.get_name_leafdata());
    if (le_no_route_timeout.is_set || is_set(le_no_route_timeout.yfilter)) leaf_name_data.push_back(le_no_route_timeout.get_name_leafdata());
    if (ldp_recovery_timeout.is_set || is_set(ldp_recovery_timeout.yfilter)) leaf_name_data.push_back(ldp_recovery_timeout.get_name_leafdata());
    if (af_binding_withdraw_delay.is_set || is_set(af_binding_withdraw_delay.yfilter)) leaf_name_data.push_back(af_binding_withdraw_delay.get_name_leafdata());
    if (max_intf_attached.is_set || is_set(max_intf_attached.yfilter)) leaf_name_data.push_back(max_intf_attached.get_name_leafdata());
    if (max_intf_te.is_set || is_set(max_intf_te.yfilter)) leaf_name_data.push_back(max_intf_te.get_name_leafdata());
    if (max_peer.is_set || is_set(max_peer.yfilter)) leaf_name_data.push_back(max_peer.get_name_leafdata());
    if (ldp_out_of_mem_state.is_set || is_set(ldp_out_of_mem_state.yfilter)) leaf_name_data.push_back(ldp_out_of_mem_state.get_name_leafdata());
    if (nsr_enabled.is_set || is_set(nsr_enabled.yfilter)) leaf_name_data.push_back(nsr_enabled.get_name_leafdata());
    if (nsr_synced.is_set || is_set(nsr_synced.yfilter)) leaf_name_data.push_back(nsr_synced.get_name_leafdata());
    if (igp_sync_delay_time_for_interface.is_set || is_set(igp_sync_delay_time_for_interface.yfilter)) leaf_name_data.push_back(igp_sync_delay_time_for_interface.get_name_leafdata());
    if (igp_sync_delay_time_on_restart.is_set || is_set(igp_sync_delay_time_on_restart.yfilter)) leaf_name_data.push_back(igp_sync_delay_time_on_restart.get_name_leafdata());
    if (global_discovery_quick_start_disabled.is_set || is_set(global_discovery_quick_start_disabled.yfilter)) leaf_name_data.push_back(global_discovery_quick_start_disabled.get_name_leafdata());
    if (discovery_quick_start_disabled_on_interfaces.is_set || is_set(discovery_quick_start_disabled_on_interfaces.yfilter)) leaf_name_data.push_back(discovery_quick_start_disabled_on_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-restart-information")
    {
        if(graceful_restart_information == nullptr)
        {
            graceful_restart_information = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation>();
        }
        return graceful_restart_information;
    }

    if(child_yang_name == "address-family-parameter")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter>();
        ent_->parent = this;
        address_family_parameter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(graceful_restart_information != nullptr)
    {
        _children["graceful-restart-information"] = graceful_restart_information;
    }

    count_ = 0;
    for (auto ent_ : address_family_parameter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role-is-active")
    {
        role_is_active = value;
        role_is_active.value_namespace = name_space;
        role_is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-md5-password-enabled")
    {
        global_md5_password_enabled = value;
        global_md5_password_enabled.value_namespace = name_space;
        global_md5_password_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-version")
    {
        protocol_version = value;
        protocol_version.value_namespace = name_space;
        protocol_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-hold-time")
    {
        hello_hold_time = value;
        hello_hold_time.value_namespace = name_space;
        hello_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "targeted-hello-hold-time")
    {
        targeted_hello_hold_time = value;
        targeted_hello_hold_time.value_namespace = name_space;
        targeted_hello_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "targeted-hello-interval")
    {
        targeted_hello_interval = value;
        targeted_hello_interval.value_namespace = name_space;
        targeted_hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-hold-time")
    {
        session_hold_time = value;
        session_hold_time.value_namespace = name_space;
        session_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "housekeeping-timer-interval")
    {
        housekeeping_timer_interval = value;
        housekeeping_timer_interval.value_namespace = name_space;
        housekeeping_timer_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le-no-route-timeout")
    {
        le_no_route_timeout = value;
        le_no_route_timeout.value_namespace = name_space;
        le_no_route_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-recovery-timeout")
    {
        ldp_recovery_timeout = value;
        ldp_recovery_timeout.value_namespace = name_space;
        ldp_recovery_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-binding-withdraw-delay")
    {
        af_binding_withdraw_delay = value;
        af_binding_withdraw_delay.value_namespace = name_space;
        af_binding_withdraw_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-intf-attached")
    {
        max_intf_attached = value;
        max_intf_attached.value_namespace = name_space;
        max_intf_attached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-intf-te")
    {
        max_intf_te = value;
        max_intf_te.value_namespace = name_space;
        max_intf_te.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-peer")
    {
        max_peer = value;
        max_peer.value_namespace = name_space;
        max_peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-out-of-mem-state")
    {
        ldp_out_of_mem_state = value;
        ldp_out_of_mem_state.value_namespace = name_space;
        ldp_out_of_mem_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-enabled")
    {
        nsr_enabled = value;
        nsr_enabled.value_namespace = name_space;
        nsr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-synced")
    {
        nsr_synced = value;
        nsr_synced.value_namespace = name_space;
        nsr_synced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-sync-delay-time-for-interface")
    {
        igp_sync_delay_time_for_interface = value;
        igp_sync_delay_time_for_interface.value_namespace = name_space;
        igp_sync_delay_time_for_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-sync-delay-time-on-restart")
    {
        igp_sync_delay_time_on_restart = value;
        igp_sync_delay_time_on_restart.value_namespace = name_space;
        igp_sync_delay_time_on_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-discovery-quick-start-disabled")
    {
        global_discovery_quick_start_disabled = value;
        global_discovery_quick_start_disabled.value_namespace = name_space;
        global_discovery_quick_start_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discovery-quick-start-disabled-on-interfaces")
    {
        discovery_quick_start_disabled_on_interfaces = value;
        discovery_quick_start_disabled_on_interfaces.value_namespace = name_space;
        discovery_quick_start_disabled_on_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role-is-active")
    {
        role_is_active.yfilter = yfilter;
    }
    if(value_path == "global-md5-password-enabled")
    {
        global_md5_password_enabled.yfilter = yfilter;
    }
    if(value_path == "protocol-version")
    {
        protocol_version.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "hello-hold-time")
    {
        hello_hold_time.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "targeted-hello-hold-time")
    {
        targeted_hello_hold_time.yfilter = yfilter;
    }
    if(value_path == "targeted-hello-interval")
    {
        targeted_hello_interval.yfilter = yfilter;
    }
    if(value_path == "session-hold-time")
    {
        session_hold_time.yfilter = yfilter;
    }
    if(value_path == "housekeeping-timer-interval")
    {
        housekeeping_timer_interval.yfilter = yfilter;
    }
    if(value_path == "le-no-route-timeout")
    {
        le_no_route_timeout.yfilter = yfilter;
    }
    if(value_path == "ldp-recovery-timeout")
    {
        ldp_recovery_timeout.yfilter = yfilter;
    }
    if(value_path == "af-binding-withdraw-delay")
    {
        af_binding_withdraw_delay.yfilter = yfilter;
    }
    if(value_path == "max-intf-attached")
    {
        max_intf_attached.yfilter = yfilter;
    }
    if(value_path == "max-intf-te")
    {
        max_intf_te.yfilter = yfilter;
    }
    if(value_path == "max-peer")
    {
        max_peer.yfilter = yfilter;
    }
    if(value_path == "ldp-out-of-mem-state")
    {
        ldp_out_of_mem_state.yfilter = yfilter;
    }
    if(value_path == "nsr-enabled")
    {
        nsr_enabled.yfilter = yfilter;
    }
    if(value_path == "nsr-synced")
    {
        nsr_synced.yfilter = yfilter;
    }
    if(value_path == "igp-sync-delay-time-for-interface")
    {
        igp_sync_delay_time_for_interface.yfilter = yfilter;
    }
    if(value_path == "igp-sync-delay-time-on-restart")
    {
        igp_sync_delay_time_on_restart.yfilter = yfilter;
    }
    if(value_path == "global-discovery-quick-start-disabled")
    {
        global_discovery_quick_start_disabled.yfilter = yfilter;
    }
    if(value_path == "discovery-quick-start-disabled-on-interfaces")
    {
        discovery_quick_start_disabled_on_interfaces.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-restart-information" || name == "address-family-parameter" || name == "role-is-active" || name == "global-md5-password-enabled" || name == "protocol-version" || name == "router-id" || name == "keepalive-interval" || name == "hello-hold-time" || name == "hello-interval" || name == "targeted-hello-hold-time" || name == "targeted-hello-interval" || name == "session-hold-time" || name == "housekeeping-timer-interval" || name == "le-no-route-timeout" || name == "ldp-recovery-timeout" || name == "af-binding-withdraw-delay" || name == "max-intf-attached" || name == "max-intf-te" || name == "max-peer" || name == "ldp-out-of-mem-state" || name == "nsr-enabled" || name == "nsr-synced" || name == "igp-sync-delay-time-for-interface" || name == "igp-sync-delay-time-on-restart" || name == "global-discovery-quick-start-disabled" || name == "discovery-quick-start-disabled-on-interfaces")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation::GracefulRestartInformation()
    :
    is_graceful_restart_configured{YType::boolean, "is-graceful-restart-configured"},
    graceful_restart_reconnect_timeout{YType::uint32, "graceful-restart-reconnect-timeout"},
    graceful_restart_forwarding_state_hold_time{YType::uint32, "graceful-restart-forwarding-state-hold-time"}
{

    yang_name = "graceful-restart-information"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation::~GracefulRestartInformation()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation::has_data() const
{
    if (is_presence_container) return true;
    return is_graceful_restart_configured.is_set
	|| graceful_restart_reconnect_timeout.is_set
	|| graceful_restart_forwarding_state_hold_time.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_graceful_restart_configured.yfilter)
	|| ydk::is_set(graceful_restart_reconnect_timeout.yfilter)
	|| ydk::is_set(graceful_restart_forwarding_state_hold_time.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_graceful_restart_configured.is_set || is_set(is_graceful_restart_configured.yfilter)) leaf_name_data.push_back(is_graceful_restart_configured.get_name_leafdata());
    if (graceful_restart_reconnect_timeout.is_set || is_set(graceful_restart_reconnect_timeout.yfilter)) leaf_name_data.push_back(graceful_restart_reconnect_timeout.get_name_leafdata());
    if (graceful_restart_forwarding_state_hold_time.is_set || is_set(graceful_restart_forwarding_state_hold_time.yfilter)) leaf_name_data.push_back(graceful_restart_forwarding_state_hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-graceful-restart-configured")
    {
        is_graceful_restart_configured = value;
        is_graceful_restart_configured.value_namespace = name_space;
        is_graceful_restart_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-restart-reconnect-timeout")
    {
        graceful_restart_reconnect_timeout = value;
        graceful_restart_reconnect_timeout.value_namespace = name_space;
        graceful_restart_reconnect_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-restart-forwarding-state-hold-time")
    {
        graceful_restart_forwarding_state_hold_time = value;
        graceful_restart_forwarding_state_hold_time.value_namespace = name_space;
        graceful_restart_forwarding_state_hold_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-graceful-restart-configured")
    {
        is_graceful_restart_configured.yfilter = yfilter;
    }
    if(value_path == "graceful-restart-reconnect-timeout")
    {
        graceful_restart_reconnect_timeout.yfilter = yfilter;
    }
    if(value_path == "graceful-restart-forwarding-state-hold-time")
    {
        graceful_restart_forwarding_state_hold_time.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-graceful-restart-configured" || name == "graceful-restart-reconnect-timeout" || name == "graceful-restart-forwarding-state-hold-time")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::AddressFamilyParameter()
    :
    address_family{YType::enumeration, "address-family"},
    null_label{YType::str, "null-label"},
    label_imp_null_override_acl{YType::str, "label-imp-null-override-acl"},
    is_accepting_targeted_hellos{YType::boolean, "is-accepting-targeted-hellos"},
    targeted_hello_acl{YType::str, "targeted-hello-acl"}
        ,
    discovery_transport_address(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress>())
{
    discovery_transport_address->parent = this;

    yang_name = "address-family-parameter"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::~AddressFamilyParameter()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| null_label.is_set
	|| label_imp_null_override_acl.is_set
	|| is_accepting_targeted_hellos.is_set
	|| targeted_hello_acl.is_set
	|| (discovery_transport_address !=  nullptr && discovery_transport_address->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(null_label.yfilter)
	|| ydk::is_set(label_imp_null_override_acl.yfilter)
	|| ydk::is_set(is_accepting_targeted_hellos.yfilter)
	|| ydk::is_set(targeted_hello_acl.yfilter)
	|| (discovery_transport_address !=  nullptr && discovery_transport_address->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-parameter";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (null_label.is_set || is_set(null_label.yfilter)) leaf_name_data.push_back(null_label.get_name_leafdata());
    if (label_imp_null_override_acl.is_set || is_set(label_imp_null_override_acl.yfilter)) leaf_name_data.push_back(label_imp_null_override_acl.get_name_leafdata());
    if (is_accepting_targeted_hellos.is_set || is_set(is_accepting_targeted_hellos.yfilter)) leaf_name_data.push_back(is_accepting_targeted_hellos.get_name_leafdata());
    if (targeted_hello_acl.is_set || is_set(targeted_hello_acl.yfilter)) leaf_name_data.push_back(targeted_hello_acl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery-transport-address")
    {
        if(discovery_transport_address == nullptr)
        {
            discovery_transport_address = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress>();
        }
        return discovery_transport_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(discovery_transport_address != nullptr)
    {
        _children["discovery-transport-address"] = discovery_transport_address;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null-label")
    {
        null_label = value;
        null_label.value_namespace = name_space;
        null_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-imp-null-override-acl")
    {
        label_imp_null_override_acl = value;
        label_imp_null_override_acl.value_namespace = name_space;
        label_imp_null_override_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-accepting-targeted-hellos")
    {
        is_accepting_targeted_hellos = value;
        is_accepting_targeted_hellos.value_namespace = name_space;
        is_accepting_targeted_hellos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "targeted-hello-acl")
    {
        targeted_hello_acl = value;
        targeted_hello_acl.value_namespace = name_space;
        targeted_hello_acl.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "null-label")
    {
        null_label.yfilter = yfilter;
    }
    if(value_path == "label-imp-null-override-acl")
    {
        label_imp_null_override_acl.yfilter = yfilter;
    }
    if(value_path == "is-accepting-targeted-hellos")
    {
        is_accepting_targeted_hellos.yfilter = yfilter;
    }
    if(value_path == "targeted-hello-acl")
    {
        targeted_hello_acl.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovery-transport-address" || name == "address-family" || name == "null-label" || name == "label-imp-null-override-acl" || name == "is-accepting-targeted-hellos" || name == "targeted-hello-acl")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::DiscoveryTransportAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "discovery-transport-address"; yang_parent_name = "address-family-parameter"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::~DiscoveryTransportAddress()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery-transport-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::Issu()
    :
    ha_summary(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary>())
    , ha_statistics(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics>())
{
    ha_summary->parent = this;
    ha_statistics->parent = this;

    yang_name = "issu"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::~Issu()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::has_data() const
{
    if (is_presence_container) return true;
    return (ha_summary !=  nullptr && ha_summary->has_data())
	|| (ha_statistics !=  nullptr && ha_statistics->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::has_operation() const
{
    return is_set(yfilter)
	|| (ha_summary !=  nullptr && ha_summary->has_operation())
	|| (ha_statistics !=  nullptr && ha_statistics->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Issu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ha-summary")
    {
        if(ha_summary == nullptr)
        {
            ha_summary = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary>();
        }
        return ha_summary;
    }

    if(child_yang_name == "ha-statistics")
    {
        if(ha_statistics == nullptr)
        {
            ha_statistics = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics>();
        }
        return ha_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ha_summary != nullptr)
    {
        _children["ha-summary"] = ha_summary;
    }

    if(ha_statistics != nullptr)
    {
        _children["ha-statistics"] = ha_statistics;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ha-summary" || name == "ha-statistics")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::HaSummary()
    :
    vrf(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Vrf_>())
    , sessions(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Sessions>())
{
    vrf->parent = this;
    sessions->parent = this;

    yang_name = "ha-summary"; yang_parent_name = "issu"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::~HaSummary()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::has_data() const
{
    if (is_presence_container) return true;
    return (vrf !=  nullptr && vrf->has_data())
	|| (sessions !=  nullptr && sessions->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::has_operation() const
{
    return is_set(yfilter)
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Vrf_>();
        }
        return vrf;
    }

    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Sessions>();
        }
        return sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    if(sessions != nullptr)
    {
        _children["sessions"] = sessions;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "sessions")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Vrf_::Vrf_()
    :
    name{YType::str, "name"},
    id{YType::uint32, "id"}
{

    yang_name = "vrf"; yang_parent_name = "ha-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Vrf_::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| id.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "id")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Sessions::Sessions()
    :
    total{YType::uint32, "total"},
    nsr_eligible{YType::uint32, "nsr-eligible"},
    nsr_state_none{YType::uint32, "nsr-state-none"},
    nsr_state_wait{YType::uint32, "nsr-state-wait"},
    nsr_state_ready{YType::uint32, "nsr-state-ready"},
    nsr_state_prepare{YType::uint32, "nsr-state-prepare"},
    nsr_state_app_wait{YType::uint32, "nsr-state-app-wait"},
    nsr_state_operational{YType::uint32, "nsr-state-operational"},
    nsr_state_tcp_phase1{YType::uint32, "nsr-state-tcp-phase1"},
    nsr_state_tcp_phase2{YType::uint32, "nsr-state-tcp-phase2"}
{

    yang_name = "sessions"; yang_parent_name = "ha-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Sessions::~Sessions()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Sessions::has_data() const
{
    if (is_presence_container) return true;
    return total.is_set
	|| nsr_eligible.is_set
	|| nsr_state_none.is_set
	|| nsr_state_wait.is_set
	|| nsr_state_ready.is_set
	|| nsr_state_prepare.is_set
	|| nsr_state_app_wait.is_set
	|| nsr_state_operational.is_set
	|| nsr_state_tcp_phase1.is_set
	|| nsr_state_tcp_phase2.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Sessions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total.yfilter)
	|| ydk::is_set(nsr_eligible.yfilter)
	|| ydk::is_set(nsr_state_none.yfilter)
	|| ydk::is_set(nsr_state_wait.yfilter)
	|| ydk::is_set(nsr_state_ready.yfilter)
	|| ydk::is_set(nsr_state_prepare.yfilter)
	|| ydk::is_set(nsr_state_app_wait.yfilter)
	|| ydk::is_set(nsr_state_operational.yfilter)
	|| ydk::is_set(nsr_state_tcp_phase1.yfilter)
	|| ydk::is_set(nsr_state_tcp_phase2.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());
    if (nsr_eligible.is_set || is_set(nsr_eligible.yfilter)) leaf_name_data.push_back(nsr_eligible.get_name_leafdata());
    if (nsr_state_none.is_set || is_set(nsr_state_none.yfilter)) leaf_name_data.push_back(nsr_state_none.get_name_leafdata());
    if (nsr_state_wait.is_set || is_set(nsr_state_wait.yfilter)) leaf_name_data.push_back(nsr_state_wait.get_name_leafdata());
    if (nsr_state_ready.is_set || is_set(nsr_state_ready.yfilter)) leaf_name_data.push_back(nsr_state_ready.get_name_leafdata());
    if (nsr_state_prepare.is_set || is_set(nsr_state_prepare.yfilter)) leaf_name_data.push_back(nsr_state_prepare.get_name_leafdata());
    if (nsr_state_app_wait.is_set || is_set(nsr_state_app_wait.yfilter)) leaf_name_data.push_back(nsr_state_app_wait.get_name_leafdata());
    if (nsr_state_operational.is_set || is_set(nsr_state_operational.yfilter)) leaf_name_data.push_back(nsr_state_operational.get_name_leafdata());
    if (nsr_state_tcp_phase1.is_set || is_set(nsr_state_tcp_phase1.yfilter)) leaf_name_data.push_back(nsr_state_tcp_phase1.get_name_leafdata());
    if (nsr_state_tcp_phase2.is_set || is_set(nsr_state_tcp_phase2.yfilter)) leaf_name_data.push_back(nsr_state_tcp_phase2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-eligible")
    {
        nsr_eligible = value;
        nsr_eligible.value_namespace = name_space;
        nsr_eligible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-none")
    {
        nsr_state_none = value;
        nsr_state_none.value_namespace = name_space;
        nsr_state_none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-wait")
    {
        nsr_state_wait = value;
        nsr_state_wait.value_namespace = name_space;
        nsr_state_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-ready")
    {
        nsr_state_ready = value;
        nsr_state_ready.value_namespace = name_space;
        nsr_state_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-prepare")
    {
        nsr_state_prepare = value;
        nsr_state_prepare.value_namespace = name_space;
        nsr_state_prepare.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-app-wait")
    {
        nsr_state_app_wait = value;
        nsr_state_app_wait.value_namespace = name_space;
        nsr_state_app_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-operational")
    {
        nsr_state_operational = value;
        nsr_state_operational.value_namespace = name_space;
        nsr_state_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-tcp-phase1")
    {
        nsr_state_tcp_phase1 = value;
        nsr_state_tcp_phase1.value_namespace = name_space;
        nsr_state_tcp_phase1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-tcp-phase2")
    {
        nsr_state_tcp_phase2 = value;
        nsr_state_tcp_phase2.value_namespace = name_space;
        nsr_state_tcp_phase2.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
    if(value_path == "nsr-eligible")
    {
        nsr_eligible.yfilter = yfilter;
    }
    if(value_path == "nsr-state-none")
    {
        nsr_state_none.yfilter = yfilter;
    }
    if(value_path == "nsr-state-wait")
    {
        nsr_state_wait.yfilter = yfilter;
    }
    if(value_path == "nsr-state-ready")
    {
        nsr_state_ready.yfilter = yfilter;
    }
    if(value_path == "nsr-state-prepare")
    {
        nsr_state_prepare.yfilter = yfilter;
    }
    if(value_path == "nsr-state-app-wait")
    {
        nsr_state_app_wait.yfilter = yfilter;
    }
    if(value_path == "nsr-state-operational")
    {
        nsr_state_operational.yfilter = yfilter;
    }
    if(value_path == "nsr-state-tcp-phase1")
    {
        nsr_state_tcp_phase1.yfilter = yfilter;
    }
    if(value_path == "nsr-state-tcp-phase2")
    {
        nsr_state_tcp_phase2.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total" || name == "nsr-eligible" || name == "nsr-state-none" || name == "nsr-state-wait" || name == "nsr-state-ready" || name == "nsr-state-prepare" || name == "nsr-state-app-wait" || name == "nsr-state-operational" || name == "nsr-state-tcp-phase1" || name == "nsr-state-tcp-phase2")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaStatistics()
    :
    ha_global(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal>())
    , ha_neighbors(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors>())
{
    ha_global->parent = this;
    ha_neighbors->parent = this;

    yang_name = "ha-statistics"; yang_parent_name = "issu"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::~HaStatistics()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::has_data() const
{
    if (is_presence_container) return true;
    return (ha_global !=  nullptr && ha_global->has_data())
	|| (ha_neighbors !=  nullptr && ha_neighbors->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (ha_global !=  nullptr && ha_global->has_operation())
	|| (ha_neighbors !=  nullptr && ha_neighbors->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ha-global")
    {
        if(ha_global == nullptr)
        {
            ha_global = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal>();
        }
        return ha_global;
    }

    if(child_yang_name == "ha-neighbors")
    {
        if(ha_neighbors == nullptr)
        {
            ha_neighbors = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors>();
        }
        return ha_neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ha_global != nullptr)
    {
        _children["ha-global"] = ha_global;
    }

    if(ha_neighbors != nullptr)
    {
        _children["ha-neighbors"] = ha_neighbors;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ha-global" || name == "ha-neighbors")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::HaGlobal()
    :
    init_sync(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync>())
{
    init_sync->parent = this;

    yang_name = "ha-global"; yang_parent_name = "ha-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::~HaGlobal()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::has_data() const
{
    if (is_presence_container) return true;
    return (init_sync !=  nullptr && init_sync->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::has_operation() const
{
    return is_set(yfilter)
	|| (init_sync !=  nullptr && init_sync->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "init-sync")
    {
        if(init_sync == nullptr)
        {
            init_sync = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync>();
        }
        return init_sync;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(init_sync != nullptr)
    {
        _children["init-sync"] = init_sync;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "init-sync")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync::InitSync()
    :
    nsr_cfged{YType::boolean, "nsr-cfged"},
    nsr_synced{YType::boolean, "nsr-synced"},
    init_sync_start{YType::uint32, "init-sync-start"},
    init_sync_end{YType::uint32, "init-sync-end"},
    num_peers{YType::uint32, "num-peers"},
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    num_pfx{YType::uint32, "num-pfx"},
    num_lbl{YType::uint32, "num-lbl"},
    num_lcl_addr_wd{YType::uint32, "num-lcl-addr-wd"},
    num_lbl_adv{YType::uint32, "num-lbl-adv"},
    ipc_msg_tx_cnt{YType::uint32, "ipc-msg-tx-cnt"},
    ipc_msg_tx_bytes{YType::uint32, "ipc-msg-tx-bytes"},
    ipc_msg_rx_cnt{YType::uint32, "ipc-msg-rx-cnt"},
    ipc_msg_rx_bytes{YType::uint32, "ipc-msg-rx-bytes"},
    ipc_max_tx_batch_bytes{YType::uint32, "ipc-max-tx-batch-bytes"},
    ipc_max_rx_batch_bytes{YType::uint32, "ipc-max-rx-batch-bytes"},
    ipc_tx_fail_cnt{YType::uint32, "ipc-tx-fail-cnt"},
    total_ipc_tx_fail_cnt{YType::uint32, "total-ipc-tx-fail-cnt"},
    ipc_restart_cnt{YType::uint32, "ipc-restart-cnt"},
    ipc_default_mtu{YType::uint32, "ipc-default-mtu"},
    ipc_exceeded_mtu_msg_cnt{YType::uint32, "ipc-exceeded-mtu-msg-cnt"}
{

    yang_name = "init-sync"; yang_parent_name = "ha-global"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync::~InitSync()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync::has_data() const
{
    if (is_presence_container) return true;
    return nsr_cfged.is_set
	|| nsr_synced.is_set
	|| init_sync_start.is_set
	|| init_sync_end.is_set
	|| num_peers.is_set
	|| num_cap_sent.is_set
	|| num_cap_rcvd.is_set
	|| num_pfx.is_set
	|| num_lbl.is_set
	|| num_lcl_addr_wd.is_set
	|| num_lbl_adv.is_set
	|| ipc_msg_tx_cnt.is_set
	|| ipc_msg_tx_bytes.is_set
	|| ipc_msg_rx_cnt.is_set
	|| ipc_msg_rx_bytes.is_set
	|| ipc_max_tx_batch_bytes.is_set
	|| ipc_max_rx_batch_bytes.is_set
	|| ipc_tx_fail_cnt.is_set
	|| total_ipc_tx_fail_cnt.is_set
	|| ipc_restart_cnt.is_set
	|| ipc_default_mtu.is_set
	|| ipc_exceeded_mtu_msg_cnt.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_cfged.yfilter)
	|| ydk::is_set(nsr_synced.yfilter)
	|| ydk::is_set(init_sync_start.yfilter)
	|| ydk::is_set(init_sync_end.yfilter)
	|| ydk::is_set(num_peers.yfilter)
	|| ydk::is_set(num_cap_sent.yfilter)
	|| ydk::is_set(num_cap_rcvd.yfilter)
	|| ydk::is_set(num_pfx.yfilter)
	|| ydk::is_set(num_lbl.yfilter)
	|| ydk::is_set(num_lcl_addr_wd.yfilter)
	|| ydk::is_set(num_lbl_adv.yfilter)
	|| ydk::is_set(ipc_msg_tx_cnt.yfilter)
	|| ydk::is_set(ipc_msg_tx_bytes.yfilter)
	|| ydk::is_set(ipc_msg_rx_cnt.yfilter)
	|| ydk::is_set(ipc_msg_rx_bytes.yfilter)
	|| ydk::is_set(ipc_max_tx_batch_bytes.yfilter)
	|| ydk::is_set(ipc_max_rx_batch_bytes.yfilter)
	|| ydk::is_set(ipc_tx_fail_cnt.yfilter)
	|| ydk::is_set(total_ipc_tx_fail_cnt.yfilter)
	|| ydk::is_set(ipc_restart_cnt.yfilter)
	|| ydk::is_set(ipc_default_mtu.yfilter)
	|| ydk::is_set(ipc_exceeded_mtu_msg_cnt.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-sync";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_cfged.is_set || is_set(nsr_cfged.yfilter)) leaf_name_data.push_back(nsr_cfged.get_name_leafdata());
    if (nsr_synced.is_set || is_set(nsr_synced.yfilter)) leaf_name_data.push_back(nsr_synced.get_name_leafdata());
    if (init_sync_start.is_set || is_set(init_sync_start.yfilter)) leaf_name_data.push_back(init_sync_start.get_name_leafdata());
    if (init_sync_end.is_set || is_set(init_sync_end.yfilter)) leaf_name_data.push_back(init_sync_end.get_name_leafdata());
    if (num_peers.is_set || is_set(num_peers.yfilter)) leaf_name_data.push_back(num_peers.get_name_leafdata());
    if (num_cap_sent.is_set || is_set(num_cap_sent.yfilter)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.yfilter)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (num_pfx.is_set || is_set(num_pfx.yfilter)) leaf_name_data.push_back(num_pfx.get_name_leafdata());
    if (num_lbl.is_set || is_set(num_lbl.yfilter)) leaf_name_data.push_back(num_lbl.get_name_leafdata());
    if (num_lcl_addr_wd.is_set || is_set(num_lcl_addr_wd.yfilter)) leaf_name_data.push_back(num_lcl_addr_wd.get_name_leafdata());
    if (num_lbl_adv.is_set || is_set(num_lbl_adv.yfilter)) leaf_name_data.push_back(num_lbl_adv.get_name_leafdata());
    if (ipc_msg_tx_cnt.is_set || is_set(ipc_msg_tx_cnt.yfilter)) leaf_name_data.push_back(ipc_msg_tx_cnt.get_name_leafdata());
    if (ipc_msg_tx_bytes.is_set || is_set(ipc_msg_tx_bytes.yfilter)) leaf_name_data.push_back(ipc_msg_tx_bytes.get_name_leafdata());
    if (ipc_msg_rx_cnt.is_set || is_set(ipc_msg_rx_cnt.yfilter)) leaf_name_data.push_back(ipc_msg_rx_cnt.get_name_leafdata());
    if (ipc_msg_rx_bytes.is_set || is_set(ipc_msg_rx_bytes.yfilter)) leaf_name_data.push_back(ipc_msg_rx_bytes.get_name_leafdata());
    if (ipc_max_tx_batch_bytes.is_set || is_set(ipc_max_tx_batch_bytes.yfilter)) leaf_name_data.push_back(ipc_max_tx_batch_bytes.get_name_leafdata());
    if (ipc_max_rx_batch_bytes.is_set || is_set(ipc_max_rx_batch_bytes.yfilter)) leaf_name_data.push_back(ipc_max_rx_batch_bytes.get_name_leafdata());
    if (ipc_tx_fail_cnt.is_set || is_set(ipc_tx_fail_cnt.yfilter)) leaf_name_data.push_back(ipc_tx_fail_cnt.get_name_leafdata());
    if (total_ipc_tx_fail_cnt.is_set || is_set(total_ipc_tx_fail_cnt.yfilter)) leaf_name_data.push_back(total_ipc_tx_fail_cnt.get_name_leafdata());
    if (ipc_restart_cnt.is_set || is_set(ipc_restart_cnt.yfilter)) leaf_name_data.push_back(ipc_restart_cnt.get_name_leafdata());
    if (ipc_default_mtu.is_set || is_set(ipc_default_mtu.yfilter)) leaf_name_data.push_back(ipc_default_mtu.get_name_leafdata());
    if (ipc_exceeded_mtu_msg_cnt.is_set || is_set(ipc_exceeded_mtu_msg_cnt.yfilter)) leaf_name_data.push_back(ipc_exceeded_mtu_msg_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-cfged")
    {
        nsr_cfged = value;
        nsr_cfged.value_namespace = name_space;
        nsr_cfged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-synced")
    {
        nsr_synced = value;
        nsr_synced.value_namespace = name_space;
        nsr_synced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sync-start")
    {
        init_sync_start = value;
        init_sync_start.value_namespace = name_space;
        init_sync_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sync-end")
    {
        init_sync_end = value;
        init_sync_end.value_namespace = name_space;
        init_sync_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-peers")
    {
        num_peers = value;
        num_peers.value_namespace = name_space;
        num_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
        num_cap_sent.value_namespace = name_space;
        num_cap_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
        num_cap_rcvd.value_namespace = name_space;
        num_cap_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-pfx")
    {
        num_pfx = value;
        num_pfx.value_namespace = name_space;
        num_pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-lbl")
    {
        num_lbl = value;
        num_lbl.value_namespace = name_space;
        num_lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-lcl-addr-wd")
    {
        num_lcl_addr_wd = value;
        num_lcl_addr_wd.value_namespace = name_space;
        num_lcl_addr_wd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-lbl-adv")
    {
        num_lbl_adv = value;
        num_lbl_adv.value_namespace = name_space;
        num_lbl_adv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-msg-tx-cnt")
    {
        ipc_msg_tx_cnt = value;
        ipc_msg_tx_cnt.value_namespace = name_space;
        ipc_msg_tx_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-msg-tx-bytes")
    {
        ipc_msg_tx_bytes = value;
        ipc_msg_tx_bytes.value_namespace = name_space;
        ipc_msg_tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-msg-rx-cnt")
    {
        ipc_msg_rx_cnt = value;
        ipc_msg_rx_cnt.value_namespace = name_space;
        ipc_msg_rx_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-msg-rx-bytes")
    {
        ipc_msg_rx_bytes = value;
        ipc_msg_rx_bytes.value_namespace = name_space;
        ipc_msg_rx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-max-tx-batch-bytes")
    {
        ipc_max_tx_batch_bytes = value;
        ipc_max_tx_batch_bytes.value_namespace = name_space;
        ipc_max_tx_batch_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-max-rx-batch-bytes")
    {
        ipc_max_rx_batch_bytes = value;
        ipc_max_rx_batch_bytes.value_namespace = name_space;
        ipc_max_rx_batch_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-tx-fail-cnt")
    {
        ipc_tx_fail_cnt = value;
        ipc_tx_fail_cnt.value_namespace = name_space;
        ipc_tx_fail_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-ipc-tx-fail-cnt")
    {
        total_ipc_tx_fail_cnt = value;
        total_ipc_tx_fail_cnt.value_namespace = name_space;
        total_ipc_tx_fail_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-restart-cnt")
    {
        ipc_restart_cnt = value;
        ipc_restart_cnt.value_namespace = name_space;
        ipc_restart_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-default-mtu")
    {
        ipc_default_mtu = value;
        ipc_default_mtu.value_namespace = name_space;
        ipc_default_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-exceeded-mtu-msg-cnt")
    {
        ipc_exceeded_mtu_msg_cnt = value;
        ipc_exceeded_mtu_msg_cnt.value_namespace = name_space;
        ipc_exceeded_mtu_msg_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-cfged")
    {
        nsr_cfged.yfilter = yfilter;
    }
    if(value_path == "nsr-synced")
    {
        nsr_synced.yfilter = yfilter;
    }
    if(value_path == "init-sync-start")
    {
        init_sync_start.yfilter = yfilter;
    }
    if(value_path == "init-sync-end")
    {
        init_sync_end.yfilter = yfilter;
    }
    if(value_path == "num-peers")
    {
        num_peers.yfilter = yfilter;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent.yfilter = yfilter;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd.yfilter = yfilter;
    }
    if(value_path == "num-pfx")
    {
        num_pfx.yfilter = yfilter;
    }
    if(value_path == "num-lbl")
    {
        num_lbl.yfilter = yfilter;
    }
    if(value_path == "num-lcl-addr-wd")
    {
        num_lcl_addr_wd.yfilter = yfilter;
    }
    if(value_path == "num-lbl-adv")
    {
        num_lbl_adv.yfilter = yfilter;
    }
    if(value_path == "ipc-msg-tx-cnt")
    {
        ipc_msg_tx_cnt.yfilter = yfilter;
    }
    if(value_path == "ipc-msg-tx-bytes")
    {
        ipc_msg_tx_bytes.yfilter = yfilter;
    }
    if(value_path == "ipc-msg-rx-cnt")
    {
        ipc_msg_rx_cnt.yfilter = yfilter;
    }
    if(value_path == "ipc-msg-rx-bytes")
    {
        ipc_msg_rx_bytes.yfilter = yfilter;
    }
    if(value_path == "ipc-max-tx-batch-bytes")
    {
        ipc_max_tx_batch_bytes.yfilter = yfilter;
    }
    if(value_path == "ipc-max-rx-batch-bytes")
    {
        ipc_max_rx_batch_bytes.yfilter = yfilter;
    }
    if(value_path == "ipc-tx-fail-cnt")
    {
        ipc_tx_fail_cnt.yfilter = yfilter;
    }
    if(value_path == "total-ipc-tx-fail-cnt")
    {
        total_ipc_tx_fail_cnt.yfilter = yfilter;
    }
    if(value_path == "ipc-restart-cnt")
    {
        ipc_restart_cnt.yfilter = yfilter;
    }
    if(value_path == "ipc-default-mtu")
    {
        ipc_default_mtu.yfilter = yfilter;
    }
    if(value_path == "ipc-exceeded-mtu-msg-cnt")
    {
        ipc_exceeded_mtu_msg_cnt.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-cfged" || name == "nsr-synced" || name == "init-sync-start" || name == "init-sync-end" || name == "num-peers" || name == "num-cap-sent" || name == "num-cap-rcvd" || name == "num-pfx" || name == "num-lbl" || name == "num-lcl-addr-wd" || name == "num-lbl-adv" || name == "ipc-msg-tx-cnt" || name == "ipc-msg-tx-bytes" || name == "ipc-msg-rx-cnt" || name == "ipc-msg-rx-bytes" || name == "ipc-max-tx-batch-bytes" || name == "ipc-max-rx-batch-bytes" || name == "ipc-tx-fail-cnt" || name == "total-ipc-tx-fail-cnt" || name == "ipc-restart-cnt" || name == "ipc-default-mtu" || name == "ipc-exceeded-mtu-msg-cnt")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbors()
    :
    ha_neighbor(this, {})
{

    yang_name = "ha-neighbors"; yang_parent_name = "ha-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::~HaNeighbors()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ha_neighbor.len(); index++)
    {
        if(ha_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::has_operation() const
{
    for (std::size_t index=0; index<ha_neighbor.len(); index++)
    {
        if(ha_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ha-neighbor")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor>();
        ent_->parent = this;
        ha_neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ha_neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ha-neighbor")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::HaNeighbor()
    :
    lsr_id{YType::str, "lsr-id"},
    label_space_id{YType::uint32, "label-space-id"},
    lsr_id_xr{YType::uint32, "lsr-id-xr"},
    lbl_spc_id{YType::uint16, "lbl-spc-id"},
    nsr_sync_state{YType::int32, "nsr-sync-state"},
    num_msg{YType::uint32, "num-msg"}
        ,
    init_sync_info(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo>())
    , steady_state_sync_info(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo>())
{
    init_sync_info->parent = this;
    steady_state_sync_info->parent = this;

    yang_name = "ha-neighbor"; yang_parent_name = "ha-neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::~HaNeighbor()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return lsr_id.is_set
	|| label_space_id.is_set
	|| lsr_id_xr.is_set
	|| lbl_spc_id.is_set
	|| nsr_sync_state.is_set
	|| num_msg.is_set
	|| (init_sync_info !=  nullptr && init_sync_info->has_data())
	|| (steady_state_sync_info !=  nullptr && steady_state_sync_info->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(lsr_id_xr.yfilter)
	|| ydk::is_set(lbl_spc_id.yfilter)
	|| ydk::is_set(nsr_sync_state.yfilter)
	|| ydk::is_set(num_msg.yfilter)
	|| (init_sync_info !=  nullptr && init_sync_info->has_operation())
	|| (steady_state_sync_info !=  nullptr && steady_state_sync_info->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-neighbor";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id_xr.is_set || is_set(lsr_id_xr.yfilter)) leaf_name_data.push_back(lsr_id_xr.get_name_leafdata());
    if (lbl_spc_id.is_set || is_set(lbl_spc_id.yfilter)) leaf_name_data.push_back(lbl_spc_id.get_name_leafdata());
    if (nsr_sync_state.is_set || is_set(nsr_sync_state.yfilter)) leaf_name_data.push_back(nsr_sync_state.get_name_leafdata());
    if (num_msg.is_set || is_set(num_msg.yfilter)) leaf_name_data.push_back(num_msg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "init-sync-info")
    {
        if(init_sync_info == nullptr)
        {
            init_sync_info = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo>();
        }
        return init_sync_info;
    }

    if(child_yang_name == "steady-state-sync-info")
    {
        if(steady_state_sync_info == nullptr)
        {
            steady_state_sync_info = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo>();
        }
        return steady_state_sync_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(init_sync_info != nullptr)
    {
        _children["init-sync-info"] = init_sync_info;
    }

    if(steady_state_sync_info != nullptr)
    {
        _children["steady-state-sync-info"] = steady_state_sync_info;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-id-xr")
    {
        lsr_id_xr = value;
        lsr_id_xr.value_namespace = name_space;
        lsr_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbl-spc-id")
    {
        lbl_spc_id = value;
        lbl_spc_id.value_namespace = name_space;
        lbl_spc_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sync-state")
    {
        nsr_sync_state = value;
        nsr_sync_state.value_namespace = name_space;
        nsr_sync_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-msg")
    {
        num_msg = value;
        num_msg.value_namespace = name_space;
        num_msg.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "lsr-id-xr")
    {
        lsr_id_xr.yfilter = yfilter;
    }
    if(value_path == "lbl-spc-id")
    {
        lbl_spc_id.yfilter = yfilter;
    }
    if(value_path == "nsr-sync-state")
    {
        nsr_sync_state.yfilter = yfilter;
    }
    if(value_path == "num-msg")
    {
        num_msg.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "init-sync-info" || name == "steady-state-sync-info" || name == "lsr-id" || name == "label-space-id" || name == "lsr-id-xr" || name == "lbl-spc-id" || name == "nsr-sync-state" || name == "num-msg")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::InitSyncInfo()
    :
    init_sync_start{YType::uint32, "init-sync-start"},
    init_sync_end{YType::uint32, "init-sync-end"},
    num_addr{YType::uint32, "num-addr"},
    num_duplicate_addr{YType::uint32, "num-duplicate-addr"},
    num_rx_bytes{YType::uint32, "num-rx-bytes"},
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    num_lbl{YType::uint32, "num-lbl"},
    num_app_bytes{YType::uint32, "num-app-bytes"}
{

    yang_name = "init-sync-info"; yang_parent_name = "ha-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::~InitSyncInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::has_data() const
{
    if (is_presence_container) return true;
    return init_sync_start.is_set
	|| init_sync_end.is_set
	|| num_addr.is_set
	|| num_duplicate_addr.is_set
	|| num_rx_bytes.is_set
	|| num_cap_sent.is_set
	|| num_cap_rcvd.is_set
	|| num_lbl.is_set
	|| num_app_bytes.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(init_sync_start.yfilter)
	|| ydk::is_set(init_sync_end.yfilter)
	|| ydk::is_set(num_addr.yfilter)
	|| ydk::is_set(num_duplicate_addr.yfilter)
	|| ydk::is_set(num_rx_bytes.yfilter)
	|| ydk::is_set(num_cap_sent.yfilter)
	|| ydk::is_set(num_cap_rcvd.yfilter)
	|| ydk::is_set(num_lbl.yfilter)
	|| ydk::is_set(num_app_bytes.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-sync-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (init_sync_start.is_set || is_set(init_sync_start.yfilter)) leaf_name_data.push_back(init_sync_start.get_name_leafdata());
    if (init_sync_end.is_set || is_set(init_sync_end.yfilter)) leaf_name_data.push_back(init_sync_end.get_name_leafdata());
    if (num_addr.is_set || is_set(num_addr.yfilter)) leaf_name_data.push_back(num_addr.get_name_leafdata());
    if (num_duplicate_addr.is_set || is_set(num_duplicate_addr.yfilter)) leaf_name_data.push_back(num_duplicate_addr.get_name_leafdata());
    if (num_rx_bytes.is_set || is_set(num_rx_bytes.yfilter)) leaf_name_data.push_back(num_rx_bytes.get_name_leafdata());
    if (num_cap_sent.is_set || is_set(num_cap_sent.yfilter)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.yfilter)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (num_lbl.is_set || is_set(num_lbl.yfilter)) leaf_name_data.push_back(num_lbl.get_name_leafdata());
    if (num_app_bytes.is_set || is_set(num_app_bytes.yfilter)) leaf_name_data.push_back(num_app_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "init-sync-start")
    {
        init_sync_start = value;
        init_sync_start.value_namespace = name_space;
        init_sync_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sync-end")
    {
        init_sync_end = value;
        init_sync_end.value_namespace = name_space;
        init_sync_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-addr")
    {
        num_addr = value;
        num_addr.value_namespace = name_space;
        num_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-duplicate-addr")
    {
        num_duplicate_addr = value;
        num_duplicate_addr.value_namespace = name_space;
        num_duplicate_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-rx-bytes")
    {
        num_rx_bytes = value;
        num_rx_bytes.value_namespace = name_space;
        num_rx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
        num_cap_sent.value_namespace = name_space;
        num_cap_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
        num_cap_rcvd.value_namespace = name_space;
        num_cap_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-lbl")
    {
        num_lbl = value;
        num_lbl.value_namespace = name_space;
        num_lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-app-bytes")
    {
        num_app_bytes = value;
        num_app_bytes.value_namespace = name_space;
        num_app_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "init-sync-start")
    {
        init_sync_start.yfilter = yfilter;
    }
    if(value_path == "init-sync-end")
    {
        init_sync_end.yfilter = yfilter;
    }
    if(value_path == "num-addr")
    {
        num_addr.yfilter = yfilter;
    }
    if(value_path == "num-duplicate-addr")
    {
        num_duplicate_addr.yfilter = yfilter;
    }
    if(value_path == "num-rx-bytes")
    {
        num_rx_bytes.yfilter = yfilter;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent.yfilter = yfilter;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd.yfilter = yfilter;
    }
    if(value_path == "num-lbl")
    {
        num_lbl.yfilter = yfilter;
    }
    if(value_path == "num-app-bytes")
    {
        num_app_bytes.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "init-sync-start" || name == "init-sync-end" || name == "num-addr" || name == "num-duplicate-addr" || name == "num-rx-bytes" || name == "num-cap-sent" || name == "num-cap-rcvd" || name == "num-lbl" || name == "num-app-bytes")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::SteadyStateSyncInfo()
    :
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    rem_lbl_wd{YType::uint32, "rem-lbl-wd"},
    rem_lbl_rq{YType::uint32, "rem-lbl-rq"},
    num_stdby_adj_join{YType::uint32, "num-stdby-adj-join"},
    num_stdby_adj_leave{YType::uint32, "num-stdby-adj-leave"}
{

    yang_name = "steady-state-sync-info"; yang_parent_name = "ha-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::~SteadyStateSyncInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_data() const
{
    if (is_presence_container) return true;
    return num_cap_sent.is_set
	|| num_cap_rcvd.is_set
	|| rem_lbl_wd.is_set
	|| rem_lbl_rq.is_set
	|| num_stdby_adj_join.is_set
	|| num_stdby_adj_leave.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_cap_sent.yfilter)
	|| ydk::is_set(num_cap_rcvd.yfilter)
	|| ydk::is_set(rem_lbl_wd.yfilter)
	|| ydk::is_set(rem_lbl_rq.yfilter)
	|| ydk::is_set(num_stdby_adj_join.yfilter)
	|| ydk::is_set(num_stdby_adj_leave.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "steady-state-sync-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_cap_sent.is_set || is_set(num_cap_sent.yfilter)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.yfilter)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (rem_lbl_wd.is_set || is_set(rem_lbl_wd.yfilter)) leaf_name_data.push_back(rem_lbl_wd.get_name_leafdata());
    if (rem_lbl_rq.is_set || is_set(rem_lbl_rq.yfilter)) leaf_name_data.push_back(rem_lbl_rq.get_name_leafdata());
    if (num_stdby_adj_join.is_set || is_set(num_stdby_adj_join.yfilter)) leaf_name_data.push_back(num_stdby_adj_join.get_name_leafdata());
    if (num_stdby_adj_leave.is_set || is_set(num_stdby_adj_leave.yfilter)) leaf_name_data.push_back(num_stdby_adj_leave.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
        num_cap_sent.value_namespace = name_space;
        num_cap_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
        num_cap_rcvd.value_namespace = name_space;
        num_cap_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-lbl-wd")
    {
        rem_lbl_wd = value;
        rem_lbl_wd.value_namespace = name_space;
        rem_lbl_wd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-lbl-rq")
    {
        rem_lbl_rq = value;
        rem_lbl_rq.value_namespace = name_space;
        rem_lbl_rq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-stdby-adj-join")
    {
        num_stdby_adj_join = value;
        num_stdby_adj_join.value_namespace = name_space;
        num_stdby_adj_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-stdby-adj-leave")
    {
        num_stdby_adj_leave = value;
        num_stdby_adj_leave.value_namespace = name_space;
        num_stdby_adj_leave.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-cap-sent")
    {
        num_cap_sent.yfilter = yfilter;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd.yfilter = yfilter;
    }
    if(value_path == "rem-lbl-wd")
    {
        rem_lbl_wd.yfilter = yfilter;
    }
    if(value_path == "rem-lbl-rq")
    {
        rem_lbl_rq.yfilter = yfilter;
    }
    if(value_path == "num-stdby-adj-join")
    {
        num_stdby_adj_join.yfilter = yfilter;
    }
    if(value_path == "num-stdby-adj-leave")
    {
        num_stdby_adj_leave.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-cap-sent" || name == "num-cap-rcvd" || name == "rem-lbl-wd" || name == "rem-lbl-rq" || name == "num-stdby-adj-join" || name == "num-stdby-adj-leave")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapabilities()
    :
    neighbor_capability(this, {})
{

    yang_name = "neighbor-capabilities"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::~NeighborCapabilities()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_capability.len(); index++)
    {
        if(neighbor_capability[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::has_operation() const
{
    for (std::size_t index=0; index<neighbor_capability.len(); index++)
    {
        if(neighbor_capability[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-capabilities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-capability")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability>();
        ent_->parent = this;
        neighbor_capability.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor_capability.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-capability")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::NeighborCapability()
    :
    lsr_id{YType::str, "lsr-id"},
    label_space_id{YType::uint32, "label-space-id"}
        ,
    sent(this, {})
    , received(this, {})
{

    yang_name = "neighbor-capability"; yang_parent_name = "neighbor-capabilities"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::~NeighborCapability()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sent.len(); index++)
    {
        if(sent[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<received.len(); index++)
    {
        if(received[index]->has_data())
            return true;
    }
    return lsr_id.is_set
	|| label_space_id.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::has_operation() const
{
    for (std::size_t index=0; index<sent.len(); index++)
    {
        if(sent[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<received.len(); index++)
    {
        if(received[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(label_space_id.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-capability";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sent")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent>();
        ent_->parent = this;
        sent.append(ent_);
        return ent_;
    }

    if(child_yang_name == "received")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received>();
        ent_->parent = this;
        received.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sent.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : received.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent" || name == "received" || name == "lsr-id" || name == "label-space-id")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent::Sent()
    :
    type{YType::uint16, "type"},
    description{YType::str, "description"},
    capability_data_length{YType::uint16, "capability-data-length"},
    capability_data{YType::str, "capability-data"}
{

    yang_name = "sent"; yang_parent_name = "neighbor-capability"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent::~Sent()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| description.is_set
	|| capability_data_length.is_set
	|| capability_data.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(capability_data_length.yfilter)
	|| ydk::is_set(capability_data.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sent";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (capability_data_length.is_set || is_set(capability_data_length.yfilter)) leaf_name_data.push_back(capability_data_length.get_name_leafdata());
    if (capability_data.is_set || is_set(capability_data.yfilter)) leaf_name_data.push_back(capability_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length = value;
        capability_data_length.value_namespace = name_space;
        capability_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-data")
    {
        capability_data = value;
        capability_data.value_namespace = name_space;
        capability_data.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length.yfilter = yfilter;
    }
    if(value_path == "capability-data")
    {
        capability_data.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "description" || name == "capability-data-length" || name == "capability-data")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received::Received()
    :
    type{YType::uint16, "type"},
    description{YType::str, "description"},
    capability_data_length{YType::uint16, "capability-data-length"},
    capability_data{YType::str, "capability-data"}
{

    yang_name = "received"; yang_parent_name = "neighbor-capability"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received::~Received()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| description.is_set
	|| capability_data_length.is_set
	|| capability_data.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(capability_data_length.yfilter)
	|| ydk::is_set(capability_data.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (capability_data_length.is_set || is_set(capability_data_length.yfilter)) leaf_name_data.push_back(capability_data_length.get_name_leafdata());
    if (capability_data.is_set || is_set(capability_data.yfilter)) leaf_name_data.push_back(capability_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length = value;
        capability_data_length.value_namespace = name_space;
        capability_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-data")
    {
        capability_data = value;
        capability_data.value_namespace = name_space;
        capability_data.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length.yfilter = yfilter;
    }
    if(value_path == "capability-data")
    {
        capability_data.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "description" || name == "capability-data-length" || name == "capability-data")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbors()
    :
    neighbor(this, {})
{

    yang_name = "neighbors"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::~Neighbors()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::Neighbor()
    :
    lsr_id{YType::str, "lsr-id"},
    label_space_id{YType::uint32, "label-space-id"}
        ,
    protocol_information(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation>())
    , tcp_information(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation>())
    , detailed_information(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation>())
    , ldp_nbr_bound_ipv4_address_info(this, {})
    , ldp_nbr_bound_ipv6_address_info(this, {})
    , ldp_nbr_ipv4_adj_info(this, {})
    , ldp_nbr_ipv6_adj_info(this, {})
{
    protocol_information->parent = this;
    tcp_information->parent = this;
    detailed_information->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::~Neighbor()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ldp_nbr_bound_ipv4_address_info.len(); index++)
    {
        if(ldp_nbr_bound_ipv4_address_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ldp_nbr_bound_ipv6_address_info.len(); index++)
    {
        if(ldp_nbr_bound_ipv6_address_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ldp_nbr_ipv4_adj_info.len(); index++)
    {
        if(ldp_nbr_ipv4_adj_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ldp_nbr_ipv6_adj_info.len(); index++)
    {
        if(ldp_nbr_ipv6_adj_info[index]->has_data())
            return true;
    }
    return lsr_id.is_set
	|| label_space_id.is_set
	|| (protocol_information !=  nullptr && protocol_information->has_data())
	|| (tcp_information !=  nullptr && tcp_information->has_data())
	|| (detailed_information !=  nullptr && detailed_information->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<ldp_nbr_bound_ipv4_address_info.len(); index++)
    {
        if(ldp_nbr_bound_ipv4_address_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ldp_nbr_bound_ipv6_address_info.len(); index++)
    {
        if(ldp_nbr_bound_ipv6_address_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ldp_nbr_ipv4_adj_info.len(); index++)
    {
        if(ldp_nbr_ipv4_adj_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ldp_nbr_ipv6_adj_info.len(); index++)
    {
        if(ldp_nbr_ipv6_adj_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| (protocol_information !=  nullptr && protocol_information->has_operation())
	|| (tcp_information !=  nullptr && tcp_information->has_operation())
	|| (detailed_information !=  nullptr && detailed_information->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-information")
    {
        if(protocol_information == nullptr)
        {
            protocol_information = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation>();
        }
        return protocol_information;
    }

    if(child_yang_name == "tcp-information")
    {
        if(tcp_information == nullptr)
        {
            tcp_information = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation>();
        }
        return tcp_information;
    }

    if(child_yang_name == "detailed-information")
    {
        if(detailed_information == nullptr)
        {
            detailed_information = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation>();
        }
        return detailed_information;
    }

    if(child_yang_name == "ldp-nbr-bound-ipv4-address-info")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo>();
        ent_->parent = this;
        ldp_nbr_bound_ipv4_address_info.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ldp-nbr-bound-ipv6-address-info")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo>();
        ent_->parent = this;
        ldp_nbr_bound_ipv6_address_info.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ldp-nbr-ipv4-adj-info")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo>();
        ent_->parent = this;
        ldp_nbr_ipv4_adj_info.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ldp-nbr-ipv6-adj-info")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo>();
        ent_->parent = this;
        ldp_nbr_ipv6_adj_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protocol_information != nullptr)
    {
        _children["protocol-information"] = protocol_information;
    }

    if(tcp_information != nullptr)
    {
        _children["tcp-information"] = tcp_information;
    }

    if(detailed_information != nullptr)
    {
        _children["detailed-information"] = detailed_information;
    }

    count_ = 0;
    for (auto ent_ : ldp_nbr_bound_ipv4_address_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ldp_nbr_bound_ipv6_address_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ldp_nbr_ipv4_adj_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ldp_nbr_ipv6_adj_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-information" || name == "tcp-information" || name == "detailed-information" || name == "ldp-nbr-bound-ipv4-address-info" || name == "ldp-nbr-bound-ipv6-address-info" || name == "ldp-nbr-ipv4-adj-info" || name == "ldp-nbr-ipv6-adj-info" || name == "lsr-id" || name == "label-space-id")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::ProtocolInformation()
    :
    ta_holdtime{YType::uint32, "ta-holdtime"},
    ta_state{YType::str, "ta-state"},
    ta_pies_sent{YType::uint32, "ta-pies-sent"},
    ta_pies_rcvd{YType::uint32, "ta-pies-rcvd"},
    ta_up_time_seconds{YType::uint32, "ta-up-time-seconds"},
    downstream_on_demand{YType::boolean, "downstream-on-demand"}
        ,
    ta_graceful_restart_adjacency(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency>())
{
    ta_graceful_restart_adjacency->parent = this;

    yang_name = "protocol-information"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::~ProtocolInformation()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::has_data() const
{
    if (is_presence_container) return true;
    return ta_holdtime.is_set
	|| ta_state.is_set
	|| ta_pies_sent.is_set
	|| ta_pies_rcvd.is_set
	|| ta_up_time_seconds.is_set
	|| downstream_on_demand.is_set
	|| (ta_graceful_restart_adjacency !=  nullptr && ta_graceful_restart_adjacency->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ta_holdtime.yfilter)
	|| ydk::is_set(ta_state.yfilter)
	|| ydk::is_set(ta_pies_sent.yfilter)
	|| ydk::is_set(ta_pies_rcvd.yfilter)
	|| ydk::is_set(ta_up_time_seconds.yfilter)
	|| ydk::is_set(downstream_on_demand.yfilter)
	|| (ta_graceful_restart_adjacency !=  nullptr && ta_graceful_restart_adjacency->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ta_holdtime.is_set || is_set(ta_holdtime.yfilter)) leaf_name_data.push_back(ta_holdtime.get_name_leafdata());
    if (ta_state.is_set || is_set(ta_state.yfilter)) leaf_name_data.push_back(ta_state.get_name_leafdata());
    if (ta_pies_sent.is_set || is_set(ta_pies_sent.yfilter)) leaf_name_data.push_back(ta_pies_sent.get_name_leafdata());
    if (ta_pies_rcvd.is_set || is_set(ta_pies_rcvd.yfilter)) leaf_name_data.push_back(ta_pies_rcvd.get_name_leafdata());
    if (ta_up_time_seconds.is_set || is_set(ta_up_time_seconds.yfilter)) leaf_name_data.push_back(ta_up_time_seconds.get_name_leafdata());
    if (downstream_on_demand.is_set || is_set(downstream_on_demand.yfilter)) leaf_name_data.push_back(downstream_on_demand.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ta-graceful-restart-adjacency")
    {
        if(ta_graceful_restart_adjacency == nullptr)
        {
            ta_graceful_restart_adjacency = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency>();
        }
        return ta_graceful_restart_adjacency;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ta_graceful_restart_adjacency != nullptr)
    {
        _children["ta-graceful-restart-adjacency"] = ta_graceful_restart_adjacency;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ta-holdtime")
    {
        ta_holdtime = value;
        ta_holdtime.value_namespace = name_space;
        ta_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ta-state")
    {
        ta_state = value;
        ta_state.value_namespace = name_space;
        ta_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ta-pies-sent")
    {
        ta_pies_sent = value;
        ta_pies_sent.value_namespace = name_space;
        ta_pies_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ta-pies-rcvd")
    {
        ta_pies_rcvd = value;
        ta_pies_rcvd.value_namespace = name_space;
        ta_pies_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ta-up-time-seconds")
    {
        ta_up_time_seconds = value;
        ta_up_time_seconds.value_namespace = name_space;
        ta_up_time_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream-on-demand")
    {
        downstream_on_demand = value;
        downstream_on_demand.value_namespace = name_space;
        downstream_on_demand.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ta-holdtime")
    {
        ta_holdtime.yfilter = yfilter;
    }
    if(value_path == "ta-state")
    {
        ta_state.yfilter = yfilter;
    }
    if(value_path == "ta-pies-sent")
    {
        ta_pies_sent.yfilter = yfilter;
    }
    if(value_path == "ta-pies-rcvd")
    {
        ta_pies_rcvd.yfilter = yfilter;
    }
    if(value_path == "ta-up-time-seconds")
    {
        ta_up_time_seconds.yfilter = yfilter;
    }
    if(value_path == "downstream-on-demand")
    {
        downstream_on_demand.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ta-graceful-restart-adjacency" || name == "ta-holdtime" || name == "ta-state" || name == "ta-pies-sent" || name == "ta-pies-rcvd" || name == "ta-up-time-seconds" || name == "downstream-on-demand")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::TaGracefulRestartAdjacency()
    :
    is_graceful_restartable{YType::boolean, "is-graceful-restartable"},
    reconnect_timeout{YType::uint32, "reconnect-timeout"},
    recovery_time{YType::uint32, "recovery-time"}
{

    yang_name = "ta-graceful-restart-adjacency"; yang_parent_name = "protocol-information"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::~TaGracefulRestartAdjacency()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::has_data() const
{
    if (is_presence_container) return true;
    return is_graceful_restartable.is_set
	|| reconnect_timeout.is_set
	|| recovery_time.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_graceful_restartable.yfilter)
	|| ydk::is_set(reconnect_timeout.yfilter)
	|| ydk::is_set(recovery_time.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ta-graceful-restart-adjacency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_graceful_restartable.is_set || is_set(is_graceful_restartable.yfilter)) leaf_name_data.push_back(is_graceful_restartable.get_name_leafdata());
    if (reconnect_timeout.is_set || is_set(reconnect_timeout.yfilter)) leaf_name_data.push_back(reconnect_timeout.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.yfilter)) leaf_name_data.push_back(recovery_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-graceful-restartable")
    {
        is_graceful_restartable = value;
        is_graceful_restartable.value_namespace = name_space;
        is_graceful_restartable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reconnect-timeout")
    {
        reconnect_timeout = value;
        reconnect_timeout.value_namespace = name_space;
        reconnect_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-time")
    {
        recovery_time = value;
        recovery_time.value_namespace = name_space;
        recovery_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-graceful-restartable")
    {
        is_graceful_restartable.yfilter = yfilter;
    }
    if(value_path == "reconnect-timeout")
    {
        reconnect_timeout.yfilter = yfilter;
    }
    if(value_path == "recovery-time")
    {
        recovery_time.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-graceful-restartable" || name == "reconnect-timeout" || name == "recovery-time")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::TcpInformation()
    :
    foreign_port{YType::uint16, "foreign-port"},
    local_port{YType::uint16, "local-port"},
    is_md5_on{YType::boolean, "is-md5-on"}
        ,
    foreign_host(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost>())
    , local_host(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost>())
{
    foreign_host->parent = this;
    local_host->parent = this;

    yang_name = "tcp-information"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::~TcpInformation()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::has_data() const
{
    if (is_presence_container) return true;
    return foreign_port.is_set
	|| local_port.is_set
	|| is_md5_on.is_set
	|| (foreign_host !=  nullptr && foreign_host->has_data())
	|| (local_host !=  nullptr && local_host->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(foreign_port.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(is_md5_on.yfilter)
	|| (foreign_host !=  nullptr && foreign_host->has_operation())
	|| (local_host !=  nullptr && local_host->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (foreign_port.is_set || is_set(foreign_port.yfilter)) leaf_name_data.push_back(foreign_port.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (is_md5_on.is_set || is_set(is_md5_on.yfilter)) leaf_name_data.push_back(is_md5_on.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "foreign-host")
    {
        if(foreign_host == nullptr)
        {
            foreign_host = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost>();
        }
        return foreign_host;
    }

    if(child_yang_name == "local-host")
    {
        if(local_host == nullptr)
        {
            local_host = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost>();
        }
        return local_host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(foreign_host != nullptr)
    {
        _children["foreign-host"] = foreign_host;
    }

    if(local_host != nullptr)
    {
        _children["local-host"] = local_host;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "foreign-port")
    {
        foreign_port = value;
        foreign_port.value_namespace = name_space;
        foreign_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-md5-on")
    {
        is_md5_on = value;
        is_md5_on.value_namespace = name_space;
        is_md5_on.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "foreign-port")
    {
        foreign_port.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "is-md5-on")
    {
        is_md5_on.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "foreign-host" || name == "local-host" || name == "foreign-port" || name == "local-port" || name == "is-md5-on")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost::ForeignHost()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "foreign-host"; yang_parent_name = "tcp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost::~ForeignHost()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign-host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost::LocalHost()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "local-host"; yang_parent_name = "tcp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost::~LocalHost()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::DetailedInformation()
    :
    peer_holdtime{YType::uint32, "peer-holdtime"},
    keep_alive_interval{YType::uint32, "keep-alive-interval"},
    peer_state{YType::str, "peer-state"},
    has_ipv4_inbound{YType::boolean, "has-ipv4-inbound"},
    inbound_ipv4acl{YType::str, "inbound-ipv4acl"},
    has_ipv6_inbound{YType::boolean, "has-ipv6-inbound"},
    inbound_ipv6acl{YType::str, "inbound-ipv6acl"},
    has_ipv4_outbound{YType::boolean, "has-ipv4-outbound"},
    outbound_ipv4acl{YType::str, "outbound-ipv4acl"},
    has_ipv6_outbound{YType::boolean, "has-ipv6-outbound"},
    outbound_ipv6acl{YType::str, "outbound-ipv6acl"},
    has_sp{YType::boolean, "has-sp"},
    sp_state{YType::str, "sp-state"},
    sp_has_acl{YType::boolean, "sp-has-acl"},
    spacl{YType::str, "spacl"},
    sp_has_duration{YType::boolean, "sp-has-duration"},
    sp_duration{YType::uint32, "sp-duration"},
    spht_running{YType::boolean, "spht-running"},
    spht_remaining{YType::uint32, "spht-remaining"},
    nsr_sync_state{YType::enumeration, "nsr-sync-state"},
    nsr_last_sync_error{YType::enumeration, "nsr-last-sync-error"},
    nsr_last_sync_nack_reason{YType::enumeration, "nsr-last-sync-nack-reason"},
    bgp_advertisement_state{YType::enumeration, "bgp-advertisement-state"},
    advertise_bgp_prefixes{YType::boolean, "advertise-bgp-prefixes"}
        ,
    capabilities(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities>())
    , client(this, {})
    , ipv4_duplicate_address(this, {})
    , ipv6_duplicate_address(this, {})
{
    capabilities->parent = this;

    yang_name = "detailed-information"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::~DetailedInformation()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_duplicate_address.len(); index++)
    {
        if(ipv4_duplicate_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_duplicate_address.len(); index++)
    {
        if(ipv6_duplicate_address[index]->has_data())
            return true;
    }
    return peer_holdtime.is_set
	|| keep_alive_interval.is_set
	|| peer_state.is_set
	|| has_ipv4_inbound.is_set
	|| inbound_ipv4acl.is_set
	|| has_ipv6_inbound.is_set
	|| inbound_ipv6acl.is_set
	|| has_ipv4_outbound.is_set
	|| outbound_ipv4acl.is_set
	|| has_ipv6_outbound.is_set
	|| outbound_ipv6acl.is_set
	|| has_sp.is_set
	|| sp_state.is_set
	|| sp_has_acl.is_set
	|| spacl.is_set
	|| sp_has_duration.is_set
	|| sp_duration.is_set
	|| spht_running.is_set
	|| spht_remaining.is_set
	|| nsr_sync_state.is_set
	|| nsr_last_sync_error.is_set
	|| nsr_last_sync_nack_reason.is_set
	|| bgp_advertisement_state.is_set
	|| advertise_bgp_prefixes.is_set
	|| (capabilities !=  nullptr && capabilities->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::has_operation() const
{
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_duplicate_address.len(); index++)
    {
        if(ipv4_duplicate_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_duplicate_address.len(); index++)
    {
        if(ipv6_duplicate_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(peer_holdtime.yfilter)
	|| ydk::is_set(keep_alive_interval.yfilter)
	|| ydk::is_set(peer_state.yfilter)
	|| ydk::is_set(has_ipv4_inbound.yfilter)
	|| ydk::is_set(inbound_ipv4acl.yfilter)
	|| ydk::is_set(has_ipv6_inbound.yfilter)
	|| ydk::is_set(inbound_ipv6acl.yfilter)
	|| ydk::is_set(has_ipv4_outbound.yfilter)
	|| ydk::is_set(outbound_ipv4acl.yfilter)
	|| ydk::is_set(has_ipv6_outbound.yfilter)
	|| ydk::is_set(outbound_ipv6acl.yfilter)
	|| ydk::is_set(has_sp.yfilter)
	|| ydk::is_set(sp_state.yfilter)
	|| ydk::is_set(sp_has_acl.yfilter)
	|| ydk::is_set(spacl.yfilter)
	|| ydk::is_set(sp_has_duration.yfilter)
	|| ydk::is_set(sp_duration.yfilter)
	|| ydk::is_set(spht_running.yfilter)
	|| ydk::is_set(spht_remaining.yfilter)
	|| ydk::is_set(nsr_sync_state.yfilter)
	|| ydk::is_set(nsr_last_sync_error.yfilter)
	|| ydk::is_set(nsr_last_sync_nack_reason.yfilter)
	|| ydk::is_set(bgp_advertisement_state.yfilter)
	|| ydk::is_set(advertise_bgp_prefixes.yfilter)
	|| (capabilities !=  nullptr && capabilities->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detailed-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_holdtime.is_set || is_set(peer_holdtime.yfilter)) leaf_name_data.push_back(peer_holdtime.get_name_leafdata());
    if (keep_alive_interval.is_set || is_set(keep_alive_interval.yfilter)) leaf_name_data.push_back(keep_alive_interval.get_name_leafdata());
    if (peer_state.is_set || is_set(peer_state.yfilter)) leaf_name_data.push_back(peer_state.get_name_leafdata());
    if (has_ipv4_inbound.is_set || is_set(has_ipv4_inbound.yfilter)) leaf_name_data.push_back(has_ipv4_inbound.get_name_leafdata());
    if (inbound_ipv4acl.is_set || is_set(inbound_ipv4acl.yfilter)) leaf_name_data.push_back(inbound_ipv4acl.get_name_leafdata());
    if (has_ipv6_inbound.is_set || is_set(has_ipv6_inbound.yfilter)) leaf_name_data.push_back(has_ipv6_inbound.get_name_leafdata());
    if (inbound_ipv6acl.is_set || is_set(inbound_ipv6acl.yfilter)) leaf_name_data.push_back(inbound_ipv6acl.get_name_leafdata());
    if (has_ipv4_outbound.is_set || is_set(has_ipv4_outbound.yfilter)) leaf_name_data.push_back(has_ipv4_outbound.get_name_leafdata());
    if (outbound_ipv4acl.is_set || is_set(outbound_ipv4acl.yfilter)) leaf_name_data.push_back(outbound_ipv4acl.get_name_leafdata());
    if (has_ipv6_outbound.is_set || is_set(has_ipv6_outbound.yfilter)) leaf_name_data.push_back(has_ipv6_outbound.get_name_leafdata());
    if (outbound_ipv6acl.is_set || is_set(outbound_ipv6acl.yfilter)) leaf_name_data.push_back(outbound_ipv6acl.get_name_leafdata());
    if (has_sp.is_set || is_set(has_sp.yfilter)) leaf_name_data.push_back(has_sp.get_name_leafdata());
    if (sp_state.is_set || is_set(sp_state.yfilter)) leaf_name_data.push_back(sp_state.get_name_leafdata());
    if (sp_has_acl.is_set || is_set(sp_has_acl.yfilter)) leaf_name_data.push_back(sp_has_acl.get_name_leafdata());
    if (spacl.is_set || is_set(spacl.yfilter)) leaf_name_data.push_back(spacl.get_name_leafdata());
    if (sp_has_duration.is_set || is_set(sp_has_duration.yfilter)) leaf_name_data.push_back(sp_has_duration.get_name_leafdata());
    if (sp_duration.is_set || is_set(sp_duration.yfilter)) leaf_name_data.push_back(sp_duration.get_name_leafdata());
    if (spht_running.is_set || is_set(spht_running.yfilter)) leaf_name_data.push_back(spht_running.get_name_leafdata());
    if (spht_remaining.is_set || is_set(spht_remaining.yfilter)) leaf_name_data.push_back(spht_remaining.get_name_leafdata());
    if (nsr_sync_state.is_set || is_set(nsr_sync_state.yfilter)) leaf_name_data.push_back(nsr_sync_state.get_name_leafdata());
    if (nsr_last_sync_error.is_set || is_set(nsr_last_sync_error.yfilter)) leaf_name_data.push_back(nsr_last_sync_error.get_name_leafdata());
    if (nsr_last_sync_nack_reason.is_set || is_set(nsr_last_sync_nack_reason.yfilter)) leaf_name_data.push_back(nsr_last_sync_nack_reason.get_name_leafdata());
    if (bgp_advertisement_state.is_set || is_set(bgp_advertisement_state.yfilter)) leaf_name_data.push_back(bgp_advertisement_state.get_name_leafdata());
    if (advertise_bgp_prefixes.is_set || is_set(advertise_bgp_prefixes.yfilter)) leaf_name_data.push_back(advertise_bgp_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "capabilities")
    {
        if(capabilities == nullptr)
        {
            capabilities = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities>();
        }
        return capabilities;
    }

    if(child_yang_name == "client")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client>();
        ent_->parent = this;
        client.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv4-duplicate-address")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress>();
        ent_->parent = this;
        ipv4_duplicate_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6-duplicate-address")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress>();
        ent_->parent = this;
        ipv6_duplicate_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(capabilities != nullptr)
    {
        _children["capabilities"] = capabilities;
    }

    count_ = 0;
    for (auto ent_ : client.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv4_duplicate_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6_duplicate_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-holdtime")
    {
        peer_holdtime = value;
        peer_holdtime.value_namespace = name_space;
        peer_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keep-alive-interval")
    {
        keep_alive_interval = value;
        keep_alive_interval.value_namespace = name_space;
        keep_alive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-state")
    {
        peer_state = value;
        peer_state.value_namespace = name_space;
        peer_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-ipv4-inbound")
    {
        has_ipv4_inbound = value;
        has_ipv4_inbound.value_namespace = name_space;
        has_ipv4_inbound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inbound-ipv4acl")
    {
        inbound_ipv4acl = value;
        inbound_ipv4acl.value_namespace = name_space;
        inbound_ipv4acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-ipv6-inbound")
    {
        has_ipv6_inbound = value;
        has_ipv6_inbound.value_namespace = name_space;
        has_ipv6_inbound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inbound-ipv6acl")
    {
        inbound_ipv6acl = value;
        inbound_ipv6acl.value_namespace = name_space;
        inbound_ipv6acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-ipv4-outbound")
    {
        has_ipv4_outbound = value;
        has_ipv4_outbound.value_namespace = name_space;
        has_ipv4_outbound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound-ipv4acl")
    {
        outbound_ipv4acl = value;
        outbound_ipv4acl.value_namespace = name_space;
        outbound_ipv4acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-ipv6-outbound")
    {
        has_ipv6_outbound = value;
        has_ipv6_outbound.value_namespace = name_space;
        has_ipv6_outbound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound-ipv6acl")
    {
        outbound_ipv6acl = value;
        outbound_ipv6acl.value_namespace = name_space;
        outbound_ipv6acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-sp")
    {
        has_sp = value;
        has_sp.value_namespace = name_space;
        has_sp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sp-state")
    {
        sp_state = value;
        sp_state.value_namespace = name_space;
        sp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sp-has-acl")
    {
        sp_has_acl = value;
        sp_has_acl.value_namespace = name_space;
        sp_has_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spacl")
    {
        spacl = value;
        spacl.value_namespace = name_space;
        spacl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sp-has-duration")
    {
        sp_has_duration = value;
        sp_has_duration.value_namespace = name_space;
        sp_has_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sp-duration")
    {
        sp_duration = value;
        sp_duration.value_namespace = name_space;
        sp_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spht-running")
    {
        spht_running = value;
        spht_running.value_namespace = name_space;
        spht_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spht-remaining")
    {
        spht_remaining = value;
        spht_remaining.value_namespace = name_space;
        spht_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sync-state")
    {
        nsr_sync_state = value;
        nsr_sync_state.value_namespace = name_space;
        nsr_sync_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-last-sync-error")
    {
        nsr_last_sync_error = value;
        nsr_last_sync_error.value_namespace = name_space;
        nsr_last_sync_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-last-sync-nack-reason")
    {
        nsr_last_sync_nack_reason = value;
        nsr_last_sync_nack_reason.value_namespace = name_space;
        nsr_last_sync_nack_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-advertisement-state")
    {
        bgp_advertisement_state = value;
        bgp_advertisement_state.value_namespace = name_space;
        bgp_advertisement_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-bgp-prefixes")
    {
        advertise_bgp_prefixes = value;
        advertise_bgp_prefixes.value_namespace = name_space;
        advertise_bgp_prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-holdtime")
    {
        peer_holdtime.yfilter = yfilter;
    }
    if(value_path == "keep-alive-interval")
    {
        keep_alive_interval.yfilter = yfilter;
    }
    if(value_path == "peer-state")
    {
        peer_state.yfilter = yfilter;
    }
    if(value_path == "has-ipv4-inbound")
    {
        has_ipv4_inbound.yfilter = yfilter;
    }
    if(value_path == "inbound-ipv4acl")
    {
        inbound_ipv4acl.yfilter = yfilter;
    }
    if(value_path == "has-ipv6-inbound")
    {
        has_ipv6_inbound.yfilter = yfilter;
    }
    if(value_path == "inbound-ipv6acl")
    {
        inbound_ipv6acl.yfilter = yfilter;
    }
    if(value_path == "has-ipv4-outbound")
    {
        has_ipv4_outbound.yfilter = yfilter;
    }
    if(value_path == "outbound-ipv4acl")
    {
        outbound_ipv4acl.yfilter = yfilter;
    }
    if(value_path == "has-ipv6-outbound")
    {
        has_ipv6_outbound.yfilter = yfilter;
    }
    if(value_path == "outbound-ipv6acl")
    {
        outbound_ipv6acl.yfilter = yfilter;
    }
    if(value_path == "has-sp")
    {
        has_sp.yfilter = yfilter;
    }
    if(value_path == "sp-state")
    {
        sp_state.yfilter = yfilter;
    }
    if(value_path == "sp-has-acl")
    {
        sp_has_acl.yfilter = yfilter;
    }
    if(value_path == "spacl")
    {
        spacl.yfilter = yfilter;
    }
    if(value_path == "sp-has-duration")
    {
        sp_has_duration.yfilter = yfilter;
    }
    if(value_path == "sp-duration")
    {
        sp_duration.yfilter = yfilter;
    }
    if(value_path == "spht-running")
    {
        spht_running.yfilter = yfilter;
    }
    if(value_path == "spht-remaining")
    {
        spht_remaining.yfilter = yfilter;
    }
    if(value_path == "nsr-sync-state")
    {
        nsr_sync_state.yfilter = yfilter;
    }
    if(value_path == "nsr-last-sync-error")
    {
        nsr_last_sync_error.yfilter = yfilter;
    }
    if(value_path == "nsr-last-sync-nack-reason")
    {
        nsr_last_sync_nack_reason.yfilter = yfilter;
    }
    if(value_path == "bgp-advertisement-state")
    {
        bgp_advertisement_state.yfilter = yfilter;
    }
    if(value_path == "advertise-bgp-prefixes")
    {
        advertise_bgp_prefixes.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capabilities" || name == "client" || name == "ipv4-duplicate-address" || name == "ipv6-duplicate-address" || name == "peer-holdtime" || name == "keep-alive-interval" || name == "peer-state" || name == "has-ipv4-inbound" || name == "inbound-ipv4acl" || name == "has-ipv6-inbound" || name == "inbound-ipv6acl" || name == "has-ipv4-outbound" || name == "outbound-ipv4acl" || name == "has-ipv6-outbound" || name == "outbound-ipv6acl" || name == "has-sp" || name == "sp-state" || name == "sp-has-acl" || name == "spacl" || name == "sp-has-duration" || name == "sp-duration" || name == "spht-running" || name == "spht-remaining" || name == "nsr-sync-state" || name == "nsr-last-sync-error" || name == "nsr-last-sync-nack-reason" || name == "bgp-advertisement-state" || name == "advertise-bgp-prefixes")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Capabilities()
    :
    sent(this, {})
    , received(this, {})
{

    yang_name = "capabilities"; yang_parent_name = "detailed-information"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::~Capabilities()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sent.len(); index++)
    {
        if(sent[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<received.len(); index++)
    {
        if(received[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::has_operation() const
{
    for (std::size_t index=0; index<sent.len(); index++)
    {
        if(sent[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<received.len(); index++)
    {
        if(received[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capabilities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sent")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent>();
        ent_->parent = this;
        sent.append(ent_);
        return ent_;
    }

    if(child_yang_name == "received")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received>();
        ent_->parent = this;
        received.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sent.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : received.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent" || name == "received")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::Sent()
    :
    type{YType::uint16, "type"},
    description{YType::str, "description"},
    capability_data_length{YType::uint16, "capability-data-length"},
    capability_data{YType::str, "capability-data"}
{

    yang_name = "sent"; yang_parent_name = "capabilities"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::~Sent()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| description.is_set
	|| capability_data_length.is_set
	|| capability_data.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(capability_data_length.yfilter)
	|| ydk::is_set(capability_data.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sent";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (capability_data_length.is_set || is_set(capability_data_length.yfilter)) leaf_name_data.push_back(capability_data_length.get_name_leafdata());
    if (capability_data.is_set || is_set(capability_data.yfilter)) leaf_name_data.push_back(capability_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length = value;
        capability_data_length.value_namespace = name_space;
        capability_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-data")
    {
        capability_data = value;
        capability_data.value_namespace = name_space;
        capability_data.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length.yfilter = yfilter;
    }
    if(value_path == "capability-data")
    {
        capability_data.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "description" || name == "capability-data-length" || name == "capability-data")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::Received()
    :
    type{YType::uint16, "type"},
    description{YType::str, "description"},
    capability_data_length{YType::uint16, "capability-data-length"},
    capability_data{YType::str, "capability-data"}
{

    yang_name = "received"; yang_parent_name = "capabilities"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::~Received()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| description.is_set
	|| capability_data_length.is_set
	|| capability_data.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(capability_data_length.yfilter)
	|| ydk::is_set(capability_data.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (capability_data_length.is_set || is_set(capability_data_length.yfilter)) leaf_name_data.push_back(capability_data_length.get_name_leafdata());
    if (capability_data.is_set || is_set(capability_data.yfilter)) leaf_name_data.push_back(capability_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length = value;
        capability_data_length.value_namespace = name_space;
        capability_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-data")
    {
        capability_data = value;
        capability_data.value_namespace = name_space;
        capability_data.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length.yfilter = yfilter;
    }
    if(value_path == "capability-data")
    {
        capability_data.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "description" || name == "capability-data-length" || name == "capability-data")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client::Client()
    :
    name{YType::str, "name"}
{

    yang_name = "client"; yang_parent_name = "detailed-information"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client::~Client()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Ipv4DuplicateAddress()
    :
    address(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address>())
{
    address->parent = this;

    yang_name = "ipv4-duplicate-address"; yang_parent_name = "detailed-information"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::~Ipv4DuplicateAddress()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-duplicate-address";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::Address()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "address"; yang_parent_name = "ipv4-duplicate-address"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::~Address()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Ipv6DuplicateAddress()
    :
    address(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address>())
{
    address->parent = this;

    yang_name = "ipv6-duplicate-address"; yang_parent_name = "detailed-information"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::~Ipv6DuplicateAddress()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-duplicate-address";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::Address()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "address"; yang_parent_name = "ipv6-duplicate-address"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::~Address()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::LdpNbrBoundIpv4AddressInfo()
    :
    address(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address>())
{
    address->parent = this;

    yang_name = "ldp-nbr-bound-ipv4-address-info"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::~LdpNbrBoundIpv4AddressInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-nbr-bound-ipv4-address-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::Address()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "address"; yang_parent_name = "ldp-nbr-bound-ipv4-address-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::~Address()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::LdpNbrBoundIpv6AddressInfo()
    :
    address(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address>())
{
    address->parent = this;

    yang_name = "ldp-nbr-bound-ipv6-address-info"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::~LdpNbrBoundIpv6AddressInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-nbr-bound-ipv6-address-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::Address()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "address"; yang_parent_name = "ldp-nbr-bound-ipv6-address-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::~Address()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::LdpNbrIpv4AdjInfo()
    :
    adjacency_group(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup>())
{
    adjacency_group->parent = this;

    yang_name = "ldp-nbr-ipv4-adj-info"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::~LdpNbrIpv4AdjInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::has_data() const
{
    if (is_presence_container) return true;
    return (adjacency_group !=  nullptr && adjacency_group->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::has_operation() const
{
    return is_set(yfilter)
	|| (adjacency_group !=  nullptr && adjacency_group->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-nbr-ipv4-adj-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-group")
    {
        if(adjacency_group == nullptr)
        {
            adjacency_group = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup>();
        }
        return adjacency_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adjacency_group != nullptr)
    {
        _children["adjacency-group"] = adjacency_group;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-group")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::AdjacencyGroup()
    :
    hello_type{YType::enumeration, "hello-type"}
        ,
    link_hello_data(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData>())
    , target_hello_data(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData>())
{
    link_hello_data->parent = this;
    target_hello_data->parent = this;

    yang_name = "adjacency-group"; yang_parent_name = "ldp-nbr-ipv4-adj-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::~AdjacencyGroup()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::has_data() const
{
    if (is_presence_container) return true;
    return hello_type.is_set
	|| (link_hello_data !=  nullptr && link_hello_data->has_data())
	|| (target_hello_data !=  nullptr && target_hello_data->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello_type.yfilter)
	|| (link_hello_data !=  nullptr && link_hello_data->has_operation())
	|| (target_hello_data !=  nullptr && target_hello_data->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_type.is_set || is_set(hello_type.yfilter)) leaf_name_data.push_back(hello_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-hello-data")
    {
        if(link_hello_data == nullptr)
        {
            link_hello_data = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData>();
        }
        return link_hello_data;
    }

    if(child_yang_name == "target-hello-data")
    {
        if(target_hello_data == nullptr)
        {
            target_hello_data = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData>();
        }
        return target_hello_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(link_hello_data != nullptr)
    {
        _children["link-hello-data"] = link_hello_data;
    }

    if(target_hello_data != nullptr)
    {
        _children["target-hello-data"] = target_hello_data;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello-type")
    {
        hello_type = value;
        hello_type.value_namespace = name_space;
        hello_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello-type")
    {
        hello_type.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-hello-data" || name == "target-hello-data" || name == "hello-type")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::LinkHelloData()
    :
    interface{YType::str, "interface"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "link-hello-data"; yang_parent_name = "adjacency-group"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::~LinkHelloData()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| interface_name.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-name")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetHelloData()
    :
    state{YType::enumeration, "state"}
        ,
    local_address(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress>())
    , target_address(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress>())
{
    local_address->parent = this;
    target_address->parent = this;

    yang_name = "target-hello-data"; yang_parent_name = "adjacency-group"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::~TargetHelloData()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::has_data() const
{
    if (is_presence_container) return true;
    return state.is_set
	|| (local_address !=  nullptr && local_address->has_data())
	|| (target_address !=  nullptr && target_address->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (target_address !=  nullptr && target_address->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-hello-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress>();
        }
        return local_address;
    }

    if(child_yang_name == "target-address")
    {
        if(target_address == nullptr)
        {
            target_address = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress>();
        }
        return target_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_address != nullptr)
    {
        _children["local-address"] = local_address;
    }

    if(target_address != nullptr)
    {
        _children["target-address"] = target_address;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-address" || name == "target-address" || name == "state")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::LocalAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "local-address"; yang_parent_name = "target-hello-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::~LocalAddress()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::TargetAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "target-address"; yang_parent_name = "target-hello-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::~TargetAddress()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::LdpNbrIpv6AdjInfo()
    :
    adjacency_group(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup>())
{
    adjacency_group->parent = this;

    yang_name = "ldp-nbr-ipv6-adj-info"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::~LdpNbrIpv6AdjInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::has_data() const
{
    if (is_presence_container) return true;
    return (adjacency_group !=  nullptr && adjacency_group->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::has_operation() const
{
    return is_set(yfilter)
	|| (adjacency_group !=  nullptr && adjacency_group->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-nbr-ipv6-adj-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-group")
    {
        if(adjacency_group == nullptr)
        {
            adjacency_group = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup>();
        }
        return adjacency_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adjacency_group != nullptr)
    {
        _children["adjacency-group"] = adjacency_group;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-group")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::AdjacencyGroup()
    :
    hello_type{YType::enumeration, "hello-type"}
        ,
    link_hello_data(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData>())
    , target_hello_data(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData>())
{
    link_hello_data->parent = this;
    target_hello_data->parent = this;

    yang_name = "adjacency-group"; yang_parent_name = "ldp-nbr-ipv6-adj-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::~AdjacencyGroup()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::has_data() const
{
    if (is_presence_container) return true;
    return hello_type.is_set
	|| (link_hello_data !=  nullptr && link_hello_data->has_data())
	|| (target_hello_data !=  nullptr && target_hello_data->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello_type.yfilter)
	|| (link_hello_data !=  nullptr && link_hello_data->has_operation())
	|| (target_hello_data !=  nullptr && target_hello_data->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_type.is_set || is_set(hello_type.yfilter)) leaf_name_data.push_back(hello_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-hello-data")
    {
        if(link_hello_data == nullptr)
        {
            link_hello_data = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData>();
        }
        return link_hello_data;
    }

    if(child_yang_name == "target-hello-data")
    {
        if(target_hello_data == nullptr)
        {
            target_hello_data = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData>();
        }
        return target_hello_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(link_hello_data != nullptr)
    {
        _children["link-hello-data"] = link_hello_data;
    }

    if(target_hello_data != nullptr)
    {
        _children["target-hello-data"] = target_hello_data;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello-type")
    {
        hello_type = value;
        hello_type.value_namespace = name_space;
        hello_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello-type")
    {
        hello_type.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-hello-data" || name == "target-hello-data" || name == "hello-type")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::LinkHelloData()
    :
    interface{YType::str, "interface"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "link-hello-data"; yang_parent_name = "adjacency-group"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::~LinkHelloData()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| interface_name.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-name")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetHelloData()
    :
    state{YType::enumeration, "state"}
        ,
    local_address(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress>())
    , target_address(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress>())
{
    local_address->parent = this;
    target_address->parent = this;

    yang_name = "target-hello-data"; yang_parent_name = "adjacency-group"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::~TargetHelloData()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::has_data() const
{
    if (is_presence_container) return true;
    return state.is_set
	|| (local_address !=  nullptr && local_address->has_data())
	|| (target_address !=  nullptr && target_address->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (target_address !=  nullptr && target_address->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-hello-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress>();
        }
        return local_address;
    }

    if(child_yang_name == "target-address")
    {
        if(target_address == nullptr)
        {
            target_address = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress>();
        }
        return target_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_address != nullptr)
    {
        _children["local-address"] = local_address;
    }

    if(target_address != nullptr)
    {
        _children["target-address"] = target_address;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-address" || name == "target-address" || name == "state")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::LocalAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "local-address"; yang_parent_name = "target-hello-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::~LocalAddress()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::TargetAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "target-address"; yang_parent_name = "target-hello-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::~TargetAddress()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::LdpId::LdpId()
    :
    lsr_id{YType::str, "lsr-id"},
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"}
{

    yang_name = "ldp-id"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::LdpId::~LdpId()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::LdpId::has_data() const
{
    if (is_presence_container) return true;
    return lsr_id.is_set
	|| label_space_id.is_set
	|| ldp_id.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::LdpId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(ldp_id.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::LdpId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::LdpId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.yfilter)) leaf_name_data.push_back(ldp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::LdpId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::LdpId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::LdpId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
        ldp_id.value_namespace = name_space;
        ldp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::LdpId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "ldp-id")
    {
        ldp_id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::LdpId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsr-id" || name == "label-space-id" || name == "ldp-id")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistics()
    :
    statistic(this, {})
{

    yang_name = "statistics"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::~Statistics()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<statistic.len(); index++)
    {
        if(statistic[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::has_operation() const
{
    for (std::size_t index=0; index<statistic.len(); index++)
    {
        if(statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistic")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic>();
        ent_->parent = this;
        statistic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistic")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::Statistic()
    :
    lsr_id{YType::str, "lsr-id"},
    label_space_id{YType::uint32, "label-space-id"},
    iccp_enabled{YType::boolean, "iccp-enabled"}
        ,
    message_out(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut>())
    , message_in(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn>())
{
    message_out->parent = this;
    message_in->parent = this;

    yang_name = "statistic"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::~Statistic()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::has_data() const
{
    if (is_presence_container) return true;
    return lsr_id.is_set
	|| label_space_id.is_set
	|| iccp_enabled.is_set
	|| (message_out !=  nullptr && message_out->has_data())
	|| (message_in !=  nullptr && message_in->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(iccp_enabled.yfilter)
	|| (message_out !=  nullptr && message_out->has_operation())
	|| (message_in !=  nullptr && message_in->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (iccp_enabled.is_set || is_set(iccp_enabled.yfilter)) leaf_name_data.push_back(iccp_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message-out")
    {
        if(message_out == nullptr)
        {
            message_out = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut>();
        }
        return message_out;
    }

    if(child_yang_name == "message-in")
    {
        if(message_in == nullptr)
        {
            message_in = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn>();
        }
        return message_in;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(message_out != nullptr)
    {
        _children["message-out"] = message_out;
    }

    if(message_in != nullptr)
    {
        _children["message-in"] = message_in;
    }

    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-enabled")
    {
        iccp_enabled = value;
        iccp_enabled.value_namespace = name_space;
        iccp_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "iccp-enabled")
    {
        iccp_enabled.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-out" || name == "message-in" || name == "lsr-id" || name == "label-space-id" || name == "iccp-enabled")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut::MessageOut()
    :
    total_count{YType::uint32, "total-count"},
    init_count{YType::uint32, "init-count"},
    address_count{YType::uint32, "address-count"},
    address_withdraw_count{YType::uint32, "address-withdraw-count"},
    label_map_count{YType::uint32, "label-map-count"},
    label_withdraw_count{YType::uint32, "label-withdraw-count"},
    label_release_count{YType::uint32, "label-release-count"},
    label_request_count{YType::uint32, "label-request-count"},
    label_abort_request_count{YType::uint32, "label-abort-request-count"},
    notification_count{YType::uint32, "notification-count"},
    keep_alive_count{YType::uint32, "keep-alive-count"},
    iccp_rg_conn_count{YType::uint32, "iccp-rg-conn-count"},
    iccp_rg_disconn_count{YType::uint32, "iccp-rg-disconn-count"},
    iccp_rg_notif_count{YType::uint32, "iccp-rg-notif-count"},
    iccp_rg_app_data_count{YType::uint32, "iccp-rg-app-data-count"}
{

    yang_name = "message-out"; yang_parent_name = "statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut::~MessageOut()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut::has_data() const
{
    if (is_presence_container) return true;
    return total_count.is_set
	|| init_count.is_set
	|| address_count.is_set
	|| address_withdraw_count.is_set
	|| label_map_count.is_set
	|| label_withdraw_count.is_set
	|| label_release_count.is_set
	|| label_request_count.is_set
	|| label_abort_request_count.is_set
	|| notification_count.is_set
	|| keep_alive_count.is_set
	|| iccp_rg_conn_count.is_set
	|| iccp_rg_disconn_count.is_set
	|| iccp_rg_notif_count.is_set
	|| iccp_rg_app_data_count.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(init_count.yfilter)
	|| ydk::is_set(address_count.yfilter)
	|| ydk::is_set(address_withdraw_count.yfilter)
	|| ydk::is_set(label_map_count.yfilter)
	|| ydk::is_set(label_withdraw_count.yfilter)
	|| ydk::is_set(label_release_count.yfilter)
	|| ydk::is_set(label_request_count.yfilter)
	|| ydk::is_set(label_abort_request_count.yfilter)
	|| ydk::is_set(notification_count.yfilter)
	|| ydk::is_set(keep_alive_count.yfilter)
	|| ydk::is_set(iccp_rg_conn_count.yfilter)
	|| ydk::is_set(iccp_rg_disconn_count.yfilter)
	|| ydk::is_set(iccp_rg_notif_count.yfilter)
	|| ydk::is_set(iccp_rg_app_data_count.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (init_count.is_set || is_set(init_count.yfilter)) leaf_name_data.push_back(init_count.get_name_leafdata());
    if (address_count.is_set || is_set(address_count.yfilter)) leaf_name_data.push_back(address_count.get_name_leafdata());
    if (address_withdraw_count.is_set || is_set(address_withdraw_count.yfilter)) leaf_name_data.push_back(address_withdraw_count.get_name_leafdata());
    if (label_map_count.is_set || is_set(label_map_count.yfilter)) leaf_name_data.push_back(label_map_count.get_name_leafdata());
    if (label_withdraw_count.is_set || is_set(label_withdraw_count.yfilter)) leaf_name_data.push_back(label_withdraw_count.get_name_leafdata());
    if (label_release_count.is_set || is_set(label_release_count.yfilter)) leaf_name_data.push_back(label_release_count.get_name_leafdata());
    if (label_request_count.is_set || is_set(label_request_count.yfilter)) leaf_name_data.push_back(label_request_count.get_name_leafdata());
    if (label_abort_request_count.is_set || is_set(label_abort_request_count.yfilter)) leaf_name_data.push_back(label_abort_request_count.get_name_leafdata());
    if (notification_count.is_set || is_set(notification_count.yfilter)) leaf_name_data.push_back(notification_count.get_name_leafdata());
    if (keep_alive_count.is_set || is_set(keep_alive_count.yfilter)) leaf_name_data.push_back(keep_alive_count.get_name_leafdata());
    if (iccp_rg_conn_count.is_set || is_set(iccp_rg_conn_count.yfilter)) leaf_name_data.push_back(iccp_rg_conn_count.get_name_leafdata());
    if (iccp_rg_disconn_count.is_set || is_set(iccp_rg_disconn_count.yfilter)) leaf_name_data.push_back(iccp_rg_disconn_count.get_name_leafdata());
    if (iccp_rg_notif_count.is_set || is_set(iccp_rg_notif_count.yfilter)) leaf_name_data.push_back(iccp_rg_notif_count.get_name_leafdata());
    if (iccp_rg_app_data_count.is_set || is_set(iccp_rg_app_data_count.yfilter)) leaf_name_data.push_back(iccp_rg_app_data_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-count")
    {
        init_count = value;
        init_count.value_namespace = name_space;
        init_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-count")
    {
        address_count = value;
        address_count.value_namespace = name_space;
        address_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-withdraw-count")
    {
        address_withdraw_count = value;
        address_withdraw_count.value_namespace = name_space;
        address_withdraw_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-map-count")
    {
        label_map_count = value;
        label_map_count.value_namespace = name_space;
        label_map_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-withdraw-count")
    {
        label_withdraw_count = value;
        label_withdraw_count.value_namespace = name_space;
        label_withdraw_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-release-count")
    {
        label_release_count = value;
        label_release_count.value_namespace = name_space;
        label_release_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-request-count")
    {
        label_request_count = value;
        label_request_count.value_namespace = name_space;
        label_request_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-abort-request-count")
    {
        label_abort_request_count = value;
        label_abort_request_count.value_namespace = name_space;
        label_abort_request_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-count")
    {
        notification_count = value;
        notification_count.value_namespace = name_space;
        notification_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keep-alive-count")
    {
        keep_alive_count = value;
        keep_alive_count.value_namespace = name_space;
        keep_alive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-rg-conn-count")
    {
        iccp_rg_conn_count = value;
        iccp_rg_conn_count.value_namespace = name_space;
        iccp_rg_conn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-rg-disconn-count")
    {
        iccp_rg_disconn_count = value;
        iccp_rg_disconn_count.value_namespace = name_space;
        iccp_rg_disconn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-rg-notif-count")
    {
        iccp_rg_notif_count = value;
        iccp_rg_notif_count.value_namespace = name_space;
        iccp_rg_notif_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-rg-app-data-count")
    {
        iccp_rg_app_data_count = value;
        iccp_rg_app_data_count.value_namespace = name_space;
        iccp_rg_app_data_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "init-count")
    {
        init_count.yfilter = yfilter;
    }
    if(value_path == "address-count")
    {
        address_count.yfilter = yfilter;
    }
    if(value_path == "address-withdraw-count")
    {
        address_withdraw_count.yfilter = yfilter;
    }
    if(value_path == "label-map-count")
    {
        label_map_count.yfilter = yfilter;
    }
    if(value_path == "label-withdraw-count")
    {
        label_withdraw_count.yfilter = yfilter;
    }
    if(value_path == "label-release-count")
    {
        label_release_count.yfilter = yfilter;
    }
    if(value_path == "label-request-count")
    {
        label_request_count.yfilter = yfilter;
    }
    if(value_path == "label-abort-request-count")
    {
        label_abort_request_count.yfilter = yfilter;
    }
    if(value_path == "notification-count")
    {
        notification_count.yfilter = yfilter;
    }
    if(value_path == "keep-alive-count")
    {
        keep_alive_count.yfilter = yfilter;
    }
    if(value_path == "iccp-rg-conn-count")
    {
        iccp_rg_conn_count.yfilter = yfilter;
    }
    if(value_path == "iccp-rg-disconn-count")
    {
        iccp_rg_disconn_count.yfilter = yfilter;
    }
    if(value_path == "iccp-rg-notif-count")
    {
        iccp_rg_notif_count.yfilter = yfilter;
    }
    if(value_path == "iccp-rg-app-data-count")
    {
        iccp_rg_app_data_count.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-count" || name == "init-count" || name == "address-count" || name == "address-withdraw-count" || name == "label-map-count" || name == "label-withdraw-count" || name == "label-release-count" || name == "label-request-count" || name == "label-abort-request-count" || name == "notification-count" || name == "keep-alive-count" || name == "iccp-rg-conn-count" || name == "iccp-rg-disconn-count" || name == "iccp-rg-notif-count" || name == "iccp-rg-app-data-count")
        return true;
    return false;
}

MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn::MessageIn()
    :
    total_count{YType::uint32, "total-count"},
    init_count{YType::uint32, "init-count"},
    address_count{YType::uint32, "address-count"},
    address_withdraw_count{YType::uint32, "address-withdraw-count"},
    label_map_count{YType::uint32, "label-map-count"},
    label_withdraw_count{YType::uint32, "label-withdraw-count"},
    label_release_count{YType::uint32, "label-release-count"},
    label_request_count{YType::uint32, "label-request-count"},
    label_abort_request_count{YType::uint32, "label-abort-request-count"},
    notification_count{YType::uint32, "notification-count"},
    keep_alive_count{YType::uint32, "keep-alive-count"},
    iccp_rg_conn_count{YType::uint32, "iccp-rg-conn-count"},
    iccp_rg_disconn_count{YType::uint32, "iccp-rg-disconn-count"},
    iccp_rg_notif_count{YType::uint32, "iccp-rg-notif-count"},
    iccp_rg_app_data_count{YType::uint32, "iccp-rg-app-data-count"}
{

    yang_name = "message-in"; yang_parent_name = "statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn::~MessageIn()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn::has_data() const
{
    if (is_presence_container) return true;
    return total_count.is_set
	|| init_count.is_set
	|| address_count.is_set
	|| address_withdraw_count.is_set
	|| label_map_count.is_set
	|| label_withdraw_count.is_set
	|| label_release_count.is_set
	|| label_request_count.is_set
	|| label_abort_request_count.is_set
	|| notification_count.is_set
	|| keep_alive_count.is_set
	|| iccp_rg_conn_count.is_set
	|| iccp_rg_disconn_count.is_set
	|| iccp_rg_notif_count.is_set
	|| iccp_rg_app_data_count.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(init_count.yfilter)
	|| ydk::is_set(address_count.yfilter)
	|| ydk::is_set(address_withdraw_count.yfilter)
	|| ydk::is_set(label_map_count.yfilter)
	|| ydk::is_set(label_withdraw_count.yfilter)
	|| ydk::is_set(label_release_count.yfilter)
	|| ydk::is_set(label_request_count.yfilter)
	|| ydk::is_set(label_abort_request_count.yfilter)
	|| ydk::is_set(notification_count.yfilter)
	|| ydk::is_set(keep_alive_count.yfilter)
	|| ydk::is_set(iccp_rg_conn_count.yfilter)
	|| ydk::is_set(iccp_rg_disconn_count.yfilter)
	|| ydk::is_set(iccp_rg_notif_count.yfilter)
	|| ydk::is_set(iccp_rg_app_data_count.yfilter);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (init_count.is_set || is_set(init_count.yfilter)) leaf_name_data.push_back(init_count.get_name_leafdata());
    if (address_count.is_set || is_set(address_count.yfilter)) leaf_name_data.push_back(address_count.get_name_leafdata());
    if (address_withdraw_count.is_set || is_set(address_withdraw_count.yfilter)) leaf_name_data.push_back(address_withdraw_count.get_name_leafdata());
    if (label_map_count.is_set || is_set(label_map_count.yfilter)) leaf_name_data.push_back(label_map_count.get_name_leafdata());
    if (label_withdraw_count.is_set || is_set(label_withdraw_count.yfilter)) leaf_name_data.push_back(label_withdraw_count.get_name_leafdata());
    if (label_release_count.is_set || is_set(label_release_count.yfilter)) leaf_name_data.push_back(label_release_count.get_name_leafdata());
    if (label_request_count.is_set || is_set(label_request_count.yfilter)) leaf_name_data.push_back(label_request_count.get_name_leafdata());
    if (label_abort_request_count.is_set || is_set(label_abort_request_count.yfilter)) leaf_name_data.push_back(label_abort_request_count.get_name_leafdata());
    if (notification_count.is_set || is_set(notification_count.yfilter)) leaf_name_data.push_back(notification_count.get_name_leafdata());
    if (keep_alive_count.is_set || is_set(keep_alive_count.yfilter)) leaf_name_data.push_back(keep_alive_count.get_name_leafdata());
    if (iccp_rg_conn_count.is_set || is_set(iccp_rg_conn_count.yfilter)) leaf_name_data.push_back(iccp_rg_conn_count.get_name_leafdata());
    if (iccp_rg_disconn_count.is_set || is_set(iccp_rg_disconn_count.yfilter)) leaf_name_data.push_back(iccp_rg_disconn_count.get_name_leafdata());
    if (iccp_rg_notif_count.is_set || is_set(iccp_rg_notif_count.yfilter)) leaf_name_data.push_back(iccp_rg_notif_count.get_name_leafdata());
    if (iccp_rg_app_data_count.is_set || is_set(iccp_rg_app_data_count.yfilter)) leaf_name_data.push_back(iccp_rg_app_data_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-count")
    {
        init_count = value;
        init_count.value_namespace = name_space;
        init_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-count")
    {
        address_count = value;
        address_count.value_namespace = name_space;
        address_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-withdraw-count")
    {
        address_withdraw_count = value;
        address_withdraw_count.value_namespace = name_space;
        address_withdraw_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-map-count")
    {
        label_map_count = value;
        label_map_count.value_namespace = name_space;
        label_map_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-withdraw-count")
    {
        label_withdraw_count = value;
        label_withdraw_count.value_namespace = name_space;
        label_withdraw_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-release-count")
    {
        label_release_count = value;
        label_release_count.value_namespace = name_space;
        label_release_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-request-count")
    {
        label_request_count = value;
        label_request_count.value_namespace = name_space;
        label_request_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-abort-request-count")
    {
        label_abort_request_count = value;
        label_abort_request_count.value_namespace = name_space;
        label_abort_request_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-count")
    {
        notification_count = value;
        notification_count.value_namespace = name_space;
        notification_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keep-alive-count")
    {
        keep_alive_count = value;
        keep_alive_count.value_namespace = name_space;
        keep_alive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-rg-conn-count")
    {
        iccp_rg_conn_count = value;
        iccp_rg_conn_count.value_namespace = name_space;
        iccp_rg_conn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-rg-disconn-count")
    {
        iccp_rg_disconn_count = value;
        iccp_rg_disconn_count.value_namespace = name_space;
        iccp_rg_disconn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-rg-notif-count")
    {
        iccp_rg_notif_count = value;
        iccp_rg_notif_count.value_namespace = name_space;
        iccp_rg_notif_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-rg-app-data-count")
    {
        iccp_rg_app_data_count = value;
        iccp_rg_app_data_count.value_namespace = name_space;
        iccp_rg_app_data_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "init-count")
    {
        init_count.yfilter = yfilter;
    }
    if(value_path == "address-count")
    {
        address_count.yfilter = yfilter;
    }
    if(value_path == "address-withdraw-count")
    {
        address_withdraw_count.yfilter = yfilter;
    }
    if(value_path == "label-map-count")
    {
        label_map_count.yfilter = yfilter;
    }
    if(value_path == "label-withdraw-count")
    {
        label_withdraw_count.yfilter = yfilter;
    }
    if(value_path == "label-release-count")
    {
        label_release_count.yfilter = yfilter;
    }
    if(value_path == "label-request-count")
    {
        label_request_count.yfilter = yfilter;
    }
    if(value_path == "label-abort-request-count")
    {
        label_abort_request_count.yfilter = yfilter;
    }
    if(value_path == "notification-count")
    {
        notification_count.yfilter = yfilter;
    }
    if(value_path == "keep-alive-count")
    {
        keep_alive_count.yfilter = yfilter;
    }
    if(value_path == "iccp-rg-conn-count")
    {
        iccp_rg_conn_count.yfilter = yfilter;
    }
    if(value_path == "iccp-rg-disconn-count")
    {
        iccp_rg_disconn_count.yfilter = yfilter;
    }
    if(value_path == "iccp-rg-notif-count")
    {
        iccp_rg_notif_count.yfilter = yfilter;
    }
    if(value_path == "iccp-rg-app-data-count")
    {
        iccp_rg_app_data_count.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-count" || name == "init-count" || name == "address-count" || name == "address-withdraw-count" || name == "label-map-count" || name == "label-withdraw-count" || name == "label-release-count" || name == "label-request-count" || name == "label-abort-request-count" || name == "notification-count" || name == "keep-alive-count" || name == "iccp-rg-conn-count" || name == "iccp-rg-disconn-count" || name == "iccp-rg-notif-count" || name == "iccp-rg-app-data-count")
        return true;
    return false;
}

MplsLdp::Global::Standby::DiscoverySummaryAll::DiscoverySummaryAll()
    :
    local_ldp_id{YType::str, "local-ldp-id"},
    num_of_ldp_interfaces{YType::uint32, "num-of-ldp-interfaces"},
    num_of_active_ldp_interfaces{YType::uint32, "num-of-active-ldp-interfaces"},
    num_of_lnk_disc_xmit{YType::uint32, "num-of-lnk-disc-xmit"},
    num_of_tgt_disc_xmit{YType::uint32, "num-of-tgt-disc-xmit"},
    num_of_lnk_disc_recv{YType::uint32, "num-of-lnk-disc-recv"},
    num_of_tgt_disc_recv{YType::uint32, "num-of-tgt-disc-recv"},
    num_of_disc_with_bad_addr_recv{YType::uint32, "num-of-disc-with-bad-addr-recv"},
    num_of_disc_with_bad_hello_pdu{YType::uint32, "num-of-disc-with-bad-hello-pdu"},
    num_of_disc_with_bad_xport_addr{YType::uint32, "num-of-disc-with-bad-xport-addr"},
    num_of_disc_with_same_router_id{YType::uint32, "num-of-disc-with-same-router-id"},
    num_of_disc_with_wrong_router_id{YType::uint32, "num-of-disc-with-wrong-router-id"}
        ,
    vrf(std::make_shared<MplsLdp::Global::Standby::DiscoverySummaryAll::Vrf>())
{
    vrf->parent = this;

    yang_name = "discovery-summary-all"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Standby::DiscoverySummaryAll::~DiscoverySummaryAll()
{
}

bool MplsLdp::Global::Standby::DiscoverySummaryAll::has_data() const
{
    if (is_presence_container) return true;
    return local_ldp_id.is_set
	|| num_of_ldp_interfaces.is_set
	|| num_of_active_ldp_interfaces.is_set
	|| num_of_lnk_disc_xmit.is_set
	|| num_of_tgt_disc_xmit.is_set
	|| num_of_lnk_disc_recv.is_set
	|| num_of_tgt_disc_recv.is_set
	|| num_of_disc_with_bad_addr_recv.is_set
	|| num_of_disc_with_bad_hello_pdu.is_set
	|| num_of_disc_with_bad_xport_addr.is_set
	|| num_of_disc_with_same_router_id.is_set
	|| num_of_disc_with_wrong_router_id.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::DiscoverySummaryAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_ldp_id.yfilter)
	|| ydk::is_set(num_of_ldp_interfaces.yfilter)
	|| ydk::is_set(num_of_active_ldp_interfaces.yfilter)
	|| ydk::is_set(num_of_lnk_disc_xmit.yfilter)
	|| ydk::is_set(num_of_tgt_disc_xmit.yfilter)
	|| ydk::is_set(num_of_lnk_disc_recv.yfilter)
	|| ydk::is_set(num_of_tgt_disc_recv.yfilter)
	|| ydk::is_set(num_of_disc_with_bad_addr_recv.yfilter)
	|| ydk::is_set(num_of_disc_with_bad_hello_pdu.yfilter)
	|| ydk::is_set(num_of_disc_with_bad_xport_addr.yfilter)
	|| ydk::is_set(num_of_disc_with_same_router_id.yfilter)
	|| ydk::is_set(num_of_disc_with_wrong_router_id.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::DiscoverySummaryAll::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Standby::DiscoverySummaryAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery-summary-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::DiscoverySummaryAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_ldp_id.is_set || is_set(local_ldp_id.yfilter)) leaf_name_data.push_back(local_ldp_id.get_name_leafdata());
    if (num_of_ldp_interfaces.is_set || is_set(num_of_ldp_interfaces.yfilter)) leaf_name_data.push_back(num_of_ldp_interfaces.get_name_leafdata());
    if (num_of_active_ldp_interfaces.is_set || is_set(num_of_active_ldp_interfaces.yfilter)) leaf_name_data.push_back(num_of_active_ldp_interfaces.get_name_leafdata());
    if (num_of_lnk_disc_xmit.is_set || is_set(num_of_lnk_disc_xmit.yfilter)) leaf_name_data.push_back(num_of_lnk_disc_xmit.get_name_leafdata());
    if (num_of_tgt_disc_xmit.is_set || is_set(num_of_tgt_disc_xmit.yfilter)) leaf_name_data.push_back(num_of_tgt_disc_xmit.get_name_leafdata());
    if (num_of_lnk_disc_recv.is_set || is_set(num_of_lnk_disc_recv.yfilter)) leaf_name_data.push_back(num_of_lnk_disc_recv.get_name_leafdata());
    if (num_of_tgt_disc_recv.is_set || is_set(num_of_tgt_disc_recv.yfilter)) leaf_name_data.push_back(num_of_tgt_disc_recv.get_name_leafdata());
    if (num_of_disc_with_bad_addr_recv.is_set || is_set(num_of_disc_with_bad_addr_recv.yfilter)) leaf_name_data.push_back(num_of_disc_with_bad_addr_recv.get_name_leafdata());
    if (num_of_disc_with_bad_hello_pdu.is_set || is_set(num_of_disc_with_bad_hello_pdu.yfilter)) leaf_name_data.push_back(num_of_disc_with_bad_hello_pdu.get_name_leafdata());
    if (num_of_disc_with_bad_xport_addr.is_set || is_set(num_of_disc_with_bad_xport_addr.yfilter)) leaf_name_data.push_back(num_of_disc_with_bad_xport_addr.get_name_leafdata());
    if (num_of_disc_with_same_router_id.is_set || is_set(num_of_disc_with_same_router_id.yfilter)) leaf_name_data.push_back(num_of_disc_with_same_router_id.get_name_leafdata());
    if (num_of_disc_with_wrong_router_id.is_set || is_set(num_of_disc_with_wrong_router_id.yfilter)) leaf_name_data.push_back(num_of_disc_with_wrong_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::DiscoverySummaryAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::DiscoverySummaryAll::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::DiscoverySummaryAll::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    return _children;
}

void MplsLdp::Global::Standby::DiscoverySummaryAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-ldp-id")
    {
        local_ldp_id = value;
        local_ldp_id.value_namespace = name_space;
        local_ldp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-ldp-interfaces")
    {
        num_of_ldp_interfaces = value;
        num_of_ldp_interfaces.value_namespace = name_space;
        num_of_ldp_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-active-ldp-interfaces")
    {
        num_of_active_ldp_interfaces = value;
        num_of_active_ldp_interfaces.value_namespace = name_space;
        num_of_active_ldp_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-lnk-disc-xmit")
    {
        num_of_lnk_disc_xmit = value;
        num_of_lnk_disc_xmit.value_namespace = name_space;
        num_of_lnk_disc_xmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-tgt-disc-xmit")
    {
        num_of_tgt_disc_xmit = value;
        num_of_tgt_disc_xmit.value_namespace = name_space;
        num_of_tgt_disc_xmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-lnk-disc-recv")
    {
        num_of_lnk_disc_recv = value;
        num_of_lnk_disc_recv.value_namespace = name_space;
        num_of_lnk_disc_recv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-tgt-disc-recv")
    {
        num_of_tgt_disc_recv = value;
        num_of_tgt_disc_recv.value_namespace = name_space;
        num_of_tgt_disc_recv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-disc-with-bad-addr-recv")
    {
        num_of_disc_with_bad_addr_recv = value;
        num_of_disc_with_bad_addr_recv.value_namespace = name_space;
        num_of_disc_with_bad_addr_recv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-disc-with-bad-hello-pdu")
    {
        num_of_disc_with_bad_hello_pdu = value;
        num_of_disc_with_bad_hello_pdu.value_namespace = name_space;
        num_of_disc_with_bad_hello_pdu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-disc-with-bad-xport-addr")
    {
        num_of_disc_with_bad_xport_addr = value;
        num_of_disc_with_bad_xport_addr.value_namespace = name_space;
        num_of_disc_with_bad_xport_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-disc-with-same-router-id")
    {
        num_of_disc_with_same_router_id = value;
        num_of_disc_with_same_router_id.value_namespace = name_space;
        num_of_disc_with_same_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-disc-with-wrong-router-id")
    {
        num_of_disc_with_wrong_router_id = value;
        num_of_disc_with_wrong_router_id.value_namespace = name_space;
        num_of_disc_with_wrong_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::DiscoverySummaryAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-ldp-id")
    {
        local_ldp_id.yfilter = yfilter;
    }
    if(value_path == "num-of-ldp-interfaces")
    {
        num_of_ldp_interfaces.yfilter = yfilter;
    }
    if(value_path == "num-of-active-ldp-interfaces")
    {
        num_of_active_ldp_interfaces.yfilter = yfilter;
    }
    if(value_path == "num-of-lnk-disc-xmit")
    {
        num_of_lnk_disc_xmit.yfilter = yfilter;
    }
    if(value_path == "num-of-tgt-disc-xmit")
    {
        num_of_tgt_disc_xmit.yfilter = yfilter;
    }
    if(value_path == "num-of-lnk-disc-recv")
    {
        num_of_lnk_disc_recv.yfilter = yfilter;
    }
    if(value_path == "num-of-tgt-disc-recv")
    {
        num_of_tgt_disc_recv.yfilter = yfilter;
    }
    if(value_path == "num-of-disc-with-bad-addr-recv")
    {
        num_of_disc_with_bad_addr_recv.yfilter = yfilter;
    }
    if(value_path == "num-of-disc-with-bad-hello-pdu")
    {
        num_of_disc_with_bad_hello_pdu.yfilter = yfilter;
    }
    if(value_path == "num-of-disc-with-bad-xport-addr")
    {
        num_of_disc_with_bad_xport_addr.yfilter = yfilter;
    }
    if(value_path == "num-of-disc-with-same-router-id")
    {
        num_of_disc_with_same_router_id.yfilter = yfilter;
    }
    if(value_path == "num-of-disc-with-wrong-router-id")
    {
        num_of_disc_with_wrong_router_id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::DiscoverySummaryAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "local-ldp-id" || name == "num-of-ldp-interfaces" || name == "num-of-active-ldp-interfaces" || name == "num-of-lnk-disc-xmit" || name == "num-of-tgt-disc-xmit" || name == "num-of-lnk-disc-recv" || name == "num-of-tgt-disc-recv" || name == "num-of-disc-with-bad-addr-recv" || name == "num-of-disc-with-bad-hello-pdu" || name == "num-of-disc-with-bad-xport-addr" || name == "num-of-disc-with-same-router-id" || name == "num-of-disc-with-wrong-router-id")
        return true;
    return false;
}

MplsLdp::Global::Standby::DiscoverySummaryAll::Vrf::Vrf()
    :
    name{YType::str, "name"},
    id{YType::uint32, "id"}
{

    yang_name = "vrf"; yang_parent_name = "discovery-summary-all"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Standby::DiscoverySummaryAll::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Standby::DiscoverySummaryAll::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| id.is_set;
}

bool MplsLdp::Global::Standby::DiscoverySummaryAll::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string MplsLdp::Global::Standby::DiscoverySummaryAll::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/discovery-summary-all/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Standby::DiscoverySummaryAll::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Standby::DiscoverySummaryAll::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Standby::DiscoverySummaryAll::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Standby::DiscoverySummaryAll::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Standby::DiscoverySummaryAll::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Standby::DiscoverySummaryAll::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Standby::DiscoverySummaryAll::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "id")
        return true;
    return false;
}

MplsLdp::Global::Active::Active()
    :
    default_vrf(std::make_shared<MplsLdp::Global::Active::DefaultVrf>())
    , forwarding_summary_all(std::make_shared<MplsLdp::Global::Active::ForwardingSummaryAll>())
    , bindings_summary_all(std::make_shared<MplsLdp::Global::Active::BindingsSummaryAll>())
    , ato_mdb_table_entries(std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries>())
    , nsr_summary_all(std::make_shared<MplsLdp::Global::Active::NsrSummaryAll>())
    , summary(std::make_shared<MplsLdp::Global::Active::Summary>())
    , vrfs(std::make_shared<MplsLdp::Global::Active::Vrfs>())
    , discovery_summary_all(std::make_shared<MplsLdp::Global::Active::DiscoverySummaryAll>())
{
    default_vrf->parent = this;
    forwarding_summary_all->parent = this;
    bindings_summary_all->parent = this;
    ato_mdb_table_entries->parent = this;
    nsr_summary_all->parent = this;
    summary->parent = this;
    vrfs->parent = this;
    discovery_summary_all->parent = this;

    yang_name = "active"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Active::~Active()
{
}

bool MplsLdp::Global::Active::has_data() const
{
    if (is_presence_container) return true;
    return (default_vrf !=  nullptr && default_vrf->has_data())
	|| (forwarding_summary_all !=  nullptr && forwarding_summary_all->has_data())
	|| (bindings_summary_all !=  nullptr && bindings_summary_all->has_data())
	|| (ato_mdb_table_entries !=  nullptr && ato_mdb_table_entries->has_data())
	|| (nsr_summary_all !=  nullptr && nsr_summary_all->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data())
	|| (discovery_summary_all !=  nullptr && discovery_summary_all->has_data());
}

bool MplsLdp::Global::Active::has_operation() const
{
    return is_set(yfilter)
	|| (default_vrf !=  nullptr && default_vrf->has_operation())
	|| (forwarding_summary_all !=  nullptr && forwarding_summary_all->has_operation())
	|| (bindings_summary_all !=  nullptr && bindings_summary_all->has_operation())
	|| (ato_mdb_table_entries !=  nullptr && ato_mdb_table_entries->has_operation())
	|| (nsr_summary_all !=  nullptr && nsr_summary_all->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation())
	|| (discovery_summary_all !=  nullptr && discovery_summary_all->has_operation());
}

std::string MplsLdp::Global::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-vrf")
    {
        if(default_vrf == nullptr)
        {
            default_vrf = std::make_shared<MplsLdp::Global::Active::DefaultVrf>();
        }
        return default_vrf;
    }

    if(child_yang_name == "forwarding-summary-all")
    {
        if(forwarding_summary_all == nullptr)
        {
            forwarding_summary_all = std::make_shared<MplsLdp::Global::Active::ForwardingSummaryAll>();
        }
        return forwarding_summary_all;
    }

    if(child_yang_name == "bindings-summary-all")
    {
        if(bindings_summary_all == nullptr)
        {
            bindings_summary_all = std::make_shared<MplsLdp::Global::Active::BindingsSummaryAll>();
        }
        return bindings_summary_all;
    }

    if(child_yang_name == "ato-mdb-table-entries")
    {
        if(ato_mdb_table_entries == nullptr)
        {
            ato_mdb_table_entries = std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries>();
        }
        return ato_mdb_table_entries;
    }

    if(child_yang_name == "nsr-summary-all")
    {
        if(nsr_summary_all == nullptr)
        {
            nsr_summary_all = std::make_shared<MplsLdp::Global::Active::NsrSummaryAll>();
        }
        return nsr_summary_all;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsLdp::Global::Active::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<MplsLdp::Global::Active::Vrfs>();
        }
        return vrfs;
    }

    if(child_yang_name == "discovery-summary-all")
    {
        if(discovery_summary_all == nullptr)
        {
            discovery_summary_all = std::make_shared<MplsLdp::Global::Active::DiscoverySummaryAll>();
        }
        return discovery_summary_all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_vrf != nullptr)
    {
        _children["default-vrf"] = default_vrf;
    }

    if(forwarding_summary_all != nullptr)
    {
        _children["forwarding-summary-all"] = forwarding_summary_all;
    }

    if(bindings_summary_all != nullptr)
    {
        _children["bindings-summary-all"] = bindings_summary_all;
    }

    if(ato_mdb_table_entries != nullptr)
    {
        _children["ato-mdb-table-entries"] = ato_mdb_table_entries;
    }

    if(nsr_summary_all != nullptr)
    {
        _children["nsr-summary-all"] = nsr_summary_all;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(vrfs != nullptr)
    {
        _children["vrfs"] = vrfs;
    }

    if(discovery_summary_all != nullptr)
    {
        _children["discovery-summary-all"] = discovery_summary_all;
    }

    return _children;
}

void MplsLdp::Global::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-vrf" || name == "forwarding-summary-all" || name == "bindings-summary-all" || name == "ato-mdb-table-entries" || name == "nsr-summary-all" || name == "summary" || name == "vrfs" || name == "discovery-summary-all")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::DefaultVrf()
    :
    graceful_restart(std::make_shared<MplsLdp::Global::Active::DefaultVrf::GracefulRestart>())
    , capabilities(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Capabilities>())
    , summary(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Summary>())
    , afs(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs>())
    , neighbor_briefs(std::make_shared<MplsLdp::Global::Active::DefaultVrf::NeighborBriefs>())
    , backoff_parameters(std::make_shared<MplsLdp::Global::Active::DefaultVrf::BackoffParameters>())
    , backoffs(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Backoffs>())
    , nsr(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Nsr>())
    , parameters(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Parameters>())
    , issu(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Issu>())
    , neighbor_capabilities(std::make_shared<MplsLdp::Global::Active::DefaultVrf::NeighborCapabilities>())
    , neighbors(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Neighbors>())
    , ldp_id(std::make_shared<MplsLdp::Global::Active::DefaultVrf::LdpId>())
    , statistics(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Statistics>())
{
    graceful_restart->parent = this;
    capabilities->parent = this;
    summary->parent = this;
    afs->parent = this;
    neighbor_briefs->parent = this;
    backoff_parameters->parent = this;
    backoffs->parent = this;
    nsr->parent = this;
    parameters->parent = this;
    issu->parent = this;
    neighbor_capabilities->parent = this;
    neighbors->parent = this;
    ldp_id->parent = this;
    statistics->parent = this;

    yang_name = "default-vrf"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Active::DefaultVrf::~DefaultVrf()
{
}

bool MplsLdp::Global::Active::DefaultVrf::has_data() const
{
    if (is_presence_container) return true;
    return (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (capabilities !=  nullptr && capabilities->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (afs !=  nullptr && afs->has_data())
	|| (neighbor_briefs !=  nullptr && neighbor_briefs->has_data())
	|| (backoff_parameters !=  nullptr && backoff_parameters->has_data())
	|| (backoffs !=  nullptr && backoffs->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (parameters !=  nullptr && parameters->has_data())
	|| (issu !=  nullptr && issu->has_data())
	|| (neighbor_capabilities !=  nullptr && neighbor_capabilities->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (ldp_id !=  nullptr && ldp_id->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::has_operation() const
{
    return is_set(yfilter)
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (capabilities !=  nullptr && capabilities->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (afs !=  nullptr && afs->has_operation())
	|| (neighbor_briefs !=  nullptr && neighbor_briefs->has_operation())
	|| (backoff_parameters !=  nullptr && backoff_parameters->has_operation())
	|| (backoffs !=  nullptr && backoffs->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (parameters !=  nullptr && parameters->has_operation())
	|| (issu !=  nullptr && issu->has_operation())
	|| (neighbor_capabilities !=  nullptr && neighbor_capabilities->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (ldp_id !=  nullptr && ldp_id->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Active::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<MplsLdp::Global::Active::DefaultVrf::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "capabilities")
    {
        if(capabilities == nullptr)
        {
            capabilities = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Capabilities>();
        }
        return capabilities;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs>();
        }
        return afs;
    }

    if(child_yang_name == "neighbor-briefs")
    {
        if(neighbor_briefs == nullptr)
        {
            neighbor_briefs = std::make_shared<MplsLdp::Global::Active::DefaultVrf::NeighborBriefs>();
        }
        return neighbor_briefs;
    }

    if(child_yang_name == "backoff-parameters")
    {
        if(backoff_parameters == nullptr)
        {
            backoff_parameters = std::make_shared<MplsLdp::Global::Active::DefaultVrf::BackoffParameters>();
        }
        return backoff_parameters;
    }

    if(child_yang_name == "backoffs")
    {
        if(backoffs == nullptr)
        {
            backoffs = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Backoffs>();
        }
        return backoffs;
    }

    if(child_yang_name == "nsr")
    {
        if(nsr == nullptr)
        {
            nsr = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Nsr>();
        }
        return nsr;
    }

    if(child_yang_name == "parameters")
    {
        if(parameters == nullptr)
        {
            parameters = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Parameters>();
        }
        return parameters;
    }

    if(child_yang_name == "issu")
    {
        if(issu == nullptr)
        {
            issu = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Issu>();
        }
        return issu;
    }

    if(child_yang_name == "neighbor-capabilities")
    {
        if(neighbor_capabilities == nullptr)
        {
            neighbor_capabilities = std::make_shared<MplsLdp::Global::Active::DefaultVrf::NeighborCapabilities>();
        }
        return neighbor_capabilities;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "ldp-id")
    {
        if(ldp_id == nullptr)
        {
            ldp_id = std::make_shared<MplsLdp::Global::Active::DefaultVrf::LdpId>();
        }
        return ldp_id;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(graceful_restart != nullptr)
    {
        _children["graceful-restart"] = graceful_restart;
    }

    if(capabilities != nullptr)
    {
        _children["capabilities"] = capabilities;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(afs != nullptr)
    {
        _children["afs"] = afs;
    }

    if(neighbor_briefs != nullptr)
    {
        _children["neighbor-briefs"] = neighbor_briefs;
    }

    if(backoff_parameters != nullptr)
    {
        _children["backoff-parameters"] = backoff_parameters;
    }

    if(backoffs != nullptr)
    {
        _children["backoffs"] = backoffs;
    }

    if(nsr != nullptr)
    {
        _children["nsr"] = nsr;
    }

    if(parameters != nullptr)
    {
        _children["parameters"] = parameters;
    }

    if(issu != nullptr)
    {
        _children["issu"] = issu;
    }

    if(neighbor_capabilities != nullptr)
    {
        _children["neighbor-capabilities"] = neighbor_capabilities;
    }

    if(neighbors != nullptr)
    {
        _children["neighbors"] = neighbors;
    }

    if(ldp_id != nullptr)
    {
        _children["ldp-id"] = ldp_id;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::DefaultVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::DefaultVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-restart" || name == "capabilities" || name == "summary" || name == "afs" || name == "neighbor-briefs" || name == "backoff-parameters" || name == "backoffs" || name == "nsr" || name == "parameters" || name == "issu" || name == "neighbor-capabilities" || name == "neighbors" || name == "ldp-id" || name == "statistics")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestart()
    :
    is_forwarding_state_hold_timer_running{YType::boolean, "is-forwarding-state-hold-timer-running"},
    forwarding_state_hold_timer_remaining_seconds{YType::uint32, "forwarding-state-hold-timer-remaining-seconds"}
        ,
    vrf(std::make_shared<MplsLdp::Global::Active::DefaultVrf::GracefulRestart::Vrf>())
    , graceful_restartable_neighbor(this, {})
{
    vrf->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Active::DefaultVrf::GracefulRestart::~GracefulRestart()
{
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<graceful_restartable_neighbor.len(); index++)
    {
        if(graceful_restartable_neighbor[index]->has_data())
            return true;
    }
    return is_forwarding_state_hold_timer_running.is_set
	|| forwarding_state_hold_timer_remaining_seconds.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::has_operation() const
{
    for (std::size_t index=0; index<graceful_restartable_neighbor.len(); index++)
    {
        if(graceful_restartable_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_forwarding_state_hold_timer_running.yfilter)
	|| ydk::is_set(forwarding_state_hold_timer_remaining_seconds.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::GracefulRestart::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Active::DefaultVrf::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_forwarding_state_hold_timer_running.is_set || is_set(is_forwarding_state_hold_timer_running.yfilter)) leaf_name_data.push_back(is_forwarding_state_hold_timer_running.get_name_leafdata());
    if (forwarding_state_hold_timer_remaining_seconds.is_set || is_set(forwarding_state_hold_timer_remaining_seconds.yfilter)) leaf_name_data.push_back(forwarding_state_hold_timer_remaining_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Active::DefaultVrf::GracefulRestart::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "graceful-restartable-neighbor")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor>();
        ent_->parent = this;
        graceful_restartable_neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    count_ = 0;
    for (auto ent_ : graceful_restartable_neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-forwarding-state-hold-timer-running")
    {
        is_forwarding_state_hold_timer_running = value;
        is_forwarding_state_hold_timer_running.value_namespace = name_space;
        is_forwarding_state_hold_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-state-hold-timer-remaining-seconds")
    {
        forwarding_state_hold_timer_remaining_seconds = value;
        forwarding_state_hold_timer_remaining_seconds.value_namespace = name_space;
        forwarding_state_hold_timer_remaining_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-forwarding-state-hold-timer-running")
    {
        is_forwarding_state_hold_timer_running.yfilter = yfilter;
    }
    if(value_path == "forwarding-state-hold-timer-remaining-seconds")
    {
        forwarding_state_hold_timer_remaining_seconds.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "graceful-restartable-neighbor" || name == "is-forwarding-state-hold-timer-running" || name == "forwarding-state-hold-timer-remaining-seconds")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::GracefulRestart::Vrf::Vrf()
    :
    name{YType::str, "name"},
    id{YType::uint32, "id"}
{

    yang_name = "vrf"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Active::DefaultVrf::GracefulRestart::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| id.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::GracefulRestart::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/default-vrf/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Active::DefaultVrf::GracefulRestart::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::GracefulRestart::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::GracefulRestart::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::GracefulRestart::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::GracefulRestart::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::GracefulRestart::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "id")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GracefulRestartableNeighbor()
    :
    connect_count{YType::uint32, "connect-count"},
    is_neighbor_up{YType::boolean, "is-neighbor-up"},
    is_liveness_timer_running{YType::boolean, "is-liveness-timer-running"},
    liveness_timer_remaining_seconds{YType::uint32, "liveness-timer-remaining-seconds"},
    is_recovery_timer_running{YType::boolean, "is-recovery-timer-running"},
    recovery_timer_remaining_seconds{YType::uint32, "recovery-timer-remaining-seconds"},
    down_nbr_flap_count{YType::uint8, "down-nbr-flap-count"},
    down_nbr_flags{YType::uint32, "down-nbr-flags"},
    down_nbr_down_reason{YType::uint32, "down-nbr-down-reason"}
        ,
    gr_peer(std::make_shared<MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer>())
    , down_nbr_interface(this, {})
    , down_nbr_address(this, {})
{
    gr_peer->parent = this;

    yang_name = "graceful-restartable-neighbor"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::~GracefulRestartableNeighbor()
{
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<down_nbr_interface.len(); index++)
    {
        if(down_nbr_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<down_nbr_address.len(); index++)
    {
        if(down_nbr_address[index]->has_data())
            return true;
    }
    return connect_count.is_set
	|| is_neighbor_up.is_set
	|| is_liveness_timer_running.is_set
	|| liveness_timer_remaining_seconds.is_set
	|| is_recovery_timer_running.is_set
	|| recovery_timer_remaining_seconds.is_set
	|| down_nbr_flap_count.is_set
	|| down_nbr_flags.is_set
	|| down_nbr_down_reason.is_set
	|| (gr_peer !=  nullptr && gr_peer->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::has_operation() const
{
    for (std::size_t index=0; index<down_nbr_interface.len(); index++)
    {
        if(down_nbr_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<down_nbr_address.len(); index++)
    {
        if(down_nbr_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(connect_count.yfilter)
	|| ydk::is_set(is_neighbor_up.yfilter)
	|| ydk::is_set(is_liveness_timer_running.yfilter)
	|| ydk::is_set(liveness_timer_remaining_seconds.yfilter)
	|| ydk::is_set(is_recovery_timer_running.yfilter)
	|| ydk::is_set(recovery_timer_remaining_seconds.yfilter)
	|| ydk::is_set(down_nbr_flap_count.yfilter)
	|| ydk::is_set(down_nbr_flags.yfilter)
	|| ydk::is_set(down_nbr_down_reason.yfilter)
	|| (gr_peer !=  nullptr && gr_peer->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/default-vrf/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restartable-neighbor";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_count.is_set || is_set(connect_count.yfilter)) leaf_name_data.push_back(connect_count.get_name_leafdata());
    if (is_neighbor_up.is_set || is_set(is_neighbor_up.yfilter)) leaf_name_data.push_back(is_neighbor_up.get_name_leafdata());
    if (is_liveness_timer_running.is_set || is_set(is_liveness_timer_running.yfilter)) leaf_name_data.push_back(is_liveness_timer_running.get_name_leafdata());
    if (liveness_timer_remaining_seconds.is_set || is_set(liveness_timer_remaining_seconds.yfilter)) leaf_name_data.push_back(liveness_timer_remaining_seconds.get_name_leafdata());
    if (is_recovery_timer_running.is_set || is_set(is_recovery_timer_running.yfilter)) leaf_name_data.push_back(is_recovery_timer_running.get_name_leafdata());
    if (recovery_timer_remaining_seconds.is_set || is_set(recovery_timer_remaining_seconds.yfilter)) leaf_name_data.push_back(recovery_timer_remaining_seconds.get_name_leafdata());
    if (down_nbr_flap_count.is_set || is_set(down_nbr_flap_count.yfilter)) leaf_name_data.push_back(down_nbr_flap_count.get_name_leafdata());
    if (down_nbr_flags.is_set || is_set(down_nbr_flags.yfilter)) leaf_name_data.push_back(down_nbr_flags.get_name_leafdata());
    if (down_nbr_down_reason.is_set || is_set(down_nbr_down_reason.yfilter)) leaf_name_data.push_back(down_nbr_down_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gr-peer")
    {
        if(gr_peer == nullptr)
        {
            gr_peer = std::make_shared<MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer>();
        }
        return gr_peer;
    }

    if(child_yang_name == "down-nbr-interface")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface>();
        ent_->parent = this;
        down_nbr_interface.append(ent_);
        return ent_;
    }

    if(child_yang_name == "down-nbr-address")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress>();
        ent_->parent = this;
        down_nbr_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(gr_peer != nullptr)
    {
        _children["gr-peer"] = gr_peer;
    }

    count_ = 0;
    for (auto ent_ : down_nbr_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : down_nbr_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connect-count")
    {
        connect_count = value;
        connect_count.value_namespace = name_space;
        connect_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-up")
    {
        is_neighbor_up = value;
        is_neighbor_up.value_namespace = name_space;
        is_neighbor_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-liveness-timer-running")
    {
        is_liveness_timer_running = value;
        is_liveness_timer_running.value_namespace = name_space;
        is_liveness_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "liveness-timer-remaining-seconds")
    {
        liveness_timer_remaining_seconds = value;
        liveness_timer_remaining_seconds.value_namespace = name_space;
        liveness_timer_remaining_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-recovery-timer-running")
    {
        is_recovery_timer_running = value;
        is_recovery_timer_running.value_namespace = name_space;
        is_recovery_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-timer-remaining-seconds")
    {
        recovery_timer_remaining_seconds = value;
        recovery_timer_remaining_seconds.value_namespace = name_space;
        recovery_timer_remaining_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-nbr-flap-count")
    {
        down_nbr_flap_count = value;
        down_nbr_flap_count.value_namespace = name_space;
        down_nbr_flap_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-nbr-flags")
    {
        down_nbr_flags = value;
        down_nbr_flags.value_namespace = name_space;
        down_nbr_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-nbr-down-reason")
    {
        down_nbr_down_reason = value;
        down_nbr_down_reason.value_namespace = name_space;
        down_nbr_down_reason.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connect-count")
    {
        connect_count.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-up")
    {
        is_neighbor_up.yfilter = yfilter;
    }
    if(value_path == "is-liveness-timer-running")
    {
        is_liveness_timer_running.yfilter = yfilter;
    }
    if(value_path == "liveness-timer-remaining-seconds")
    {
        liveness_timer_remaining_seconds.yfilter = yfilter;
    }
    if(value_path == "is-recovery-timer-running")
    {
        is_recovery_timer_running.yfilter = yfilter;
    }
    if(value_path == "recovery-timer-remaining-seconds")
    {
        recovery_timer_remaining_seconds.yfilter = yfilter;
    }
    if(value_path == "down-nbr-flap-count")
    {
        down_nbr_flap_count.yfilter = yfilter;
    }
    if(value_path == "down-nbr-flags")
    {
        down_nbr_flags.yfilter = yfilter;
    }
    if(value_path == "down-nbr-down-reason")
    {
        down_nbr_down_reason.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gr-peer" || name == "down-nbr-interface" || name == "down-nbr-address" || name == "connect-count" || name == "is-neighbor-up" || name == "is-liveness-timer-running" || name == "liveness-timer-remaining-seconds" || name == "is-recovery-timer-running" || name == "recovery-timer-remaining-seconds" || name == "down-nbr-flap-count" || name == "down-nbr-flags" || name == "down-nbr-down-reason")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::GrPeer()
    :
    lsr_id{YType::str, "lsr-id"},
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"}
{

    yang_name = "gr-peer"; yang_parent_name = "graceful-restartable-neighbor"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::~GrPeer()
{
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::has_data() const
{
    if (is_presence_container) return true;
    return lsr_id.is_set
	|| label_space_id.is_set
	|| ldp_id.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(ldp_id.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/default-vrf/graceful-restart/graceful-restartable-neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gr-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.yfilter)) leaf_name_data.push_back(ldp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
        ldp_id.value_namespace = name_space;
        ldp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "ldp-id")
    {
        ldp_id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsr-id" || name == "label-space-id" || name == "ldp-id")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::DownNbrInterface()
    :
    address_family{YType::enumeration, "address-family"},
    interface_handle{YType::str, "interface-handle"}
{

    yang_name = "down-nbr-interface"; yang_parent_name = "graceful-restartable-neighbor"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::~DownNbrInterface()
{
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| interface_handle.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(interface_handle.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/default-vrf/graceful-restart/graceful-restartable-neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down-nbr-interface";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "interface-handle")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::DownNbrAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "down-nbr-address"; yang_parent_name = "graceful-restartable-neighbor"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::~DownNbrAddress()
{
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/default-vrf/graceful-restart/graceful-restartable-neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down-nbr-address";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Capabilities::Capabilities()
    :
    capability(this, {"capability_type"})
{

    yang_name = "capabilities"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Active::DefaultVrf::Capabilities::~Capabilities()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Capabilities::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<capability.len(); index++)
    {
        if(capability[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::DefaultVrf::Capabilities::has_operation() const
{
    for (std::size_t index=0; index<capability.len(); index++)
    {
        if(capability[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Capabilities::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Active::DefaultVrf::Capabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capabilities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Capabilities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Capabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "capability")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability>();
        ent_->parent = this;
        capability.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Capabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : capability.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Capabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::DefaultVrf::Capabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::DefaultVrf::Capabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capability")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::Capability()
    :
    capability_type{YType::uint32, "capability-type"},
    capability_owner{YType::str, "capability-owner"}
        ,
    capability(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::Capability_>())
{
    capability->parent = this;

    yang_name = "capability"; yang_parent_name = "capabilities"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::~Capability()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::has_data() const
{
    if (is_presence_container) return true;
    return capability_type.is_set
	|| capability_owner.is_set
	|| (capability !=  nullptr && capability->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(capability_type.yfilter)
	|| ydk::is_set(capability_owner.yfilter)
	|| (capability !=  nullptr && capability->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/default-vrf/capabilities/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";
    ADD_KEY_TOKEN(capability_type, "capability-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability_type.is_set || is_set(capability_type.yfilter)) leaf_name_data.push_back(capability_type.get_name_leafdata());
    if (capability_owner.is_set || is_set(capability_owner.yfilter)) leaf_name_data.push_back(capability_owner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::Capability_>();
        }
        return capability;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(capability != nullptr)
    {
        _children["capability"] = capability;
    }

    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "capability-type")
    {
        capability_type = value;
        capability_type.value_namespace = name_space;
        capability_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-owner")
    {
        capability_owner = value;
        capability_owner.value_namespace = name_space;
        capability_owner.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capability-type")
    {
        capability_type.yfilter = yfilter;
    }
    if(value_path == "capability-owner")
    {
        capability_owner.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capability" || name == "capability-type" || name == "capability-owner")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::Capability_::Capability_()
    :
    type{YType::uint16, "type"},
    description{YType::str, "description"},
    capability_data_length{YType::uint16, "capability-data-length"},
    capability_data{YType::str, "capability-data"}
{

    yang_name = "capability"; yang_parent_name = "capability"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::Capability_::~Capability_()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::Capability_::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| description.is_set
	|| capability_data_length.is_set
	|| capability_data.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::Capability_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(capability_data_length.yfilter)
	|| ydk::is_set(capability_data.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::Capability_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::Capability_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (capability_data_length.is_set || is_set(capability_data_length.yfilter)) leaf_name_data.push_back(capability_data_length.get_name_leafdata());
    if (capability_data.is_set || is_set(capability_data.yfilter)) leaf_name_data.push_back(capability_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::Capability_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::Capability_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::Capability_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length = value;
        capability_data_length.value_namespace = name_space;
        capability_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-data")
    {
        capability_data = value;
        capability_data.value_namespace = name_space;
        capability_data.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::Capability_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length.yfilter = yfilter;
    }
    if(value_path == "capability-data")
    {
        capability_data.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::Capability_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "description" || name == "capability-data-length" || name == "capability-data")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Summary::Summary()
    :
    vrf(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Summary::Vrf>())
    , common(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Summary::Common>())
{
    vrf->parent = this;
    common->parent = this;

    yang_name = "summary"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Active::DefaultVrf::Summary::~Summary()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Summary::has_data() const
{
    if (is_presence_container) return true;
    return (vrf !=  nullptr && vrf->has_data())
	|| (common !=  nullptr && common->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::Summary::has_operation() const
{
    return is_set(yfilter)
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (common !=  nullptr && common->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Active::DefaultVrf::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Summary::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "common")
    {
        if(common == nullptr)
        {
            common = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Summary::Common>();
        }
        return common;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    if(common != nullptr)
    {
        _children["common"] = common;
    }

    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::DefaultVrf::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::DefaultVrf::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "common")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Summary::Vrf::Vrf()
    :
    name{YType::str, "name"},
    id{YType::uint32, "id"}
{

    yang_name = "vrf"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Active::DefaultVrf::Summary::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Summary::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| id.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Summary::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Summary::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/default-vrf/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Active::DefaultVrf::Summary::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Summary::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Summary::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Summary::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Summary::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Summary::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Summary::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "id")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Summary::Common::Common()
    :
    address_families{YType::enumeration, "address-families"},
    number_of_ipv4af{YType::uint32, "number-of-ipv4af"},
    number_of_ipv6af{YType::uint32, "number-of-ipv6af"},
    number_of_neighbors{YType::uint32, "number-of-neighbors"},
    number_of_nsr_synced_neighbors{YType::uint32, "number-of-nsr-synced-neighbors"},
    number_of_graceful_restart_neighbors{YType::uint32, "number-of-graceful-restart-neighbors"},
    number_of_downstream_on_demand_neighbors{YType::uint32, "number-of-downstream-on-demand-neighbors"},
    number_of_ipv4_hello_adj{YType::uint32, "number-of-ipv4-hello-adj"},
    number_of_ipv6_hello_adj{YType::uint32, "number-of-ipv6-hello-adj"},
    number_of_ipv4_routes{YType::uint32, "number-of-ipv4-routes"},
    number_of_ipv6_routes{YType::uint32, "number-of-ipv6-routes"},
    number_of_ipv4_local_addresses{YType::uint32, "number-of-ipv4-local-addresses"},
    number_of_ipv6_local_addresses{YType::uint32, "number-of-ipv6-local-addresses"},
    number_of_ldp_interfaces{YType::uint32, "number-of-ldp-interfaces"},
    number_of_ipv4ldp_interfaces{YType::uint32, "number-of-ipv4ldp-interfaces"},
    number_of_ipv6ldp_interfaces{YType::uint32, "number-of-ipv6ldp-interfaces"},
    number_of_bindings_ipv4{YType::uint32, "number-of-bindings-ipv4"},
    number_of_bindings_ipv6{YType::uint32, "number-of-bindings-ipv6"},
    number_of_local_bindings_ipv4{YType::uint32, "number-of-local-bindings-ipv4"},
    number_of_local_bindings_ipv6{YType::uint32, "number-of-local-bindings-ipv6"},
    number_of_remote_bindings_ipv4{YType::uint32, "number-of-remote-bindings-ipv4"},
    number_of_remote_bindings_ipv6{YType::uint32, "number-of-remote-bindings-ipv6"}
{

    yang_name = "common"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Active::DefaultVrf::Summary::Common::~Common()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Summary::Common::has_data() const
{
    if (is_presence_container) return true;
    return address_families.is_set
	|| number_of_ipv4af.is_set
	|| number_of_ipv6af.is_set
	|| number_of_neighbors.is_set
	|| number_of_nsr_synced_neighbors.is_set
	|| number_of_graceful_restart_neighbors.is_set
	|| number_of_downstream_on_demand_neighbors.is_set
	|| number_of_ipv4_hello_adj.is_set
	|| number_of_ipv6_hello_adj.is_set
	|| number_of_ipv4_routes.is_set
	|| number_of_ipv6_routes.is_set
	|| number_of_ipv4_local_addresses.is_set
	|| number_of_ipv6_local_addresses.is_set
	|| number_of_ldp_interfaces.is_set
	|| number_of_ipv4ldp_interfaces.is_set
	|| number_of_ipv6ldp_interfaces.is_set
	|| number_of_bindings_ipv4.is_set
	|| number_of_bindings_ipv6.is_set
	|| number_of_local_bindings_ipv4.is_set
	|| number_of_local_bindings_ipv6.is_set
	|| number_of_remote_bindings_ipv4.is_set
	|| number_of_remote_bindings_ipv6.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Summary::Common::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_families.yfilter)
	|| ydk::is_set(number_of_ipv4af.yfilter)
	|| ydk::is_set(number_of_ipv6af.yfilter)
	|| ydk::is_set(number_of_neighbors.yfilter)
	|| ydk::is_set(number_of_nsr_synced_neighbors.yfilter)
	|| ydk::is_set(number_of_graceful_restart_neighbors.yfilter)
	|| ydk::is_set(number_of_downstream_on_demand_neighbors.yfilter)
	|| ydk::is_set(number_of_ipv4_hello_adj.yfilter)
	|| ydk::is_set(number_of_ipv6_hello_adj.yfilter)
	|| ydk::is_set(number_of_ipv4_routes.yfilter)
	|| ydk::is_set(number_of_ipv6_routes.yfilter)
	|| ydk::is_set(number_of_ipv4_local_addresses.yfilter)
	|| ydk::is_set(number_of_ipv6_local_addresses.yfilter)
	|| ydk::is_set(number_of_ldp_interfaces.yfilter)
	|| ydk::is_set(number_of_ipv4ldp_interfaces.yfilter)
	|| ydk::is_set(number_of_ipv6ldp_interfaces.yfilter)
	|| ydk::is_set(number_of_bindings_ipv4.yfilter)
	|| ydk::is_set(number_of_bindings_ipv6.yfilter)
	|| ydk::is_set(number_of_local_bindings_ipv4.yfilter)
	|| ydk::is_set(number_of_local_bindings_ipv6.yfilter)
	|| ydk::is_set(number_of_remote_bindings_ipv4.yfilter)
	|| ydk::is_set(number_of_remote_bindings_ipv6.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Summary::Common::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/default-vrf/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Active::DefaultVrf::Summary::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Summary::Common::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_families.is_set || is_set(address_families.yfilter)) leaf_name_data.push_back(address_families.get_name_leafdata());
    if (number_of_ipv4af.is_set || is_set(number_of_ipv4af.yfilter)) leaf_name_data.push_back(number_of_ipv4af.get_name_leafdata());
    if (number_of_ipv6af.is_set || is_set(number_of_ipv6af.yfilter)) leaf_name_data.push_back(number_of_ipv6af.get_name_leafdata());
    if (number_of_neighbors.is_set || is_set(number_of_neighbors.yfilter)) leaf_name_data.push_back(number_of_neighbors.get_name_leafdata());
    if (number_of_nsr_synced_neighbors.is_set || is_set(number_of_nsr_synced_neighbors.yfilter)) leaf_name_data.push_back(number_of_nsr_synced_neighbors.get_name_leafdata());
    if (number_of_graceful_restart_neighbors.is_set || is_set(number_of_graceful_restart_neighbors.yfilter)) leaf_name_data.push_back(number_of_graceful_restart_neighbors.get_name_leafdata());
    if (number_of_downstream_on_demand_neighbors.is_set || is_set(number_of_downstream_on_demand_neighbors.yfilter)) leaf_name_data.push_back(number_of_downstream_on_demand_neighbors.get_name_leafdata());
    if (number_of_ipv4_hello_adj.is_set || is_set(number_of_ipv4_hello_adj.yfilter)) leaf_name_data.push_back(number_of_ipv4_hello_adj.get_name_leafdata());
    if (number_of_ipv6_hello_adj.is_set || is_set(number_of_ipv6_hello_adj.yfilter)) leaf_name_data.push_back(number_of_ipv6_hello_adj.get_name_leafdata());
    if (number_of_ipv4_routes.is_set || is_set(number_of_ipv4_routes.yfilter)) leaf_name_data.push_back(number_of_ipv4_routes.get_name_leafdata());
    if (number_of_ipv6_routes.is_set || is_set(number_of_ipv6_routes.yfilter)) leaf_name_data.push_back(number_of_ipv6_routes.get_name_leafdata());
    if (number_of_ipv4_local_addresses.is_set || is_set(number_of_ipv4_local_addresses.yfilter)) leaf_name_data.push_back(number_of_ipv4_local_addresses.get_name_leafdata());
    if (number_of_ipv6_local_addresses.is_set || is_set(number_of_ipv6_local_addresses.yfilter)) leaf_name_data.push_back(number_of_ipv6_local_addresses.get_name_leafdata());
    if (number_of_ldp_interfaces.is_set || is_set(number_of_ldp_interfaces.yfilter)) leaf_name_data.push_back(number_of_ldp_interfaces.get_name_leafdata());
    if (number_of_ipv4ldp_interfaces.is_set || is_set(number_of_ipv4ldp_interfaces.yfilter)) leaf_name_data.push_back(number_of_ipv4ldp_interfaces.get_name_leafdata());
    if (number_of_ipv6ldp_interfaces.is_set || is_set(number_of_ipv6ldp_interfaces.yfilter)) leaf_name_data.push_back(number_of_ipv6ldp_interfaces.get_name_leafdata());
    if (number_of_bindings_ipv4.is_set || is_set(number_of_bindings_ipv4.yfilter)) leaf_name_data.push_back(number_of_bindings_ipv4.get_name_leafdata());
    if (number_of_bindings_ipv6.is_set || is_set(number_of_bindings_ipv6.yfilter)) leaf_name_data.push_back(number_of_bindings_ipv6.get_name_leafdata());
    if (number_of_local_bindings_ipv4.is_set || is_set(number_of_local_bindings_ipv4.yfilter)) leaf_name_data.push_back(number_of_local_bindings_ipv4.get_name_leafdata());
    if (number_of_local_bindings_ipv6.is_set || is_set(number_of_local_bindings_ipv6.yfilter)) leaf_name_data.push_back(number_of_local_bindings_ipv6.get_name_leafdata());
    if (number_of_remote_bindings_ipv4.is_set || is_set(number_of_remote_bindings_ipv4.yfilter)) leaf_name_data.push_back(number_of_remote_bindings_ipv4.get_name_leafdata());
    if (number_of_remote_bindings_ipv6.is_set || is_set(number_of_remote_bindings_ipv6.yfilter)) leaf_name_data.push_back(number_of_remote_bindings_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Summary::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Summary::Common::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Summary::Common::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-families")
    {
        address_families = value;
        address_families.value_namespace = name_space;
        address_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4af")
    {
        number_of_ipv4af = value;
        number_of_ipv4af.value_namespace = name_space;
        number_of_ipv4af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv6af")
    {
        number_of_ipv6af = value;
        number_of_ipv6af.value_namespace = name_space;
        number_of_ipv6af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors = value;
        number_of_neighbors.value_namespace = name_space;
        number_of_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-nsr-synced-neighbors")
    {
        number_of_nsr_synced_neighbors = value;
        number_of_nsr_synced_neighbors.value_namespace = name_space;
        number_of_nsr_synced_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-graceful-restart-neighbors")
    {
        number_of_graceful_restart_neighbors = value;
        number_of_graceful_restart_neighbors.value_namespace = name_space;
        number_of_graceful_restart_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-downstream-on-demand-neighbors")
    {
        number_of_downstream_on_demand_neighbors = value;
        number_of_downstream_on_demand_neighbors.value_namespace = name_space;
        number_of_downstream_on_demand_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4-hello-adj")
    {
        number_of_ipv4_hello_adj = value;
        number_of_ipv4_hello_adj.value_namespace = name_space;
        number_of_ipv4_hello_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv6-hello-adj")
    {
        number_of_ipv6_hello_adj = value;
        number_of_ipv6_hello_adj.value_namespace = name_space;
        number_of_ipv6_hello_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4-routes")
    {
        number_of_ipv4_routes = value;
        number_of_ipv4_routes.value_namespace = name_space;
        number_of_ipv4_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv6-routes")
    {
        number_of_ipv6_routes = value;
        number_of_ipv6_routes.value_namespace = name_space;
        number_of_ipv6_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4-local-addresses")
    {
        number_of_ipv4_local_addresses = value;
        number_of_ipv4_local_addresses.value_namespace = name_space;
        number_of_ipv4_local_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv6-local-addresses")
    {
        number_of_ipv6_local_addresses = value;
        number_of_ipv6_local_addresses.value_namespace = name_space;
        number_of_ipv6_local_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ldp-interfaces")
    {
        number_of_ldp_interfaces = value;
        number_of_ldp_interfaces.value_namespace = name_space;
        number_of_ldp_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4ldp-interfaces")
    {
        number_of_ipv4ldp_interfaces = value;
        number_of_ipv4ldp_interfaces.value_namespace = name_space;
        number_of_ipv4ldp_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv6ldp-interfaces")
    {
        number_of_ipv6ldp_interfaces = value;
        number_of_ipv6ldp_interfaces.value_namespace = name_space;
        number_of_ipv6ldp_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-bindings-ipv4")
    {
        number_of_bindings_ipv4 = value;
        number_of_bindings_ipv4.value_namespace = name_space;
        number_of_bindings_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-bindings-ipv6")
    {
        number_of_bindings_ipv6 = value;
        number_of_bindings_ipv6.value_namespace = name_space;
        number_of_bindings_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-local-bindings-ipv4")
    {
        number_of_local_bindings_ipv4 = value;
        number_of_local_bindings_ipv4.value_namespace = name_space;
        number_of_local_bindings_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-local-bindings-ipv6")
    {
        number_of_local_bindings_ipv6 = value;
        number_of_local_bindings_ipv6.value_namespace = name_space;
        number_of_local_bindings_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-remote-bindings-ipv4")
    {
        number_of_remote_bindings_ipv4 = value;
        number_of_remote_bindings_ipv4.value_namespace = name_space;
        number_of_remote_bindings_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-remote-bindings-ipv6")
    {
        number_of_remote_bindings_ipv6 = value;
        number_of_remote_bindings_ipv6.value_namespace = name_space;
        number_of_remote_bindings_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Summary::Common::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-families")
    {
        address_families.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4af")
    {
        number_of_ipv4af.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv6af")
    {
        number_of_ipv6af.yfilter = yfilter;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors.yfilter = yfilter;
    }
    if(value_path == "number-of-nsr-synced-neighbors")
    {
        number_of_nsr_synced_neighbors.yfilter = yfilter;
    }
    if(value_path == "number-of-graceful-restart-neighbors")
    {
        number_of_graceful_restart_neighbors.yfilter = yfilter;
    }
    if(value_path == "number-of-downstream-on-demand-neighbors")
    {
        number_of_downstream_on_demand_neighbors.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4-hello-adj")
    {
        number_of_ipv4_hello_adj.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv6-hello-adj")
    {
        number_of_ipv6_hello_adj.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4-routes")
    {
        number_of_ipv4_routes.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv6-routes")
    {
        number_of_ipv6_routes.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4-local-addresses")
    {
        number_of_ipv4_local_addresses.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv6-local-addresses")
    {
        number_of_ipv6_local_addresses.yfilter = yfilter;
    }
    if(value_path == "number-of-ldp-interfaces")
    {
        number_of_ldp_interfaces.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4ldp-interfaces")
    {
        number_of_ipv4ldp_interfaces.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv6ldp-interfaces")
    {
        number_of_ipv6ldp_interfaces.yfilter = yfilter;
    }
    if(value_path == "number-of-bindings-ipv4")
    {
        number_of_bindings_ipv4.yfilter = yfilter;
    }
    if(value_path == "number-of-bindings-ipv6")
    {
        number_of_bindings_ipv6.yfilter = yfilter;
    }
    if(value_path == "number-of-local-bindings-ipv4")
    {
        number_of_local_bindings_ipv4.yfilter = yfilter;
    }
    if(value_path == "number-of-local-bindings-ipv6")
    {
        number_of_local_bindings_ipv6.yfilter = yfilter;
    }
    if(value_path == "number-of-remote-bindings-ipv4")
    {
        number_of_remote_bindings_ipv4.yfilter = yfilter;
    }
    if(value_path == "number-of-remote-bindings-ipv6")
    {
        number_of_remote_bindings_ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Summary::Common::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-families" || name == "number-of-ipv4af" || name == "number-of-ipv6af" || name == "number-of-neighbors" || name == "number-of-nsr-synced-neighbors" || name == "number-of-graceful-restart-neighbors" || name == "number-of-downstream-on-demand-neighbors" || name == "number-of-ipv4-hello-adj" || name == "number-of-ipv6-hello-adj" || name == "number-of-ipv4-routes" || name == "number-of-ipv6-routes" || name == "number-of-ipv4-local-addresses" || name == "number-of-ipv6-local-addresses" || name == "number-of-ldp-interfaces" || name == "number-of-ipv4ldp-interfaces" || name == "number-of-ipv6ldp-interfaces" || name == "number-of-bindings-ipv4" || name == "number-of-bindings-ipv6" || name == "number-of-local-bindings-ipv4" || name == "number-of-local-bindings-ipv6" || name == "number-of-remote-bindings-ipv4" || name == "number-of-remote-bindings-ipv6")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Afs()
    :
    af(this, {"af_name"})
{

    yang_name = "afs"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::~Afs()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af>();
        ent_->parent = this;
        af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::DefaultVrf::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"}
        ,
    interface_summary(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::InterfaceSummary>())
    , bindings(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings>())
    , igp(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp>())
    , bindings_summary(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary>())
    , interfaces(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces>())
    , discovery(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery>())
    , forwardings(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings>())
    , bindings_advertise_spec(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsAdvertiseSpec>())
    , forwarding_summary(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary>())
{
    interface_summary->parent = this;
    bindings->parent = this;
    igp->parent = this;
    bindings_summary->parent = this;
    interfaces->parent = this;
    discovery->parent = this;
    forwardings->parent = this;
    bindings_advertise_spec->parent = this;
    forwarding_summary->parent = this;

    yang_name = "af"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::~Af()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| (interface_summary !=  nullptr && interface_summary->has_data())
	|| (bindings !=  nullptr && bindings->has_data())
	|| (igp !=  nullptr && igp->has_data())
	|| (bindings_summary !=  nullptr && bindings_summary->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (discovery !=  nullptr && discovery->has_data())
	|| (forwardings !=  nullptr && forwardings->has_data())
	|| (bindings_advertise_spec !=  nullptr && bindings_advertise_spec->has_data())
	|| (forwarding_summary !=  nullptr && forwarding_summary->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (interface_summary !=  nullptr && interface_summary->has_operation())
	|| (bindings !=  nullptr && bindings->has_operation())
	|| (igp !=  nullptr && igp->has_operation())
	|| (bindings_summary !=  nullptr && bindings_summary->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (discovery !=  nullptr && discovery->has_operation())
	|| (forwardings !=  nullptr && forwardings->has_operation())
	|| (bindings_advertise_spec !=  nullptr && bindings_advertise_spec->has_operation())
	|| (forwarding_summary !=  nullptr && forwarding_summary->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/default-vrf/afs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af";
    ADD_KEY_TOKEN(af_name, "af-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-summary")
    {
        if(interface_summary == nullptr)
        {
            interface_summary = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::InterfaceSummary>();
        }
        return interface_summary;
    }

    if(child_yang_name == "bindings")
    {
        if(bindings == nullptr)
        {
            bindings = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings>();
        }
        return bindings;
    }

    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp>();
        }
        return igp;
    }

    if(child_yang_name == "bindings-summary")
    {
        if(bindings_summary == nullptr)
        {
            bindings_summary = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary>();
        }
        return bindings_summary;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "discovery")
    {
        if(discovery == nullptr)
        {
            discovery = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery>();
        }
        return discovery;
    }

    if(child_yang_name == "forwardings")
    {
        if(forwardings == nullptr)
        {
            forwardings = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings>();
        }
        return forwardings;
    }

    if(child_yang_name == "bindings-advertise-spec")
    {
        if(bindings_advertise_spec == nullptr)
        {
            bindings_advertise_spec = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsAdvertiseSpec>();
        }
        return bindings_advertise_spec;
    }

    if(child_yang_name == "forwarding-summary")
    {
        if(forwarding_summary == nullptr)
        {
            forwarding_summary = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary>();
        }
        return forwarding_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_summary != nullptr)
    {
        _children["interface-summary"] = interface_summary;
    }

    if(bindings != nullptr)
    {
        _children["bindings"] = bindings;
    }

    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    if(bindings_summary != nullptr)
    {
        _children["bindings-summary"] = bindings_summary;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    if(discovery != nullptr)
    {
        _children["discovery"] = discovery;
    }

    if(forwardings != nullptr)
    {
        _children["forwardings"] = forwardings;
    }

    if(bindings_advertise_spec != nullptr)
    {
        _children["bindings-advertise-spec"] = bindings_advertise_spec;
    }

    if(forwarding_summary != nullptr)
    {
        _children["forwarding-summary"] = forwarding_summary;
    }

    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-summary" || name == "bindings" || name == "igp" || name == "bindings-summary" || name == "interfaces" || name == "discovery" || name == "forwardings" || name == "bindings-advertise-spec" || name == "forwarding-summary" || name == "af-name")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::InterfaceSummary::InterfaceSummary()
    :
    known_ip_interface_count{YType::uint32, "known-ip-interface-count"},
    known_ip_interface_ldp_enabled{YType::uint32, "known-ip-interface-ldp-enabled"},
    ldp_configured_attached_interface{YType::uint32, "ldp-configured-attached-interface"},
    ldp_configured_te_interface{YType::uint32, "ldp-configured-te-interface"},
    forward_references{YType::uint32, "forward-references"},
    auto_config_disabled{YType::uint32, "auto-config-disabled"},
    auto_config{YType::uint32, "auto-config"},
    auto_config_forward_reference_interfaces{YType::uint32, "auto-config-forward-reference-interfaces"}
{

    yang_name = "interface-summary"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::InterfaceSummary::~InterfaceSummary()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::InterfaceSummary::has_data() const
{
    if (is_presence_container) return true;
    return known_ip_interface_count.is_set
	|| known_ip_interface_ldp_enabled.is_set
	|| ldp_configured_attached_interface.is_set
	|| ldp_configured_te_interface.is_set
	|| forward_references.is_set
	|| auto_config_disabled.is_set
	|| auto_config.is_set
	|| auto_config_forward_reference_interfaces.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::InterfaceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(known_ip_interface_count.yfilter)
	|| ydk::is_set(known_ip_interface_ldp_enabled.yfilter)
	|| ydk::is_set(ldp_configured_attached_interface.yfilter)
	|| ydk::is_set(ldp_configured_te_interface.yfilter)
	|| ydk::is_set(forward_references.yfilter)
	|| ydk::is_set(auto_config_disabled.yfilter)
	|| ydk::is_set(auto_config.yfilter)
	|| ydk::is_set(auto_config_forward_reference_interfaces.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::InterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::InterfaceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (known_ip_interface_count.is_set || is_set(known_ip_interface_count.yfilter)) leaf_name_data.push_back(known_ip_interface_count.get_name_leafdata());
    if (known_ip_interface_ldp_enabled.is_set || is_set(known_ip_interface_ldp_enabled.yfilter)) leaf_name_data.push_back(known_ip_interface_ldp_enabled.get_name_leafdata());
    if (ldp_configured_attached_interface.is_set || is_set(ldp_configured_attached_interface.yfilter)) leaf_name_data.push_back(ldp_configured_attached_interface.get_name_leafdata());
    if (ldp_configured_te_interface.is_set || is_set(ldp_configured_te_interface.yfilter)) leaf_name_data.push_back(ldp_configured_te_interface.get_name_leafdata());
    if (forward_references.is_set || is_set(forward_references.yfilter)) leaf_name_data.push_back(forward_references.get_name_leafdata());
    if (auto_config_disabled.is_set || is_set(auto_config_disabled.yfilter)) leaf_name_data.push_back(auto_config_disabled.get_name_leafdata());
    if (auto_config.is_set || is_set(auto_config.yfilter)) leaf_name_data.push_back(auto_config.get_name_leafdata());
    if (auto_config_forward_reference_interfaces.is_set || is_set(auto_config_forward_reference_interfaces.yfilter)) leaf_name_data.push_back(auto_config_forward_reference_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::InterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::InterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::InterfaceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "known-ip-interface-count")
    {
        known_ip_interface_count = value;
        known_ip_interface_count.value_namespace = name_space;
        known_ip_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "known-ip-interface-ldp-enabled")
    {
        known_ip_interface_ldp_enabled = value;
        known_ip_interface_ldp_enabled.value_namespace = name_space;
        known_ip_interface_ldp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-configured-attached-interface")
    {
        ldp_configured_attached_interface = value;
        ldp_configured_attached_interface.value_namespace = name_space;
        ldp_configured_attached_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-configured-te-interface")
    {
        ldp_configured_te_interface = value;
        ldp_configured_te_interface.value_namespace = name_space;
        ldp_configured_te_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-references")
    {
        forward_references = value;
        forward_references.value_namespace = name_space;
        forward_references.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-config-disabled")
    {
        auto_config_disabled = value;
        auto_config_disabled.value_namespace = name_space;
        auto_config_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-config")
    {
        auto_config = value;
        auto_config.value_namespace = name_space;
        auto_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-config-forward-reference-interfaces")
    {
        auto_config_forward_reference_interfaces = value;
        auto_config_forward_reference_interfaces.value_namespace = name_space;
        auto_config_forward_reference_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::InterfaceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "known-ip-interface-count")
    {
        known_ip_interface_count.yfilter = yfilter;
    }
    if(value_path == "known-ip-interface-ldp-enabled")
    {
        known_ip_interface_ldp_enabled.yfilter = yfilter;
    }
    if(value_path == "ldp-configured-attached-interface")
    {
        ldp_configured_attached_interface.yfilter = yfilter;
    }
    if(value_path == "ldp-configured-te-interface")
    {
        ldp_configured_te_interface.yfilter = yfilter;
    }
    if(value_path == "forward-references")
    {
        forward_references.yfilter = yfilter;
    }
    if(value_path == "auto-config-disabled")
    {
        auto_config_disabled.yfilter = yfilter;
    }
    if(value_path == "auto-config")
    {
        auto_config.yfilter = yfilter;
    }
    if(value_path == "auto-config-forward-reference-interfaces")
    {
        auto_config_forward_reference_interfaces.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::InterfaceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "known-ip-interface-count" || name == "known-ip-interface-ldp-enabled" || name == "ldp-configured-attached-interface" || name == "ldp-configured-te-interface" || name == "forward-references" || name == "auto-config-disabled" || name == "auto-config" || name == "auto-config-forward-reference-interfaces")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Bindings()
    :
    binding(this, {"prefix"})
{

    yang_name = "bindings"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::~Bindings()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::has_operation() const
{
    for (std::size_t index=0; index<binding.len(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding>();
        ent_->parent = this;
        binding.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : binding.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::Binding()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    local_label{YType::uint32, "local-label"},
    le_local_binding_revision{YType::uint32, "le-local-binding-revision"},
    le_local_label_state{YType::enumeration, "le-local-label-state"},
    is_no_route{YType::boolean, "is-no-route"},
    label_oor{YType::boolean, "label-oor"},
    advertise_prefix_acl{YType::str, "advertise-prefix-acl"},
    advertise_tsr_acl{YType::str, "advertise-tsr-acl"},
    config_enforced_local_label_value{YType::boolean, "config-enforced-local-label-value"},
    is_elc{YType::boolean, "is-elc"}
        ,
    vrf(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::Vrf>())
    , prefix_xr(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr>())
    , remote_binding(this, {})
    , peers_advertised_to(this, {})
    , peers_acked(this, {})
{
    vrf->parent = this;
    prefix_xr->parent = this;

    yang_name = "binding"; yang_parent_name = "bindings"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::~Binding()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_binding.len(); index++)
    {
        if(remote_binding[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<peers_advertised_to.len(); index++)
    {
        if(peers_advertised_to[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<peers_acked.len(); index++)
    {
        if(peers_acked[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| local_label.is_set
	|| le_local_binding_revision.is_set
	|| le_local_label_state.is_set
	|| is_no_route.is_set
	|| label_oor.is_set
	|| advertise_prefix_acl.is_set
	|| advertise_tsr_acl.is_set
	|| config_enforced_local_label_value.is_set
	|| is_elc.is_set
	|| (vrf !=  nullptr && vrf->has_data())
	|| (prefix_xr !=  nullptr && prefix_xr->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::has_operation() const
{
    for (std::size_t index=0; index<remote_binding.len(); index++)
    {
        if(remote_binding[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<peers_advertised_to.len(); index++)
    {
        if(peers_advertised_to[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<peers_acked.len(); index++)
    {
        if(peers_acked[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(le_local_binding_revision.yfilter)
	|| ydk::is_set(le_local_label_state.yfilter)
	|| ydk::is_set(is_no_route.yfilter)
	|| ydk::is_set(label_oor.yfilter)
	|| ydk::is_set(advertise_prefix_acl.yfilter)
	|| ydk::is_set(advertise_tsr_acl.yfilter)
	|| ydk::is_set(config_enforced_local_label_value.yfilter)
	|| ydk::is_set(is_elc.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (prefix_xr !=  nullptr && prefix_xr->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (le_local_binding_revision.is_set || is_set(le_local_binding_revision.yfilter)) leaf_name_data.push_back(le_local_binding_revision.get_name_leafdata());
    if (le_local_label_state.is_set || is_set(le_local_label_state.yfilter)) leaf_name_data.push_back(le_local_label_state.get_name_leafdata());
    if (is_no_route.is_set || is_set(is_no_route.yfilter)) leaf_name_data.push_back(is_no_route.get_name_leafdata());
    if (label_oor.is_set || is_set(label_oor.yfilter)) leaf_name_data.push_back(label_oor.get_name_leafdata());
    if (advertise_prefix_acl.is_set || is_set(advertise_prefix_acl.yfilter)) leaf_name_data.push_back(advertise_prefix_acl.get_name_leafdata());
    if (advertise_tsr_acl.is_set || is_set(advertise_tsr_acl.yfilter)) leaf_name_data.push_back(advertise_tsr_acl.get_name_leafdata());
    if (config_enforced_local_label_value.is_set || is_set(config_enforced_local_label_value.yfilter)) leaf_name_data.push_back(config_enforced_local_label_value.get_name_leafdata());
    if (is_elc.is_set || is_set(is_elc.yfilter)) leaf_name_data.push_back(is_elc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "prefix-xr")
    {
        if(prefix_xr == nullptr)
        {
            prefix_xr = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr>();
        }
        return prefix_xr;
    }

    if(child_yang_name == "remote-binding")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding>();
        ent_->parent = this;
        remote_binding.append(ent_);
        return ent_;
    }

    if(child_yang_name == "peers-advertised-to")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo>();
        ent_->parent = this;
        peers_advertised_to.append(ent_);
        return ent_;
    }

    if(child_yang_name == "peers-acked")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked>();
        ent_->parent = this;
        peers_acked.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    if(prefix_xr != nullptr)
    {
        _children["prefix-xr"] = prefix_xr;
    }

    count_ = 0;
    for (auto ent_ : remote_binding.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : peers_advertised_to.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : peers_acked.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le-local-binding-revision")
    {
        le_local_binding_revision = value;
        le_local_binding_revision.value_namespace = name_space;
        le_local_binding_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le-local-label-state")
    {
        le_local_label_state = value;
        le_local_label_state.value_namespace = name_space;
        le_local_label_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-no-route")
    {
        is_no_route = value;
        is_no_route.value_namespace = name_space;
        is_no_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-oor")
    {
        label_oor = value;
        label_oor.value_namespace = name_space;
        label_oor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-prefix-acl")
    {
        advertise_prefix_acl = value;
        advertise_prefix_acl.value_namespace = name_space;
        advertise_prefix_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-tsr-acl")
    {
        advertise_tsr_acl = value;
        advertise_tsr_acl.value_namespace = name_space;
        advertise_tsr_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-enforced-local-label-value")
    {
        config_enforced_local_label_value = value;
        config_enforced_local_label_value.value_namespace = name_space;
        config_enforced_local_label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-elc")
    {
        is_elc = value;
        is_elc.value_namespace = name_space;
        is_elc.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "le-local-binding-revision")
    {
        le_local_binding_revision.yfilter = yfilter;
    }
    if(value_path == "le-local-label-state")
    {
        le_local_label_state.yfilter = yfilter;
    }
    if(value_path == "is-no-route")
    {
        is_no_route.yfilter = yfilter;
    }
    if(value_path == "label-oor")
    {
        label_oor.yfilter = yfilter;
    }
    if(value_path == "advertise-prefix-acl")
    {
        advertise_prefix_acl.yfilter = yfilter;
    }
    if(value_path == "advertise-tsr-acl")
    {
        advertise_tsr_acl.yfilter = yfilter;
    }
    if(value_path == "config-enforced-local-label-value")
    {
        config_enforced_local_label_value.yfilter = yfilter;
    }
    if(value_path == "is-elc")
    {
        is_elc.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "prefix-xr" || name == "remote-binding" || name == "peers-advertised-to" || name == "peers-acked" || name == "prefix" || name == "prefix-length" || name == "local-label" || name == "le-local-binding-revision" || name == "le-local-label-state" || name == "is-no-route" || name == "label-oor" || name == "advertise-prefix-acl" || name == "advertise-tsr-acl" || name == "config-enforced-local-label-value" || name == "is-elc")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::Vrf()
    :
    name{YType::str, "name"},
    id{YType::uint32, "id"}
{

    yang_name = "vrf"; yang_parent_name = "binding"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| id.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "id")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::PrefixXr()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "prefix-xr"; yang_parent_name = "binding"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::~PrefixXr()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::RemoteBinding()
    :
    remote_label{YType::uint32, "remote-label"},
    is_stale{YType::boolean, "is-stale"},
    is_elc{YType::boolean, "is-elc"}
        ,
    assigning_peer_ldp_ident(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent>())
{
    assigning_peer_ldp_ident->parent = this;

    yang_name = "remote-binding"; yang_parent_name = "binding"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::~RemoteBinding()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::has_data() const
{
    if (is_presence_container) return true;
    return remote_label.is_set
	|| is_stale.is_set
	|| is_elc.is_set
	|| (assigning_peer_ldp_ident !=  nullptr && assigning_peer_ldp_ident->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remote_label.yfilter)
	|| ydk::is_set(is_stale.yfilter)
	|| ydk::is_set(is_elc.yfilter)
	|| (assigning_peer_ldp_ident !=  nullptr && assigning_peer_ldp_ident->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-binding";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_label.is_set || is_set(remote_label.yfilter)) leaf_name_data.push_back(remote_label.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.yfilter)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (is_elc.is_set || is_set(is_elc.yfilter)) leaf_name_data.push_back(is_elc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "assigning-peer-ldp-ident")
    {
        if(assigning_peer_ldp_ident == nullptr)
        {
            assigning_peer_ldp_ident = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent>();
        }
        return assigning_peer_ldp_ident;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(assigning_peer_ldp_ident != nullptr)
    {
        _children["assigning-peer-ldp-ident"] = assigning_peer_ldp_ident;
    }

    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-label")
    {
        remote_label = value;
        remote_label.value_namespace = name_space;
        remote_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
        is_stale.value_namespace = name_space;
        is_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-elc")
    {
        is_elc = value;
        is_elc.value_namespace = name_space;
        is_elc.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-label")
    {
        remote_label.yfilter = yfilter;
    }
    if(value_path == "is-stale")
    {
        is_stale.yfilter = yfilter;
    }
    if(value_path == "is-elc")
    {
        is_elc.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "assigning-peer-ldp-ident" || name == "remote-label" || name == "is-stale" || name == "is-elc")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::AssigningPeerLdpIdent()
    :
    lsr_id{YType::str, "lsr-id"},
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"}
{

    yang_name = "assigning-peer-ldp-ident"; yang_parent_name = "remote-binding"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::~AssigningPeerLdpIdent()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::has_data() const
{
    if (is_presence_container) return true;
    return lsr_id.is_set
	|| label_space_id.is_set
	|| ldp_id.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(ldp_id.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "assigning-peer-ldp-ident";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.yfilter)) leaf_name_data.push_back(ldp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
        ldp_id.value_namespace = name_space;
        ldp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "ldp-id")
    {
        ldp_id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsr-id" || name == "label-space-id" || name == "ldp-id")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::PeersAdvertisedTo()
    :
    lsr_id{YType::str, "lsr-id"},
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"}
{

    yang_name = "peers-advertised-to"; yang_parent_name = "binding"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::~PeersAdvertisedTo()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::has_data() const
{
    if (is_presence_container) return true;
    return lsr_id.is_set
	|| label_space_id.is_set
	|| ldp_id.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(ldp_id.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers-advertised-to";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.yfilter)) leaf_name_data.push_back(ldp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
        ldp_id.value_namespace = name_space;
        ldp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "ldp-id")
    {
        ldp_id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsr-id" || name == "label-space-id" || name == "ldp-id")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::PeersAcked()
    :
    lsr_id{YType::str, "lsr-id"},
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"}
{

    yang_name = "peers-acked"; yang_parent_name = "binding"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::~PeersAcked()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::has_data() const
{
    if (is_presence_container) return true;
    return lsr_id.is_set
	|| label_space_id.is_set
	|| ldp_id.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(ldp_id.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers-acked";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.yfilter)) leaf_name_data.push_back(ldp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
        ldp_id.value_namespace = name_space;
        ldp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "ldp-id")
    {
        ldp_id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsr-id" || name == "label-space-id" || name == "ldp-id")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Igp()
    :
    syncs(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs>())
    , sync_delay_restart(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::SyncDelayRestart>())
{
    syncs->parent = this;
    sync_delay_restart->parent = this;

    yang_name = "igp"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::~Igp()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::has_data() const
{
    if (is_presence_container) return true;
    return (syncs !=  nullptr && syncs->has_data())
	|| (sync_delay_restart !=  nullptr && sync_delay_restart->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::has_operation() const
{
    return is_set(yfilter)
	|| (syncs !=  nullptr && syncs->has_operation())
	|| (sync_delay_restart !=  nullptr && sync_delay_restart->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syncs")
    {
        if(syncs == nullptr)
        {
            syncs = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs>();
        }
        return syncs;
    }

    if(child_yang_name == "sync-delay-restart")
    {
        if(sync_delay_restart == nullptr)
        {
            sync_delay_restart = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::SyncDelayRestart>();
        }
        return sync_delay_restart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(syncs != nullptr)
    {
        _children["syncs"] = syncs;
    }

    if(sync_delay_restart != nullptr)
    {
        _children["sync-delay-restart"] = sync_delay_restart;
    }

    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syncs" || name == "sync-delay-restart")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Syncs()
    :
    sync(this, {"interface_name"})
{

    yang_name = "syncs"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::~Syncs()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sync.len(); index++)
    {
        if(sync[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::has_operation() const
{
    for (std::size_t index=0; index<sync.len(); index++)
    {
        if(sync[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syncs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sync")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync>();
        ent_->parent = this;
        sync.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sync.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Sync()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    igp_sync_state{YType::enumeration, "igp-sync-state"},
    igp_sync_delay{YType::uint32, "igp-sync-delay"},
    is_delay_timer_running{YType::boolean, "is-delay-timer-running"},
    delay_timer_remaining{YType::uint32, "delay-timer-remaining"},
    igp_sync_down_reason{YType::enumeration, "igp-sync-down-reason"}
        ,
    vrf(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf>())
    , peers(this, {})
    , gr_only_peer(this, {})
{
    vrf->parent = this;

    yang_name = "sync"; yang_parent_name = "syncs"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::~Sync()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peers.len(); index++)
    {
        if(peers[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<gr_only_peer.len(); index++)
    {
        if(gr_only_peer[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| igp_sync_state.is_set
	|| igp_sync_delay.is_set
	|| is_delay_timer_running.is_set
	|| delay_timer_remaining.is_set
	|| igp_sync_down_reason.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::has_operation() const
{
    for (std::size_t index=0; index<peers.len(); index++)
    {
        if(peers[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<gr_only_peer.len(); index++)
    {
        if(gr_only_peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(igp_sync_state.yfilter)
	|| ydk::is_set(igp_sync_delay.yfilter)
	|| ydk::is_set(is_delay_timer_running.yfilter)
	|| ydk::is_set(delay_timer_remaining.yfilter)
	|| ydk::is_set(igp_sync_down_reason.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (igp_sync_state.is_set || is_set(igp_sync_state.yfilter)) leaf_name_data.push_back(igp_sync_state.get_name_leafdata());
    if (igp_sync_delay.is_set || is_set(igp_sync_delay.yfilter)) leaf_name_data.push_back(igp_sync_delay.get_name_leafdata());
    if (is_delay_timer_running.is_set || is_set(is_delay_timer_running.yfilter)) leaf_name_data.push_back(is_delay_timer_running.get_name_leafdata());
    if (delay_timer_remaining.is_set || is_set(delay_timer_remaining.yfilter)) leaf_name_data.push_back(delay_timer_remaining.get_name_leafdata());
    if (igp_sync_down_reason.is_set || is_set(igp_sync_down_reason.yfilter)) leaf_name_data.push_back(igp_sync_down_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "peers")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers>();
        ent_->parent = this;
        peers.append(ent_);
        return ent_;
    }

    if(child_yang_name == "gr-only-peer")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer>();
        ent_->parent = this;
        gr_only_peer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    count_ = 0;
    for (auto ent_ : peers.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : gr_only_peer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-sync-state")
    {
        igp_sync_state = value;
        igp_sync_state.value_namespace = name_space;
        igp_sync_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-sync-delay")
    {
        igp_sync_delay = value;
        igp_sync_delay.value_namespace = name_space;
        igp_sync_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-delay-timer-running")
    {
        is_delay_timer_running = value;
        is_delay_timer_running.value_namespace = name_space;
        is_delay_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-timer-remaining")
    {
        delay_timer_remaining = value;
        delay_timer_remaining.value_namespace = name_space;
        delay_timer_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-sync-down-reason")
    {
        igp_sync_down_reason = value;
        igp_sync_down_reason.value_namespace = name_space;
        igp_sync_down_reason.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "igp-sync-state")
    {
        igp_sync_state.yfilter = yfilter;
    }
    if(value_path == "igp-sync-delay")
    {
        igp_sync_delay.yfilter = yfilter;
    }
    if(value_path == "is-delay-timer-running")
    {
        is_delay_timer_running.yfilter = yfilter;
    }
    if(value_path == "delay-timer-remaining")
    {
        delay_timer_remaining.yfilter = yfilter;
    }
    if(value_path == "igp-sync-down-reason")
    {
        igp_sync_down_reason.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "peers" || name == "gr-only-peer" || name == "interface-name" || name == "interface-name-xr" || name == "igp-sync-state" || name == "igp-sync-delay" || name == "is-delay-timer-running" || name == "delay-timer-remaining" || name == "igp-sync-down-reason")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::Vrf()
    :
    name{YType::str, "name"},
    id{YType::uint32, "id"}
{

    yang_name = "vrf"; yang_parent_name = "sync"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| id.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "id")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::Peers()
    :
    peer_id{YType::str, "peer-id"},
    is_gr_enabled{YType::boolean, "is-gr-enabled"}
{

    yang_name = "peers"; yang_parent_name = "sync"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::~Peers()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::has_data() const
{
    if (is_presence_container) return true;
    return peer_id.is_set
	|| is_gr_enabled.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_id.yfilter)
	|| ydk::is_set(is_gr_enabled.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_id.is_set || is_set(peer_id.yfilter)) leaf_name_data.push_back(peer_id.get_name_leafdata());
    if (is_gr_enabled.is_set || is_set(is_gr_enabled.yfilter)) leaf_name_data.push_back(is_gr_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-id")
    {
        peer_id = value;
        peer_id.value_namespace = name_space;
        peer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled = value;
        is_gr_enabled.value_namespace = name_space;
        is_gr_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-id")
    {
        peer_id.yfilter = yfilter;
    }
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-id" || name == "is-gr-enabled")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::GrOnlyPeer()
    :
    peer_id{YType::str, "peer-id"},
    is_chkpt_created{YType::boolean, "is-chkpt-created"}
{

    yang_name = "gr-only-peer"; yang_parent_name = "sync"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::~GrOnlyPeer()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::has_data() const
{
    if (is_presence_container) return true;
    return peer_id.is_set
	|| is_chkpt_created.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_id.yfilter)
	|| ydk::is_set(is_chkpt_created.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gr-only-peer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_id.is_set || is_set(peer_id.yfilter)) leaf_name_data.push_back(peer_id.get_name_leafdata());
    if (is_chkpt_created.is_set || is_set(is_chkpt_created.yfilter)) leaf_name_data.push_back(is_chkpt_created.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-id")
    {
        peer_id = value;
        peer_id.value_namespace = name_space;
        peer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-chkpt-created")
    {
        is_chkpt_created = value;
        is_chkpt_created.value_namespace = name_space;
        is_chkpt_created.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-id")
    {
        peer_id.yfilter = yfilter;
    }
    if(value_path == "is-chkpt-created")
    {
        is_chkpt_created.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-id" || name == "is-chkpt-created")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::SyncDelayRestart()
    :
    configured{YType::boolean, "configured"},
    delay_secs{YType::uint32, "delay-secs"},
    timer_running{YType::boolean, "timer-running"},
    remaining_secs{YType::uint32, "remaining-secs"}
{

    yang_name = "sync-delay-restart"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::~SyncDelayRestart()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::has_data() const
{
    if (is_presence_container) return true;
    return configured.is_set
	|| delay_secs.is_set
	|| timer_running.is_set
	|| remaining_secs.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configured.yfilter)
	|| ydk::is_set(delay_secs.yfilter)
	|| ydk::is_set(timer_running.yfilter)
	|| ydk::is_set(remaining_secs.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-delay-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured.is_set || is_set(configured.yfilter)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (delay_secs.is_set || is_set(delay_secs.yfilter)) leaf_name_data.push_back(delay_secs.get_name_leafdata());
    if (timer_running.is_set || is_set(timer_running.yfilter)) leaf_name_data.push_back(timer_running.get_name_leafdata());
    if (remaining_secs.is_set || is_set(remaining_secs.yfilter)) leaf_name_data.push_back(remaining_secs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured")
    {
        configured = value;
        configured.value_namespace = name_space;
        configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-secs")
    {
        delay_secs = value;
        delay_secs.value_namespace = name_space;
        delay_secs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-running")
    {
        timer_running = value;
        timer_running.value_namespace = name_space;
        timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-secs")
    {
        remaining_secs = value;
        remaining_secs.value_namespace = name_space;
        remaining_secs.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured")
    {
        configured.yfilter = yfilter;
    }
    if(value_path == "delay-secs")
    {
        delay_secs.yfilter = yfilter;
    }
    if(value_path == "timer-running")
    {
        timer_running.yfilter = yfilter;
    }
    if(value_path == "remaining-secs")
    {
        remaining_secs.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured" || name == "delay-secs" || name == "timer-running" || name == "remaining-secs")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::BindingsSummary()
    :
    address_family{YType::enumeration, "address-family"},
    binding_no_route{YType::uint32, "binding-no-route"},
    binding_local_no_route{YType::uint32, "binding-local-no-route"},
    binding_local_null{YType::uint32, "binding-local-null"},
    binding_local_implicit_null{YType::uint32, "binding-local-implicit-null"},
    binding_local_explicit_null{YType::uint32, "binding-local-explicit-null"},
    binding_local_non_null{YType::uint32, "binding-local-non-null"},
    binding_local_oor{YType::uint32, "binding-local-oor"},
    lowest_allocated_label{YType::uint32, "lowest-allocated-label"},
    highest_allocated_label{YType::uint32, "highest-allocated-label"}
        ,
    vrf(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::Vrf>())
    , bind_af(this, {})
{
    vrf->parent = this;

    yang_name = "bindings-summary"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::~BindingsSummary()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bind_af.len(); index++)
    {
        if(bind_af[index]->has_data())
            return true;
    }
    return address_family.is_set
	|| binding_no_route.is_set
	|| binding_local_no_route.is_set
	|| binding_local_null.is_set
	|| binding_local_implicit_null.is_set
	|| binding_local_explicit_null.is_set
	|| binding_local_non_null.is_set
	|| binding_local_oor.is_set
	|| lowest_allocated_label.is_set
	|| highest_allocated_label.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::has_operation() const
{
    for (std::size_t index=0; index<bind_af.len(); index++)
    {
        if(bind_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(binding_no_route.yfilter)
	|| ydk::is_set(binding_local_no_route.yfilter)
	|| ydk::is_set(binding_local_null.yfilter)
	|| ydk::is_set(binding_local_implicit_null.yfilter)
	|| ydk::is_set(binding_local_explicit_null.yfilter)
	|| ydk::is_set(binding_local_non_null.yfilter)
	|| ydk::is_set(binding_local_oor.yfilter)
	|| ydk::is_set(lowest_allocated_label.yfilter)
	|| ydk::is_set(highest_allocated_label.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindings-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (binding_no_route.is_set || is_set(binding_no_route.yfilter)) leaf_name_data.push_back(binding_no_route.get_name_leafdata());
    if (binding_local_no_route.is_set || is_set(binding_local_no_route.yfilter)) leaf_name_data.push_back(binding_local_no_route.get_name_leafdata());
    if (binding_local_null.is_set || is_set(binding_local_null.yfilter)) leaf_name_data.push_back(binding_local_null.get_name_leafdata());
    if (binding_local_implicit_null.is_set || is_set(binding_local_implicit_null.yfilter)) leaf_name_data.push_back(binding_local_implicit_null.get_name_leafdata());
    if (binding_local_explicit_null.is_set || is_set(binding_local_explicit_null.yfilter)) leaf_name_data.push_back(binding_local_explicit_null.get_name_leafdata());
    if (binding_local_non_null.is_set || is_set(binding_local_non_null.yfilter)) leaf_name_data.push_back(binding_local_non_null.get_name_leafdata());
    if (binding_local_oor.is_set || is_set(binding_local_oor.yfilter)) leaf_name_data.push_back(binding_local_oor.get_name_leafdata());
    if (lowest_allocated_label.is_set || is_set(lowest_allocated_label.yfilter)) leaf_name_data.push_back(lowest_allocated_label.get_name_leafdata());
    if (highest_allocated_label.is_set || is_set(highest_allocated_label.yfilter)) leaf_name_data.push_back(highest_allocated_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "bind-af")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::BindAf>();
        ent_->parent = this;
        bind_af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    count_ = 0;
    for (auto ent_ : bind_af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-no-route")
    {
        binding_no_route = value;
        binding_no_route.value_namespace = name_space;
        binding_no_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-no-route")
    {
        binding_local_no_route = value;
        binding_local_no_route.value_namespace = name_space;
        binding_local_no_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-null")
    {
        binding_local_null = value;
        binding_local_null.value_namespace = name_space;
        binding_local_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-implicit-null")
    {
        binding_local_implicit_null = value;
        binding_local_implicit_null.value_namespace = name_space;
        binding_local_implicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-explicit-null")
    {
        binding_local_explicit_null = value;
        binding_local_explicit_null.value_namespace = name_space;
        binding_local_explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-non-null")
    {
        binding_local_non_null = value;
        binding_local_non_null.value_namespace = name_space;
        binding_local_non_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-oor")
    {
        binding_local_oor = value;
        binding_local_oor.value_namespace = name_space;
        binding_local_oor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lowest-allocated-label")
    {
        lowest_allocated_label = value;
        lowest_allocated_label.value_namespace = name_space;
        lowest_allocated_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highest-allocated-label")
    {
        highest_allocated_label = value;
        highest_allocated_label.value_namespace = name_space;
        highest_allocated_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "binding-no-route")
    {
        binding_no_route.yfilter = yfilter;
    }
    if(value_path == "binding-local-no-route")
    {
        binding_local_no_route.yfilter = yfilter;
    }
    if(value_path == "binding-local-null")
    {
        binding_local_null.yfilter = yfilter;
    }
    if(value_path == "binding-local-implicit-null")
    {
        binding_local_implicit_null.yfilter = yfilter;
    }
    if(value_path == "binding-local-explicit-null")
    {
        binding_local_explicit_null.yfilter = yfilter;
    }
    if(value_path == "binding-local-non-null")
    {
        binding_local_non_null.yfilter = yfilter;
    }
    if(value_path == "binding-local-oor")
    {
        binding_local_oor.yfilter = yfilter;
    }
    if(value_path == "lowest-allocated-label")
    {
        lowest_allocated_label.yfilter = yfilter;
    }
    if(value_path == "highest-allocated-label")
    {
        highest_allocated_label.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "bind-af" || name == "address-family" || name == "binding-no-route" || name == "binding-local-no-route" || name == "binding-local-null" || name == "binding-local-implicit-null" || name == "binding-local-explicit-null" || name == "binding-local-non-null" || name == "binding-local-oor" || name == "lowest-allocated-label" || name == "highest-allocated-label")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::Vrf::Vrf()
    :
    name{YType::str, "name"},
    id{YType::uint32, "id"}
{

    yang_name = "vrf"; yang_parent_name = "bindings-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| id.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "id")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::BindAf::BindAf()
    :
    address_family{YType::enumeration, "address-family"},
    last_lib_update{YType::uint32, "last-lib-update"},
    lib_minimum_revision_sent_all{YType::uint32, "lib-minimum-revision-sent-all"},
    binding_total{YType::uint32, "binding-total"},
    binding_local{YType::uint32, "binding-local"},
    binding_remote{YType::uint32, "binding-remote"}
{

    yang_name = "bind-af"; yang_parent_name = "bindings-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::BindAf::~BindAf()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::BindAf::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| last_lib_update.is_set
	|| lib_minimum_revision_sent_all.is_set
	|| binding_total.is_set
	|| binding_local.is_set
	|| binding_remote.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::BindAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(last_lib_update.yfilter)
	|| ydk::is_set(lib_minimum_revision_sent_all.yfilter)
	|| ydk::is_set(binding_total.yfilter)
	|| ydk::is_set(binding_local.yfilter)
	|| ydk::is_set(binding_remote.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::BindAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bind-af";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::BindAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (last_lib_update.is_set || is_set(last_lib_update.yfilter)) leaf_name_data.push_back(last_lib_update.get_name_leafdata());
    if (lib_minimum_revision_sent_all.is_set || is_set(lib_minimum_revision_sent_all.yfilter)) leaf_name_data.push_back(lib_minimum_revision_sent_all.get_name_leafdata());
    if (binding_total.is_set || is_set(binding_total.yfilter)) leaf_name_data.push_back(binding_total.get_name_leafdata());
    if (binding_local.is_set || is_set(binding_local.yfilter)) leaf_name_data.push_back(binding_local.get_name_leafdata());
    if (binding_remote.is_set || is_set(binding_remote.yfilter)) leaf_name_data.push_back(binding_remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::BindAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::BindAf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::BindAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-lib-update")
    {
        last_lib_update = value;
        last_lib_update.value_namespace = name_space;
        last_lib_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lib-minimum-revision-sent-all")
    {
        lib_minimum_revision_sent_all = value;
        lib_minimum_revision_sent_all.value_namespace = name_space;
        lib_minimum_revision_sent_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-total")
    {
        binding_total = value;
        binding_total.value_namespace = name_space;
        binding_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local")
    {
        binding_local = value;
        binding_local.value_namespace = name_space;
        binding_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-remote")
    {
        binding_remote = value;
        binding_remote.value_namespace = name_space;
        binding_remote.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::BindAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "last-lib-update")
    {
        last_lib_update.yfilter = yfilter;
    }
    if(value_path == "lib-minimum-revision-sent-all")
    {
        lib_minimum_revision_sent_all.yfilter = yfilter;
    }
    if(value_path == "binding-total")
    {
        binding_total.yfilter = yfilter;
    }
    if(value_path == "binding-local")
    {
        binding_local.yfilter = yfilter;
    }
    if(value_path == "binding-remote")
    {
        binding_remote.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::BindAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "last-lib-update" || name == "lib-minimum-revision-sent-all" || name == "binding-total" || name == "binding-local" || name == "binding-remote")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::~Interfaces()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::get_children() const
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

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface{YType::str, "interface"},
    interface_name_xr{YType::str, "interface-name-xr"},
    ldp_enabled{YType::boolean, "ldp-enabled"},
    is_im_stale{YType::boolean, "is-im-stale"},
    ldp_config_mode{YType::boolean, "ldp-config-mode"},
    ldp_autoconfig_disable{YType::boolean, "ldp-autoconfig-disable"}
        ,
    vrf(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf>())
    , te_mesh_grp(this, {})
    , auto_config(this, {})
{
    vrf->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::~Interface()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<te_mesh_grp.len(); index++)
    {
        if(te_mesh_grp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<auto_config.len(); index++)
    {
        if(auto_config[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface.is_set
	|| interface_name_xr.is_set
	|| ldp_enabled.is_set
	|| is_im_stale.is_set
	|| ldp_config_mode.is_set
	|| ldp_autoconfig_disable.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<te_mesh_grp.len(); index++)
    {
        if(te_mesh_grp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<auto_config.len(); index++)
    {
        if(auto_config[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(ldp_enabled.yfilter)
	|| ydk::is_set(is_im_stale.yfilter)
	|| ydk::is_set(ldp_config_mode.yfilter)
	|| ydk::is_set(ldp_autoconfig_disable.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (ldp_enabled.is_set || is_set(ldp_enabled.yfilter)) leaf_name_data.push_back(ldp_enabled.get_name_leafdata());
    if (is_im_stale.is_set || is_set(is_im_stale.yfilter)) leaf_name_data.push_back(is_im_stale.get_name_leafdata());
    if (ldp_config_mode.is_set || is_set(ldp_config_mode.yfilter)) leaf_name_data.push_back(ldp_config_mode.get_name_leafdata());
    if (ldp_autoconfig_disable.is_set || is_set(ldp_autoconfig_disable.yfilter)) leaf_name_data.push_back(ldp_autoconfig_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "te-mesh-grp")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp>();
        ent_->parent = this;
        te_mesh_grp.append(ent_);
        return ent_;
    }

    if(child_yang_name == "auto-config")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig>();
        ent_->parent = this;
        auto_config.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    count_ = 0;
    for (auto ent_ : te_mesh_grp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : auto_config.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-enabled")
    {
        ldp_enabled = value;
        ldp_enabled.value_namespace = name_space;
        ldp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-im-stale")
    {
        is_im_stale = value;
        is_im_stale.value_namespace = name_space;
        is_im_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-config-mode")
    {
        ldp_config_mode = value;
        ldp_config_mode.value_namespace = name_space;
        ldp_config_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-autoconfig-disable")
    {
        ldp_autoconfig_disable = value;
        ldp_autoconfig_disable.value_namespace = name_space;
        ldp_autoconfig_disable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "ldp-enabled")
    {
        ldp_enabled.yfilter = yfilter;
    }
    if(value_path == "is-im-stale")
    {
        is_im_stale.yfilter = yfilter;
    }
    if(value_path == "ldp-config-mode")
    {
        ldp_config_mode.yfilter = yfilter;
    }
    if(value_path == "ldp-autoconfig-disable")
    {
        ldp_autoconfig_disable.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "te-mesh-grp" || name == "auto-config" || name == "interface-name" || name == "interface" || name == "interface-name-xr" || name == "ldp-enabled" || name == "is-im-stale" || name == "ldp-config-mode" || name == "ldp-autoconfig-disable")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::Vrf()
    :
    name{YType::str, "name"},
    id{YType::uint32, "id"}
{

    yang_name = "vrf"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| id.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "id")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::TeMeshGrp()
    :
    ldp_te_mesh_group_all_cfgd{YType::boolean, "ldp-te-mesh-group-all-cfgd"},
    ldp_mesh_group_enabled{YType::boolean, "ldp-mesh-group-enabled"},
    te_mesh_group_id{YType::uint32, "te-mesh-group-id"}
{

    yang_name = "te-mesh-grp"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::~TeMeshGrp()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::has_data() const
{
    if (is_presence_container) return true;
    return ldp_te_mesh_group_all_cfgd.is_set
	|| ldp_mesh_group_enabled.is_set
	|| te_mesh_group_id.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ldp_te_mesh_group_all_cfgd.yfilter)
	|| ydk::is_set(ldp_mesh_group_enabled.yfilter)
	|| ydk::is_set(te_mesh_group_id.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-mesh-grp";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldp_te_mesh_group_all_cfgd.is_set || is_set(ldp_te_mesh_group_all_cfgd.yfilter)) leaf_name_data.push_back(ldp_te_mesh_group_all_cfgd.get_name_leafdata());
    if (ldp_mesh_group_enabled.is_set || is_set(ldp_mesh_group_enabled.yfilter)) leaf_name_data.push_back(ldp_mesh_group_enabled.get_name_leafdata());
    if (te_mesh_group_id.is_set || is_set(te_mesh_group_id.yfilter)) leaf_name_data.push_back(te_mesh_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ldp-te-mesh-group-all-cfgd")
    {
        ldp_te_mesh_group_all_cfgd = value;
        ldp_te_mesh_group_all_cfgd.value_namespace = name_space;
        ldp_te_mesh_group_all_cfgd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-mesh-group-enabled")
    {
        ldp_mesh_group_enabled = value;
        ldp_mesh_group_enabled.value_namespace = name_space;
        ldp_mesh_group_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-mesh-group-id")
    {
        te_mesh_group_id = value;
        te_mesh_group_id.value_namespace = name_space;
        te_mesh_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ldp-te-mesh-group-all-cfgd")
    {
        ldp_te_mesh_group_all_cfgd.yfilter = yfilter;
    }
    if(value_path == "ldp-mesh-group-enabled")
    {
        ldp_mesh_group_enabled.yfilter = yfilter;
    }
    if(value_path == "te-mesh-group-id")
    {
        te_mesh_group_id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp-te-mesh-group-all-cfgd" || name == "ldp-mesh-group-enabled" || name == "te-mesh-group-id")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::AutoConfig()
    :
    tuple{YType::str, "tuple"}
{

    yang_name = "auto-config"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::~AutoConfig()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::has_data() const
{
    if (is_presence_container) return true;
    return tuple.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tuple.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-config";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tuple.is_set || is_set(tuple.yfilter)) leaf_name_data.push_back(tuple.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tuple")
    {
        tuple = value;
        tuple.value_namespace = name_space;
        tuple.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tuple")
    {
        tuple.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tuple")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Discovery()
    :
    link_hellos(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos>())
    , summary(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Summary>())
    , targeted_hellos(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::TargetedHellos>())
    , brief(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief>())
    , stats(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Stats>())
{
    link_hellos->parent = this;
    summary->parent = this;
    targeted_hellos->parent = this;
    brief->parent = this;
    stats->parent = this;

    yang_name = "discovery"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::~Discovery()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::has_data() const
{
    if (is_presence_container) return true;
    return (link_hellos !=  nullptr && link_hellos->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (targeted_hellos !=  nullptr && targeted_hellos->has_data())
	|| (brief !=  nullptr && brief->has_data())
	|| (stats !=  nullptr && stats->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::has_operation() const
{
    return is_set(yfilter)
	|| (link_hellos !=  nullptr && link_hellos->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (targeted_hellos !=  nullptr && targeted_hellos->has_operation())
	|| (brief !=  nullptr && brief->has_operation())
	|| (stats !=  nullptr && stats->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-hellos")
    {
        if(link_hellos == nullptr)
        {
            link_hellos = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos>();
        }
        return link_hellos;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "targeted-hellos")
    {
        if(targeted_hellos == nullptr)
        {
            targeted_hellos = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::TargetedHellos>();
        }
        return targeted_hellos;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(link_hellos != nullptr)
    {
        _children["link-hellos"] = link_hellos;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(targeted_hellos != nullptr)
    {
        _children["targeted-hellos"] = targeted_hellos;
    }

    if(brief != nullptr)
    {
        _children["brief"] = brief;
    }

    if(stats != nullptr)
    {
        _children["stats"] = stats;
    }

    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-hellos" || name == "summary" || name == "targeted-hellos" || name == "brief" || name == "stats")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHellos()
    :
    link_hello(this, {"interface_name"})
{

    yang_name = "link-hellos"; yang_parent_name = "discovery"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::~LinkHellos()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<link_hello.len(); index++)
    {
        if(link_hello[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::has_operation() const
{
    for (std::size_t index=0; index<link_hello.len(); index++)
    {
        if(link_hello[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hellos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-hello")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello>();
        ent_->parent = this;
        link_hello.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : link_hello.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-hello")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::LinkHello()
    :
    interface_name{YType::str, "interface-name"},
    next_hello{YType::uint32, "next-hello"},
    interface{YType::str, "interface"},
    interface_name_xr{YType::str, "interface-name-xr"},
    quick_start_disabled{YType::boolean, "quick-start-disabled"}
        ,
    vrf(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf>())
    , hello_information(this, {})
    , discovery_link_af(this, {})
{
    vrf->parent = this;

    yang_name = "link-hello"; yang_parent_name = "link-hellos"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::~LinkHello()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hello_information.len(); index++)
    {
        if(hello_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<discovery_link_af.len(); index++)
    {
        if(discovery_link_af[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| next_hello.is_set
	|| interface.is_set
	|| interface_name_xr.is_set
	|| quick_start_disabled.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::has_operation() const
{
    for (std::size_t index=0; index<hello_information.len(); index++)
    {
        if(hello_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<discovery_link_af.len(); index++)
    {
        if(discovery_link_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(next_hello.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(quick_start_disabled.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hello.is_set || is_set(next_hello.yfilter)) leaf_name_data.push_back(next_hello.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (quick_start_disabled.is_set || is_set(quick_start_disabled.yfilter)) leaf_name_data.push_back(quick_start_disabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "hello-information")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation>();
        ent_->parent = this;
        hello_information.append(ent_);
        return ent_;
    }

    if(child_yang_name == "discovery-link-af")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf>();
        ent_->parent = this;
        discovery_link_af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    count_ = 0;
    for (auto ent_ : hello_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : discovery_link_af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hello")
    {
        next_hello = value;
        next_hello.value_namespace = name_space;
        next_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quick-start-disabled")
    {
        quick_start_disabled = value;
        quick_start_disabled.value_namespace = name_space;
        quick_start_disabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hello")
    {
        next_hello.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "quick-start-disabled")
    {
        quick_start_disabled.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "hello-information" || name == "discovery-link-af" || name == "interface-name" || name == "next-hello" || name == "interface" || name == "interface-name-xr" || name == "quick-start-disabled")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf::Vrf()
    :
    name{YType::str, "name"},
    id{YType::uint32, "id"}
{

    yang_name = "vrf"; yang_parent_name = "link-hello"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| id.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "id")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::HelloInformation()
    :
    neighbor_ldp_identifier{YType::str, "neighbor-ldp-identifier"},
    is_no_route{YType::boolean, "is-no-route"},
    hold_time{YType::uint32, "hold-time"},
    local_hold_time{YType::uint32, "local-hold-time"},
    neighbor_hold_time{YType::uint32, "neighbor-hold-time"},
    disc_expiry{YType::uint32, "disc-expiry"},
    is_targeted{YType::boolean, "is-targeted"},
    session_up{YType::boolean, "session-up"},
    established_time{YType::uint64, "established-time"},
    established_age{YType::uint64, "established-age"},
    session_bringup_failure_reason{YType::str, "session-bringup-failure-reason"}
        ,
    neighbor_src_address(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress>())
    , neighbor_transport_address(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress>())
    , target(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target>())
    , last_session_down_info(this, {})
{
    neighbor_src_address->parent = this;
    neighbor_transport_address->parent = this;
    target->parent = this;

    yang_name = "hello-information"; yang_parent_name = "link-hello"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::~HelloInformation()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<last_session_down_info.len(); index++)
    {
        if(last_session_down_info[index]->has_data())
            return true;
    }
    return neighbor_ldp_identifier.is_set
	|| is_no_route.is_set
	|| hold_time.is_set
	|| local_hold_time.is_set
	|| neighbor_hold_time.is_set
	|| disc_expiry.is_set
	|| is_targeted.is_set
	|| session_up.is_set
	|| established_time.is_set
	|| established_age.is_set
	|| session_bringup_failure_reason.is_set
	|| (neighbor_src_address !=  nullptr && neighbor_src_address->has_data())
	|| (neighbor_transport_address !=  nullptr && neighbor_transport_address->has_data())
	|| (target !=  nullptr && target->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::has_operation() const
{
    for (std::size_t index=0; index<last_session_down_info.len(); index++)
    {
        if(last_session_down_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_ldp_identifier.yfilter)
	|| ydk::is_set(is_no_route.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(local_hold_time.yfilter)
	|| ydk::is_set(neighbor_hold_time.yfilter)
	|| ydk::is_set(disc_expiry.yfilter)
	|| ydk::is_set(is_targeted.yfilter)
	|| ydk::is_set(session_up.yfilter)
	|| ydk::is_set(established_time.yfilter)
	|| ydk::is_set(established_age.yfilter)
	|| ydk::is_set(session_bringup_failure_reason.yfilter)
	|| (neighbor_src_address !=  nullptr && neighbor_src_address->has_operation())
	|| (neighbor_transport_address !=  nullptr && neighbor_transport_address->has_operation())
	|| (target !=  nullptr && target->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_ldp_identifier.is_set || is_set(neighbor_ldp_identifier.yfilter)) leaf_name_data.push_back(neighbor_ldp_identifier.get_name_leafdata());
    if (is_no_route.is_set || is_set(is_no_route.yfilter)) leaf_name_data.push_back(is_no_route.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (local_hold_time.is_set || is_set(local_hold_time.yfilter)) leaf_name_data.push_back(local_hold_time.get_name_leafdata());
    if (neighbor_hold_time.is_set || is_set(neighbor_hold_time.yfilter)) leaf_name_data.push_back(neighbor_hold_time.get_name_leafdata());
    if (disc_expiry.is_set || is_set(disc_expiry.yfilter)) leaf_name_data.push_back(disc_expiry.get_name_leafdata());
    if (is_targeted.is_set || is_set(is_targeted.yfilter)) leaf_name_data.push_back(is_targeted.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.yfilter)) leaf_name_data.push_back(session_up.get_name_leafdata());
    if (established_time.is_set || is_set(established_time.yfilter)) leaf_name_data.push_back(established_time.get_name_leafdata());
    if (established_age.is_set || is_set(established_age.yfilter)) leaf_name_data.push_back(established_age.get_name_leafdata());
    if (session_bringup_failure_reason.is_set || is_set(session_bringup_failure_reason.yfilter)) leaf_name_data.push_back(session_bringup_failure_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-src-address")
    {
        if(neighbor_src_address == nullptr)
        {
            neighbor_src_address = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress>();
        }
        return neighbor_src_address;
    }

    if(child_yang_name == "neighbor-transport-address")
    {
        if(neighbor_transport_address == nullptr)
        {
            neighbor_transport_address = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress>();
        }
        return neighbor_transport_address;
    }

    if(child_yang_name == "target")
    {
        if(target == nullptr)
        {
            target = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target>();
        }
        return target;
    }

    if(child_yang_name == "last-session-down-info")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo>();
        ent_->parent = this;
        last_session_down_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(neighbor_src_address != nullptr)
    {
        _children["neighbor-src-address"] = neighbor_src_address;
    }

    if(neighbor_transport_address != nullptr)
    {
        _children["neighbor-transport-address"] = neighbor_transport_address;
    }

    if(target != nullptr)
    {
        _children["target"] = target;
    }

    count_ = 0;
    for (auto ent_ : last_session_down_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-ldp-identifier")
    {
        neighbor_ldp_identifier = value;
        neighbor_ldp_identifier.value_namespace = name_space;
        neighbor_ldp_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-no-route")
    {
        is_no_route = value;
        is_no_route.value_namespace = name_space;
        is_no_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-hold-time")
    {
        local_hold_time = value;
        local_hold_time.value_namespace = name_space;
        local_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-hold-time")
    {
        neighbor_hold_time = value;
        neighbor_hold_time.value_namespace = name_space;
        neighbor_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disc-expiry")
    {
        disc_expiry = value;
        disc_expiry.value_namespace = name_space;
        disc_expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-targeted")
    {
        is_targeted = value;
        is_targeted.value_namespace = name_space;
        is_targeted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up")
    {
        session_up = value;
        session_up.value_namespace = name_space;
        session_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established-time")
    {
        established_time = value;
        established_time.value_namespace = name_space;
        established_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established-age")
    {
        established_age = value;
        established_age.value_namespace = name_space;
        established_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-bringup-failure-reason")
    {
        session_bringup_failure_reason = value;
        session_bringup_failure_reason.value_namespace = name_space;
        session_bringup_failure_reason.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-ldp-identifier")
    {
        neighbor_ldp_identifier.yfilter = yfilter;
    }
    if(value_path == "is-no-route")
    {
        is_no_route.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "local-hold-time")
    {
        local_hold_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-hold-time")
    {
        neighbor_hold_time.yfilter = yfilter;
    }
    if(value_path == "disc-expiry")
    {
        disc_expiry.yfilter = yfilter;
    }
    if(value_path == "is-targeted")
    {
        is_targeted.yfilter = yfilter;
    }
    if(value_path == "session-up")
    {
        session_up.yfilter = yfilter;
    }
    if(value_path == "established-time")
    {
        established_time.yfilter = yfilter;
    }
    if(value_path == "established-age")
    {
        established_age.yfilter = yfilter;
    }
    if(value_path == "session-bringup-failure-reason")
    {
        session_bringup_failure_reason.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-src-address" || name == "neighbor-transport-address" || name == "target" || name == "last-session-down-info" || name == "neighbor-ldp-identifier" || name == "is-no-route" || name == "hold-time" || name == "local-hold-time" || name == "neighbor-hold-time" || name == "disc-expiry" || name == "is-targeted" || name == "session-up" || name == "established-time" || name == "established-age" || name == "session-bringup-failure-reason")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::NeighborSrcAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "neighbor-src-address"; yang_parent_name = "hello-information"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::~NeighborSrcAddress()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-src-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::NeighborTransportAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "neighbor-transport-address"; yang_parent_name = "hello-information"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::~NeighborTransportAddress()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-transport-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::Target()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "target"; yang_parent_name = "hello-information"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::~Target()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::LastSessionDownInfo()
    :
    last_session_down_reason{YType::str, "last-session-down-reason"},
    last_session_down_time{YType::uint64, "last-session-down-time"},
    last_session_up_time{YType::uint32, "last-session-up-time"}
{

    yang_name = "last-session-down-info"; yang_parent_name = "hello-information"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::~LastSessionDownInfo()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::has_data() const
{
    if (is_presence_container) return true;
    return last_session_down_reason.is_set
	|| last_session_down_time.is_set
	|| last_session_up_time.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_session_down_reason.yfilter)
	|| ydk::is_set(last_session_down_time.yfilter)
	|| ydk::is_set(last_session_up_time.yfilter);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-session-down-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_session_down_reason.is_set || is_set(last_session_down_reason.yfilter)) leaf_name_data.push_back(last_session_down_reason.get_name_leafdata());
    if (last_session_down_time.is_set || is_set(last_session_down_time.yfilter)) leaf_name_data.push_back(last_session_down_time.get_name_leafdata());
    if (last_session_up_time.is_set || is_set(last_session_up_time.yfilter)) leaf_name_data.push_back(last_session_up_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-session-down-reason")
    {
        last_session_down_reason = value;
        last_session_down_reason.value_namespace = name_space;
        last_session_down_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-session-down-time")
    {
        last_session_down_time = value;
        last_session_down_time.value_namespace = name_space;
        last_session_down_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-session-up-time")
    {
        last_session_up_time = value;
        last_session_up_time.value_namespace = name_space;
        last_session_up_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-session-down-reason")
    {
        last_session_down_reason.yfilter = yfilter;
    }
    if(value_path == "last-session-down-time")
    {
        last_session_down_time.yfilter = yfilter;
    }
    if(value_path == "last-session-up-time")
    {
        last_session_up_time.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-session-down-reason" || name == "last-session-down-time" || name == "last-session-up-time")
        return true;
    return false;
}


}
}

