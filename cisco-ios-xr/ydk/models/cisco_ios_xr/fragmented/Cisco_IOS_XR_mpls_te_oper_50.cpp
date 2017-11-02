
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_50.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_51.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::StaticUni()
    :
    client_port{YType::str, "client-port"},
    client_if_handle{YType::str, "client-if-handle"},
    client_odu_name{YType::str, "client-odu-name"},
    client_odu_if_handle{YType::str, "client-odu-if-handle"},
    cross_connect_id{YType::uint32, "cross-connect-id"},
    is_connected{YType::boolean, "is-connected"},
    uptime{YType::uint32, "uptime"},
    local_termination{YType::enumeration, "local-termination"},
    static_uni_type{YType::enumeration, "static-uni-type"},
    term_client_port{YType::str, "term-client-port"},
    term_client_if_handle{YType::str, "term-client-if-handle"}
{

    yang_name = "static-uni"; yang_parent_name = "transport-tunnel-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::~StaticUni()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::has_data() const
{
    return client_port.is_set
	|| client_if_handle.is_set
	|| client_odu_name.is_set
	|| client_odu_if_handle.is_set
	|| cross_connect_id.is_set
	|| is_connected.is_set
	|| uptime.is_set
	|| local_termination.is_set
	|| static_uni_type.is_set
	|| term_client_port.is_set
	|| term_client_if_handle.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_port.yfilter)
	|| ydk::is_set(client_if_handle.yfilter)
	|| ydk::is_set(client_odu_name.yfilter)
	|| ydk::is_set(client_odu_if_handle.yfilter)
	|| ydk::is_set(cross_connect_id.yfilter)
	|| ydk::is_set(is_connected.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(local_termination.yfilter)
	|| ydk::is_set(static_uni_type.yfilter)
	|| ydk::is_set(term_client_port.yfilter)
	|| ydk::is_set(term_client_if_handle.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-uni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_port.is_set || is_set(client_port.yfilter)) leaf_name_data.push_back(client_port.get_name_leafdata());
    if (client_if_handle.is_set || is_set(client_if_handle.yfilter)) leaf_name_data.push_back(client_if_handle.get_name_leafdata());
    if (client_odu_name.is_set || is_set(client_odu_name.yfilter)) leaf_name_data.push_back(client_odu_name.get_name_leafdata());
    if (client_odu_if_handle.is_set || is_set(client_odu_if_handle.yfilter)) leaf_name_data.push_back(client_odu_if_handle.get_name_leafdata());
    if (cross_connect_id.is_set || is_set(cross_connect_id.yfilter)) leaf_name_data.push_back(cross_connect_id.get_name_leafdata());
    if (is_connected.is_set || is_set(is_connected.yfilter)) leaf_name_data.push_back(is_connected.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (local_termination.is_set || is_set(local_termination.yfilter)) leaf_name_data.push_back(local_termination.get_name_leafdata());
    if (static_uni_type.is_set || is_set(static_uni_type.yfilter)) leaf_name_data.push_back(static_uni_type.get_name_leafdata());
    if (term_client_port.is_set || is_set(term_client_port.yfilter)) leaf_name_data.push_back(term_client_port.get_name_leafdata());
    if (term_client_if_handle.is_set || is_set(term_client_if_handle.yfilter)) leaf_name_data.push_back(term_client_if_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-port")
    {
        client_port = value;
        client_port.value_namespace = name_space;
        client_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-if-handle")
    {
        client_if_handle = value;
        client_if_handle.value_namespace = name_space;
        client_if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-odu-name")
    {
        client_odu_name = value;
        client_odu_name.value_namespace = name_space;
        client_odu_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-odu-if-handle")
    {
        client_odu_if_handle = value;
        client_odu_if_handle.value_namespace = name_space;
        client_odu_if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cross-connect-id")
    {
        cross_connect_id = value;
        cross_connect_id.value_namespace = name_space;
        cross_connect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connected")
    {
        is_connected = value;
        is_connected.value_namespace = name_space;
        is_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-termination")
    {
        local_termination = value;
        local_termination.value_namespace = name_space;
        local_termination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static-uni-type")
    {
        static_uni_type = value;
        static_uni_type.value_namespace = name_space;
        static_uni_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "term-client-port")
    {
        term_client_port = value;
        term_client_port.value_namespace = name_space;
        term_client_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "term-client-if-handle")
    {
        term_client_if_handle = value;
        term_client_if_handle.value_namespace = name_space;
        term_client_if_handle.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-port")
    {
        client_port.yfilter = yfilter;
    }
    if(value_path == "client-if-handle")
    {
        client_if_handle.yfilter = yfilter;
    }
    if(value_path == "client-odu-name")
    {
        client_odu_name.yfilter = yfilter;
    }
    if(value_path == "client-odu-if-handle")
    {
        client_odu_if_handle.yfilter = yfilter;
    }
    if(value_path == "cross-connect-id")
    {
        cross_connect_id.yfilter = yfilter;
    }
    if(value_path == "is-connected")
    {
        is_connected.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "local-termination")
    {
        local_termination.yfilter = yfilter;
    }
    if(value_path == "static-uni-type")
    {
        static_uni_type.yfilter = yfilter;
    }
    if(value_path == "term-client-port")
    {
        term_client_port.yfilter = yfilter;
    }
    if(value_path == "term-client-if-handle")
    {
        term_client_if_handle.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-port" || name == "client-if-handle" || name == "client-odu-name" || name == "client-odu-if-handle" || name == "cross-connect-id" || name == "is-connected" || name == "uptime" || name == "local-termination" || name == "static-uni-type" || name == "term-client-port" || name == "term-client-if-handle")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressStaticUni()
    :
    local_termination{YType::enumeration, "local-termination"},
    remote_uni_type{YType::enumeration, "remote-uni-type"}
    	,
    egress_port(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort>())
	,term_egress_port(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort>())
{
    egress_port->parent = this;
    term_egress_port->parent = this;

    yang_name = "egress-static-uni"; yang_parent_name = "transport-tunnel-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::~EgressStaticUni()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::has_data() const
{
    return local_termination.is_set
	|| remote_uni_type.is_set
	|| (egress_port !=  nullptr && egress_port->has_data())
	|| (term_egress_port !=  nullptr && term_egress_port->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_termination.yfilter)
	|| ydk::is_set(remote_uni_type.yfilter)
	|| (egress_port !=  nullptr && egress_port->has_operation())
	|| (term_egress_port !=  nullptr && term_egress_port->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-static-uni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_termination.is_set || is_set(local_termination.yfilter)) leaf_name_data.push_back(local_termination.get_name_leafdata());
    if (remote_uni_type.is_set || is_set(remote_uni_type.yfilter)) leaf_name_data.push_back(remote_uni_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "egress-port")
    {
        if(egress_port == nullptr)
        {
            egress_port = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort>();
        }
        return egress_port;
    }

    if(child_yang_name == "term-egress-port")
    {
        if(term_egress_port == nullptr)
        {
            term_egress_port = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort>();
        }
        return term_egress_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(egress_port != nullptr)
    {
        children["egress-port"] = egress_port;
    }

    if(term_egress_port != nullptr)
    {
        children["term-egress-port"] = term_egress_port;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-termination")
    {
        local_termination = value;
        local_termination.value_namespace = name_space;
        local_termination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-uni-type")
    {
        remote_uni_type = value;
        remote_uni_type.value_namespace = name_space;
        remote_uni_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-termination")
    {
        local_termination.yfilter = yfilter;
    }
    if(value_path == "remote-uni-type")
    {
        remote_uni_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress-port" || name == "term-egress-port" || name == "local-termination" || name == "remote-uni-type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::EgressPort()
    :
    te_addr(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr>())
{
    te_addr->parent = this;

    yang_name = "egress-port"; yang_parent_name = "egress-static-uni"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::~EgressPort()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::has_data() const
{
    return (te_addr !=  nullptr && te_addr->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::has_operation() const
{
    return is_set(yfilter)
	|| (te_addr !=  nullptr && te_addr->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-addr")
    {
        if(te_addr == nullptr)
        {
            te_addr = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr>();
        }
        return te_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(te_addr != nullptr)
    {
        children["te-addr"] = te_addr;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-addr")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::TeAddr()
    :
    type{YType::enumeration, "type"},
    ipv4_address{YType::str, "ipv4-address"}
    	,
    ipv4_unnumbered_address(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress>())
{
    ipv4_unnumbered_address->parent = this;

    yang_name = "te-addr"; yang_parent_name = "egress-port"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::~TeAddr()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::has_data() const
{
    return type.is_set
	|| ipv4_address.is_set
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unnumbered-address")
    {
        if(ipv4_unnumbered_address == nullptr)
        {
            ipv4_unnumbered_address = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress>();
        }
        return ipv4_unnumbered_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_unnumbered_address != nullptr)
    {
        children["ipv4-unnumbered-address"] = ipv4_unnumbered_address;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unnumbered-address" || name == "type" || name == "ipv4-address")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::Ipv4UnnumberedAddress()
    :
    router_id{YType::str, "router-id"},
    interface_index{YType::uint32, "interface-index"}
{

    yang_name = "ipv4-unnumbered-address"; yang_parent_name = "te-addr"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::~Ipv4UnnumberedAddress()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::has_data() const
{
    return router_id.is_set
	|| interface_index.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(interface_index.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unnumbered-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "interface-index")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TermEgressPort()
    :
    te_addr(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr>())
{
    te_addr->parent = this;

    yang_name = "term-egress-port"; yang_parent_name = "egress-static-uni"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::~TermEgressPort()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::has_data() const
{
    return (te_addr !=  nullptr && te_addr->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::has_operation() const
{
    return is_set(yfilter)
	|| (te_addr !=  nullptr && te_addr->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term-egress-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-addr")
    {
        if(te_addr == nullptr)
        {
            te_addr = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr>();
        }
        return te_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(te_addr != nullptr)
    {
        children["te-addr"] = te_addr;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-addr")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::TeAddr()
    :
    type{YType::enumeration, "type"},
    ipv4_address{YType::str, "ipv4-address"}
    	,
    ipv4_unnumbered_address(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress>())
{
    ipv4_unnumbered_address->parent = this;

    yang_name = "te-addr"; yang_parent_name = "term-egress-port"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::~TeAddr()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::has_data() const
{
    return type.is_set
	|| ipv4_address.is_set
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unnumbered-address")
    {
        if(ipv4_unnumbered_address == nullptr)
        {
            ipv4_unnumbered_address = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress>();
        }
        return ipv4_unnumbered_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_unnumbered_address != nullptr)
    {
        children["ipv4-unnumbered-address"] = ipv4_unnumbered_address;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unnumbered-address" || name == "type" || name == "ipv4-address")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::Ipv4UnnumberedAddress()
    :
    router_id{YType::str, "router-id"},
    interface_index{YType::uint32, "interface-index"}
{

    yang_name = "ipv4-unnumbered-address"; yang_parent_name = "te-addr"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::~Ipv4UnnumberedAddress()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::has_data() const
{
    return router_id.is_set
	|| interface_index.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(interface_index.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unnumbered-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "interface-index")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::HomepathEro()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "homepath-ero"; yang_parent_name = "transport-tunnel-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::~HomepathEro()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "homepath-ero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::get_children() const
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_address{YType::str, "ero-address"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "homepath-ero"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::has_data() const
{
    return is_strict_route.is_set
	|| ero_address.is_set
	|| prefix_length.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-address" || name == "prefix-length")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "homepath-ero"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::has_data() const
{
    return is_strict_route.is_set
	|| ero_interface_id.is_set
	|| ero_router_id.is_set
	|| status.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-interface-id" || name == "ero-router-id" || name == "status")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo::DiversityInfo()
    :
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "diversity-info"; yang_parent_name = "transport-tunnel-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo::~DiversityInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo::has_data() const
{
    return tunnel_id.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diversity-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-id")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::BfdInfo()
    :
    bfd_session_up{YType::boolean, "bfd-session-up"},
    session_up_time{YType::uint32, "session-up-time"},
    failure_diagnostic_code{YType::uint32, "failure-diagnostic-code"},
    failure_reason{YType::str, "failure-reason"},
    minimum_session_up_interval{YType::uint32, "minimum-session-up-interval"},
    maximum_session_up_interval{YType::uint32, "maximum-session-up-interval"}
    	,
    event_counters(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters>())
{
    event_counters->parent = this;

    yang_name = "bfd-info"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::~BfdInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::has_data() const
{
    for (std::size_t index=0; index<dampening_info.size(); index++)
    {
        if(dampening_info[index]->has_data())
            return true;
    }
    return bfd_session_up.is_set
	|| session_up_time.is_set
	|| failure_diagnostic_code.is_set
	|| failure_reason.is_set
	|| minimum_session_up_interval.is_set
	|| maximum_session_up_interval.is_set
	|| (event_counters !=  nullptr && event_counters->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::has_operation() const
{
    for (std::size_t index=0; index<dampening_info.size(); index++)
    {
        if(dampening_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bfd_session_up.yfilter)
	|| ydk::is_set(session_up_time.yfilter)
	|| ydk::is_set(failure_diagnostic_code.yfilter)
	|| ydk::is_set(failure_reason.yfilter)
	|| ydk::is_set(minimum_session_up_interval.yfilter)
	|| ydk::is_set(maximum_session_up_interval.yfilter)
	|| (event_counters !=  nullptr && event_counters->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_session_up.is_set || is_set(bfd_session_up.yfilter)) leaf_name_data.push_back(bfd_session_up.get_name_leafdata());
    if (session_up_time.is_set || is_set(session_up_time.yfilter)) leaf_name_data.push_back(session_up_time.get_name_leafdata());
    if (failure_diagnostic_code.is_set || is_set(failure_diagnostic_code.yfilter)) leaf_name_data.push_back(failure_diagnostic_code.get_name_leafdata());
    if (failure_reason.is_set || is_set(failure_reason.yfilter)) leaf_name_data.push_back(failure_reason.get_name_leafdata());
    if (minimum_session_up_interval.is_set || is_set(minimum_session_up_interval.yfilter)) leaf_name_data.push_back(minimum_session_up_interval.get_name_leafdata());
    if (maximum_session_up_interval.is_set || is_set(maximum_session_up_interval.yfilter)) leaf_name_data.push_back(maximum_session_up_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-counters")
    {
        if(event_counters == nullptr)
        {
            event_counters = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters>();
        }
        return event_counters;
    }

    if(child_yang_name == "dampening-info")
    {
        for(auto const & c : dampening_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo>();
        c->parent = this;
        dampening_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(event_counters != nullptr)
    {
        children["event-counters"] = event_counters;
    }

    for (auto const & c : dampening_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-session-up")
    {
        bfd_session_up = value;
        bfd_session_up.value_namespace = name_space;
        bfd_session_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up-time")
    {
        session_up_time = value;
        session_up_time.value_namespace = name_space;
        session_up_time.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "minimum-session-up-interval")
    {
        minimum_session_up_interval = value;
        minimum_session_up_interval.value_namespace = name_space;
        minimum_session_up_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-session-up-interval")
    {
        maximum_session_up_interval = value;
        maximum_session_up_interval.value_namespace = name_space;
        maximum_session_up_interval.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-session-up")
    {
        bfd_session_up.yfilter = yfilter;
    }
    if(value_path == "session-up-time")
    {
        session_up_time.yfilter = yfilter;
    }
    if(value_path == "failure-diagnostic-code")
    {
        failure_diagnostic_code.yfilter = yfilter;
    }
    if(value_path == "failure-reason")
    {
        failure_reason.yfilter = yfilter;
    }
    if(value_path == "minimum-session-up-interval")
    {
        minimum_session_up_interval.yfilter = yfilter;
    }
    if(value_path == "maximum-session-up-interval")
    {
        maximum_session_up_interval.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-counters" || name == "dampening-info" || name == "bfd-session-up" || name == "session-up-time" || name == "failure-diagnostic-code" || name == "failure-reason" || name == "minimum-session-up-interval" || name == "maximum-session-up-interval")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters::EventCounters()
    :
    session_create_events{YType::uint32, "session-create-events"},
    session_up_events{YType::uint32, "session-up-events"},
    session_creation_failed_events{YType::uint32, "session-creation-failed-events"},
    session_down_events{YType::uint32, "session-down-events"},
    session_admin_down_events{YType::uint32, "session-admin-down-events"},
    session_gracefully_delete_events{YType::uint32, "session-gracefully-delete-events"},
    session_non_gracefully_delete_events{YType::uint32, "session-non-gracefully-delete-events"},
    session_create_timeout_events{YType::uint32, "session-create-timeout-events"},
    session_replay_events{YType::uint32, "session-replay-events"}
{

    yang_name = "event-counters"; yang_parent_name = "bfd-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters::~EventCounters()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters::has_data() const
{
    return session_create_events.is_set
	|| session_up_events.is_set
	|| session_creation_failed_events.is_set
	|| session_down_events.is_set
	|| session_admin_down_events.is_set
	|| session_gracefully_delete_events.is_set
	|| session_non_gracefully_delete_events.is_set
	|| session_create_timeout_events.is_set
	|| session_replay_events.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_create_events.yfilter)
	|| ydk::is_set(session_up_events.yfilter)
	|| ydk::is_set(session_creation_failed_events.yfilter)
	|| ydk::is_set(session_down_events.yfilter)
	|| ydk::is_set(session_admin_down_events.yfilter)
	|| ydk::is_set(session_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_non_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_create_timeout_events.yfilter)
	|| ydk::is_set(session_replay_events.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_create_events.is_set || is_set(session_create_events.yfilter)) leaf_name_data.push_back(session_create_events.get_name_leafdata());
    if (session_up_events.is_set || is_set(session_up_events.yfilter)) leaf_name_data.push_back(session_up_events.get_name_leafdata());
    if (session_creation_failed_events.is_set || is_set(session_creation_failed_events.yfilter)) leaf_name_data.push_back(session_creation_failed_events.get_name_leafdata());
    if (session_down_events.is_set || is_set(session_down_events.yfilter)) leaf_name_data.push_back(session_down_events.get_name_leafdata());
    if (session_admin_down_events.is_set || is_set(session_admin_down_events.yfilter)) leaf_name_data.push_back(session_admin_down_events.get_name_leafdata());
    if (session_gracefully_delete_events.is_set || is_set(session_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_gracefully_delete_events.get_name_leafdata());
    if (session_non_gracefully_delete_events.is_set || is_set(session_non_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_non_gracefully_delete_events.get_name_leafdata());
    if (session_create_timeout_events.is_set || is_set(session_create_timeout_events.yfilter)) leaf_name_data.push_back(session_create_timeout_events.get_name_leafdata());
    if (session_replay_events.is_set || is_set(session_replay_events.yfilter)) leaf_name_data.push_back(session_replay_events.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-create-events")
    {
        session_create_events = value;
        session_create_events.value_namespace = name_space;
        session_create_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up-events")
    {
        session_up_events = value;
        session_up_events.value_namespace = name_space;
        session_up_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events = value;
        session_creation_failed_events.value_namespace = name_space;
        session_creation_failed_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-down-events")
    {
        session_down_events = value;
        session_down_events.value_namespace = name_space;
        session_down_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events = value;
        session_admin_down_events.value_namespace = name_space;
        session_admin_down_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events = value;
        session_gracefully_delete_events.value_namespace = name_space;
        session_gracefully_delete_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events = value;
        session_non_gracefully_delete_events.value_namespace = name_space;
        session_non_gracefully_delete_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-create-timeout-events")
    {
        session_create_timeout_events = value;
        session_create_timeout_events.value_namespace = name_space;
        session_create_timeout_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events = value;
        session_replay_events.value_namespace = name_space;
        session_replay_events.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-create-events")
    {
        session_create_events.yfilter = yfilter;
    }
    if(value_path == "session-up-events")
    {
        session_up_events.yfilter = yfilter;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events.yfilter = yfilter;
    }
    if(value_path == "session-down-events")
    {
        session_down_events.yfilter = yfilter;
    }
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events.yfilter = yfilter;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events.yfilter = yfilter;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events.yfilter = yfilter;
    }
    if(value_path == "session-create-timeout-events")
    {
        session_create_timeout_events.yfilter = yfilter;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-create-events" || name == "session-up-events" || name == "session-creation-failed-events" || name == "session-down-events" || name == "session-admin-down-events" || name == "session-gracefully-delete-events" || name == "session-non-gracefully-delete-events" || name == "session-create-timeout-events" || name == "session-replay-events")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::DampeningInfo()
    :
    option_index{YType::uint32, "option-index"},
    hold_down_time{YType::uint32, "hold-down-time"},
    remained_time{YType::uint32, "remained-time"},
    backoff_count{YType::uint32, "backoff-count"}
{

    yang_name = "dampening-info"; yang_parent_name = "bfd-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::~DampeningInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::has_data() const
{
    return option_index.is_set
	|| hold_down_time.is_set
	|| remained_time.is_set
	|| backoff_count.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(option_index.yfilter)
	|| ydk::is_set(hold_down_time.yfilter)
	|| ydk::is_set(remained_time.yfilter)
	|| ydk::is_set(backoff_count.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_index.is_set || is_set(option_index.yfilter)) leaf_name_data.push_back(option_index.get_name_leafdata());
    if (hold_down_time.is_set || is_set(hold_down_time.yfilter)) leaf_name_data.push_back(hold_down_time.get_name_leafdata());
    if (remained_time.is_set || is_set(remained_time.yfilter)) leaf_name_data.push_back(remained_time.get_name_leafdata());
    if (backoff_count.is_set || is_set(backoff_count.yfilter)) leaf_name_data.push_back(backoff_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option-index")
    {
        option_index = value;
        option_index.value_namespace = name_space;
        option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-down-time")
    {
        hold_down_time = value;
        hold_down_time.value_namespace = name_space;
        hold_down_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remained-time")
    {
        remained_time = value;
        remained_time.value_namespace = name_space;
        remained_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backoff-count")
    {
        backoff_count = value;
        backoff_count.value_namespace = name_space;
        backoff_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option-index")
    {
        option_index.yfilter = yfilter;
    }
    if(value_path == "hold-down-time")
    {
        hold_down_time.yfilter = yfilter;
    }
    if(value_path == "remained-time")
    {
        remained_time.yfilter = yfilter;
    }
    if(value_path == "backoff-count")
    {
        backoff_count.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option-index" || name == "hold-down-time" || name == "remained-time" || name == "backoff-count")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::OtnBidir()
    :
    aps(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps>())
	,restoration(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration>())
{
    aps->parent = this;
    restoration->parent = this;

    yang_name = "otn-bidir"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::~OtnBidir()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::has_data() const
{
    return (aps !=  nullptr && aps->has_data())
	|| (restoration !=  nullptr && restoration->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::has_operation() const
{
    return is_set(yfilter)
	|| (aps !=  nullptr && aps->has_operation())
	|| (restoration !=  nullptr && restoration->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-bidir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aps")
    {
        if(aps == nullptr)
        {
            aps = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps>();
        }
        return aps;
    }

    if(child_yang_name == "restoration")
    {
        if(restoration == nullptr)
        {
            restoration = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration>();
        }
        return restoration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aps != nullptr)
    {
        children["aps"] = aps;
    }

    if(restoration != nullptr)
    {
        children["restoration"] = restoration;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aps" || name == "restoration")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::Aps()
    :
    active_lsp{YType::enumeration, "active-lsp"},
    diversity_type{YType::enumeration, "diversity-type"}
    	,
    protection_profile(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile>())
{
    protection_profile->parent = this;

    yang_name = "aps"; yang_parent_name = "otn-bidir"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::~Aps()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::has_data() const
{
    return active_lsp.is_set
	|| diversity_type.is_set
	|| (protection_profile !=  nullptr && protection_profile->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_lsp.yfilter)
	|| ydk::is_set(diversity_type.yfilter)
	|| (protection_profile !=  nullptr && protection_profile->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp.is_set || is_set(active_lsp.yfilter)) leaf_name_data.push_back(active_lsp.get_name_leafdata());
    if (diversity_type.is_set || is_set(diversity_type.yfilter)) leaf_name_data.push_back(diversity_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protection-profile")
    {
        if(protection_profile == nullptr)
        {
            protection_profile = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile>();
        }
        return protection_profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protection_profile != nullptr)
    {
        children["protection-profile"] = protection_profile;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-lsp")
    {
        active_lsp = value;
        active_lsp.value_namespace = name_space;
        active_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversity-type")
    {
        diversity_type = value;
        diversity_type.value_namespace = name_space;
        diversity_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-lsp")
    {
        active_lsp.yfilter = yfilter;
    }
    if(value_path == "diversity-type")
    {
        diversity_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection-profile" || name == "active-lsp" || name == "diversity-type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::ProtectionProfile()
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
    revert_schedule(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule>())
{
    revert_schedule->parent = this;

    yang_name = "protection-profile"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::~ProtectionProfile()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection-profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "revert-schedule")
    {
        if(revert_schedule == nullptr)
        {
            revert_schedule = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule>();
        }
        return revert_schedule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(revert_schedule != nullptr)
    {
        children["revert-schedule"] = revert_schedule;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "revert-schedule" || name == "snc-mode" || name == "tcm-id" || name == "protection-type" || name == "protection-mode" || name == "wait-to-restore-time" || name == "hold-off-time" || name == "path-prot-profile-type" || name == "restoration-style")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule::RevertSchedule()
    :
    schedulename{YType::str, "schedulename"},
    schedule_date{YType::uint32, "schedule-date"},
    schedule_frequency{YType::enumeration, "schedule-frequency"},
    duration{YType::uint32, "duration"},
    max_tries{YType::uint32, "max-tries"}
{

    yang_name = "revert-schedule"; yang_parent_name = "protection-profile"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule::~RevertSchedule()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule::has_data() const
{
    return schedulename.is_set
	|| schedule_date.is_set
	|| schedule_frequency.is_set
	|| duration.is_set
	|| max_tries.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(schedulename.yfilter)
	|| ydk::is_set(schedule_date.yfilter)
	|| ydk::is_set(schedule_frequency.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(max_tries.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schedulename.is_set || is_set(schedulename.yfilter)) leaf_name_data.push_back(schedulename.get_name_leafdata());
    if (schedule_date.is_set || is_set(schedule_date.yfilter)) leaf_name_data.push_back(schedule_date.get_name_leafdata());
    if (schedule_frequency.is_set || is_set(schedule_frequency.yfilter)) leaf_name_data.push_back(schedule_frequency.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (max_tries.is_set || is_set(max_tries.yfilter)) leaf_name_data.push_back(max_tries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedulename" || name == "schedule-date" || name == "schedule-frequency" || name == "duration" || name == "max-tries")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration::Restoration()
    :
    revert_option{YType::enumeration, "revert-option"},
    diverse_lsp{YType::enumeration, "diverse-lsp"},
    diversity_type{YType::enumeration, "diversity-type"}
{

    yang_name = "restoration"; yang_parent_name = "otn-bidir"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration::~Restoration()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration::has_data() const
{
    return revert_option.is_set
	|| diverse_lsp.is_set
	|| diversity_type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(revert_option.yfilter)
	|| ydk::is_set(diverse_lsp.yfilter)
	|| ydk::is_set(diversity_type.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restoration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (revert_option.is_set || is_set(revert_option.yfilter)) leaf_name_data.push_back(revert_option.get_name_leafdata());
    if (diverse_lsp.is_set || is_set(diverse_lsp.yfilter)) leaf_name_data.push_back(diverse_lsp.get_name_leafdata());
    if (diversity_type.is_set || is_set(diversity_type.yfilter)) leaf_name_data.push_back(diversity_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "revert-option")
    {
        revert_option = value;
        revert_option.value_namespace = name_space;
        revert_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diverse-lsp")
    {
        diverse_lsp = value;
        diverse_lsp.value_namespace = name_space;
        diverse_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversity-type")
    {
        diversity_type = value;
        diversity_type.value_namespace = name_space;
        diversity_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "revert-option")
    {
        revert_option.yfilter = yfilter;
    }
    if(value_path == "diverse-lsp")
    {
        diverse_lsp.yfilter = yfilter;
    }
    if(value_path == "diversity-type")
    {
        diversity_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "revert-option" || name == "diverse-lsp" || name == "diversity-type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::Bidir()
    :
    reverse_bandwidth{YType::uint32, "reverse-bandwidth"},
    reverse_bandwidth_standby{YType::uint32, "reverse-bandwidth-standby"}
    	,
    reverse_ero_error_current(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent>())
	,reverse_ero_error_reopt(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt>())
	,reverse_ero_error_standby(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby>())
	,reverse_ero_error_standby_reopt(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt>())
{
    reverse_ero_error_current->parent = this;
    reverse_ero_error_reopt->parent = this;
    reverse_ero_error_standby->parent = this;
    reverse_ero_error_standby_reopt->parent = this;

    yang_name = "bidir"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::~Bidir()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::has_data() const
{
    return reverse_bandwidth.is_set
	|| reverse_bandwidth_standby.is_set
	|| (reverse_ero_error_current !=  nullptr && reverse_ero_error_current->has_data())
	|| (reverse_ero_error_reopt !=  nullptr && reverse_ero_error_reopt->has_data())
	|| (reverse_ero_error_standby !=  nullptr && reverse_ero_error_standby->has_data())
	|| (reverse_ero_error_standby_reopt !=  nullptr && reverse_ero_error_standby_reopt->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reverse_bandwidth.yfilter)
	|| ydk::is_set(reverse_bandwidth_standby.yfilter)
	|| (reverse_ero_error_current !=  nullptr && reverse_ero_error_current->has_operation())
	|| (reverse_ero_error_reopt !=  nullptr && reverse_ero_error_reopt->has_operation())
	|| (reverse_ero_error_standby !=  nullptr && reverse_ero_error_standby->has_operation())
	|| (reverse_ero_error_standby_reopt !=  nullptr && reverse_ero_error_standby_reopt->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reverse_bandwidth.is_set || is_set(reverse_bandwidth.yfilter)) leaf_name_data.push_back(reverse_bandwidth.get_name_leafdata());
    if (reverse_bandwidth_standby.is_set || is_set(reverse_bandwidth_standby.yfilter)) leaf_name_data.push_back(reverse_bandwidth_standby.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reverse-ero-error-current")
    {
        if(reverse_ero_error_current == nullptr)
        {
            reverse_ero_error_current = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent>();
        }
        return reverse_ero_error_current;
    }

    if(child_yang_name == "reverse-ero-error-reopt")
    {
        if(reverse_ero_error_reopt == nullptr)
        {
            reverse_ero_error_reopt = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt>();
        }
        return reverse_ero_error_reopt;
    }

    if(child_yang_name == "reverse-ero-error-standby")
    {
        if(reverse_ero_error_standby == nullptr)
        {
            reverse_ero_error_standby = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby>();
        }
        return reverse_ero_error_standby;
    }

    if(child_yang_name == "reverse-ero-error-standby-reopt")
    {
        if(reverse_ero_error_standby_reopt == nullptr)
        {
            reverse_ero_error_standby_reopt = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt>();
        }
        return reverse_ero_error_standby_reopt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reverse_ero_error_current != nullptr)
    {
        children["reverse-ero-error-current"] = reverse_ero_error_current;
    }

    if(reverse_ero_error_reopt != nullptr)
    {
        children["reverse-ero-error-reopt"] = reverse_ero_error_reopt;
    }

    if(reverse_ero_error_standby != nullptr)
    {
        children["reverse-ero-error-standby"] = reverse_ero_error_standby;
    }

    if(reverse_ero_error_standby_reopt != nullptr)
    {
        children["reverse-ero-error-standby-reopt"] = reverse_ero_error_standby_reopt;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reverse-bandwidth")
    {
        reverse_bandwidth = value;
        reverse_bandwidth.value_namespace = name_space;
        reverse_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-bandwidth-standby")
    {
        reverse_bandwidth_standby = value;
        reverse_bandwidth_standby.value_namespace = name_space;
        reverse_bandwidth_standby.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reverse-bandwidth")
    {
        reverse_bandwidth.yfilter = yfilter;
    }
    if(value_path == "reverse-bandwidth-standby")
    {
        reverse_bandwidth_standby.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reverse-ero-error-current" || name == "reverse-ero-error-reopt" || name == "reverse-ero-error-standby" || name == "reverse-ero-error-standby-reopt" || name == "reverse-bandwidth" || name == "reverse-bandwidth-standby")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::ReverseEroErrorCurrent()
    :
    reverse_lsp_id{YType::uint16, "reverse-lsp-id"},
    path_reject_reason_bw{YType::boolean, "path-reject-reason-bw"},
    path_reject_reason_affinity{YType::boolean, "path-reject-reason-affinity"},
    path_reject_reason_ip_addr{YType::boolean, "path-reject-reason-ip-addr"},
    path_reject_reason_reverse_link{YType::boolean, "path-reject-reason-reverse-link"},
    path_reject_reason_ixcd{YType::boolean, "path-reject-reason-ixcd"},
    path_reject_reason_holddown{YType::boolean, "path-reject-reason-holddown"},
    path_reject_reason_exclude_node{YType::boolean, "path-reject-reason-exclude-node"},
    path_reject_reason_exclude_link{YType::boolean, "path-reject-reason-exclude-link"},
    path_reject_reason_exclude_srlg{YType::boolean, "path-reject-reason-exclude-srlg"},
    path_reject_reason_hop_limit{YType::boolean, "path-reject-reason-hop-limit"},
    path_reject_reason_node_ol_unknown{YType::boolean, "path-reject-reason-node-ol-unknown"},
    path_reject_reason_node_ol_head{YType::boolean, "path-reject-reason-node-ol-head"},
    path_reject_reason_node_ol_mid{YType::boolean, "path-reject-reason-node-ol-mid"},
    path_reject_reason_node_ol_tail{YType::boolean, "path-reject-reason-node-ol-tail"},
    path_reject_reason_reverse_bw{YType::boolean, "path-reject-reason-reverse-bw"},
    path_reject_reason_node_unreachable{YType::boolean, "path-reject-reason-node-unreachable"},
    path_option_index{YType::uint16, "path-option-index"},
    path_option_type{YType::enumeration, "path-option-type"},
    ero_reject_reason{YType::enumeration, "ero-reject-reason"}
{

    yang_name = "reverse-ero-error-current"; yang_parent_name = "bidir"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::~ReverseEroErrorCurrent()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::has_data() const
{
    for (std::size_t index=0; index<path_calculation_error.size(); index++)
    {
        if(path_calculation_error[index]->has_data())
            return true;
    }
    return reverse_lsp_id.is_set
	|| path_reject_reason_bw.is_set
	|| path_reject_reason_affinity.is_set
	|| path_reject_reason_ip_addr.is_set
	|| path_reject_reason_reverse_link.is_set
	|| path_reject_reason_ixcd.is_set
	|| path_reject_reason_holddown.is_set
	|| path_reject_reason_exclude_node.is_set
	|| path_reject_reason_exclude_link.is_set
	|| path_reject_reason_exclude_srlg.is_set
	|| path_reject_reason_hop_limit.is_set
	|| path_reject_reason_node_ol_unknown.is_set
	|| path_reject_reason_node_ol_head.is_set
	|| path_reject_reason_node_ol_mid.is_set
	|| path_reject_reason_node_ol_tail.is_set
	|| path_reject_reason_reverse_bw.is_set
	|| path_reject_reason_node_unreachable.is_set
	|| path_option_index.is_set
	|| path_option_type.is_set
	|| ero_reject_reason.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::has_operation() const
{
    for (std::size_t index=0; index<path_calculation_error.size(); index++)
    {
        if(path_calculation_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(reverse_lsp_id.yfilter)
	|| ydk::is_set(path_reject_reason_bw.yfilter)
	|| ydk::is_set(path_reject_reason_affinity.yfilter)
	|| ydk::is_set(path_reject_reason_ip_addr.yfilter)
	|| ydk::is_set(path_reject_reason_reverse_link.yfilter)
	|| ydk::is_set(path_reject_reason_ixcd.yfilter)
	|| ydk::is_set(path_reject_reason_holddown.yfilter)
	|| ydk::is_set(path_reject_reason_exclude_node.yfilter)
	|| ydk::is_set(path_reject_reason_exclude_link.yfilter)
	|| ydk::is_set(path_reject_reason_exclude_srlg.yfilter)
	|| ydk::is_set(path_reject_reason_hop_limit.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_unknown.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_head.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_mid.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_tail.yfilter)
	|| ydk::is_set(path_reject_reason_reverse_bw.yfilter)
	|| ydk::is_set(path_reject_reason_node_unreachable.yfilter)
	|| ydk::is_set(path_option_index.yfilter)
	|| ydk::is_set(path_option_type.yfilter)
	|| ydk::is_set(ero_reject_reason.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-ero-error-current";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reverse_lsp_id.is_set || is_set(reverse_lsp_id.yfilter)) leaf_name_data.push_back(reverse_lsp_id.get_name_leafdata());
    if (path_reject_reason_bw.is_set || is_set(path_reject_reason_bw.yfilter)) leaf_name_data.push_back(path_reject_reason_bw.get_name_leafdata());
    if (path_reject_reason_affinity.is_set || is_set(path_reject_reason_affinity.yfilter)) leaf_name_data.push_back(path_reject_reason_affinity.get_name_leafdata());
    if (path_reject_reason_ip_addr.is_set || is_set(path_reject_reason_ip_addr.yfilter)) leaf_name_data.push_back(path_reject_reason_ip_addr.get_name_leafdata());
    if (path_reject_reason_reverse_link.is_set || is_set(path_reject_reason_reverse_link.yfilter)) leaf_name_data.push_back(path_reject_reason_reverse_link.get_name_leafdata());
    if (path_reject_reason_ixcd.is_set || is_set(path_reject_reason_ixcd.yfilter)) leaf_name_data.push_back(path_reject_reason_ixcd.get_name_leafdata());
    if (path_reject_reason_holddown.is_set || is_set(path_reject_reason_holddown.yfilter)) leaf_name_data.push_back(path_reject_reason_holddown.get_name_leafdata());
    if (path_reject_reason_exclude_node.is_set || is_set(path_reject_reason_exclude_node.yfilter)) leaf_name_data.push_back(path_reject_reason_exclude_node.get_name_leafdata());
    if (path_reject_reason_exclude_link.is_set || is_set(path_reject_reason_exclude_link.yfilter)) leaf_name_data.push_back(path_reject_reason_exclude_link.get_name_leafdata());
    if (path_reject_reason_exclude_srlg.is_set || is_set(path_reject_reason_exclude_srlg.yfilter)) leaf_name_data.push_back(path_reject_reason_exclude_srlg.get_name_leafdata());
    if (path_reject_reason_hop_limit.is_set || is_set(path_reject_reason_hop_limit.yfilter)) leaf_name_data.push_back(path_reject_reason_hop_limit.get_name_leafdata());
    if (path_reject_reason_node_ol_unknown.is_set || is_set(path_reject_reason_node_ol_unknown.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_unknown.get_name_leafdata());
    if (path_reject_reason_node_ol_head.is_set || is_set(path_reject_reason_node_ol_head.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_head.get_name_leafdata());
    if (path_reject_reason_node_ol_mid.is_set || is_set(path_reject_reason_node_ol_mid.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_mid.get_name_leafdata());
    if (path_reject_reason_node_ol_tail.is_set || is_set(path_reject_reason_node_ol_tail.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_tail.get_name_leafdata());
    if (path_reject_reason_reverse_bw.is_set || is_set(path_reject_reason_reverse_bw.yfilter)) leaf_name_data.push_back(path_reject_reason_reverse_bw.get_name_leafdata());
    if (path_reject_reason_node_unreachable.is_set || is_set(path_reject_reason_node_unreachable.yfilter)) leaf_name_data.push_back(path_reject_reason_node_unreachable.get_name_leafdata());
    if (path_option_index.is_set || is_set(path_option_index.yfilter)) leaf_name_data.push_back(path_option_index.get_name_leafdata());
    if (path_option_type.is_set || is_set(path_option_type.yfilter)) leaf_name_data.push_back(path_option_type.get_name_leafdata());
    if (ero_reject_reason.is_set || is_set(ero_reject_reason.yfilter)) leaf_name_data.push_back(ero_reject_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError>();
        c->parent = this;
        path_calculation_error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_calculation_error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reverse-lsp-id")
    {
        reverse_lsp_id = value;
        reverse_lsp_id.value_namespace = name_space;
        reverse_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-bw")
    {
        path_reject_reason_bw = value;
        path_reject_reason_bw.value_namespace = name_space;
        path_reject_reason_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-affinity")
    {
        path_reject_reason_affinity = value;
        path_reject_reason_affinity.value_namespace = name_space;
        path_reject_reason_affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-ip-addr")
    {
        path_reject_reason_ip_addr = value;
        path_reject_reason_ip_addr.value_namespace = name_space;
        path_reject_reason_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-reverse-link")
    {
        path_reject_reason_reverse_link = value;
        path_reject_reason_reverse_link.value_namespace = name_space;
        path_reject_reason_reverse_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-ixcd")
    {
        path_reject_reason_ixcd = value;
        path_reject_reason_ixcd.value_namespace = name_space;
        path_reject_reason_ixcd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-holddown")
    {
        path_reject_reason_holddown = value;
        path_reject_reason_holddown.value_namespace = name_space;
        path_reject_reason_holddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-exclude-node")
    {
        path_reject_reason_exclude_node = value;
        path_reject_reason_exclude_node.value_namespace = name_space;
        path_reject_reason_exclude_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-exclude-link")
    {
        path_reject_reason_exclude_link = value;
        path_reject_reason_exclude_link.value_namespace = name_space;
        path_reject_reason_exclude_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-exclude-srlg")
    {
        path_reject_reason_exclude_srlg = value;
        path_reject_reason_exclude_srlg.value_namespace = name_space;
        path_reject_reason_exclude_srlg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-hop-limit")
    {
        path_reject_reason_hop_limit = value;
        path_reject_reason_hop_limit.value_namespace = name_space;
        path_reject_reason_hop_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-unknown")
    {
        path_reject_reason_node_ol_unknown = value;
        path_reject_reason_node_ol_unknown.value_namespace = name_space;
        path_reject_reason_node_ol_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-head")
    {
        path_reject_reason_node_ol_head = value;
        path_reject_reason_node_ol_head.value_namespace = name_space;
        path_reject_reason_node_ol_head.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-mid")
    {
        path_reject_reason_node_ol_mid = value;
        path_reject_reason_node_ol_mid.value_namespace = name_space;
        path_reject_reason_node_ol_mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-tail")
    {
        path_reject_reason_node_ol_tail = value;
        path_reject_reason_node_ol_tail.value_namespace = name_space;
        path_reject_reason_node_ol_tail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-reverse-bw")
    {
        path_reject_reason_reverse_bw = value;
        path_reject_reason_reverse_bw.value_namespace = name_space;
        path_reject_reason_reverse_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-unreachable")
    {
        path_reject_reason_node_unreachable = value;
        path_reject_reason_node_unreachable.value_namespace = name_space;
        path_reject_reason_node_unreachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-index")
    {
        path_option_index = value;
        path_option_index.value_namespace = name_space;
        path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-type")
    {
        path_option_type = value;
        path_option_type.value_namespace = name_space;
        path_option_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-reject-reason")
    {
        ero_reject_reason = value;
        ero_reject_reason.value_namespace = name_space;
        ero_reject_reason.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reverse-lsp-id")
    {
        reverse_lsp_id.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-bw")
    {
        path_reject_reason_bw.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-affinity")
    {
        path_reject_reason_affinity.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-ip-addr")
    {
        path_reject_reason_ip_addr.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-reverse-link")
    {
        path_reject_reason_reverse_link.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-ixcd")
    {
        path_reject_reason_ixcd.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-holddown")
    {
        path_reject_reason_holddown.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-exclude-node")
    {
        path_reject_reason_exclude_node.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-exclude-link")
    {
        path_reject_reason_exclude_link.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-exclude-srlg")
    {
        path_reject_reason_exclude_srlg.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-hop-limit")
    {
        path_reject_reason_hop_limit.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-unknown")
    {
        path_reject_reason_node_ol_unknown.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-head")
    {
        path_reject_reason_node_ol_head.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-mid")
    {
        path_reject_reason_node_ol_mid.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-tail")
    {
        path_reject_reason_node_ol_tail.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-reverse-bw")
    {
        path_reject_reason_reverse_bw.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-unreachable")
    {
        path_reject_reason_node_unreachable.yfilter = yfilter;
    }
    if(value_path == "path-option-index")
    {
        path_option_index.yfilter = yfilter;
    }
    if(value_path == "path-option-type")
    {
        path_option_type.yfilter = yfilter;
    }
    if(value_path == "ero-reject-reason")
    {
        ero_reject_reason.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-calculation-error" || name == "reverse-lsp-id" || name == "path-reject-reason-bw" || name == "path-reject-reason-affinity" || name == "path-reject-reason-ip-addr" || name == "path-reject-reason-reverse-link" || name == "path-reject-reason-ixcd" || name == "path-reject-reason-holddown" || name == "path-reject-reason-exclude-node" || name == "path-reject-reason-exclude-link" || name == "path-reject-reason-exclude-srlg" || name == "path-reject-reason-hop-limit" || name == "path-reject-reason-node-ol-unknown" || name == "path-reject-reason-node-ol-head" || name == "path-reject-reason-node-ol-mid" || name == "path-reject-reason-node-ol-tail" || name == "path-reject-reason-reverse-bw" || name == "path-reject-reason-node-unreachable" || name == "path-option-index" || name == "path-option-type" || name == "ero-reject-reason")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError::PathCalculationError()
    :
    error_message{YType::str, "error-message"},
    lsp_mode{YType::enumeration, "lsp-mode"},
    log_time{YType::uint32, "log-time"}
{

    yang_name = "path-calculation-error"; yang_parent_name = "reverse-ero-error-current"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError::~PathCalculationError()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError::has_data() const
{
    return error_message.is_set
	|| lsp_mode.is_set
	|| log_time.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(lsp_mode.yfilter)
	|| ydk::is_set(log_time.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-calculation-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.yfilter)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.yfilter)) leaf_name_data.push_back(log_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
        lsp_mode.value_namespace = name_space;
        lsp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-time")
    {
        log_time = value;
        log_time.value_namespace = name_space;
        log_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode.yfilter = yfilter;
    }
    if(value_path == "log-time")
    {
        log_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-message" || name == "lsp-mode" || name == "log-time")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::ReverseEroErrorReopt()
    :
    reverse_lsp_id{YType::uint16, "reverse-lsp-id"},
    path_reject_reason_bw{YType::boolean, "path-reject-reason-bw"},
    path_reject_reason_affinity{YType::boolean, "path-reject-reason-affinity"},
    path_reject_reason_ip_addr{YType::boolean, "path-reject-reason-ip-addr"},
    path_reject_reason_reverse_link{YType::boolean, "path-reject-reason-reverse-link"},
    path_reject_reason_ixcd{YType::boolean, "path-reject-reason-ixcd"},
    path_reject_reason_holddown{YType::boolean, "path-reject-reason-holddown"},
    path_reject_reason_exclude_node{YType::boolean, "path-reject-reason-exclude-node"},
    path_reject_reason_exclude_link{YType::boolean, "path-reject-reason-exclude-link"},
    path_reject_reason_exclude_srlg{YType::boolean, "path-reject-reason-exclude-srlg"},
    path_reject_reason_hop_limit{YType::boolean, "path-reject-reason-hop-limit"},
    path_reject_reason_node_ol_unknown{YType::boolean, "path-reject-reason-node-ol-unknown"},
    path_reject_reason_node_ol_head{YType::boolean, "path-reject-reason-node-ol-head"},
    path_reject_reason_node_ol_mid{YType::boolean, "path-reject-reason-node-ol-mid"},
    path_reject_reason_node_ol_tail{YType::boolean, "path-reject-reason-node-ol-tail"},
    path_reject_reason_reverse_bw{YType::boolean, "path-reject-reason-reverse-bw"},
    path_reject_reason_node_unreachable{YType::boolean, "path-reject-reason-node-unreachable"},
    path_option_index{YType::uint16, "path-option-index"},
    path_option_type{YType::enumeration, "path-option-type"},
    ero_reject_reason{YType::enumeration, "ero-reject-reason"}
{

    yang_name = "reverse-ero-error-reopt"; yang_parent_name = "bidir"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::~ReverseEroErrorReopt()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::has_data() const
{
    for (std::size_t index=0; index<path_calculation_error.size(); index++)
    {
        if(path_calculation_error[index]->has_data())
            return true;
    }
    return reverse_lsp_id.is_set
	|| path_reject_reason_bw.is_set
	|| path_reject_reason_affinity.is_set
	|| path_reject_reason_ip_addr.is_set
	|| path_reject_reason_reverse_link.is_set
	|| path_reject_reason_ixcd.is_set
	|| path_reject_reason_holddown.is_set
	|| path_reject_reason_exclude_node.is_set
	|| path_reject_reason_exclude_link.is_set
	|| path_reject_reason_exclude_srlg.is_set
	|| path_reject_reason_hop_limit.is_set
	|| path_reject_reason_node_ol_unknown.is_set
	|| path_reject_reason_node_ol_head.is_set
	|| path_reject_reason_node_ol_mid.is_set
	|| path_reject_reason_node_ol_tail.is_set
	|| path_reject_reason_reverse_bw.is_set
	|| path_reject_reason_node_unreachable.is_set
	|| path_option_index.is_set
	|| path_option_type.is_set
	|| ero_reject_reason.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::has_operation() const
{
    for (std::size_t index=0; index<path_calculation_error.size(); index++)
    {
        if(path_calculation_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(reverse_lsp_id.yfilter)
	|| ydk::is_set(path_reject_reason_bw.yfilter)
	|| ydk::is_set(path_reject_reason_affinity.yfilter)
	|| ydk::is_set(path_reject_reason_ip_addr.yfilter)
	|| ydk::is_set(path_reject_reason_reverse_link.yfilter)
	|| ydk::is_set(path_reject_reason_ixcd.yfilter)
	|| ydk::is_set(path_reject_reason_holddown.yfilter)
	|| ydk::is_set(path_reject_reason_exclude_node.yfilter)
	|| ydk::is_set(path_reject_reason_exclude_link.yfilter)
	|| ydk::is_set(path_reject_reason_exclude_srlg.yfilter)
	|| ydk::is_set(path_reject_reason_hop_limit.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_unknown.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_head.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_mid.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_tail.yfilter)
	|| ydk::is_set(path_reject_reason_reverse_bw.yfilter)
	|| ydk::is_set(path_reject_reason_node_unreachable.yfilter)
	|| ydk::is_set(path_option_index.yfilter)
	|| ydk::is_set(path_option_type.yfilter)
	|| ydk::is_set(ero_reject_reason.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-ero-error-reopt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reverse_lsp_id.is_set || is_set(reverse_lsp_id.yfilter)) leaf_name_data.push_back(reverse_lsp_id.get_name_leafdata());
    if (path_reject_reason_bw.is_set || is_set(path_reject_reason_bw.yfilter)) leaf_name_data.push_back(path_reject_reason_bw.get_name_leafdata());
    if (path_reject_reason_affinity.is_set || is_set(path_reject_reason_affinity.yfilter)) leaf_name_data.push_back(path_reject_reason_affinity.get_name_leafdata());
    if (path_reject_reason_ip_addr.is_set || is_set(path_reject_reason_ip_addr.yfilter)) leaf_name_data.push_back(path_reject_reason_ip_addr.get_name_leafdata());
    if (path_reject_reason_reverse_link.is_set || is_set(path_reject_reason_reverse_link.yfilter)) leaf_name_data.push_back(path_reject_reason_reverse_link.get_name_leafdata());
    if (path_reject_reason_ixcd.is_set || is_set(path_reject_reason_ixcd.yfilter)) leaf_name_data.push_back(path_reject_reason_ixcd.get_name_leafdata());
    if (path_reject_reason_holddown.is_set || is_set(path_reject_reason_holddown.yfilter)) leaf_name_data.push_back(path_reject_reason_holddown.get_name_leafdata());
    if (path_reject_reason_exclude_node.is_set || is_set(path_reject_reason_exclude_node.yfilter)) leaf_name_data.push_back(path_reject_reason_exclude_node.get_name_leafdata());
    if (path_reject_reason_exclude_link.is_set || is_set(path_reject_reason_exclude_link.yfilter)) leaf_name_data.push_back(path_reject_reason_exclude_link.get_name_leafdata());
    if (path_reject_reason_exclude_srlg.is_set || is_set(path_reject_reason_exclude_srlg.yfilter)) leaf_name_data.push_back(path_reject_reason_exclude_srlg.get_name_leafdata());
    if (path_reject_reason_hop_limit.is_set || is_set(path_reject_reason_hop_limit.yfilter)) leaf_name_data.push_back(path_reject_reason_hop_limit.get_name_leafdata());
    if (path_reject_reason_node_ol_unknown.is_set || is_set(path_reject_reason_node_ol_unknown.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_unknown.get_name_leafdata());
    if (path_reject_reason_node_ol_head.is_set || is_set(path_reject_reason_node_ol_head.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_head.get_name_leafdata());
    if (path_reject_reason_node_ol_mid.is_set || is_set(path_reject_reason_node_ol_mid.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_mid.get_name_leafdata());
    if (path_reject_reason_node_ol_tail.is_set || is_set(path_reject_reason_node_ol_tail.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_tail.get_name_leafdata());
    if (path_reject_reason_reverse_bw.is_set || is_set(path_reject_reason_reverse_bw.yfilter)) leaf_name_data.push_back(path_reject_reason_reverse_bw.get_name_leafdata());
    if (path_reject_reason_node_unreachable.is_set || is_set(path_reject_reason_node_unreachable.yfilter)) leaf_name_data.push_back(path_reject_reason_node_unreachable.get_name_leafdata());
    if (path_option_index.is_set || is_set(path_option_index.yfilter)) leaf_name_data.push_back(path_option_index.get_name_leafdata());
    if (path_option_type.is_set || is_set(path_option_type.yfilter)) leaf_name_data.push_back(path_option_type.get_name_leafdata());
    if (ero_reject_reason.is_set || is_set(ero_reject_reason.yfilter)) leaf_name_data.push_back(ero_reject_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError>();
        c->parent = this;
        path_calculation_error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_calculation_error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reverse-lsp-id")
    {
        reverse_lsp_id = value;
        reverse_lsp_id.value_namespace = name_space;
        reverse_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-bw")
    {
        path_reject_reason_bw = value;
        path_reject_reason_bw.value_namespace = name_space;
        path_reject_reason_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-affinity")
    {
        path_reject_reason_affinity = value;
        path_reject_reason_affinity.value_namespace = name_space;
        path_reject_reason_affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-ip-addr")
    {
        path_reject_reason_ip_addr = value;
        path_reject_reason_ip_addr.value_namespace = name_space;
        path_reject_reason_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-reverse-link")
    {
        path_reject_reason_reverse_link = value;
        path_reject_reason_reverse_link.value_namespace = name_space;
        path_reject_reason_reverse_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-ixcd")
    {
        path_reject_reason_ixcd = value;
        path_reject_reason_ixcd.value_namespace = name_space;
        path_reject_reason_ixcd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-holddown")
    {
        path_reject_reason_holddown = value;
        path_reject_reason_holddown.value_namespace = name_space;
        path_reject_reason_holddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-exclude-node")
    {
        path_reject_reason_exclude_node = value;
        path_reject_reason_exclude_node.value_namespace = name_space;
        path_reject_reason_exclude_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-exclude-link")
    {
        path_reject_reason_exclude_link = value;
        path_reject_reason_exclude_link.value_namespace = name_space;
        path_reject_reason_exclude_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-exclude-srlg")
    {
        path_reject_reason_exclude_srlg = value;
        path_reject_reason_exclude_srlg.value_namespace = name_space;
        path_reject_reason_exclude_srlg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-hop-limit")
    {
        path_reject_reason_hop_limit = value;
        path_reject_reason_hop_limit.value_namespace = name_space;
        path_reject_reason_hop_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-unknown")
    {
        path_reject_reason_node_ol_unknown = value;
        path_reject_reason_node_ol_unknown.value_namespace = name_space;
        path_reject_reason_node_ol_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-head")
    {
        path_reject_reason_node_ol_head = value;
        path_reject_reason_node_ol_head.value_namespace = name_space;
        path_reject_reason_node_ol_head.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-mid")
    {
        path_reject_reason_node_ol_mid = value;
        path_reject_reason_node_ol_mid.value_namespace = name_space;
        path_reject_reason_node_ol_mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-tail")
    {
        path_reject_reason_node_ol_tail = value;
        path_reject_reason_node_ol_tail.value_namespace = name_space;
        path_reject_reason_node_ol_tail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-reverse-bw")
    {
        path_reject_reason_reverse_bw = value;
        path_reject_reason_reverse_bw.value_namespace = name_space;
        path_reject_reason_reverse_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-unreachable")
    {
        path_reject_reason_node_unreachable = value;
        path_reject_reason_node_unreachable.value_namespace = name_space;
        path_reject_reason_node_unreachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-index")
    {
        path_option_index = value;
        path_option_index.value_namespace = name_space;
        path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-type")
    {
        path_option_type = value;
        path_option_type.value_namespace = name_space;
        path_option_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-reject-reason")
    {
        ero_reject_reason = value;
        ero_reject_reason.value_namespace = name_space;
        ero_reject_reason.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reverse-lsp-id")
    {
        reverse_lsp_id.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-bw")
    {
        path_reject_reason_bw.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-affinity")
    {
        path_reject_reason_affinity.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-ip-addr")
    {
        path_reject_reason_ip_addr.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-reverse-link")
    {
        path_reject_reason_reverse_link.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-ixcd")
    {
        path_reject_reason_ixcd.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-holddown")
    {
        path_reject_reason_holddown.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-exclude-node")
    {
        path_reject_reason_exclude_node.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-exclude-link")
    {
        path_reject_reason_exclude_link.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-exclude-srlg")
    {
        path_reject_reason_exclude_srlg.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-hop-limit")
    {
        path_reject_reason_hop_limit.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-unknown")
    {
        path_reject_reason_node_ol_unknown.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-head")
    {
        path_reject_reason_node_ol_head.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-mid")
    {
        path_reject_reason_node_ol_mid.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-tail")
    {
        path_reject_reason_node_ol_tail.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-reverse-bw")
    {
        path_reject_reason_reverse_bw.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-unreachable")
    {
        path_reject_reason_node_unreachable.yfilter = yfilter;
    }
    if(value_path == "path-option-index")
    {
        path_option_index.yfilter = yfilter;
    }
    if(value_path == "path-option-type")
    {
        path_option_type.yfilter = yfilter;
    }
    if(value_path == "ero-reject-reason")
    {
        ero_reject_reason.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-calculation-error" || name == "reverse-lsp-id" || name == "path-reject-reason-bw" || name == "path-reject-reason-affinity" || name == "path-reject-reason-ip-addr" || name == "path-reject-reason-reverse-link" || name == "path-reject-reason-ixcd" || name == "path-reject-reason-holddown" || name == "path-reject-reason-exclude-node" || name == "path-reject-reason-exclude-link" || name == "path-reject-reason-exclude-srlg" || name == "path-reject-reason-hop-limit" || name == "path-reject-reason-node-ol-unknown" || name == "path-reject-reason-node-ol-head" || name == "path-reject-reason-node-ol-mid" || name == "path-reject-reason-node-ol-tail" || name == "path-reject-reason-reverse-bw" || name == "path-reject-reason-node-unreachable" || name == "path-option-index" || name == "path-option-type" || name == "ero-reject-reason")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError::PathCalculationError()
    :
    error_message{YType::str, "error-message"},
    lsp_mode{YType::enumeration, "lsp-mode"},
    log_time{YType::uint32, "log-time"}
{

    yang_name = "path-calculation-error"; yang_parent_name = "reverse-ero-error-reopt"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError::~PathCalculationError()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError::has_data() const
{
    return error_message.is_set
	|| lsp_mode.is_set
	|| log_time.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(lsp_mode.yfilter)
	|| ydk::is_set(log_time.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-calculation-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.yfilter)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.yfilter)) leaf_name_data.push_back(log_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
        lsp_mode.value_namespace = name_space;
        lsp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-time")
    {
        log_time = value;
        log_time.value_namespace = name_space;
        log_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode.yfilter = yfilter;
    }
    if(value_path == "log-time")
    {
        log_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-message" || name == "lsp-mode" || name == "log-time")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::ReverseEroErrorStandby()
    :
    reverse_lsp_id{YType::uint16, "reverse-lsp-id"},
    path_reject_reason_bw{YType::boolean, "path-reject-reason-bw"},
    path_reject_reason_affinity{YType::boolean, "path-reject-reason-affinity"},
    path_reject_reason_ip_addr{YType::boolean, "path-reject-reason-ip-addr"},
    path_reject_reason_reverse_link{YType::boolean, "path-reject-reason-reverse-link"},
    path_reject_reason_ixcd{YType::boolean, "path-reject-reason-ixcd"},
    path_reject_reason_holddown{YType::boolean, "path-reject-reason-holddown"},
    path_reject_reason_exclude_node{YType::boolean, "path-reject-reason-exclude-node"},
    path_reject_reason_exclude_link{YType::boolean, "path-reject-reason-exclude-link"},
    path_reject_reason_exclude_srlg{YType::boolean, "path-reject-reason-exclude-srlg"},
    path_reject_reason_hop_limit{YType::boolean, "path-reject-reason-hop-limit"},
    path_reject_reason_node_ol_unknown{YType::boolean, "path-reject-reason-node-ol-unknown"},
    path_reject_reason_node_ol_head{YType::boolean, "path-reject-reason-node-ol-head"},
    path_reject_reason_node_ol_mid{YType::boolean, "path-reject-reason-node-ol-mid"},
    path_reject_reason_node_ol_tail{YType::boolean, "path-reject-reason-node-ol-tail"},
    path_reject_reason_reverse_bw{YType::boolean, "path-reject-reason-reverse-bw"},
    path_reject_reason_node_unreachable{YType::boolean, "path-reject-reason-node-unreachable"},
    path_option_index{YType::uint16, "path-option-index"},
    path_option_type{YType::enumeration, "path-option-type"},
    ero_reject_reason{YType::enumeration, "ero-reject-reason"}
{

    yang_name = "reverse-ero-error-standby"; yang_parent_name = "bidir"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::~ReverseEroErrorStandby()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::has_data() const
{
    for (std::size_t index=0; index<path_calculation_error.size(); index++)
    {
        if(path_calculation_error[index]->has_data())
            return true;
    }
    return reverse_lsp_id.is_set
	|| path_reject_reason_bw.is_set
	|| path_reject_reason_affinity.is_set
	|| path_reject_reason_ip_addr.is_set
	|| path_reject_reason_reverse_link.is_set
	|| path_reject_reason_ixcd.is_set
	|| path_reject_reason_holddown.is_set
	|| path_reject_reason_exclude_node.is_set
	|| path_reject_reason_exclude_link.is_set
	|| path_reject_reason_exclude_srlg.is_set
	|| path_reject_reason_hop_limit.is_set
	|| path_reject_reason_node_ol_unknown.is_set
	|| path_reject_reason_node_ol_head.is_set
	|| path_reject_reason_node_ol_mid.is_set
	|| path_reject_reason_node_ol_tail.is_set
	|| path_reject_reason_reverse_bw.is_set
	|| path_reject_reason_node_unreachable.is_set
	|| path_option_index.is_set
	|| path_option_type.is_set
	|| ero_reject_reason.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::has_operation() const
{
    for (std::size_t index=0; index<path_calculation_error.size(); index++)
    {
        if(path_calculation_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(reverse_lsp_id.yfilter)
	|| ydk::is_set(path_reject_reason_bw.yfilter)
	|| ydk::is_set(path_reject_reason_affinity.yfilter)
	|| ydk::is_set(path_reject_reason_ip_addr.yfilter)
	|| ydk::is_set(path_reject_reason_reverse_link.yfilter)
	|| ydk::is_set(path_reject_reason_ixcd.yfilter)
	|| ydk::is_set(path_reject_reason_holddown.yfilter)
	|| ydk::is_set(path_reject_reason_exclude_node.yfilter)
	|| ydk::is_set(path_reject_reason_exclude_link.yfilter)
	|| ydk::is_set(path_reject_reason_exclude_srlg.yfilter)
	|| ydk::is_set(path_reject_reason_hop_limit.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_unknown.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_head.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_mid.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_tail.yfilter)
	|| ydk::is_set(path_reject_reason_reverse_bw.yfilter)
	|| ydk::is_set(path_reject_reason_node_unreachable.yfilter)
	|| ydk::is_set(path_option_index.yfilter)
	|| ydk::is_set(path_option_type.yfilter)
	|| ydk::is_set(ero_reject_reason.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-ero-error-standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reverse_lsp_id.is_set || is_set(reverse_lsp_id.yfilter)) leaf_name_data.push_back(reverse_lsp_id.get_name_leafdata());
    if (path_reject_reason_bw.is_set || is_set(path_reject_reason_bw.yfilter)) leaf_name_data.push_back(path_reject_reason_bw.get_name_leafdata());
    if (path_reject_reason_affinity.is_set || is_set(path_reject_reason_affinity.yfilter)) leaf_name_data.push_back(path_reject_reason_affinity.get_name_leafdata());
    if (path_reject_reason_ip_addr.is_set || is_set(path_reject_reason_ip_addr.yfilter)) leaf_name_data.push_back(path_reject_reason_ip_addr.get_name_leafdata());
    if (path_reject_reason_reverse_link.is_set || is_set(path_reject_reason_reverse_link.yfilter)) leaf_name_data.push_back(path_reject_reason_reverse_link.get_name_leafdata());
    if (path_reject_reason_ixcd.is_set || is_set(path_reject_reason_ixcd.yfilter)) leaf_name_data.push_back(path_reject_reason_ixcd.get_name_leafdata());
    if (path_reject_reason_holddown.is_set || is_set(path_reject_reason_holddown.yfilter)) leaf_name_data.push_back(path_reject_reason_holddown.get_name_leafdata());
    if (path_reject_reason_exclude_node.is_set || is_set(path_reject_reason_exclude_node.yfilter)) leaf_name_data.push_back(path_reject_reason_exclude_node.get_name_leafdata());
    if (path_reject_reason_exclude_link.is_set || is_set(path_reject_reason_exclude_link.yfilter)) leaf_name_data.push_back(path_reject_reason_exclude_link.get_name_leafdata());
    if (path_reject_reason_exclude_srlg.is_set || is_set(path_reject_reason_exclude_srlg.yfilter)) leaf_name_data.push_back(path_reject_reason_exclude_srlg.get_name_leafdata());
    if (path_reject_reason_hop_limit.is_set || is_set(path_reject_reason_hop_limit.yfilter)) leaf_name_data.push_back(path_reject_reason_hop_limit.get_name_leafdata());
    if (path_reject_reason_node_ol_unknown.is_set || is_set(path_reject_reason_node_ol_unknown.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_unknown.get_name_leafdata());
    if (path_reject_reason_node_ol_head.is_set || is_set(path_reject_reason_node_ol_head.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_head.get_name_leafdata());
    if (path_reject_reason_node_ol_mid.is_set || is_set(path_reject_reason_node_ol_mid.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_mid.get_name_leafdata());
    if (path_reject_reason_node_ol_tail.is_set || is_set(path_reject_reason_node_ol_tail.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_tail.get_name_leafdata());
    if (path_reject_reason_reverse_bw.is_set || is_set(path_reject_reason_reverse_bw.yfilter)) leaf_name_data.push_back(path_reject_reason_reverse_bw.get_name_leafdata());
    if (path_reject_reason_node_unreachable.is_set || is_set(path_reject_reason_node_unreachable.yfilter)) leaf_name_data.push_back(path_reject_reason_node_unreachable.get_name_leafdata());
    if (path_option_index.is_set || is_set(path_option_index.yfilter)) leaf_name_data.push_back(path_option_index.get_name_leafdata());
    if (path_option_type.is_set || is_set(path_option_type.yfilter)) leaf_name_data.push_back(path_option_type.get_name_leafdata());
    if (ero_reject_reason.is_set || is_set(ero_reject_reason.yfilter)) leaf_name_data.push_back(ero_reject_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError>();
        c->parent = this;
        path_calculation_error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_calculation_error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reverse-lsp-id")
    {
        reverse_lsp_id = value;
        reverse_lsp_id.value_namespace = name_space;
        reverse_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-bw")
    {
        path_reject_reason_bw = value;
        path_reject_reason_bw.value_namespace = name_space;
        path_reject_reason_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-affinity")
    {
        path_reject_reason_affinity = value;
        path_reject_reason_affinity.value_namespace = name_space;
        path_reject_reason_affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-ip-addr")
    {
        path_reject_reason_ip_addr = value;
        path_reject_reason_ip_addr.value_namespace = name_space;
        path_reject_reason_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-reverse-link")
    {
        path_reject_reason_reverse_link = value;
        path_reject_reason_reverse_link.value_namespace = name_space;
        path_reject_reason_reverse_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-ixcd")
    {
        path_reject_reason_ixcd = value;
        path_reject_reason_ixcd.value_namespace = name_space;
        path_reject_reason_ixcd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-holddown")
    {
        path_reject_reason_holddown = value;
        path_reject_reason_holddown.value_namespace = name_space;
        path_reject_reason_holddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-exclude-node")
    {
        path_reject_reason_exclude_node = value;
        path_reject_reason_exclude_node.value_namespace = name_space;
        path_reject_reason_exclude_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-exclude-link")
    {
        path_reject_reason_exclude_link = value;
        path_reject_reason_exclude_link.value_namespace = name_space;
        path_reject_reason_exclude_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-exclude-srlg")
    {
        path_reject_reason_exclude_srlg = value;
        path_reject_reason_exclude_srlg.value_namespace = name_space;
        path_reject_reason_exclude_srlg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-hop-limit")
    {
        path_reject_reason_hop_limit = value;
        path_reject_reason_hop_limit.value_namespace = name_space;
        path_reject_reason_hop_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-unknown")
    {
        path_reject_reason_node_ol_unknown = value;
        path_reject_reason_node_ol_unknown.value_namespace = name_space;
        path_reject_reason_node_ol_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-head")
    {
        path_reject_reason_node_ol_head = value;
        path_reject_reason_node_ol_head.value_namespace = name_space;
        path_reject_reason_node_ol_head.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-mid")
    {
        path_reject_reason_node_ol_mid = value;
        path_reject_reason_node_ol_mid.value_namespace = name_space;
        path_reject_reason_node_ol_mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-tail")
    {
        path_reject_reason_node_ol_tail = value;
        path_reject_reason_node_ol_tail.value_namespace = name_space;
        path_reject_reason_node_ol_tail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-reverse-bw")
    {
        path_reject_reason_reverse_bw = value;
        path_reject_reason_reverse_bw.value_namespace = name_space;
        path_reject_reason_reverse_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-unreachable")
    {
        path_reject_reason_node_unreachable = value;
        path_reject_reason_node_unreachable.value_namespace = name_space;
        path_reject_reason_node_unreachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-index")
    {
        path_option_index = value;
        path_option_index.value_namespace = name_space;
        path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-type")
    {
        path_option_type = value;
        path_option_type.value_namespace = name_space;
        path_option_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-reject-reason")
    {
        ero_reject_reason = value;
        ero_reject_reason.value_namespace = name_space;
        ero_reject_reason.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reverse-lsp-id")
    {
        reverse_lsp_id.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-bw")
    {
        path_reject_reason_bw.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-affinity")
    {
        path_reject_reason_affinity.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-ip-addr")
    {
        path_reject_reason_ip_addr.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-reverse-link")
    {
        path_reject_reason_reverse_link.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-ixcd")
    {
        path_reject_reason_ixcd.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-holddown")
    {
        path_reject_reason_holddown.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-exclude-node")
    {
        path_reject_reason_exclude_node.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-exclude-link")
    {
        path_reject_reason_exclude_link.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-exclude-srlg")
    {
        path_reject_reason_exclude_srlg.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-hop-limit")
    {
        path_reject_reason_hop_limit.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-unknown")
    {
        path_reject_reason_node_ol_unknown.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-head")
    {
        path_reject_reason_node_ol_head.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-mid")
    {
        path_reject_reason_node_ol_mid.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-tail")
    {
        path_reject_reason_node_ol_tail.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-reverse-bw")
    {
        path_reject_reason_reverse_bw.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-unreachable")
    {
        path_reject_reason_node_unreachable.yfilter = yfilter;
    }
    if(value_path == "path-option-index")
    {
        path_option_index.yfilter = yfilter;
    }
    if(value_path == "path-option-type")
    {
        path_option_type.yfilter = yfilter;
    }
    if(value_path == "ero-reject-reason")
    {
        ero_reject_reason.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-calculation-error" || name == "reverse-lsp-id" || name == "path-reject-reason-bw" || name == "path-reject-reason-affinity" || name == "path-reject-reason-ip-addr" || name == "path-reject-reason-reverse-link" || name == "path-reject-reason-ixcd" || name == "path-reject-reason-holddown" || name == "path-reject-reason-exclude-node" || name == "path-reject-reason-exclude-link" || name == "path-reject-reason-exclude-srlg" || name == "path-reject-reason-hop-limit" || name == "path-reject-reason-node-ol-unknown" || name == "path-reject-reason-node-ol-head" || name == "path-reject-reason-node-ol-mid" || name == "path-reject-reason-node-ol-tail" || name == "path-reject-reason-reverse-bw" || name == "path-reject-reason-node-unreachable" || name == "path-option-index" || name == "path-option-type" || name == "ero-reject-reason")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError::PathCalculationError()
    :
    error_message{YType::str, "error-message"},
    lsp_mode{YType::enumeration, "lsp-mode"},
    log_time{YType::uint32, "log-time"}
{

    yang_name = "path-calculation-error"; yang_parent_name = "reverse-ero-error-standby"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError::~PathCalculationError()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError::has_data() const
{
    return error_message.is_set
	|| lsp_mode.is_set
	|| log_time.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(lsp_mode.yfilter)
	|| ydk::is_set(log_time.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-calculation-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.yfilter)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.yfilter)) leaf_name_data.push_back(log_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
        lsp_mode.value_namespace = name_space;
        lsp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-time")
    {
        log_time = value;
        log_time.value_namespace = name_space;
        log_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode.yfilter = yfilter;
    }
    if(value_path == "log-time")
    {
        log_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-message" || name == "lsp-mode" || name == "log-time")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::ReverseEroErrorStandbyReopt()
    :
    reverse_lsp_id{YType::uint16, "reverse-lsp-id"},
    path_reject_reason_bw{YType::boolean, "path-reject-reason-bw"},
    path_reject_reason_affinity{YType::boolean, "path-reject-reason-affinity"},
    path_reject_reason_ip_addr{YType::boolean, "path-reject-reason-ip-addr"},
    path_reject_reason_reverse_link{YType::boolean, "path-reject-reason-reverse-link"},
    path_reject_reason_ixcd{YType::boolean, "path-reject-reason-ixcd"},
    path_reject_reason_holddown{YType::boolean, "path-reject-reason-holddown"},
    path_reject_reason_exclude_node{YType::boolean, "path-reject-reason-exclude-node"},
    path_reject_reason_exclude_link{YType::boolean, "path-reject-reason-exclude-link"},
    path_reject_reason_exclude_srlg{YType::boolean, "path-reject-reason-exclude-srlg"},
    path_reject_reason_hop_limit{YType::boolean, "path-reject-reason-hop-limit"},
    path_reject_reason_node_ol_unknown{YType::boolean, "path-reject-reason-node-ol-unknown"},
    path_reject_reason_node_ol_head{YType::boolean, "path-reject-reason-node-ol-head"},
    path_reject_reason_node_ol_mid{YType::boolean, "path-reject-reason-node-ol-mid"},
    path_reject_reason_node_ol_tail{YType::boolean, "path-reject-reason-node-ol-tail"},
    path_reject_reason_reverse_bw{YType::boolean, "path-reject-reason-reverse-bw"},
    path_reject_reason_node_unreachable{YType::boolean, "path-reject-reason-node-unreachable"},
    path_option_index{YType::uint16, "path-option-index"},
    path_option_type{YType::enumeration, "path-option-type"},
    ero_reject_reason{YType::enumeration, "ero-reject-reason"}
{

    yang_name = "reverse-ero-error-standby-reopt"; yang_parent_name = "bidir"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::~ReverseEroErrorStandbyReopt()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::has_data() const
{
    for (std::size_t index=0; index<path_calculation_error.size(); index++)
    {
        if(path_calculation_error[index]->has_data())
            return true;
    }
    return reverse_lsp_id.is_set
	|| path_reject_reason_bw.is_set
	|| path_reject_reason_affinity.is_set
	|| path_reject_reason_ip_addr.is_set
	|| path_reject_reason_reverse_link.is_set
	|| path_reject_reason_ixcd.is_set
	|| path_reject_reason_holddown.is_set
	|| path_reject_reason_exclude_node.is_set
	|| path_reject_reason_exclude_link.is_set
	|| path_reject_reason_exclude_srlg.is_set
	|| path_reject_reason_hop_limit.is_set
	|| path_reject_reason_node_ol_unknown.is_set
	|| path_reject_reason_node_ol_head.is_set
	|| path_reject_reason_node_ol_mid.is_set
	|| path_reject_reason_node_ol_tail.is_set
	|| path_reject_reason_reverse_bw.is_set
	|| path_reject_reason_node_unreachable.is_set
	|| path_option_index.is_set
	|| path_option_type.is_set
	|| ero_reject_reason.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::has_operation() const
{
    for (std::size_t index=0; index<path_calculation_error.size(); index++)
    {
        if(path_calculation_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(reverse_lsp_id.yfilter)
	|| ydk::is_set(path_reject_reason_bw.yfilter)
	|| ydk::is_set(path_reject_reason_affinity.yfilter)
	|| ydk::is_set(path_reject_reason_ip_addr.yfilter)
	|| ydk::is_set(path_reject_reason_reverse_link.yfilter)
	|| ydk::is_set(path_reject_reason_ixcd.yfilter)
	|| ydk::is_set(path_reject_reason_holddown.yfilter)
	|| ydk::is_set(path_reject_reason_exclude_node.yfilter)
	|| ydk::is_set(path_reject_reason_exclude_link.yfilter)
	|| ydk::is_set(path_reject_reason_exclude_srlg.yfilter)
	|| ydk::is_set(path_reject_reason_hop_limit.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_unknown.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_head.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_mid.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_tail.yfilter)
	|| ydk::is_set(path_reject_reason_reverse_bw.yfilter)
	|| ydk::is_set(path_reject_reason_node_unreachable.yfilter)
	|| ydk::is_set(path_option_index.yfilter)
	|| ydk::is_set(path_option_type.yfilter)
	|| ydk::is_set(ero_reject_reason.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-ero-error-standby-reopt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reverse_lsp_id.is_set || is_set(reverse_lsp_id.yfilter)) leaf_name_data.push_back(reverse_lsp_id.get_name_leafdata());
    if (path_reject_reason_bw.is_set || is_set(path_reject_reason_bw.yfilter)) leaf_name_data.push_back(path_reject_reason_bw.get_name_leafdata());
    if (path_reject_reason_affinity.is_set || is_set(path_reject_reason_affinity.yfilter)) leaf_name_data.push_back(path_reject_reason_affinity.get_name_leafdata());
    if (path_reject_reason_ip_addr.is_set || is_set(path_reject_reason_ip_addr.yfilter)) leaf_name_data.push_back(path_reject_reason_ip_addr.get_name_leafdata());
    if (path_reject_reason_reverse_link.is_set || is_set(path_reject_reason_reverse_link.yfilter)) leaf_name_data.push_back(path_reject_reason_reverse_link.get_name_leafdata());
    if (path_reject_reason_ixcd.is_set || is_set(path_reject_reason_ixcd.yfilter)) leaf_name_data.push_back(path_reject_reason_ixcd.get_name_leafdata());
    if (path_reject_reason_holddown.is_set || is_set(path_reject_reason_holddown.yfilter)) leaf_name_data.push_back(path_reject_reason_holddown.get_name_leafdata());
    if (path_reject_reason_exclude_node.is_set || is_set(path_reject_reason_exclude_node.yfilter)) leaf_name_data.push_back(path_reject_reason_exclude_node.get_name_leafdata());
    if (path_reject_reason_exclude_link.is_set || is_set(path_reject_reason_exclude_link.yfilter)) leaf_name_data.push_back(path_reject_reason_exclude_link.get_name_leafdata());
    if (path_reject_reason_exclude_srlg.is_set || is_set(path_reject_reason_exclude_srlg.yfilter)) leaf_name_data.push_back(path_reject_reason_exclude_srlg.get_name_leafdata());
    if (path_reject_reason_hop_limit.is_set || is_set(path_reject_reason_hop_limit.yfilter)) leaf_name_data.push_back(path_reject_reason_hop_limit.get_name_leafdata());
    if (path_reject_reason_node_ol_unknown.is_set || is_set(path_reject_reason_node_ol_unknown.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_unknown.get_name_leafdata());
    if (path_reject_reason_node_ol_head.is_set || is_set(path_reject_reason_node_ol_head.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_head.get_name_leafdata());
    if (path_reject_reason_node_ol_mid.is_set || is_set(path_reject_reason_node_ol_mid.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_mid.get_name_leafdata());
    if (path_reject_reason_node_ol_tail.is_set || is_set(path_reject_reason_node_ol_tail.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_tail.get_name_leafdata());
    if (path_reject_reason_reverse_bw.is_set || is_set(path_reject_reason_reverse_bw.yfilter)) leaf_name_data.push_back(path_reject_reason_reverse_bw.get_name_leafdata());
    if (path_reject_reason_node_unreachable.is_set || is_set(path_reject_reason_node_unreachable.yfilter)) leaf_name_data.push_back(path_reject_reason_node_unreachable.get_name_leafdata());
    if (path_option_index.is_set || is_set(path_option_index.yfilter)) leaf_name_data.push_back(path_option_index.get_name_leafdata());
    if (path_option_type.is_set || is_set(path_option_type.yfilter)) leaf_name_data.push_back(path_option_type.get_name_leafdata());
    if (ero_reject_reason.is_set || is_set(ero_reject_reason.yfilter)) leaf_name_data.push_back(ero_reject_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError>();
        c->parent = this;
        path_calculation_error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_calculation_error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reverse-lsp-id")
    {
        reverse_lsp_id = value;
        reverse_lsp_id.value_namespace = name_space;
        reverse_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-bw")
    {
        path_reject_reason_bw = value;
        path_reject_reason_bw.value_namespace = name_space;
        path_reject_reason_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-affinity")
    {
        path_reject_reason_affinity = value;
        path_reject_reason_affinity.value_namespace = name_space;
        path_reject_reason_affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-ip-addr")
    {
        path_reject_reason_ip_addr = value;
        path_reject_reason_ip_addr.value_namespace = name_space;
        path_reject_reason_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-reverse-link")
    {
        path_reject_reason_reverse_link = value;
        path_reject_reason_reverse_link.value_namespace = name_space;
        path_reject_reason_reverse_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-ixcd")
    {
        path_reject_reason_ixcd = value;
        path_reject_reason_ixcd.value_namespace = name_space;
        path_reject_reason_ixcd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-holddown")
    {
        path_reject_reason_holddown = value;
        path_reject_reason_holddown.value_namespace = name_space;
        path_reject_reason_holddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-exclude-node")
    {
        path_reject_reason_exclude_node = value;
        path_reject_reason_exclude_node.value_namespace = name_space;
        path_reject_reason_exclude_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-exclude-link")
    {
        path_reject_reason_exclude_link = value;
        path_reject_reason_exclude_link.value_namespace = name_space;
        path_reject_reason_exclude_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-exclude-srlg")
    {
        path_reject_reason_exclude_srlg = value;
        path_reject_reason_exclude_srlg.value_namespace = name_space;
        path_reject_reason_exclude_srlg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-hop-limit")
    {
        path_reject_reason_hop_limit = value;
        path_reject_reason_hop_limit.value_namespace = name_space;
        path_reject_reason_hop_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-unknown")
    {
        path_reject_reason_node_ol_unknown = value;
        path_reject_reason_node_ol_unknown.value_namespace = name_space;
        path_reject_reason_node_ol_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-head")
    {
        path_reject_reason_node_ol_head = value;
        path_reject_reason_node_ol_head.value_namespace = name_space;
        path_reject_reason_node_ol_head.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-mid")
    {
        path_reject_reason_node_ol_mid = value;
        path_reject_reason_node_ol_mid.value_namespace = name_space;
        path_reject_reason_node_ol_mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-tail")
    {
        path_reject_reason_node_ol_tail = value;
        path_reject_reason_node_ol_tail.value_namespace = name_space;
        path_reject_reason_node_ol_tail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-reverse-bw")
    {
        path_reject_reason_reverse_bw = value;
        path_reject_reason_reverse_bw.value_namespace = name_space;
        path_reject_reason_reverse_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-unreachable")
    {
        path_reject_reason_node_unreachable = value;
        path_reject_reason_node_unreachable.value_namespace = name_space;
        path_reject_reason_node_unreachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-index")
    {
        path_option_index = value;
        path_option_index.value_namespace = name_space;
        path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-type")
    {
        path_option_type = value;
        path_option_type.value_namespace = name_space;
        path_option_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-reject-reason")
    {
        ero_reject_reason = value;
        ero_reject_reason.value_namespace = name_space;
        ero_reject_reason.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reverse-lsp-id")
    {
        reverse_lsp_id.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-bw")
    {
        path_reject_reason_bw.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-affinity")
    {
        path_reject_reason_affinity.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-ip-addr")
    {
        path_reject_reason_ip_addr.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-reverse-link")
    {
        path_reject_reason_reverse_link.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-ixcd")
    {
        path_reject_reason_ixcd.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-holddown")
    {
        path_reject_reason_holddown.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-exclude-node")
    {
        path_reject_reason_exclude_node.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-exclude-link")
    {
        path_reject_reason_exclude_link.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-exclude-srlg")
    {
        path_reject_reason_exclude_srlg.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-hop-limit")
    {
        path_reject_reason_hop_limit.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-unknown")
    {
        path_reject_reason_node_ol_unknown.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-head")
    {
        path_reject_reason_node_ol_head.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-mid")
    {
        path_reject_reason_node_ol_mid.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-tail")
    {
        path_reject_reason_node_ol_tail.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-reverse-bw")
    {
        path_reject_reason_reverse_bw.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-unreachable")
    {
        path_reject_reason_node_unreachable.yfilter = yfilter;
    }
    if(value_path == "path-option-index")
    {
        path_option_index.yfilter = yfilter;
    }
    if(value_path == "path-option-type")
    {
        path_option_type.yfilter = yfilter;
    }
    if(value_path == "ero-reject-reason")
    {
        ero_reject_reason.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-calculation-error" || name == "reverse-lsp-id" || name == "path-reject-reason-bw" || name == "path-reject-reason-affinity" || name == "path-reject-reason-ip-addr" || name == "path-reject-reason-reverse-link" || name == "path-reject-reason-ixcd" || name == "path-reject-reason-holddown" || name == "path-reject-reason-exclude-node" || name == "path-reject-reason-exclude-link" || name == "path-reject-reason-exclude-srlg" || name == "path-reject-reason-hop-limit" || name == "path-reject-reason-node-ol-unknown" || name == "path-reject-reason-node-ol-head" || name == "path-reject-reason-node-ol-mid" || name == "path-reject-reason-node-ol-tail" || name == "path-reject-reason-reverse-bw" || name == "path-reject-reason-node-unreachable" || name == "path-option-index" || name == "path-option-type" || name == "ero-reject-reason")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::PathCalculationError()
    :
    error_message{YType::str, "error-message"},
    lsp_mode{YType::enumeration, "lsp-mode"},
    log_time{YType::uint32, "log-time"}
{

    yang_name = "path-calculation-error"; yang_parent_name = "reverse-ero-error-standby-reopt"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::~PathCalculationError()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::has_data() const
{
    return error_message.is_set
	|| lsp_mode.is_set
	|| log_time.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(lsp_mode.yfilter)
	|| ydk::is_set(log_time.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-calculation-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.yfilter)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.yfilter)) leaf_name_data.push_back(log_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
        lsp_mode.value_namespace = name_space;
        lsp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-time")
    {
        log_time = value;
        log_time.value_namespace = name_space;
        log_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode.yfilter = yfilter;
    }
    if(value_path == "log-time")
    {
        log_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-message" || name == "lsp-mode" || name == "log-time")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::XroAttributeSet()
    :
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_attribute_set_name_crc32{YType::uint32, "tunnel-attribute-set-name-crc32"}
    	,
    attribute_set_union(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion>())
{
    attribute_set_union->parent = this;

    yang_name = "xro-attribute-set"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::~XroAttributeSet()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::has_data() const
{
    return tunnel_attribute_set_name.is_set
	|| tunnel_attribute_set_name_crc32.is_set
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name_crc32.yfilter)
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-attribute-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (tunnel_attribute_set_name_crc32.is_set || is_set(tunnel_attribute_set_name_crc32.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name_crc32.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-union")
    {
        if(attribute_set_union == nullptr)
        {
            attribute_set_union = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion>();
        }
        return attribute_set_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_set_union != nullptr)
    {
        children["attribute-set-union"] = attribute_set_union;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-union" || name == "tunnel-attribute-set-name" || name == "tunnel-attribute-set-name-crc32")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetUnion()
    :
    tunnel_attribute_set_type{YType::enumeration, "tunnel-attribute-set-type"}
    	,
    attribute_set_path_option(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption>())
	,attribute_set_autobackup(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup>())
	,attribute_set_automesh(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh>())
	,attribute_set_xro(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro>())
	,attribute_set_p2mpte(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte>())
	,attribute_set_aps_pp(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp>())
	,attribute_set_p2p_te(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe>())
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::~AttributeSetUnion()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_type.is_set || is_set(tunnel_attribute_set_type.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-path-option")
    {
        if(attribute_set_path_option == nullptr)
        {
            attribute_set_path_option = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption>();
        }
        return attribute_set_path_option;
    }

    if(child_yang_name == "attribute-set-autobackup")
    {
        if(attribute_set_autobackup == nullptr)
        {
            attribute_set_autobackup = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup>();
        }
        return attribute_set_autobackup;
    }

    if(child_yang_name == "attribute-set-automesh")
    {
        if(attribute_set_automesh == nullptr)
        {
            attribute_set_automesh = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh>();
        }
        return attribute_set_automesh;
    }

    if(child_yang_name == "attribute-set-xro")
    {
        if(attribute_set_xro == nullptr)
        {
            attribute_set_xro = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro>();
        }
        return attribute_set_xro;
    }

    if(child_yang_name == "attribute-set-p2mpte")
    {
        if(attribute_set_p2mpte == nullptr)
        {
            attribute_set_p2mpte = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte>();
        }
        return attribute_set_p2mpte;
    }

    if(child_yang_name == "attribute-set-aps-pp")
    {
        if(attribute_set_aps_pp == nullptr)
        {
            attribute_set_aps_pp = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp>();
        }
        return attribute_set_aps_pp;
    }

    if(child_yang_name == "attribute-set-p2p-te")
    {
        if(attribute_set_p2p_te == nullptr)
        {
            attribute_set_p2p_te = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe>();
        }
        return attribute_set_p2p_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::get_children() const
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type = value;
        tunnel_attribute_set_type.value_namespace = name_space;
        tunnel_attribute_set_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-path-option" || name == "attribute-set-autobackup" || name == "attribute-set-automesh" || name == "attribute-set-xro" || name == "attribute-set-p2mpte" || name == "attribute-set-aps-pp" || name == "attribute-set-p2p-te" || name == "tunnel-attribute-set-type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::AttributeSetPathOption()
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
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>())
	,bfd_reverse_path(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>())
{
    affinity->parent = this;
    bfd_reverse_path->parent = this;

    yang_name = "attribute-set-path-option"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::~AttributeSetPathOption()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-path-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path == nullptr)
        {
            bfd_reverse_path = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo>();
        c->parent = this;
        version_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_children() const
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "bfd-reverse-path" || name == "tunnel-id" || name == "version-info" || name == "configured-bandwidth" || name == "cost-limit" || name == "dste-class-type" || name == "bandwidth-type" || name == "is-bandwidth-configured" || name == "is-cost-limit-configured" || name == "is-affinity-configured" || name == "generation" || name == "path-invalidation-timeout" || name == "path-invalidation-action" || name == "is-path-invalidation-timeout-configured" || name == "is-path-invalidation-action-configured" || name == "exclude-list-name" || name == "is-exclude-list-name-configured" || name == "is-pce-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pce-disj-group-id-configured" || name == "pcedp-source-address" || name == "pcedp-type" || name == "pcedp-group-id" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "pcebd-source-address" || name == "pcebd-group-id" || name == "is-bfd-reverse-pat-configured")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_children() const
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::BfdReversePath()
    :
    path_type{YType::enumeration, "path-type"},
    binding_label{YType::uint32, "binding-label"}
{

    yang_name = "bfd-reverse-path"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::~BfdReversePath()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_data() const
{
    return path_type.is_set
	|| binding_label.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(binding_label.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-type" || name == "binding-label")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::VersionInfo()
    :
    attribute_type{YType::str, "attribute-type"},
    generation{YType::uint32, "generation"},
    is_default{YType::boolean, "is-default"}
{

    yang_name = "version-info"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::~VersionInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_data() const
{
    return attribute_type.is_set
	|| generation.is_set
	|| is_default.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_type.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(is_default.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.yfilter)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.yfilter)) leaf_name_data.push_back(is_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-type" || name == "generation" || name == "is-default")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::AttributeSetAutobackup()
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
    signalled_name(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>())
	,affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>())
	,logging(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>())
{
    signalled_name->parent = this;
    affinity->parent = this;
    logging->parent = this;

    yang_name = "attribute-set-autobackup"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::~AttributeSetAutobackup()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-autobackup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signalled-name")
    {
        if(signalled_name == nullptr)
        {
            signalled_name = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>();
        }
        return signalled_name;
    }

    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface>();
        c->parent = this;
        protected_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_children() const
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signalled-name" || name == "affinity" || name == "logging" || name == "policy-class-entry" || name == "tunnel-id" || name == "protected-interface" || name == "is-signalled-name-configured" || name == "setup-priority" || name == "hold-priority" || name == "is-priority-configured" || name == "policy-class" || name == "is-policyclass-configured" || name == "is-affinity-configured" || name == "record-route")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::SignalledName()
    :
    name{YType::str, "name"},
    source_type{YType::enumeration, "source-type"},
    protected_interface_type{YType::enumeration, "protected-interface-type"},
    is_mp_addresses{YType::boolean, "is-mp-addresses"}
{

    yang_name = "signalled-name"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::~SignalledName()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_data() const
{
    return name.is_set
	|| source_type.is_set
	|| protected_interface_type.is_set
	|| is_mp_addresses.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(source_type.yfilter)
	|| ydk::is_set(protected_interface_type.yfilter)
	|| ydk::is_set(is_mp_addresses.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalled-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (source_type.is_set || is_set(source_type.yfilter)) leaf_name_data.push_back(source_type.get_name_leafdata());
    if (protected_interface_type.is_set || is_set(protected_interface_type.yfilter)) leaf_name_data.push_back(protected_interface_type.get_name_leafdata());
    if (is_mp_addresses.is_set || is_set(is_mp_addresses.yfilter)) leaf_name_data.push_back(is_mp_addresses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "source-type" || name == "protected-interface-type" || name == "is-mp-addresses")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_children() const
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::Logging()
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::~Logging()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-state" || name == "s2l-state" || name == "lsp-re-route" || name == "lsp-re-opt" || name == "lsp-insufficient-bw" || name == "lsp-bandwidth-change" || name == "lsp-pcalc-failure-logging-enabled" || name == "all-logging-enabled")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::PolicyClassEntry()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "policy-class-entry"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::~PolicyClassEntry()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-class-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::ProtectedInterface()
    :
    protected_interface{YType::str, "protected-interface"}
{

    yang_name = "protected-interface"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::~ProtectedInterface()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_data() const
{
    return protected_interface.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protected_interface.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protected_interface.is_set || is_set(protected_interface.yfilter)) leaf_name_data.push_back(protected_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protected-interface")
    {
        protected_interface = value;
        protected_interface.value_namespace = name_space;
        protected_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protected-interface")
    {
        protected_interface.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected-interface")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::AttributeSetAutomesh()
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
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>())
	,logging(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>())
{
    affinity->parent = this;
    logging->parent = this;

    yang_name = "attribute-set-automesh"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::~AttributeSetAutomesh()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-automesh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_children() const
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "policy-class-entry" || name == "mesh-group-id" || name == "tunnel-id" || name == "configured-bandwidth" || name == "dste-class-type" || name == "is-bandwidth-configured" || name == "setup-priority" || name == "hold-priority" || name == "is-priority-configured" || name == "policy-class" || name == "is-policyclass-configured" || name == "forward-class" || name == "is-affinity-configured" || name == "fast-reroute" || name == "frr-node-protection" || name == "frr-bandwidth-protection" || name == "record-route" || name == "auto-bandwidth-collect" || name == "auto-route-announce" || name == "soft-preemption-configured" || name == "bandwidth" || name == "load-share" || name == "is-interface-bw-configured")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_children() const
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::Logging()
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::~Logging()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-state" || name == "s2l-state" || name == "lsp-re-route" || name == "lsp-re-opt" || name == "lsp-insufficient-bw" || name == "lsp-bandwidth-change" || name == "lsp-pcalc-failure-logging-enabled" || name == "all-logging-enabled")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::PolicyClassEntry()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "policy-class-entry"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::~PolicyClassEntry()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-class-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::MeshGroupId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mesh-group-id"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::~MeshGroupId()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::AttributeSetXro()
    :
    xro(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro>())
{
    xro->parent = this;

    yang_name = "attribute-set-xro"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::~AttributeSetXro()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::has_data() const
{
    return (xro !=  nullptr && xro->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::has_operation() const
{
    return is_set(yfilter)
	|| (xro !=  nullptr && xro->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-xro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro")
    {
        if(xro == nullptr)
        {
            xro = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro>();
        }
        return xro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xro != nullptr)
    {
        children["xro"] = xro;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::Xro()
    :
    mutual_diversity_flag{YType::boolean, "mutual-diversity-flag"}
{

    yang_name = "xro"; yang_parent_name = "attribute-set-xro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::~Xro()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_data() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_data())
            return true;
    }
    return mutual_diversity_flag.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_operation() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mutual_diversity_flag.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mutual_diversity_flag.is_set || is_set(mutual_diversity_flag.yfilter)) leaf_name_data.push_back(mutual_diversity_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject>();
        c->parent = this;
        xro_subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xro_subobject)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag = value;
        mutual_diversity_flag.value_namespace = name_space;
        mutual_diversity_flag.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro-subobject" || name == "mutual-diversity-flag")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::XroSubobject()
    :
    type{YType::enumeration, "type"}
    	,
    ipv4_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>())
	,ipv6_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>())
	,unnumbered_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>())
	,as_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>())
	,srlg_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>())
	,lsp_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>())
{
    ipv4_subobject->parent = this;
    ipv6_subobject->parent = this;
    unnumbered_subobject->parent = this;
    as_subobject->parent = this;
    srlg_subobject->parent = this;
    lsp_subobject->parent = this;

    yang_name = "xro-subobject"; yang_parent_name = "xro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::~XroSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_data() const
{
    return type.is_set
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_data())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_data())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_data())
	|| (as_subobject !=  nullptr && as_subobject->has_data())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_data())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-subobject")
    {
        if(ipv4_subobject == nullptr)
        {
            ipv4_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>();
        }
        return ipv4_subobject;
    }

    if(child_yang_name == "ipv6-subobject")
    {
        if(ipv6_subobject == nullptr)
        {
            ipv6_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>();
        }
        return ipv6_subobject;
    }

    if(child_yang_name == "unnumbered-subobject")
    {
        if(unnumbered_subobject == nullptr)
        {
            unnumbered_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>();
        }
        return unnumbered_subobject;
    }

    if(child_yang_name == "as-subobject")
    {
        if(as_subobject == nullptr)
        {
            as_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>();
        }
        return as_subobject;
    }

    if(child_yang_name == "srlg-subobject")
    {
        if(srlg_subobject == nullptr)
        {
            srlg_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>();
        }
        return srlg_subobject;
    }

    if(child_yang_name == "lsp-subobject")
    {
        if(lsp_subobject == nullptr)
        {
            lsp_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>();
        }
        return lsp_subobject;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_children() const
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-subobject" || name == "ipv6-subobject" || name == "unnumbered-subobject" || name == "as-subobject" || name == "srlg-subobject" || name == "lsp-subobject" || name == "type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::Ipv4Subobject()
    :
    address{YType::str, "address"},
    prefix_len{YType::uint8, "prefix-len"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "ipv4-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::~Ipv4Subobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_data() const
{
    return address.is_set
	|| prefix_len.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-len" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::Ipv6Subobject()
    :
    address{YType::str, "address"},
    prefix_len{YType::uint8, "prefix-len"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "ipv6-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::~Ipv6Subobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_data() const
{
    return address.is_set
	|| prefix_len.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-len" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::UnnumberedSubobject()
    :
    te_router_id{YType::str, "te-router-id"},
    interface_id{YType::uint32, "interface-id"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "unnumbered-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::~UnnumberedSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_data() const
{
    return te_router_id.is_set
	|| interface_id.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_router_id.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_router_id.is_set || is_set(te_router_id.yfilter)) leaf_name_data.push_back(te_router_id.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-router-id" || name == "interface-id" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::AsSubobject()
    :
    as_number{YType::uint16, "as-number"}
{

    yang_name = "as-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::~AsSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_data() const
{
    return as_number.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::SrlgSubobject()
    :
    srlg_id{YType::uint32, "srlg-id"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "srlg-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::~SrlgSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_data() const
{
    return srlg_id.is_set
	|| exclusion_type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_id.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_id.is_set || is_set(srlg_id.yfilter)) leaf_name_data.push_back(srlg_id.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-id" || name == "exclusion-type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::LspSubobject()
    :
    ignore_lsp_id{YType::boolean, "ignore-lsp-id"},
    processing_node_exception{YType::boolean, "processing-node-exception"},
    penultimate_node_exception{YType::boolean, "penultimate-node-exception"},
    destination_node_exception{YType::boolean, "destination-node-exception"},
    exclusion_type{YType::enumeration, "exclusion-type"}
    	,
    fec(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>())
{
    fec->parent = this;

    yang_name = "lsp-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::~LspSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_data() const
{
    return ignore_lsp_id.is_set
	|| processing_node_exception.is_set
	|| penultimate_node_exception.is_set
	|| destination_node_exception.is_set
	|| exclusion_type.is_set
	|| (fec !=  nullptr && fec->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_lsp_id.yfilter)
	|| ydk::is_set(processing_node_exception.yfilter)
	|| ydk::is_set(penultimate_node_exception.yfilter)
	|| ydk::is_set(destination_node_exception.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| (fec !=  nullptr && fec->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_lsp_id.is_set || is_set(ignore_lsp_id.yfilter)) leaf_name_data.push_back(ignore_lsp_id.get_name_leafdata());
    if (processing_node_exception.is_set || is_set(processing_node_exception.yfilter)) leaf_name_data.push_back(processing_node_exception.get_name_leafdata());
    if (penultimate_node_exception.is_set || is_set(penultimate_node_exception.yfilter)) leaf_name_data.push_back(penultimate_node_exception.get_name_leafdata());
    if (destination_node_exception.is_set || is_set(destination_node_exception.yfilter)) leaf_name_data.push_back(destination_node_exception.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec")
    {
        if(fec == nullptr)
        {
            fec = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>();
        }
        return fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec != nullptr)
    {
        children["fec"] = fec;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec" || name == "ignore-lsp-id" || name == "processing-node-exception" || name == "penultimate-node-exception" || name == "destination-node-exception" || name == "exclusion-type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::Fec()
    :
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "fec"; yang_parent_name = "lsp-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::~Fec()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_data() const
{
    return fec_lsp_id.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-lsp-id" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-vrf")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "fec"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| p2p_lsp_destination.is_set
	|| fec_destination_p2mp_id.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "p2p-lsp-destination" || name == "fec-destination-p2mp-id")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::AttributeSetP2Mpte()
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
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>())
{
    affinity->parent = this;

    yang_name = "attribute-set-p2mpte"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::~AttributeSetP2Mpte()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2mpte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_children() const
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "tunnel-id" || name == "fast-reroute" || name == "frr-bandwidth-protection" || name == "setup-priority" || name == "hold-priority" || name == "is-priority-configured" || name == "configured-bandwidth" || name == "dste-class-type" || name == "is-bandwidth-configured" || name == "is-affinity-configured")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-p2mpte"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_children() const
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-p2mpte"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::AttributeSetApsPp()
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
    revert_schedule(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>())
{
    revert_schedule->parent = this;

    yang_name = "attribute-set-aps-pp"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::~AttributeSetApsPp()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-aps-pp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "revert-schedule")
    {
        if(revert_schedule == nullptr)
        {
            revert_schedule = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>();
        }
        return revert_schedule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(revert_schedule != nullptr)
    {
        children["revert-schedule"] = revert_schedule;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "revert-schedule" || name == "snc-mode" || name == "tcm-id" || name == "protection-type" || name == "protection-mode" || name == "wait-to-restore-time" || name == "hold-off-time" || name == "path-prot-profile-type" || name == "restoration-style")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::RevertSchedule()
    :
    schedulename{YType::str, "schedulename"},
    schedule_date{YType::uint32, "schedule-date"},
    schedule_frequency{YType::enumeration, "schedule-frequency"},
    duration{YType::uint32, "duration"},
    max_tries{YType::uint32, "max-tries"}
{

    yang_name = "revert-schedule"; yang_parent_name = "attribute-set-aps-pp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::~RevertSchedule()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_data() const
{
    return schedulename.is_set
	|| schedule_date.is_set
	|| schedule_frequency.is_set
	|| duration.is_set
	|| max_tries.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(schedulename.yfilter)
	|| ydk::is_set(schedule_date.yfilter)
	|| ydk::is_set(schedule_frequency.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(max_tries.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schedulename.is_set || is_set(schedulename.yfilter)) leaf_name_data.push_back(schedulename.get_name_leafdata());
    if (schedule_date.is_set || is_set(schedule_date.yfilter)) leaf_name_data.push_back(schedule_date.get_name_leafdata());
    if (schedule_frequency.is_set || is_set(schedule_frequency.yfilter)) leaf_name_data.push_back(schedule_frequency.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (max_tries.is_set || is_set(max_tries.yfilter)) leaf_name_data.push_back(max_tries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedulename" || name == "schedule-date" || name == "schedule-frequency" || name == "duration" || name == "max-tries")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::AttributeSetP2PTe()
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
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>())
	,logging(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>())
	,prepend_list(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>())
{
    affinity->parent = this;
    logging->parent = this;
    prepend_list->parent = this;

    yang_name = "attribute-set-p2p-te"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::~AttributeSetP2PTe()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2p-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "prepend-list")
    {
        if(prepend_list == nullptr)
        {
            prepend_list = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_children() const
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "prepend-list" || name == "tunnel-id" || name == "is-affinity-configured" || name == "path-selection-segment-routing-adjacency-protection" || name == "is-path-selection-segment-routing-adjacency-protection-configured" || name == "path-invalidation-timeout" || name == "path-selection-invalidation-action" || name == "is-path-invalidation-timeout-configured" || name == "is-path-invalidation-action-configured" || name == "path-selection-metric" || name == "is-path-selection-metric-configured" || name == "path-selection-segment-routing-margin" || name == "is-path-selection-segment-routing-margin-relative" || name == "is-path-selection-segment-routing-margin-configured" || name == "path-selection-segment-routing-segment-limit" || name == "is-path-selection-segment-routing-segment-limit-configured" || name == "is-path-select-configured" || name == "is-prepend-list-configured" || name == "is-pce-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pce-disj-group-id-configured" || name == "pcedp-source-address" || name == "pcedp-type" || name == "pcedp-group-id" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "pcebd-source-address" || name == "pcebd-group-id")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_children() const
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::Logging()
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::~Logging()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-state" || name == "s2l-state" || name == "lsp-re-route" || name == "lsp-re-opt" || name == "lsp-insufficient-bw" || name == "lsp-bandwidth-change" || name == "lsp-pcalc-failure-logging-enabled" || name == "all-logging-enabled")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependList()
{

    yang_name = "prepend-list"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::~PrependList()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_data() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_operation() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry>();
        c->parent = this;
        prepend_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prepend_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepend-entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::PrependEntry()
    :
    type{YType::enumeration, "type"},
    index_{YType::uint32, "index"},
    next_label{YType::uint32, "next-label"}
{

    yang_name = "prepend-entry"; yang_parent_name = "prepend-list"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::~PrependEntry()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_data() const
{
    return type.is_set
	|| index_.is_set
	|| next_label.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(next_label.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (next_label.is_set || is_set(next_label.yfilter)) leaf_name_data.push_back(next_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "index" || name == "next-label")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::TeTunnelConvergence()
    :
    is_convergence_in_progress{YType::boolean, "is-convergence-in-progress"},
    frr_trigger_time{YType::uint64, "frr-trigger-time"},
    pcalc_complete_time{YType::uint64, "pcalc-complete-time"},
    convergence_complete_time{YType::uint64, "convergence-complete-time"},
    binding_label_rewrite_time{YType::uint64, "binding-label-rewrite-time"},
    vif_creation_time{YType::uint64, "vif-creation-time"}
    	,
    convergence_lsp(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp>())
{
    convergence_lsp->parent = this;

    yang_name = "te-tunnel-convergence"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::~TeTunnelConvergence()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::has_data() const
{
    return is_convergence_in_progress.is_set
	|| frr_trigger_time.is_set
	|| pcalc_complete_time.is_set
	|| convergence_complete_time.is_set
	|| binding_label_rewrite_time.is_set
	|| vif_creation_time.is_set
	|| (convergence_lsp !=  nullptr && convergence_lsp->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_convergence_in_progress.yfilter)
	|| ydk::is_set(frr_trigger_time.yfilter)
	|| ydk::is_set(pcalc_complete_time.yfilter)
	|| ydk::is_set(convergence_complete_time.yfilter)
	|| ydk::is_set(binding_label_rewrite_time.yfilter)
	|| ydk::is_set(vif_creation_time.yfilter)
	|| (convergence_lsp !=  nullptr && convergence_lsp->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-tunnel-convergence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_convergence_in_progress.is_set || is_set(is_convergence_in_progress.yfilter)) leaf_name_data.push_back(is_convergence_in_progress.get_name_leafdata());
    if (frr_trigger_time.is_set || is_set(frr_trigger_time.yfilter)) leaf_name_data.push_back(frr_trigger_time.get_name_leafdata());
    if (pcalc_complete_time.is_set || is_set(pcalc_complete_time.yfilter)) leaf_name_data.push_back(pcalc_complete_time.get_name_leafdata());
    if (convergence_complete_time.is_set || is_set(convergence_complete_time.yfilter)) leaf_name_data.push_back(convergence_complete_time.get_name_leafdata());
    if (binding_label_rewrite_time.is_set || is_set(binding_label_rewrite_time.yfilter)) leaf_name_data.push_back(binding_label_rewrite_time.get_name_leafdata());
    if (vif_creation_time.is_set || is_set(vif_creation_time.yfilter)) leaf_name_data.push_back(vif_creation_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "convergence-lsp")
    {
        if(convergence_lsp == nullptr)
        {
            convergence_lsp = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp>();
        }
        return convergence_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(convergence_lsp != nullptr)
    {
        children["convergence-lsp"] = convergence_lsp;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-convergence-in-progress")
    {
        is_convergence_in_progress = value;
        is_convergence_in_progress.value_namespace = name_space;
        is_convergence_in_progress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-trigger-time")
    {
        frr_trigger_time = value;
        frr_trigger_time.value_namespace = name_space;
        frr_trigger_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcalc-complete-time")
    {
        pcalc_complete_time = value;
        pcalc_complete_time.value_namespace = name_space;
        pcalc_complete_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "convergence-complete-time")
    {
        convergence_complete_time = value;
        convergence_complete_time.value_namespace = name_space;
        convergence_complete_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label-rewrite-time")
    {
        binding_label_rewrite_time = value;
        binding_label_rewrite_time.value_namespace = name_space;
        binding_label_rewrite_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vif-creation-time")
    {
        vif_creation_time = value;
        vif_creation_time.value_namespace = name_space;
        vif_creation_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-convergence-in-progress")
    {
        is_convergence_in_progress.yfilter = yfilter;
    }
    if(value_path == "frr-trigger-time")
    {
        frr_trigger_time.yfilter = yfilter;
    }
    if(value_path == "pcalc-complete-time")
    {
        pcalc_complete_time.yfilter = yfilter;
    }
    if(value_path == "convergence-complete-time")
    {
        convergence_complete_time.yfilter = yfilter;
    }
    if(value_path == "binding-label-rewrite-time")
    {
        binding_label_rewrite_time.yfilter = yfilter;
    }
    if(value_path == "vif-creation-time")
    {
        vif_creation_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "convergence-lsp" || name == "is-convergence-in-progress" || name == "frr-trigger-time" || name == "pcalc-complete-time" || name == "convergence-complete-time" || name == "binding-label-rewrite-time" || name == "vif-creation-time")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp::ConvergenceLsp()
    :
    path_in{YType::uint64, "path-in"},
    path_out{YType::uint64, "path-out"},
    resv_in{YType::uint64, "resv-in"},
    resv_out{YType::uint64, "resv-out"},
    label_rewrite{YType::uint64, "label-rewrite"},
    tunnel_rewrite{YType::uint64, "tunnel-rewrite"},
    creation_time{YType::uint64, "creation-time"}
{

    yang_name = "convergence-lsp"; yang_parent_name = "te-tunnel-convergence"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp::~ConvergenceLsp()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp::has_data() const
{
    return path_in.is_set
	|| path_out.is_set
	|| resv_in.is_set
	|| resv_out.is_set
	|| label_rewrite.is_set
	|| tunnel_rewrite.is_set
	|| creation_time.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_in.yfilter)
	|| ydk::is_set(path_out.yfilter)
	|| ydk::is_set(resv_in.yfilter)
	|| ydk::is_set(resv_out.yfilter)
	|| ydk::is_set(label_rewrite.yfilter)
	|| ydk::is_set(tunnel_rewrite.yfilter)
	|| ydk::is_set(creation_time.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "convergence-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_in.is_set || is_set(path_in.yfilter)) leaf_name_data.push_back(path_in.get_name_leafdata());
    if (path_out.is_set || is_set(path_out.yfilter)) leaf_name_data.push_back(path_out.get_name_leafdata());
    if (resv_in.is_set || is_set(resv_in.yfilter)) leaf_name_data.push_back(resv_in.get_name_leafdata());
    if (resv_out.is_set || is_set(resv_out.yfilter)) leaf_name_data.push_back(resv_out.get_name_leafdata());
    if (label_rewrite.is_set || is_set(label_rewrite.yfilter)) leaf_name_data.push_back(label_rewrite.get_name_leafdata());
    if (tunnel_rewrite.is_set || is_set(tunnel_rewrite.yfilter)) leaf_name_data.push_back(tunnel_rewrite.get_name_leafdata());
    if (creation_time.is_set || is_set(creation_time.yfilter)) leaf_name_data.push_back(creation_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "label-rewrite")
    {
        label_rewrite = value;
        label_rewrite.value_namespace = name_space;
        label_rewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-rewrite")
    {
        tunnel_rewrite = value;
        tunnel_rewrite.value_namespace = name_space;
        tunnel_rewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creation-time")
    {
        creation_time = value;
        creation_time.value_namespace = name_space;
        creation_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "label-rewrite")
    {
        label_rewrite.yfilter = yfilter;
    }
    if(value_path == "tunnel-rewrite")
    {
        tunnel_rewrite.yfilter = yfilter;
    }
    if(value_path == "creation-time")
    {
        creation_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-in" || name == "path-out" || name == "resv-in" || name == "resv-out" || name == "label-rewrite" || name == "tunnel-rewrite" || name == "creation-time")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::FlexInfo::FlexInfo()
    :
    fault_ldi_lockout{YType::boolean, "fault-ldi-lockout"},
    fault_ldi{YType::boolean, "fault-ldi"},
    fault_lkr{YType::boolean, "fault-lkr"},
    fault_ais{YType::boolean, "fault-ais"},
    fault_time{YType::uint32, "fault-time"},
    fault_in_label{YType::uint32, "fault-in-label"},
    is_lockout{YType::boolean, "is-lockout"},
    lockout_timestamp{YType::uint32, "lockout-timestamp"},
    lockout_lsp_id{YType::uint16, "lockout-lsp-id"},
    origination{YType::enumeration, "origination"}
{

    yang_name = "flex-info"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::FlexInfo::~FlexInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::FlexInfo::has_data() const
{
    return fault_ldi_lockout.is_set
	|| fault_ldi.is_set
	|| fault_lkr.is_set
	|| fault_ais.is_set
	|| fault_time.is_set
	|| fault_in_label.is_set
	|| is_lockout.is_set
	|| lockout_timestamp.is_set
	|| lockout_lsp_id.is_set
	|| origination.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::FlexInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fault_ldi_lockout.yfilter)
	|| ydk::is_set(fault_ldi.yfilter)
	|| ydk::is_set(fault_lkr.yfilter)
	|| ydk::is_set(fault_ais.yfilter)
	|| ydk::is_set(fault_time.yfilter)
	|| ydk::is_set(fault_in_label.yfilter)
	|| ydk::is_set(is_lockout.yfilter)
	|| ydk::is_set(lockout_timestamp.yfilter)
	|| ydk::is_set(lockout_lsp_id.yfilter)
	|| ydk::is_set(origination.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::FlexInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::FlexInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fault_ldi_lockout.is_set || is_set(fault_ldi_lockout.yfilter)) leaf_name_data.push_back(fault_ldi_lockout.get_name_leafdata());
    if (fault_ldi.is_set || is_set(fault_ldi.yfilter)) leaf_name_data.push_back(fault_ldi.get_name_leafdata());
    if (fault_lkr.is_set || is_set(fault_lkr.yfilter)) leaf_name_data.push_back(fault_lkr.get_name_leafdata());
    if (fault_ais.is_set || is_set(fault_ais.yfilter)) leaf_name_data.push_back(fault_ais.get_name_leafdata());
    if (fault_time.is_set || is_set(fault_time.yfilter)) leaf_name_data.push_back(fault_time.get_name_leafdata());
    if (fault_in_label.is_set || is_set(fault_in_label.yfilter)) leaf_name_data.push_back(fault_in_label.get_name_leafdata());
    if (is_lockout.is_set || is_set(is_lockout.yfilter)) leaf_name_data.push_back(is_lockout.get_name_leafdata());
    if (lockout_timestamp.is_set || is_set(lockout_timestamp.yfilter)) leaf_name_data.push_back(lockout_timestamp.get_name_leafdata());
    if (lockout_lsp_id.is_set || is_set(lockout_lsp_id.yfilter)) leaf_name_data.push_back(lockout_lsp_id.get_name_leafdata());
    if (origination.is_set || is_set(origination.yfilter)) leaf_name_data.push_back(origination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::FlexInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::FlexInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::FlexInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fault-ldi-lockout")
    {
        fault_ldi_lockout = value;
        fault_ldi_lockout.value_namespace = name_space;
        fault_ldi_lockout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-ldi")
    {
        fault_ldi = value;
        fault_ldi.value_namespace = name_space;
        fault_ldi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-lkr")
    {
        fault_lkr = value;
        fault_lkr.value_namespace = name_space;
        fault_lkr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-ais")
    {
        fault_ais = value;
        fault_ais.value_namespace = name_space;
        fault_ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-time")
    {
        fault_time = value;
        fault_time.value_namespace = name_space;
        fault_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-in-label")
    {
        fault_in_label = value;
        fault_in_label.value_namespace = name_space;
        fault_in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lockout")
    {
        is_lockout = value;
        is_lockout.value_namespace = name_space;
        is_lockout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockout-timestamp")
    {
        lockout_timestamp = value;
        lockout_timestamp.value_namespace = name_space;
        lockout_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockout-lsp-id")
    {
        lockout_lsp_id = value;
        lockout_lsp_id.value_namespace = name_space;
        lockout_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origination")
    {
        origination = value;
        origination.value_namespace = name_space;
        origination.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::FlexInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fault-ldi-lockout")
    {
        fault_ldi_lockout.yfilter = yfilter;
    }
    if(value_path == "fault-ldi")
    {
        fault_ldi.yfilter = yfilter;
    }
    if(value_path == "fault-lkr")
    {
        fault_lkr.yfilter = yfilter;
    }
    if(value_path == "fault-ais")
    {
        fault_ais.yfilter = yfilter;
    }
    if(value_path == "fault-time")
    {
        fault_time.yfilter = yfilter;
    }
    if(value_path == "fault-in-label")
    {
        fault_in_label.yfilter = yfilter;
    }
    if(value_path == "is-lockout")
    {
        is_lockout.yfilter = yfilter;
    }
    if(value_path == "lockout-timestamp")
    {
        lockout_timestamp.yfilter = yfilter;
    }
    if(value_path == "lockout-lsp-id")
    {
        lockout_lsp_id.yfilter = yfilter;
    }
    if(value_path == "origination")
    {
        origination.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::FlexInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fault-ldi-lockout" || name == "fault-ldi" || name == "fault-lkr" || name == "fault-ais" || name == "fault-time" || name == "fault-in-label" || name == "is-lockout" || name == "lockout-timestamp" || name == "lockout-lsp-id" || name == "origination")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::Destination()
    :
    destination_address{YType::str, "destination-address"},
    destination_state{YType::enumeration, "destination-state"},
    active_path_option_index{YType::uint32, "active-path-option-index"},
    path_option_exhausted{YType::boolean, "path-option-exhausted"},
    uptime{YType::uint32, "uptime"},
    path_change_time{YType::uint32, "path-change-time"},
    total_uptime{YType::uint32, "total-uptime"},
    s2l_exist{YType::boolean, "s2l-exist"},
    destination_deletion_cause{YType::enumeration, "destination-deletion-cause"},
    destination_deletion_sub_cause{YType::enumeration, "destination-deletion-sub-cause"},
    destination_deletion_timestamp{YType::uint32, "destination-deletion-timestamp"},
    is_inter_area{YType::boolean, "is-inter-area"}
    	,
    inter_area_reoptimization(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization>())
{
    inter_area_reoptimization->parent = this;

    yang_name = "destination"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::~Destination()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::has_data() const
{
    for (std::size_t index=0; index<path_option_entry.size(); index++)
    {
        if(path_option_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| destination_state.is_set
	|| active_path_option_index.is_set
	|| path_option_exhausted.is_set
	|| uptime.is_set
	|| path_change_time.is_set
	|| total_uptime.is_set
	|| s2l_exist.is_set
	|| destination_deletion_cause.is_set
	|| destination_deletion_sub_cause.is_set
	|| destination_deletion_timestamp.is_set
	|| is_inter_area.is_set
	|| (inter_area_reoptimization !=  nullptr && inter_area_reoptimization->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::has_operation() const
{
    for (std::size_t index=0; index<path_option_entry.size(); index++)
    {
        if(path_option_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_state.yfilter)
	|| ydk::is_set(active_path_option_index.yfilter)
	|| ydk::is_set(path_option_exhausted.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(path_change_time.yfilter)
	|| ydk::is_set(total_uptime.yfilter)
	|| ydk::is_set(s2l_exist.yfilter)
	|| ydk::is_set(destination_deletion_cause.yfilter)
	|| ydk::is_set(destination_deletion_sub_cause.yfilter)
	|| ydk::is_set(destination_deletion_timestamp.yfilter)
	|| ydk::is_set(is_inter_area.yfilter)
	|| (inter_area_reoptimization !=  nullptr && inter_area_reoptimization->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_state.is_set || is_set(destination_state.yfilter)) leaf_name_data.push_back(destination_state.get_name_leafdata());
    if (active_path_option_index.is_set || is_set(active_path_option_index.yfilter)) leaf_name_data.push_back(active_path_option_index.get_name_leafdata());
    if (path_option_exhausted.is_set || is_set(path_option_exhausted.yfilter)) leaf_name_data.push_back(path_option_exhausted.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (path_change_time.is_set || is_set(path_change_time.yfilter)) leaf_name_data.push_back(path_change_time.get_name_leafdata());
    if (total_uptime.is_set || is_set(total_uptime.yfilter)) leaf_name_data.push_back(total_uptime.get_name_leafdata());
    if (s2l_exist.is_set || is_set(s2l_exist.yfilter)) leaf_name_data.push_back(s2l_exist.get_name_leafdata());
    if (destination_deletion_cause.is_set || is_set(destination_deletion_cause.yfilter)) leaf_name_data.push_back(destination_deletion_cause.get_name_leafdata());
    if (destination_deletion_sub_cause.is_set || is_set(destination_deletion_sub_cause.yfilter)) leaf_name_data.push_back(destination_deletion_sub_cause.get_name_leafdata());
    if (destination_deletion_timestamp.is_set || is_set(destination_deletion_timestamp.yfilter)) leaf_name_data.push_back(destination_deletion_timestamp.get_name_leafdata());
    if (is_inter_area.is_set || is_set(is_inter_area.yfilter)) leaf_name_data.push_back(is_inter_area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inter-area-reoptimization")
    {
        if(inter_area_reoptimization == nullptr)
        {
            inter_area_reoptimization = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization>();
        }
        return inter_area_reoptimization;
    }

    if(child_yang_name == "path-option-entry")
    {
        for(auto const & c : path_option_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry>();
        c->parent = this;
        path_option_entry.push_back(c);
        return c;
    }

    if(child_yang_name == "path-option")
    {
        for(auto const & c : path_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOption>();
        c->parent = this;
        path_option.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inter_area_reoptimization != nullptr)
    {
        children["inter-area-reoptimization"] = inter_area_reoptimization;
    }

    for (auto const & c : path_option_entry)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : path_option)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-state")
    {
        destination_state = value;
        destination_state.value_namespace = name_space;
        destination_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-path-option-index")
    {
        active_path_option_index = value;
        active_path_option_index.value_namespace = name_space;
        active_path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-exhausted")
    {
        path_option_exhausted = value;
        path_option_exhausted.value_namespace = name_space;
        path_option_exhausted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-change-time")
    {
        path_change_time = value;
        path_change_time.value_namespace = name_space;
        path_change_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-uptime")
    {
        total_uptime = value;
        total_uptime.value_namespace = name_space;
        total_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-exist")
    {
        s2l_exist = value;
        s2l_exist.value_namespace = name_space;
        s2l_exist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-deletion-cause")
    {
        destination_deletion_cause = value;
        destination_deletion_cause.value_namespace = name_space;
        destination_deletion_cause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-deletion-sub-cause")
    {
        destination_deletion_sub_cause = value;
        destination_deletion_sub_cause.value_namespace = name_space;
        destination_deletion_sub_cause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-deletion-timestamp")
    {
        destination_deletion_timestamp = value;
        destination_deletion_timestamp.value_namespace = name_space;
        destination_deletion_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-inter-area")
    {
        is_inter_area = value;
        is_inter_area.value_namespace = name_space;
        is_inter_area.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-state")
    {
        destination_state.yfilter = yfilter;
    }
    if(value_path == "active-path-option-index")
    {
        active_path_option_index.yfilter = yfilter;
    }
    if(value_path == "path-option-exhausted")
    {
        path_option_exhausted.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "path-change-time")
    {
        path_change_time.yfilter = yfilter;
    }
    if(value_path == "total-uptime")
    {
        total_uptime.yfilter = yfilter;
    }
    if(value_path == "s2l-exist")
    {
        s2l_exist.yfilter = yfilter;
    }
    if(value_path == "destination-deletion-cause")
    {
        destination_deletion_cause.yfilter = yfilter;
    }
    if(value_path == "destination-deletion-sub-cause")
    {
        destination_deletion_sub_cause.yfilter = yfilter;
    }
    if(value_path == "destination-deletion-timestamp")
    {
        destination_deletion_timestamp.yfilter = yfilter;
    }
    if(value_path == "is-inter-area")
    {
        is_inter_area.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inter-area-reoptimization" || name == "path-option-entry" || name == "path-option" || name == "destination-address" || name == "destination-state" || name == "active-path-option-index" || name == "path-option-exhausted" || name == "uptime" || name == "path-change-time" || name == "total-uptime" || name == "s2l-exist" || name == "destination-deletion-cause" || name == "destination-deletion-sub-cause" || name == "destination-deletion-timestamp" || name == "is-inter-area")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization::InterAreaReoptimization()
    :
    sent_path_queries{YType::uint16, "sent-path-queries"},
    time_since_last_query_sent{YType::uint32, "time-since-last-query-sent"},
    received_preferred_path_errors{YType::uint16, "received-preferred-path-errors"},
    time_since_last_preferred_path_error{YType::uint32, "time-since-last-preferred-path-error"},
    received_preferred_tree_errors{YType::uint16, "received-preferred-tree-errors"},
    time_since_last_preferred_tree_error{YType::uint32, "time-since-last-preferred-tree-error"},
    preferred_path_error_node{YType::str, "preferred-path-error-node"},
    preferred_tree_error_node{YType::str, "preferred-tree-error-node"}
{

    yang_name = "inter-area-reoptimization"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization::~InterAreaReoptimization()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization::has_data() const
{
    return sent_path_queries.is_set
	|| time_since_last_query_sent.is_set
	|| received_preferred_path_errors.is_set
	|| time_since_last_preferred_path_error.is_set
	|| received_preferred_tree_errors.is_set
	|| time_since_last_preferred_tree_error.is_set
	|| preferred_path_error_node.is_set
	|| preferred_tree_error_node.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent_path_queries.yfilter)
	|| ydk::is_set(time_since_last_query_sent.yfilter)
	|| ydk::is_set(received_preferred_path_errors.yfilter)
	|| ydk::is_set(time_since_last_preferred_path_error.yfilter)
	|| ydk::is_set(received_preferred_tree_errors.yfilter)
	|| ydk::is_set(time_since_last_preferred_tree_error.yfilter)
	|| ydk::is_set(preferred_path_error_node.yfilter)
	|| ydk::is_set(preferred_tree_error_node.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-reoptimization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent_path_queries.is_set || is_set(sent_path_queries.yfilter)) leaf_name_data.push_back(sent_path_queries.get_name_leafdata());
    if (time_since_last_query_sent.is_set || is_set(time_since_last_query_sent.yfilter)) leaf_name_data.push_back(time_since_last_query_sent.get_name_leafdata());
    if (received_preferred_path_errors.is_set || is_set(received_preferred_path_errors.yfilter)) leaf_name_data.push_back(received_preferred_path_errors.get_name_leafdata());
    if (time_since_last_preferred_path_error.is_set || is_set(time_since_last_preferred_path_error.yfilter)) leaf_name_data.push_back(time_since_last_preferred_path_error.get_name_leafdata());
    if (received_preferred_tree_errors.is_set || is_set(received_preferred_tree_errors.yfilter)) leaf_name_data.push_back(received_preferred_tree_errors.get_name_leafdata());
    if (time_since_last_preferred_tree_error.is_set || is_set(time_since_last_preferred_tree_error.yfilter)) leaf_name_data.push_back(time_since_last_preferred_tree_error.get_name_leafdata());
    if (preferred_path_error_node.is_set || is_set(preferred_path_error_node.yfilter)) leaf_name_data.push_back(preferred_path_error_node.get_name_leafdata());
    if (preferred_tree_error_node.is_set || is_set(preferred_tree_error_node.yfilter)) leaf_name_data.push_back(preferred_tree_error_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent-path-queries")
    {
        sent_path_queries = value;
        sent_path_queries.value_namespace = name_space;
        sent_path_queries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-query-sent")
    {
        time_since_last_query_sent = value;
        time_since_last_query_sent.value_namespace = name_space;
        time_since_last_query_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-preferred-path-errors")
    {
        received_preferred_path_errors = value;
        received_preferred_path_errors.value_namespace = name_space;
        received_preferred_path_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-preferred-path-error")
    {
        time_since_last_preferred_path_error = value;
        time_since_last_preferred_path_error.value_namespace = name_space;
        time_since_last_preferred_path_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-preferred-tree-errors")
    {
        received_preferred_tree_errors = value;
        received_preferred_tree_errors.value_namespace = name_space;
        received_preferred_tree_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-preferred-tree-error")
    {
        time_since_last_preferred_tree_error = value;
        time_since_last_preferred_tree_error.value_namespace = name_space;
        time_since_last_preferred_tree_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-path-error-node")
    {
        preferred_path_error_node = value;
        preferred_path_error_node.value_namespace = name_space;
        preferred_path_error_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-tree-error-node")
    {
        preferred_tree_error_node = value;
        preferred_tree_error_node.value_namespace = name_space;
        preferred_tree_error_node.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent-path-queries")
    {
        sent_path_queries.yfilter = yfilter;
    }
    if(value_path == "time-since-last-query-sent")
    {
        time_since_last_query_sent.yfilter = yfilter;
    }
    if(value_path == "received-preferred-path-errors")
    {
        received_preferred_path_errors.yfilter = yfilter;
    }
    if(value_path == "time-since-last-preferred-path-error")
    {
        time_since_last_preferred_path_error.yfilter = yfilter;
    }
    if(value_path == "received-preferred-tree-errors")
    {
        received_preferred_tree_errors.yfilter = yfilter;
    }
    if(value_path == "time-since-last-preferred-tree-error")
    {
        time_since_last_preferred_tree_error.yfilter = yfilter;
    }
    if(value_path == "preferred-path-error-node")
    {
        preferred_path_error_node.yfilter = yfilter;
    }
    if(value_path == "preferred-tree-error-node")
    {
        preferred_tree_error_node.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent-path-queries" || name == "time-since-last-query-sent" || name == "received-preferred-path-errors" || name == "time-since-last-preferred-path-error" || name == "received-preferred-tree-errors" || name == "time-since-last-preferred-tree-error" || name == "preferred-path-error-node" || name == "preferred-tree-error-node")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::PathOptionEntry()
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
    attribute_set(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet>())
	,xro_attribute_set(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::XroAttributeSet>())
{
    attribute_set->parent = this;
    xro_attribute_set->parent = this;

    yang_name = "path-option-entry"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::~PathOptionEntry()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set")
    {
        if(attribute_set == nullptr)
        {
            attribute_set = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet>();
        }
        return attribute_set;
    }

    if(child_yang_name == "xro-attribute-set")
    {
        if(xro_attribute_set == nullptr)
        {
            xro_attribute_set = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::XroAttributeSet>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::PathCalculationError>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::RemergeError>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::SignallingError>();
        c->parent = this;
        signalling_error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::get_children() const
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set" || name == "xro-attribute-set" || name == "path-calculation-error" || name == "remerge-error" || name == "signalling-error" || name == "option-index-is-valid" || name == "option-index" || name == "path-option-name" || name == "path-option-type" || name == "explicit-path-name" || name == "explicit-path-id" || name == "holddown-duration" || name == "pce-address" || name == "path-option-area-id" || name == "is-strict-explicit-path" || name == "is-helddown" || name == "is-lockdown" || name == "is-verbatim" || name == "is-disabled" || name == "has-attribute-set" || name == "attribute-set-found" || name == "has-xro-attribute-set" || name == "xro-attribute-set-found" || name == "is-segment-routing" || name == "protected-by-path-option-index" || name == "restored-from-path-option-index")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSet()
    :
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_attribute_set_name_crc32{YType::uint32, "tunnel-attribute-set-name-crc32"}
    	,
    attribute_set_union(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion>())
{
    attribute_set_union->parent = this;

    yang_name = "attribute-set"; yang_parent_name = "path-option-entry"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::~AttributeSet()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::has_data() const
{
    return tunnel_attribute_set_name.is_set
	|| tunnel_attribute_set_name_crc32.is_set
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name_crc32.yfilter)
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (tunnel_attribute_set_name_crc32.is_set || is_set(tunnel_attribute_set_name_crc32.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name_crc32.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-union")
    {
        if(attribute_set_union == nullptr)
        {
            attribute_set_union = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion>();
        }
        return attribute_set_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_set_union != nullptr)
    {
        children["attribute-set-union"] = attribute_set_union;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-union" || name == "tunnel-attribute-set-name" || name == "tunnel-attribute-set-name-crc32")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetUnion()
    :
    tunnel_attribute_set_type{YType::enumeration, "tunnel-attribute-set-type"}
    	,
    attribute_set_path_option(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption>())
	,attribute_set_autobackup(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup>())
	,attribute_set_automesh(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh>())
	,attribute_set_xro(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro>())
	,attribute_set_p2mpte(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte>())
	,attribute_set_aps_pp(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp>())
	,attribute_set_p2p_te(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe>())
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::~AttributeSetUnion()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_type.is_set || is_set(tunnel_attribute_set_type.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-path-option")
    {
        if(attribute_set_path_option == nullptr)
        {
            attribute_set_path_option = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption>();
        }
        return attribute_set_path_option;
    }

    if(child_yang_name == "attribute-set-autobackup")
    {
        if(attribute_set_autobackup == nullptr)
        {
            attribute_set_autobackup = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup>();
        }
        return attribute_set_autobackup;
    }

    if(child_yang_name == "attribute-set-automesh")
    {
        if(attribute_set_automesh == nullptr)
        {
            attribute_set_automesh = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh>();
        }
        return attribute_set_automesh;
    }

    if(child_yang_name == "attribute-set-xro")
    {
        if(attribute_set_xro == nullptr)
        {
            attribute_set_xro = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro>();
        }
        return attribute_set_xro;
    }

    if(child_yang_name == "attribute-set-p2mpte")
    {
        if(attribute_set_p2mpte == nullptr)
        {
            attribute_set_p2mpte = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte>();
        }
        return attribute_set_p2mpte;
    }

    if(child_yang_name == "attribute-set-aps-pp")
    {
        if(attribute_set_aps_pp == nullptr)
        {
            attribute_set_aps_pp = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp>();
        }
        return attribute_set_aps_pp;
    }

    if(child_yang_name == "attribute-set-p2p-te")
    {
        if(attribute_set_p2p_te == nullptr)
        {
            attribute_set_p2p_te = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe>();
        }
        return attribute_set_p2p_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::get_children() const
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type = value;
        tunnel_attribute_set_type.value_namespace = name_space;
        tunnel_attribute_set_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-path-option" || name == "attribute-set-autobackup" || name == "attribute-set-automesh" || name == "attribute-set-xro" || name == "attribute-set-p2mpte" || name == "attribute-set-aps-pp" || name == "attribute-set-p2p-te" || name == "tunnel-attribute-set-type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::AttributeSetPathOption()
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
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>())
	,bfd_reverse_path(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>())
{
    affinity->parent = this;
    bfd_reverse_path->parent = this;

    yang_name = "attribute-set-path-option"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::~AttributeSetPathOption()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-path-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path == nullptr)
        {
            bfd_reverse_path = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo>();
        c->parent = this;
        version_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_children() const
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "bfd-reverse-path" || name == "tunnel-id" || name == "version-info" || name == "configured-bandwidth" || name == "cost-limit" || name == "dste-class-type" || name == "bandwidth-type" || name == "is-bandwidth-configured" || name == "is-cost-limit-configured" || name == "is-affinity-configured" || name == "generation" || name == "path-invalidation-timeout" || name == "path-invalidation-action" || name == "is-path-invalidation-timeout-configured" || name == "is-path-invalidation-action-configured" || name == "exclude-list-name" || name == "is-exclude-list-name-configured" || name == "is-pce-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pce-disj-group-id-configured" || name == "pcedp-source-address" || name == "pcedp-type" || name == "pcedp-group-id" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "pcebd-source-address" || name == "pcebd-group-id" || name == "is-bfd-reverse-pat-configured")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_children() const
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::BfdReversePath()
    :
    path_type{YType::enumeration, "path-type"},
    binding_label{YType::uint32, "binding-label"}
{

    yang_name = "bfd-reverse-path"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::~BfdReversePath()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_data() const
{
    return path_type.is_set
	|| binding_label.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(binding_label.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-type" || name == "binding-label")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::VersionInfo()
    :
    attribute_type{YType::str, "attribute-type"},
    generation{YType::uint32, "generation"},
    is_default{YType::boolean, "is-default"}
{

    yang_name = "version-info"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::~VersionInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_data() const
{
    return attribute_type.is_set
	|| generation.is_set
	|| is_default.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_type.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(is_default.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.yfilter)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.yfilter)) leaf_name_data.push_back(is_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-type" || name == "generation" || name == "is-default")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::AttributeSetAutobackup()
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
    signalled_name(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>())
	,affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>())
	,logging(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>())
{
    signalled_name->parent = this;
    affinity->parent = this;
    logging->parent = this;

    yang_name = "attribute-set-autobackup"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::~AttributeSetAutobackup()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-autobackup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signalled-name")
    {
        if(signalled_name == nullptr)
        {
            signalled_name = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>();
        }
        return signalled_name;
    }

    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface>();
        c->parent = this;
        protected_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_children() const
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signalled-name" || name == "affinity" || name == "logging" || name == "policy-class-entry" || name == "tunnel-id" || name == "protected-interface" || name == "is-signalled-name-configured" || name == "setup-priority" || name == "hold-priority" || name == "is-priority-configured" || name == "policy-class" || name == "is-policyclass-configured" || name == "is-affinity-configured" || name == "record-route")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::SignalledName()
    :
    name{YType::str, "name"},
    source_type{YType::enumeration, "source-type"},
    protected_interface_type{YType::enumeration, "protected-interface-type"},
    is_mp_addresses{YType::boolean, "is-mp-addresses"}
{

    yang_name = "signalled-name"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::~SignalledName()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_data() const
{
    return name.is_set
	|| source_type.is_set
	|| protected_interface_type.is_set
	|| is_mp_addresses.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(source_type.yfilter)
	|| ydk::is_set(protected_interface_type.yfilter)
	|| ydk::is_set(is_mp_addresses.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalled-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (source_type.is_set || is_set(source_type.yfilter)) leaf_name_data.push_back(source_type.get_name_leafdata());
    if (protected_interface_type.is_set || is_set(protected_interface_type.yfilter)) leaf_name_data.push_back(protected_interface_type.get_name_leafdata());
    if (is_mp_addresses.is_set || is_set(is_mp_addresses.yfilter)) leaf_name_data.push_back(is_mp_addresses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "source-type" || name == "protected-interface-type" || name == "is-mp-addresses")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_children() const
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::Logging()
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::~Logging()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-state" || name == "s2l-state" || name == "lsp-re-route" || name == "lsp-re-opt" || name == "lsp-insufficient-bw" || name == "lsp-bandwidth-change" || name == "lsp-pcalc-failure-logging-enabled" || name == "all-logging-enabled")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::PolicyClassEntry()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "policy-class-entry"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::~PolicyClassEntry()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-class-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::ProtectedInterface()
    :
    protected_interface{YType::str, "protected-interface"}
{

    yang_name = "protected-interface"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::~ProtectedInterface()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_data() const
{
    return protected_interface.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protected_interface.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protected_interface.is_set || is_set(protected_interface.yfilter)) leaf_name_data.push_back(protected_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protected-interface")
    {
        protected_interface = value;
        protected_interface.value_namespace = name_space;
        protected_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protected-interface")
    {
        protected_interface.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected-interface")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::AttributeSetAutomesh()
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
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>())
	,logging(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>())
{
    affinity->parent = this;
    logging->parent = this;

    yang_name = "attribute-set-automesh"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::~AttributeSetAutomesh()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-automesh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_children() const
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "policy-class-entry" || name == "mesh-group-id" || name == "tunnel-id" || name == "configured-bandwidth" || name == "dste-class-type" || name == "is-bandwidth-configured" || name == "setup-priority" || name == "hold-priority" || name == "is-priority-configured" || name == "policy-class" || name == "is-policyclass-configured" || name == "forward-class" || name == "is-affinity-configured" || name == "fast-reroute" || name == "frr-node-protection" || name == "frr-bandwidth-protection" || name == "record-route" || name == "auto-bandwidth-collect" || name == "auto-route-announce" || name == "soft-preemption-configured" || name == "bandwidth" || name == "load-share" || name == "is-interface-bw-configured")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_children() const
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::Logging()
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::~Logging()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-state" || name == "s2l-state" || name == "lsp-re-route" || name == "lsp-re-opt" || name == "lsp-insufficient-bw" || name == "lsp-bandwidth-change" || name == "lsp-pcalc-failure-logging-enabled" || name == "all-logging-enabled")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::PolicyClassEntry()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "policy-class-entry"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::~PolicyClassEntry()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-class-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::MeshGroupId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mesh-group-id"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::~MeshGroupId()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::AttributeSetXro()
    :
    xro(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro>())
{
    xro->parent = this;

    yang_name = "attribute-set-xro"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::~AttributeSetXro()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::has_data() const
{
    return (xro !=  nullptr && xro->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::has_operation() const
{
    return is_set(yfilter)
	|| (xro !=  nullptr && xro->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-xro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro")
    {
        if(xro == nullptr)
        {
            xro = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro>();
        }
        return xro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xro != nullptr)
    {
        children["xro"] = xro;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::Xro()
    :
    mutual_diversity_flag{YType::boolean, "mutual-diversity-flag"}
{

    yang_name = "xro"; yang_parent_name = "attribute-set-xro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::~Xro()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_data() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_data())
            return true;
    }
    return mutual_diversity_flag.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_operation() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mutual_diversity_flag.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mutual_diversity_flag.is_set || is_set(mutual_diversity_flag.yfilter)) leaf_name_data.push_back(mutual_diversity_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject>();
        c->parent = this;
        xro_subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xro_subobject)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag = value;
        mutual_diversity_flag.value_namespace = name_space;
        mutual_diversity_flag.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro-subobject" || name == "mutual-diversity-flag")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::XroSubobject()
    :
    type{YType::enumeration, "type"}
    	,
    ipv4_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>())
	,ipv6_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>())
	,unnumbered_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>())
	,as_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>())
	,srlg_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>())
	,lsp_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>())
{
    ipv4_subobject->parent = this;
    ipv6_subobject->parent = this;
    unnumbered_subobject->parent = this;
    as_subobject->parent = this;
    srlg_subobject->parent = this;
    lsp_subobject->parent = this;

    yang_name = "xro-subobject"; yang_parent_name = "xro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::~XroSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_data() const
{
    return type.is_set
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_data())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_data())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_data())
	|| (as_subobject !=  nullptr && as_subobject->has_data())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_data())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-subobject")
    {
        if(ipv4_subobject == nullptr)
        {
            ipv4_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>();
        }
        return ipv4_subobject;
    }

    if(child_yang_name == "ipv6-subobject")
    {
        if(ipv6_subobject == nullptr)
        {
            ipv6_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>();
        }
        return ipv6_subobject;
    }

    if(child_yang_name == "unnumbered-subobject")
    {
        if(unnumbered_subobject == nullptr)
        {
            unnumbered_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>();
        }
        return unnumbered_subobject;
    }

    if(child_yang_name == "as-subobject")
    {
        if(as_subobject == nullptr)
        {
            as_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>();
        }
        return as_subobject;
    }

    if(child_yang_name == "srlg-subobject")
    {
        if(srlg_subobject == nullptr)
        {
            srlg_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>();
        }
        return srlg_subobject;
    }

    if(child_yang_name == "lsp-subobject")
    {
        if(lsp_subobject == nullptr)
        {
            lsp_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>();
        }
        return lsp_subobject;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_children() const
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-subobject" || name == "ipv6-subobject" || name == "unnumbered-subobject" || name == "as-subobject" || name == "srlg-subobject" || name == "lsp-subobject" || name == "type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::Ipv4Subobject()
    :
    address{YType::str, "address"},
    prefix_len{YType::uint8, "prefix-len"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "ipv4-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::~Ipv4Subobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_data() const
{
    return address.is_set
	|| prefix_len.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-len" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::Ipv6Subobject()
    :
    address{YType::str, "address"},
    prefix_len{YType::uint8, "prefix-len"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "ipv6-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::~Ipv6Subobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_data() const
{
    return address.is_set
	|| prefix_len.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-len" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::UnnumberedSubobject()
    :
    te_router_id{YType::str, "te-router-id"},
    interface_id{YType::uint32, "interface-id"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "unnumbered-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::~UnnumberedSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_data() const
{
    return te_router_id.is_set
	|| interface_id.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_router_id.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_router_id.is_set || is_set(te_router_id.yfilter)) leaf_name_data.push_back(te_router_id.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-router-id" || name == "interface-id" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::AsSubobject()
    :
    as_number{YType::uint16, "as-number"}
{

    yang_name = "as-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::~AsSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_data() const
{
    return as_number.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::SrlgSubobject()
    :
    srlg_id{YType::uint32, "srlg-id"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "srlg-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::~SrlgSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_data() const
{
    return srlg_id.is_set
	|| exclusion_type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_id.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_id.is_set || is_set(srlg_id.yfilter)) leaf_name_data.push_back(srlg_id.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-id" || name == "exclusion-type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::LspSubobject()
    :
    ignore_lsp_id{YType::boolean, "ignore-lsp-id"},
    processing_node_exception{YType::boolean, "processing-node-exception"},
    penultimate_node_exception{YType::boolean, "penultimate-node-exception"},
    destination_node_exception{YType::boolean, "destination-node-exception"},
    exclusion_type{YType::enumeration, "exclusion-type"}
    	,
    fec(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>())
{
    fec->parent = this;

    yang_name = "lsp-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::~LspSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_data() const
{
    return ignore_lsp_id.is_set
	|| processing_node_exception.is_set
	|| penultimate_node_exception.is_set
	|| destination_node_exception.is_set
	|| exclusion_type.is_set
	|| (fec !=  nullptr && fec->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_lsp_id.yfilter)
	|| ydk::is_set(processing_node_exception.yfilter)
	|| ydk::is_set(penultimate_node_exception.yfilter)
	|| ydk::is_set(destination_node_exception.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| (fec !=  nullptr && fec->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_lsp_id.is_set || is_set(ignore_lsp_id.yfilter)) leaf_name_data.push_back(ignore_lsp_id.get_name_leafdata());
    if (processing_node_exception.is_set || is_set(processing_node_exception.yfilter)) leaf_name_data.push_back(processing_node_exception.get_name_leafdata());
    if (penultimate_node_exception.is_set || is_set(penultimate_node_exception.yfilter)) leaf_name_data.push_back(penultimate_node_exception.get_name_leafdata());
    if (destination_node_exception.is_set || is_set(destination_node_exception.yfilter)) leaf_name_data.push_back(destination_node_exception.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec")
    {
        if(fec == nullptr)
        {
            fec = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>();
        }
        return fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec != nullptr)
    {
        children["fec"] = fec;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec" || name == "ignore-lsp-id" || name == "processing-node-exception" || name == "penultimate-node-exception" || name == "destination-node-exception" || name == "exclusion-type")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::Fec()
    :
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "fec"; yang_parent_name = "lsp-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::~Fec()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_data() const
{
    return fec_lsp_id.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-lsp-id" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-vrf")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "fec"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| p2p_lsp_destination.is_set
	|| fec_destination_p2mp_id.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "p2p-lsp-destination" || name == "fec-destination-p2mp-id")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::AttributeSetP2Mpte()
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
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>())
{
    affinity->parent = this;

    yang_name = "attribute-set-p2mpte"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::~AttributeSetP2Mpte()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2mpte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_children() const
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "tunnel-id" || name == "fast-reroute" || name == "frr-bandwidth-protection" || name == "setup-priority" || name == "hold-priority" || name == "is-priority-configured" || name == "configured-bandwidth" || name == "dste-class-type" || name == "is-bandwidth-configured" || name == "is-affinity-configured")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-p2mpte"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_children() const
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-p2mpte"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp::AttributeSetApsPp()
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
    revert_schedule(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>())
{
    revert_schedule->parent = this;

    yang_name = "attribute-set-aps-pp"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp::~AttributeSetApsPp()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-aps-pp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "revert-schedule")
    {
        if(revert_schedule == nullptr)
        {
            revert_schedule = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>();
        }
        return revert_schedule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(revert_schedule != nullptr)
    {
        children["revert-schedule"] = revert_schedule;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "revert-schedule" || name == "snc-mode" || name == "tcm-id" || name == "protection-type" || name == "protection-mode" || name == "wait-to-restore-time" || name == "hold-off-time" || name == "path-prot-profile-type" || name == "restoration-style")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::RevertSchedule()
    :
    schedulename{YType::str, "schedulename"},
    schedule_date{YType::uint32, "schedule-date"},
    schedule_frequency{YType::enumeration, "schedule-frequency"},
    duration{YType::uint32, "duration"},
    max_tries{YType::uint32, "max-tries"}
{

    yang_name = "revert-schedule"; yang_parent_name = "attribute-set-aps-pp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::~RevertSchedule()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_data() const
{
    return schedulename.is_set
	|| schedule_date.is_set
	|| schedule_frequency.is_set
	|| duration.is_set
	|| max_tries.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(schedulename.yfilter)
	|| ydk::is_set(schedule_date.yfilter)
	|| ydk::is_set(schedule_frequency.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(max_tries.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schedulename.is_set || is_set(schedulename.yfilter)) leaf_name_data.push_back(schedulename.get_name_leafdata());
    if (schedule_date.is_set || is_set(schedule_date.yfilter)) leaf_name_data.push_back(schedule_date.get_name_leafdata());
    if (schedule_frequency.is_set || is_set(schedule_frequency.yfilter)) leaf_name_data.push_back(schedule_frequency.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (max_tries.is_set || is_set(max_tries.yfilter)) leaf_name_data.push_back(max_tries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedulename" || name == "schedule-date" || name == "schedule-frequency" || name == "duration" || name == "max-tries")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::AttributeSetP2PTe()
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
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>())
	,logging(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>())
	,prepend_list(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>())
{
    affinity->parent = this;
    logging->parent = this;
    prepend_list->parent = this;

    yang_name = "attribute-set-p2p-te"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::~AttributeSetP2PTe()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2p-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "prepend-list")
    {
        if(prepend_list == nullptr)
        {
            prepend_list = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_children() const
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "prepend-list" || name == "tunnel-id" || name == "is-affinity-configured" || name == "path-selection-segment-routing-adjacency-protection" || name == "is-path-selection-segment-routing-adjacency-protection-configured" || name == "path-invalidation-timeout" || name == "path-selection-invalidation-action" || name == "is-path-invalidation-timeout-configured" || name == "is-path-invalidation-action-configured" || name == "path-selection-metric" || name == "is-path-selection-metric-configured" || name == "path-selection-segment-routing-margin" || name == "is-path-selection-segment-routing-margin-relative" || name == "is-path-selection-segment-routing-margin-configured" || name == "path-selection-segment-routing-segment-limit" || name == "is-path-selection-segment-routing-segment-limit-configured" || name == "is-path-select-configured" || name == "is-prepend-list-configured" || name == "is-pce-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pce-disj-group-id-configured" || name == "pcedp-source-address" || name == "pcedp-type" || name == "pcedp-group-id" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "pcebd-source-address" || name == "pcebd-group-id")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue>();
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_children() const
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::Logging()
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

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::~Logging()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_data() const
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_operation() const
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

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-state" || name == "s2l-state" || name == "lsp-re-route" || name == "lsp-re-opt" || name == "lsp-insufficient-bw" || name == "lsp-bandwidth-change" || name == "lsp-pcalc-failure-logging-enabled" || name == "all-logging-enabled")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependList()
{

    yang_name = "prepend-list"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::~PrependList()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_data() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_operation() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry>();
        c->parent = this;
        prepend_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prepend_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepend-entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::PrependEntry()
    :
    type{YType::enumeration, "type"},
    index_{YType::uint32, "index"},
    next_label{YType::uint32, "next-label"}
{

    yang_name = "prepend-entry"; yang_parent_name = "prepend-list"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::~PrependEntry()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_data() const
{
    return type.is_set
	|| index_.is_set
	|| next_label.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(next_label.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (next_label.is_set || is_set(next_label.yfilter)) leaf_name_data.push_back(next_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "index" || name == "next-label")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::XroAttributeSet::XroAttributeSet()
    :
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_attribute_set_name_crc32{YType::uint32, "tunnel-attribute-set-name-crc32"}
    	,
    attribute_set_union(std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::XroAttributeSet::AttributeSetUnion>())
{
    attribute_set_union->parent = this;

    yang_name = "xro-attribute-set"; yang_parent_name = "path-option-entry"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::XroAttributeSet::~XroAttributeSet()
{
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::XroAttributeSet::has_data() const
{
    return tunnel_attribute_set_name.is_set
	|| tunnel_attribute_set_name_crc32.is_set
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::XroAttributeSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name_crc32.yfilter)
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::XroAttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-attribute-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::XroAttributeSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (tunnel_attribute_set_name_crc32.is_set || is_set(tunnel_attribute_set_name_crc32.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name_crc32.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::XroAttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-union")
    {
        if(attribute_set_union == nullptr)
        {
            attribute_set_union = std::make_shared<MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::XroAttributeSet::AttributeSetUnion>();
        }
        return attribute_set_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::XroAttributeSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_set_union != nullptr)
    {
        children["attribute-set-union"] = attribute_set_union;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::XroAttributeSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::XroAttributeSet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::XroAttributeSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-union" || name == "tunnel-attribute-set-name" || name == "tunnel-attribute-set-name-crc32")
        return true;
    return false;
}


}
}

